
int FUN_0015978c(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_18;
  
  lVar3 = *param_2;
  param_2[0xc2] = 0x6400000003;
  param_2[0xc3] = 0x4000000000000004;
  *(undefined4 *)(param_2 + 0xc4) = 2;
  local_40 = 0;
  local_38 = 0;
  *(uint *)((long)param_2 + 0x624) = (uint)(*(long *)(*(long *)(lVar3 + 0xd8) + 0x70) != 0);
  param_2[0xc5] = 3;
  local_18 = param_1;
  lVar2 = FUN_0016740c(param_2 + 0xaf,0x50,param_2 + 0xc2,3);
  if (lVar2 == 0) {
    FUN_0014d5f8(*param_2,"nghttp2 unexpectedly failed on pack_settings_payload");
    FUN_0015e0d0(&local_18);
    iVar1 = 2;
  }
  else {
    param_2[0xb9] = lVar2;
    iVar1 = FUN_00155ef4(*param_2,param_2 + 0xaf,lVar2,&local_38,&local_40);
    if (iVar1 == 0) {
      iVar1 = FUN_0015e3d4(&local_18,
                           "Connection: Upgrade, HTTP2-Settings\r\nUpgrade: %s\r\nHTTP2-Settings: %s\r\n"
                           ,&DAT_0405f6f2,local_38);
      FUN_00143300(local_38);
      *(undefined4 *)(lVar3 + 0x19c) = 1;
    }
    else {
      FUN_0015e0d0(&local_18);
    }
  }
  return iVar1;
}

