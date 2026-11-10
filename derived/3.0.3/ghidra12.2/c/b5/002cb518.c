
void FUN_002cb518(undefined8 param_1,long param_2,byte param_3)

{
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  nn::util::ReferSymbol("SDK Private+Nintendo+nex::NexFacade::SetRelayServiceEnabled");
  if (*(char *)(param_2 + 0xb0) == '\0') {
    local_34 = 0;
    *(byte *)(param_2 + 0xb2) = param_3 & 1;
  }
  else {
    local_34 = 0x10c08;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

