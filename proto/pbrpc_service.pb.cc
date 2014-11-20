// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "pbrpc_service.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace lbs {
namespace da {
namespace openservice {

namespace {

const ::google::protobuf::ServiceDescriptor* UserService_descriptor_ = NULL;
const ::google::protobuf::ServiceDescriptor* ItemService_descriptor_ = NULL;
const ::google::protobuf::ServiceDescriptor* DynamicPlanService_descriptor_ = NULL;
const ::google::protobuf::ServiceDescriptor* LvPlanService_descriptor_ = NULL;
const ::google::protobuf::ServiceDescriptor* PushService_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_pbrpc_5fservice_2eproto() {
  protobuf_AddDesc_pbrpc_5fservice_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "pbrpc_service.proto");
  GOOGLE_CHECK(file != NULL);
  UserService_descriptor_ = file->service(0);
  ItemService_descriptor_ = file->service(1);
  DynamicPlanService_descriptor_ = file->service(2);
  LvPlanService_descriptor_ = file->service(3);
  PushService_descriptor_ = file->service(4);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_pbrpc_5fservice_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_pbrpc_5fservice_2eproto() {
}

void protobuf_AddDesc_pbrpc_5fservice_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::lbs::da::openservice::protobuf_AddDesc_pbrpc_2eproto();
  ::lbs::da::openservice::protobuf_AddDesc_regist_5fcondition_2eproto();
  ::lbs::da::openservice::protobuf_AddDesc_rp_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023pbrpc_service.proto\022\022lbs.da.openservic"
    "e\032\013pbrpc.proto\032\026regist_condition.proto\032\010"
    "rp.proto2\223\t\n\013UserService\022p\n\021GetUserPrefe"
    "rence\022,.lbs.da.openservice.GetUserPrefer"
    "enceRequest\032-.lbs.da.openservice.GetUser"
    "PreferenceResponse\022z\n\027GetUserRegularStay"
    "Point\022..lbs.da.openservice.GetRegularSta"
    "yPointRequest\032/.lbs.da.openservice.GetRe"
    "gularStayPointResponse\022v\n\027GetLatestUserT"
    "rajStatus\022,.lbs.da.openservice.GetLatest"
    "UserTrajRequest\032-.lbs.da.openservice.Get"
    "LatestUserTrajResponse\022k\n\024GetPlaceSemant"
    "icInfo\022(.lbs.da.openservice.PlaceSemanti"
    "cRequest\032).lbs.da.openservice.PlaceSeman"
    "ticResponse\022y\n\026GetNuomiUserPreference\022.."
    "lbs.da.openservice.NuomiUserPreferenceRe"
    "quest\032/.lbs.da.openservice.NuomiUserPref"
    "erenceResponse\022Y\n\020GetAOIByLocation\022!.lbs"
    ".da.openservice.GetAOIRequest\032\".lbs.da.o"
    "penservice.GetAOIResponse\022_\n\016GetNearPoiI"
    "nfo\022%.lbs.da.openservice.GetNearPoiReque"
    "st\032&.lbs.da.openservice.GetNearPoiRespon"
    "se\022c\n\016GetBuy2BuyInfo\022\'.lbs.da.openservic"
    "e.NuomiBuy2BuyRequest\032(.lbs.da.openservi"
    "ce.NuomiBuy2BuyResponse\022U\n\010POIMatch\022#.lb"
    "s.da.openservice.POIMatchRequest\032$.lbs.d"
    "a.openservice.POIMatchResponse\022f\n\017GetSee"
    "ToSeeInfo\022(.lbs.da.openservice.NuomiSeeT"
    "oSeeRequest\032).lbs.da.openservice.NuomiSe"
    "eToSeeResponse\022V\n\tRPRequest\022#.lbs.da.ope"
    "nservice.RPCommonRequest\032$.lbs.da.opense"
    "rvice.RPCommonResponse2\331\001\n\013ItemService\022g"
    "\n\016GetItemsByItem\022).lbs.da.openservice.Ge"
    "tItemsByItemRequest\032*.lbs.da.openservice"
    ".GetItemsByItemResponse\022a\n\020GetBNItemsByI"
    "tem\022%.lbs.da.openservice.GetBNItemsReque"
    "st\032&.lbs.da.openservice.GetBNItemsRespon"
    "se2\203\001\n\022DynamicPlanService\022m\n\022GetDynamicT"
    "ripPlan\022*.lbs.da.openservice.DynamicTrip"
    "PlanRequest\032+.lbs.da.openservice.Dynamic"
    "TripPlanResponse2o\n\rLvPlanService\022^\n\rGet"
    "LvTripPlan\022%.lbs.da.openservice.LvTripPl"
    "anRequest\032&.lbs.da.openservice.LvTripPla"
    "nResponse2\326\001\n\013PushService\022j\n\017RegistCondi"
    "tion\022*.lbs.da.openservice.RegistConditio"
    "nRequest\032+.lbs.da.openservice.RegistCond"
    "itionResponse\022[\n\nSetTrigger\022%.lbs.da.ope"
    "nservice.SetTriggerRequest\032&.lbs.da.open"
    "service.SetTriggerResponseB\003\200\001\001", 1951);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "pbrpc_service.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_pbrpc_5fservice_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_pbrpc_5fservice_2eproto {
  StaticDescriptorInitializer_pbrpc_5fservice_2eproto() {
    protobuf_AddDesc_pbrpc_5fservice_2eproto();
  }
} static_descriptor_initializer_pbrpc_5fservice_2eproto_;


// ===================================================================

UserService::~UserService() {}

const ::google::protobuf::ServiceDescriptor* UserService::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserService_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* UserService::GetDescriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserService_descriptor_;
}

void UserService::GetUserPreference(::google::protobuf::RpcController* controller,
                         const ::lbs::da::openservice::GetUserPreferenceRequest*,
                         ::lbs::da::openservice::GetUserPreferenceResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method GetUserPreference() not implemented.");
  done->Run();
}

void UserService::GetUserRegularStayPoint(::google::protobuf::RpcController* controller,
                         const ::lbs::da::openservice::GetRegularStayPointRequest*,
                         ::lbs::da::openservice::GetRegularStayPointResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method GetUserRegularStayPoint() not implemented.");
  done->Run();
}

void UserService::GetLatestUserTrajStatus(::google::protobuf::RpcController* controller,
                         const ::lbs::da::openservice::GetLatestUserTrajRequest*,
                         ::lbs::da::openservice::GetLatestUserTrajResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method GetLatestUserTrajStatus() not implemented.");
  done->Run();
}

void UserService::GetPlaceSemanticInfo(::google::protobuf::RpcController* controller,
                         const ::lbs::da::openservice::PlaceSemanticRequest*,
                         ::lbs::da::openservice::PlaceSemanticResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method GetPlaceSemanticInfo() not implemented.");
  done->Run();
}

void UserService::GetNuomiUserPreference(::google::protobuf::RpcController* controller,
                         const ::lbs::da::openservice::NuomiUserPreferenceRequest*,
                         ::lbs::da::openservice::NuomiUserPreferenceResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method GetNuomiUserPreference() not implemented.");
  done->Run();
}

void UserService::GetAOIByLocation(::google::protobuf::RpcController* controller,
                         const ::lbs::da::openservice::GetAOIRequest*,
                         ::lbs::da::openservice::GetAOIResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method GetAOIByLocation() not implemented.");
  done->Run();
}

void UserService::GetNearPoiInfo(::google::protobuf::RpcController* controller,
                         const ::lbs::da::openservice::GetNearPoiRequest*,
                         ::lbs::da::openservice::GetNearPoiResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method GetNearPoiInfo() not implemented.");
  done->Run();
}

void UserService::GetBuy2BuyInfo(::google::protobuf::RpcController* controller,
                         const ::lbs::da::openservice::NuomiBuy2BuyRequest*,
                         ::lbs::da::openservice::NuomiBuy2BuyResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method GetBuy2BuyInfo() not implemented.");
  done->Run();
}

void UserService::POIMatch(::google::protobuf::RpcController* controller,
                         const ::lbs::da::openservice::POIMatchRequest*,
                         ::lbs::da::openservice::POIMatchResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method POIMatch() not implemented.");
  done->Run();
}

void UserService::GetSeeToSeeInfo(::google::protobuf::RpcController* controller,
                         const ::lbs::da::openservice::NuomiSeeToSeeRequest*,
                         ::lbs::da::openservice::NuomiSeeToSeeResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method GetSeeToSeeInfo() not implemented.");
  done->Run();
}

void UserService::RPRequest(::google::protobuf::RpcController* controller,
                         const ::lbs::da::openservice::RPCommonRequest*,
                         ::lbs::da::openservice::RPCommonResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method RPRequest() not implemented.");
  done->Run();
}

void UserService::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), UserService_descriptor_);
  switch(method->index()) {
    case 0:
      GetUserPreference(controller,
             ::google::protobuf::down_cast<const ::lbs::da::openservice::GetUserPreferenceRequest*>(request),
             ::google::protobuf::down_cast< ::lbs::da::openservice::GetUserPreferenceResponse*>(response),
             done);
      break;
    case 1:
      GetUserRegularStayPoint(controller,
             ::google::protobuf::down_cast<const ::lbs::da::openservice::GetRegularStayPointRequest*>(request),
             ::google::protobuf::down_cast< ::lbs::da::openservice::GetRegularStayPointResponse*>(response),
             done);
      break;
    case 2:
      GetLatestUserTrajStatus(controller,
             ::google::protobuf::down_cast<const ::lbs::da::openservice::GetLatestUserTrajRequest*>(request),
             ::google::protobuf::down_cast< ::lbs::da::openservice::GetLatestUserTrajResponse*>(response),
             done);
      break;
    case 3:
      GetPlaceSemanticInfo(controller,
             ::google::protobuf::down_cast<const ::lbs::da::openservice::PlaceSemanticRequest*>(request),
             ::google::protobuf::down_cast< ::lbs::da::openservice::PlaceSemanticResponse*>(response),
             done);
      break;
    case 4:
      GetNuomiUserPreference(controller,
             ::google::protobuf::down_cast<const ::lbs::da::openservice::NuomiUserPreferenceRequest*>(request),
             ::google::protobuf::down_cast< ::lbs::da::openservice::NuomiUserPreferenceResponse*>(response),
             done);
      break;
    case 5:
      GetAOIByLocation(controller,
             ::google::protobuf::down_cast<const ::lbs::da::openservice::GetAOIRequest*>(request),
             ::google::protobuf::down_cast< ::lbs::da::openservice::GetAOIResponse*>(response),
             done);
      break;
    case 6:
      GetNearPoiInfo(controller,
             ::google::protobuf::down_cast<const ::lbs::da::openservice::GetNearPoiRequest*>(request),
             ::google::protobuf::down_cast< ::lbs::da::openservice::GetNearPoiResponse*>(response),
             done);
      break;
    case 7:
      GetBuy2BuyInfo(controller,
             ::google::protobuf::down_cast<const ::lbs::da::openservice::NuomiBuy2BuyRequest*>(request),
             ::google::protobuf::down_cast< ::lbs::da::openservice::NuomiBuy2BuyResponse*>(response),
             done);
      break;
    case 8:
      POIMatch(controller,
             ::google::protobuf::down_cast<const ::lbs::da::openservice::POIMatchRequest*>(request),
             ::google::protobuf::down_cast< ::lbs::da::openservice::POIMatchResponse*>(response),
             done);
      break;
    case 9:
      GetSeeToSeeInfo(controller,
             ::google::protobuf::down_cast<const ::lbs::da::openservice::NuomiSeeToSeeRequest*>(request),
             ::google::protobuf::down_cast< ::lbs::da::openservice::NuomiSeeToSeeResponse*>(response),
             done);
      break;
    case 10:
      RPRequest(controller,
             ::google::protobuf::down_cast<const ::lbs::da::openservice::RPCommonRequest*>(request),
             ::google::protobuf::down_cast< ::lbs::da::openservice::RPCommonResponse*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& UserService::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::lbs::da::openservice::GetUserPreferenceRequest::default_instance();
    case 1:
      return ::lbs::da::openservice::GetRegularStayPointRequest::default_instance();
    case 2:
      return ::lbs::da::openservice::GetLatestUserTrajRequest::default_instance();
    case 3:
      return ::lbs::da::openservice::PlaceSemanticRequest::default_instance();
    case 4:
      return ::lbs::da::openservice::NuomiUserPreferenceRequest::default_instance();
    case 5:
      return ::lbs::da::openservice::GetAOIRequest::default_instance();
    case 6:
      return ::lbs::da::openservice::GetNearPoiRequest::default_instance();
    case 7:
      return ::lbs::da::openservice::NuomiBuy2BuyRequest::default_instance();
    case 8:
      return ::lbs::da::openservice::POIMatchRequest::default_instance();
    case 9:
      return ::lbs::da::openservice::NuomiSeeToSeeRequest::default_instance();
    case 10:
      return ::lbs::da::openservice::RPCommonRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

const ::google::protobuf::Message& UserService::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::lbs::da::openservice::GetUserPreferenceResponse::default_instance();
    case 1:
      return ::lbs::da::openservice::GetRegularStayPointResponse::default_instance();
    case 2:
      return ::lbs::da::openservice::GetLatestUserTrajResponse::default_instance();
    case 3:
      return ::lbs::da::openservice::PlaceSemanticResponse::default_instance();
    case 4:
      return ::lbs::da::openservice::NuomiUserPreferenceResponse::default_instance();
    case 5:
      return ::lbs::da::openservice::GetAOIResponse::default_instance();
    case 6:
      return ::lbs::da::openservice::GetNearPoiResponse::default_instance();
    case 7:
      return ::lbs::da::openservice::NuomiBuy2BuyResponse::default_instance();
    case 8:
      return ::lbs::da::openservice::POIMatchResponse::default_instance();
    case 9:
      return ::lbs::da::openservice::NuomiSeeToSeeResponse::default_instance();
    case 10:
      return ::lbs::da::openservice::RPCommonResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

UserService_Stub::UserService_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
UserService_Stub::UserService_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
UserService_Stub::~UserService_Stub() {
  if (owns_channel_) delete channel_;
}

void UserService_Stub::GetUserPreference(::google::protobuf::RpcController* controller,
                              const ::lbs::da::openservice::GetUserPreferenceRequest* request,
                              ::lbs::da::openservice::GetUserPreferenceResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}
void UserService_Stub::GetUserRegularStayPoint(::google::protobuf::RpcController* controller,
                              const ::lbs::da::openservice::GetRegularStayPointRequest* request,
                              ::lbs::da::openservice::GetRegularStayPointResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(1),
                       controller, request, response, done);
}
void UserService_Stub::GetLatestUserTrajStatus(::google::protobuf::RpcController* controller,
                              const ::lbs::da::openservice::GetLatestUserTrajRequest* request,
                              ::lbs::da::openservice::GetLatestUserTrajResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(2),
                       controller, request, response, done);
}
void UserService_Stub::GetPlaceSemanticInfo(::google::protobuf::RpcController* controller,
                              const ::lbs::da::openservice::PlaceSemanticRequest* request,
                              ::lbs::da::openservice::PlaceSemanticResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(3),
                       controller, request, response, done);
}
void UserService_Stub::GetNuomiUserPreference(::google::protobuf::RpcController* controller,
                              const ::lbs::da::openservice::NuomiUserPreferenceRequest* request,
                              ::lbs::da::openservice::NuomiUserPreferenceResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(4),
                       controller, request, response, done);
}
void UserService_Stub::GetAOIByLocation(::google::protobuf::RpcController* controller,
                              const ::lbs::da::openservice::GetAOIRequest* request,
                              ::lbs::da::openservice::GetAOIResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(5),
                       controller, request, response, done);
}
void UserService_Stub::GetNearPoiInfo(::google::protobuf::RpcController* controller,
                              const ::lbs::da::openservice::GetNearPoiRequest* request,
                              ::lbs::da::openservice::GetNearPoiResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(6),
                       controller, request, response, done);
}
void UserService_Stub::GetBuy2BuyInfo(::google::protobuf::RpcController* controller,
                              const ::lbs::da::openservice::NuomiBuy2BuyRequest* request,
                              ::lbs::da::openservice::NuomiBuy2BuyResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(7),
                       controller, request, response, done);
}
void UserService_Stub::POIMatch(::google::protobuf::RpcController* controller,
                              const ::lbs::da::openservice::POIMatchRequest* request,
                              ::lbs::da::openservice::POIMatchResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(8),
                       controller, request, response, done);
}
void UserService_Stub::GetSeeToSeeInfo(::google::protobuf::RpcController* controller,
                              const ::lbs::da::openservice::NuomiSeeToSeeRequest* request,
                              ::lbs::da::openservice::NuomiSeeToSeeResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(9),
                       controller, request, response, done);
}
void UserService_Stub::RPRequest(::google::protobuf::RpcController* controller,
                              const ::lbs::da::openservice::RPCommonRequest* request,
                              ::lbs::da::openservice::RPCommonResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(10),
                       controller, request, response, done);
}
// ===================================================================

ItemService::~ItemService() {}

const ::google::protobuf::ServiceDescriptor* ItemService::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ItemService_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* ItemService::GetDescriptor() {
  protobuf_AssignDescriptorsOnce();
  return ItemService_descriptor_;
}

void ItemService::GetItemsByItem(::google::protobuf::RpcController* controller,
                         const ::lbs::da::openservice::GetItemsByItemRequest*,
                         ::lbs::da::openservice::GetItemsByItemResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method GetItemsByItem() not implemented.");
  done->Run();
}

void ItemService::GetBNItemsByItem(::google::protobuf::RpcController* controller,
                         const ::lbs::da::openservice::GetBNItemsRequest*,
                         ::lbs::da::openservice::GetBNItemsResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method GetBNItemsByItem() not implemented.");
  done->Run();
}

void ItemService::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), ItemService_descriptor_);
  switch(method->index()) {
    case 0:
      GetItemsByItem(controller,
             ::google::protobuf::down_cast<const ::lbs::da::openservice::GetItemsByItemRequest*>(request),
             ::google::protobuf::down_cast< ::lbs::da::openservice::GetItemsByItemResponse*>(response),
             done);
      break;
    case 1:
      GetBNItemsByItem(controller,
             ::google::protobuf::down_cast<const ::lbs::da::openservice::GetBNItemsRequest*>(request),
             ::google::protobuf::down_cast< ::lbs::da::openservice::GetBNItemsResponse*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& ItemService::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::lbs::da::openservice::GetItemsByItemRequest::default_instance();
    case 1:
      return ::lbs::da::openservice::GetBNItemsRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

const ::google::protobuf::Message& ItemService::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::lbs::da::openservice::GetItemsByItemResponse::default_instance();
    case 1:
      return ::lbs::da::openservice::GetBNItemsResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

ItemService_Stub::ItemService_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
ItemService_Stub::ItemService_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
ItemService_Stub::~ItemService_Stub() {
  if (owns_channel_) delete channel_;
}

void ItemService_Stub::GetItemsByItem(::google::protobuf::RpcController* controller,
                              const ::lbs::da::openservice::GetItemsByItemRequest* request,
                              ::lbs::da::openservice::GetItemsByItemResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}
void ItemService_Stub::GetBNItemsByItem(::google::protobuf::RpcController* controller,
                              const ::lbs::da::openservice::GetBNItemsRequest* request,
                              ::lbs::da::openservice::GetBNItemsResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(1),
                       controller, request, response, done);
}
// ===================================================================

DynamicPlanService::~DynamicPlanService() {}

const ::google::protobuf::ServiceDescriptor* DynamicPlanService::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DynamicPlanService_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* DynamicPlanService::GetDescriptor() {
  protobuf_AssignDescriptorsOnce();
  return DynamicPlanService_descriptor_;
}

void DynamicPlanService::GetDynamicTripPlan(::google::protobuf::RpcController* controller,
                         const ::lbs::da::openservice::DynamicTripPlanRequest*,
                         ::lbs::da::openservice::DynamicTripPlanResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method GetDynamicTripPlan() not implemented.");
  done->Run();
}

void DynamicPlanService::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), DynamicPlanService_descriptor_);
  switch(method->index()) {
    case 0:
      GetDynamicTripPlan(controller,
             ::google::protobuf::down_cast<const ::lbs::da::openservice::DynamicTripPlanRequest*>(request),
             ::google::protobuf::down_cast< ::lbs::da::openservice::DynamicTripPlanResponse*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& DynamicPlanService::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::lbs::da::openservice::DynamicTripPlanRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

const ::google::protobuf::Message& DynamicPlanService::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::lbs::da::openservice::DynamicTripPlanResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

DynamicPlanService_Stub::DynamicPlanService_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
DynamicPlanService_Stub::DynamicPlanService_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
DynamicPlanService_Stub::~DynamicPlanService_Stub() {
  if (owns_channel_) delete channel_;
}

void DynamicPlanService_Stub::GetDynamicTripPlan(::google::protobuf::RpcController* controller,
                              const ::lbs::da::openservice::DynamicTripPlanRequest* request,
                              ::lbs::da::openservice::DynamicTripPlanResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}
// ===================================================================

LvPlanService::~LvPlanService() {}

const ::google::protobuf::ServiceDescriptor* LvPlanService::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LvPlanService_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* LvPlanService::GetDescriptor() {
  protobuf_AssignDescriptorsOnce();
  return LvPlanService_descriptor_;
}

void LvPlanService::GetLvTripPlan(::google::protobuf::RpcController* controller,
                         const ::lbs::da::openservice::LvTripPlanRequest*,
                         ::lbs::da::openservice::LvTripPlanResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method GetLvTripPlan() not implemented.");
  done->Run();
}

void LvPlanService::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), LvPlanService_descriptor_);
  switch(method->index()) {
    case 0:
      GetLvTripPlan(controller,
             ::google::protobuf::down_cast<const ::lbs::da::openservice::LvTripPlanRequest*>(request),
             ::google::protobuf::down_cast< ::lbs::da::openservice::LvTripPlanResponse*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& LvPlanService::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::lbs::da::openservice::LvTripPlanRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

const ::google::protobuf::Message& LvPlanService::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::lbs::da::openservice::LvTripPlanResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

LvPlanService_Stub::LvPlanService_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
LvPlanService_Stub::LvPlanService_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
LvPlanService_Stub::~LvPlanService_Stub() {
  if (owns_channel_) delete channel_;
}

void LvPlanService_Stub::GetLvTripPlan(::google::protobuf::RpcController* controller,
                              const ::lbs::da::openservice::LvTripPlanRequest* request,
                              ::lbs::da::openservice::LvTripPlanResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}
// ===================================================================

PushService::~PushService() {}

const ::google::protobuf::ServiceDescriptor* PushService::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PushService_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* PushService::GetDescriptor() {
  protobuf_AssignDescriptorsOnce();
  return PushService_descriptor_;
}

void PushService::RegistCondition(::google::protobuf::RpcController* controller,
                         const ::lbs::da::openservice::RegistConditionRequest*,
                         ::lbs::da::openservice::RegistConditionResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method RegistCondition() not implemented.");
  done->Run();
}

void PushService::SetTrigger(::google::protobuf::RpcController* controller,
                         const ::lbs::da::openservice::SetTriggerRequest*,
                         ::lbs::da::openservice::SetTriggerResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method SetTrigger() not implemented.");
  done->Run();
}

void PushService::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), PushService_descriptor_);
  switch(method->index()) {
    case 0:
      RegistCondition(controller,
             ::google::protobuf::down_cast<const ::lbs::da::openservice::RegistConditionRequest*>(request),
             ::google::protobuf::down_cast< ::lbs::da::openservice::RegistConditionResponse*>(response),
             done);
      break;
    case 1:
      SetTrigger(controller,
             ::google::protobuf::down_cast<const ::lbs::da::openservice::SetTriggerRequest*>(request),
             ::google::protobuf::down_cast< ::lbs::da::openservice::SetTriggerResponse*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& PushService::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::lbs::da::openservice::RegistConditionRequest::default_instance();
    case 1:
      return ::lbs::da::openservice::SetTriggerRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

const ::google::protobuf::Message& PushService::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::lbs::da::openservice::RegistConditionResponse::default_instance();
    case 1:
      return ::lbs::da::openservice::SetTriggerResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

PushService_Stub::PushService_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
PushService_Stub::PushService_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
PushService_Stub::~PushService_Stub() {
  if (owns_channel_) delete channel_;
}

void PushService_Stub::RegistCondition(::google::protobuf::RpcController* controller,
                              const ::lbs::da::openservice::RegistConditionRequest* request,
                              ::lbs::da::openservice::RegistConditionResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}
void PushService_Stub::SetTrigger(::google::protobuf::RpcController* controller,
                              const ::lbs::da::openservice::SetTriggerRequest* request,
                              ::lbs::da::openservice::SetTriggerResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(1),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace openservice
}  // namespace da
}  // namespace lbs

// @@protoc_insertion_point(global_scope)
