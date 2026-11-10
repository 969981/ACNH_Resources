
void FUN_001bd4ac(void *param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,long param_6,ulong param_7)

{
  ulong uVar1;
  Md5Impl aMStack_c8 [96];
  undefined1 auStack_68 [24];
  
  FUN_00194e28(aMStack_c8);
  FUN_001932ec(aMStack_c8,param_3,param_4);
  FUN_001932ec(aMStack_c8,param_5,0x1c);
  if ((param_6 != 0) && (param_7 != 0)) {
    uVar1 = param_7;
    if (0x31 < param_7) {
      uVar1 = 0x32;
    }
    if (param_2 != 0) {
      uVar1 = param_7;
    }
    FUN_001932ec(aMStack_c8,param_6,uVar1);
  }
  FUN_001932fc(aMStack_c8);
  memcpy(param_1,auStack_68,0x10);
  *(undefined8 *)((long)param_1 + 0x10) = 0x10;
  nn::crypto::detail::Md5Impl::~Md5Impl(aMStack_c8);
  return;
}

