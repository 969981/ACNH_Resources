
undefined4 FUN_026d0bac(undefined8 param_1,undefined4 *param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 local_24;
  
  local_24 = 0;
  if (((char)param_3[0xf] == '\0') ||
     (uVar3 = (**(code **)(*param_3 + 0xb0))(param_3,&local_24,param_4), (uVar3 & 1) == 0)) {
    if (((*PTR_DAT_04bc3648 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc3648), iVar2 != 0)) {
      *(undefined ***)PTR_DAT_04bc3640 = &PTR_LAB_04a893a8;
      __cxa_guard_release(PTR_DAT_04bc3648);
    }
    uVar3 = (**(code **)(*param_3 + 0x10))(param_3,PTR_DAT_04bc3640);
    iVar2 = 7;
    if ((uVar3 & 1) != 0) {
      iVar2 = 1;
    }
    if (iVar2 != 1) {
      return 7;
    }
    if ((uVar3 & 1) == 0) {
      param_3 = (long *)0x0;
    }
    uVar1 = *(uint *)((long)param_3 + 0x7c);
    if (uVar1 != 0) {
      if ((uVar1 & 0x3fffff) == 0x202) {
        return 5;
      }
      if ((uVar1 & 0x1ff) == 2 && (uVar1 >> 9 & 0x1ffe) - 0x1e < 0x10) {
        return 2;
      }
      uVar4 = 7;
      if ((uVar1 & 0x3fffff) == 0x402) {
        uVar4 = 8;
      }
      return uVar4;
    }
  }
  else if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_24;
    return 1;
  }
  return 1;
}

