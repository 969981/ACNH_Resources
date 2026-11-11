
undefined4 FUN_0065e290(long param_1,long param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_244;
  undefined1 *local_240;
  undefined8 local_238;
  undefined1 auStack_230 [512];
  
  if (*(int *)(param_1 + 0x18) == param_3) {
    if (param_1 == param_2) {
      uVar3 = 0;
    }
    else {
      FUN_0065a9b0(param_2,param_1);
      uVar3 = 0;
    }
  }
  else {
    local_240 = auStack_230;
    local_244 = 0;
    local_238 = -0x7ffffff000000000;
    iVar2 = FUN_0065d690(*(int *)(param_1 + 0x18),param_3,param_1 == param_2,&local_240,&local_244);
    if (iVar2 < 0) {
      uVar3 = 0x80040200;
      uVar1 = local_238._4_4_;
    }
    else {
      uVar3 = FUN_0065e3a0(param_1,param_2,local_240,local_240 + (long)(int)local_238 * 0x20,
                           local_244,param_4);
      uVar1 = local_238._4_4_;
    }
    if ((-1 < local_238) && (local_238 = (ulong)uVar1 << 0x20, local_240 != (undefined1 *)0x0)) {
      FUN_00421f90(PTR_DAT_048607b8,local_240,0x20,uVar1 & 0x3fffffff);
    }
  }
  return uVar3;
}

