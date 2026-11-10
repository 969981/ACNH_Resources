
void FUN_0024ac6c(undefined8 param_1,void *param_2)

{
  int iVar1;
  Nickname aNStack_dd [33];
  bool local_bc [4];
  long local_b8;
  long lStack_b0;
  undefined *local_a8;
  undefined8 *puStack_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined1 local_3c;
  undefined1 local_38;
  long local_30;
  long lStack_28;
  
  memset(param_2,0,0x21);
  local_8c = 0;
  local_98 = 0x50;
  puStack_a0 = &local_8c;
  local_84 = 0;
  local_a8 = PTR_DAT_04bcb818 + 0x10;
  local_7c = 0;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  local_4c = 0;
  local_44 = 0;
  local_3c = 0;
  local_94 = 0;
  local_38 = 0xff;
  local_30 = 0;
  lStack_28 = 0;
  if ((DAT_04c60f48 != 0) && (*(long *)(DAT_04c60f48 + 8) != 0)) {
    FUN_00252d34(*(long *)(DAT_04c60f48 + 8),&local_a8);
    local_b8 = local_30;
    lStack_b0 = lStack_28;
    if (local_30 != 0 || lStack_28 != 0) {
      nn::account::Initialize();
      iVar1 = nn::account::GetUserExistence(local_bc,(Uid *)&local_b8);
      if (((iVar1 == 0) && (local_bc[0] != false)) &&
         (iVar1 = nn::account::GetNickname(aNStack_dd,(Uid *)&local_b8), iVar1 == 0)) {
        memcpy(param_2,aNStack_dd,0x20);
        return;
      }
    }
  }
  return;
}

