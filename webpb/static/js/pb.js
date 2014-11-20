function dis_pagelist(items,itemsOnPage,currentPage) {
	$('#query_id_test_page_list').pagination({
		items: items,
		itemsOnPage: itemsOnPage,
		cssStyle: 'light-theme',
		currentPage: currentPage,
		onPageClick: pageselectCallback
	});
}
function dis_pagelist_proto(items,itemsOnPage,currentPage) {
	$('#query_id_test_page_list').pagination({
		items: items,
		itemsOnPage: itemsOnPage,
		cssStyle: 'light-theme',
		currentPage: currentPage,
		onPageClick: pageselectCallback_proto
	});
}
function query_testdata(page,datatype) {
	var limit=5;
	var offset=(page-1)*5;
	var belong=document.getElementById("id_user_name").innerHTML;
	var retdata;
	$.ajax({
		type: "post",//使用post方法访问后台
		dataType: "json",//返回json格式的数据
		url: "/pb/query_testdata/",//要访问的后台地址
		contentType: "application/json; charset=utf-8",
		cache: false,
		async: false,
		data: {limit:limit,offset:offset,belong:belong,datatype:datatype},//要发送的数据
		//start : function(){},
		//complete :function(){$("#load").hide();},//AJAX请求完成时隐藏loading提示
		success: function(data){//msg为返回的数据，在这里做数据绑定
			retdata=data;
		}
	});
	return retdata;
}
function dis_datalist(retdata,datatype) {
	datalist=retdata.ret_dict;
	var len=datalist.length;
	if (len == 0){
		document.getElementById("id_datalist").innerHTML = "";
		var t="";
		if (datatype != -1) {
			t+="<td>&nbsp;</td><td>&nbsp;</td>";
			t+="<td style='text-align:center;font-size:16px;'>您还没添加测试数据，<br/><a href='/pb/conf/?conftype=adddata'><b>立即添加</b></a></td>";
			t+="<td>&nbsp;</td>";
		} else {
			t+="<td>&nbsp;</td><td>&nbsp;</td><td>&nbsp;</td>";
			t+="<td style='text-align:center;font-size:16px;'>您还没添加测试数据，<br/><a href='/pb/conf/?conftype=adddata'><b>立即添加</b></a></td>";
			t+="<td>&nbsp;</td><td>&nbsp;</td><td>&nbsp;</td>";
		}
		$("#id_datalist").append(t);
	} else {
		if (datatype == -1) {
			var t="";
			$.each(datalist, function(i,n){
				t+="<tr><td>";
				t+=n.id;
				t+="</td><td>";
				t+=n.name;
				t+="</td><td>";
				t+=n.type;
				t+="</td><td>";
				t+=n.belong;
				t+="</td><td>";
				t+=n.filenum;
				t+="</td><td>";
				t+=n.descpt;
				t+="</td><td class='i-operate'><a href='javascript:list_testdata("+n.id+");' title='查看'>查看</a><a href='javascript:del_testdata("+n.id+");' title='删除'>删除</a></td>";
			});
			document.getElementById("id_datalist").innerHTML = "";
			$("#id_datalist").append(t);
		} else{
			var t="";
			$.each(datalist, function(i,n){
				t+="<tr><td  style='padding-top:2px;padding-bottom:2px;'>";
				if (i == 0) {
					t+="<input type='radio' name='testdata' checked='checked' value=";
				} else {
					t+="<input type='radio' name='testdata' value=";
				}
				t+=n.id;
				t+=" />";
				t+="</td><td>";
				t+=n.id;
				t+="</td><td>";
				t+=n.name;
				t+="</td><td>";
				t+=n.descpt;
				t+="</td></tr>";
			});
			document.getElementById("id_datalist").innerHTML = "";
			$("#id_datalist").append(t);
		}
	}
}
function pageselectCallback_proto (page, jq) {
	var retdata=query_testdata(page,0);
	dis_datalist(retdata,0);
	dis_pagelist(retdata.data_totalcnt,5,page);
}
function pageselectCallback (page, jq) {
	var retdata=query_testdata(page,-1);
	dis_datalist(retdata,-1);
	dis_pagelist(retdata.data_totalcnt,5,page);
}
function del_testdata(id) {
	$.ajax({
		type: "post",//使用post方法访问后台
		dataType: "json",//返回json格式的数据
		url: "/pb/del_testdata/",//要访问的后台地址
		contentType: "application/json; charset=utf-8",
		cache: false,
		async: false,
		data: {id:id},//要发送的数据
		//start : function(){},
		//complete :function(){$("#load").hide();},//AJAX请求完成时隐藏loading提示
		success: function(data){//msg为返回的数据，在这里做数据绑定
			if (data.errcoden == 1 && data.errcodem >= 1) {
				//show_message('删除成功',0.5,'消息提示');
				MessageBox('warning', '删除成功');
				var retdata=query_testdata(1,-1);
				dis_datalist(retdata,-1);
				dis_pagelist(retdata.server_totalcnt,5,1);
			} else {
				MessageBox('warning', '删除失败');
			}
		}
	});
}
function list_testdata(id){
	MessageBox('warning', '还未实现');
}

function handle_select() {
	var toottype = document.getElementById('id_tooltype').selectedIndex;
	if (toottype == 1 || toottype == 3) {
		//dis test data table and page list
		var retdata=query_testdata(1,0);
		dis_datalist(retdata,0);
		dis_pagelist(retdata.data_totalcnt,5,1);
		document.getElementById('query_id_test_page_list').style.visibility = "visible"; 
		//dis table
		document.getElementById('id_proto_testdata').style.visibility = "visible"; 
	} else {
		document.getElementById('id_proto_testdata').style.visibility = "hidden"; 
		document.getElementById('query_id_test_page_list').style.visibility = "hidden"; 
	}
}


/////////////////task
function dis_pagelist_task(items,itemsOnPage,currentPage) {
	$('#query_id_task_page_list').pagination({
		items: items,
		itemsOnPage: itemsOnPage,
		cssStyle: 'light-theme',
		currentPage: currentPage,
		onPageClick: pageselectCallback_task
	});
}

function query_task(page) {
	var limit=5;
	var offset=(page-1)*5;
	var belong=document.getElementById("id_user_name").innerHTML;
	var retdata;
	$.ajax({
		type: "post",//使用post方法访问后台
		dataType: "json",//返回json格式的数据
		url: "/query_task/",//要访问的后台地址
		contentType: "application/json; charset=utf-8",
		cache: false,
		async: false,
		data: {limit:limit,offset:offset,belong:belong},//要发送的数据
		//start : function(){},
		//complete :function(){$("#load").hide();},//AJAX请求完成时隐藏loading提示
		success: function(data){//msg为返回的数据，在这里做数据绑定
			retdata=data;
		}
	});
	return retdata;
}

function dis_tasklist(retdata) {
	serverlist=retdata.ret_dict;
	var len=serverlist.length;
	if (len == 0){
		document.getElementById("id_tasklist").innerHTML = "";
		var t="";
		t+="<td>&nbsp;</td><td>&nbsp;</td><td>&nbsp;</td>";
		t+="<td style='text-align:center;font-size:16px;'>您还没创建任务，<br/><a href='javascript:addtask();'><b>立即创建</b></a></td>";
		t+="<td>&nbsp;</td><td>&nbsp;</td><td>&nbsp;</td>";
		$("#id_tasklist").append(t);
	} else {
		var t="";
		$.each(serverlist, function(i,n){
				t+="<tr><td>";
				t+="<a style='text-decoration: underline;' href='javascript:jobstatus(\"";
				t+=n.id;
				t+="\")'";
				t+="'>";
				t+=n.id;
				t+="</a>";
				t+="</td><td>";
				t+=n.submit;
				t+="</td><td>";
				//t+=n.jenkinsurl;
				t+="PublicCluster";
				t+="</td><td>";
				t+=n.jobname;
				t+="</td><td>";
				//t+=n.build_params;
				t+="*****";
				t+="</td><td>";
				if (n.status == "1") {
					t+="<img src='/static/r_loading.gif' title='等待中' />";
				} else if (n.status == "2") {
					t+="<img src='/static/r_running.gif' title='运行中' /> &nbsp;|&nbsp;&nbsp;<a href='/jobstop/?job=";
					t+=n.id;
					t+="'><img src='/static/r_fail.png' title='中止' /></a>";
				} else if (n.status == "3") {
					t+="<img src='/static/r_success.png' title='成功' />";
				} else if (n.status == "4") {
					t+="<img src='/static/r_fail.png' title='失败' />";
				} else if (n.status == "5") {
					t+="<img src='/static/r_exception.png' title='中止' />";
				}
				//t+=n.status;
				t+="</td>";
		});
		document.getElementById("id_tasklist").innerHTML = "";
		$("#id_tasklist").append(t);
	}
}

function pageselectCallback_task (page) {
	var retdata=query_task(page);
	dis_tasklist(retdata);
	dis_pagelist_task(retdata.task_totalcnt,5,page);
}

function jobstatus(jobid) {
	window.location.href = "/jobstatus/?job="+jobid;
	//alert(jobid);
	/*$.ajax({
		type: "get",//使用post方法访问后台
		dataType: "json",//返回json格式的数据
		url: "/jobstatus/?job="+jobid,	//要访问的后台地址
		contentType: "application/json; charset=utf-8",
		cache: false,
		async: false,
		//data: {limit:limit,offset:offset,belong:belong},//要发送的数据
		//start : function(){},
		//complete :function(){$("#load").hide();},//AJAX请求完成时隐藏loading提示
		success: function(data){//msg为返回的数据，在这里做数据绑定
			alert("详细日志信息");
		}
	});*/
}

