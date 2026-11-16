
undefined4 FUN_026d1548(long param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  if ((param_4 & 1) == 0) {
    uVar5 = 0;
  }
  if (((param_1 != 0) && ((char)param_2[0xf] != '\0')) &&
     ((uVar3 = (**(code **)(*param_2 + 0x20))(param_2), (uVar3 & 1) != 0 || ((param_4 & 1) == 0))))
  {
    *(undefined4 *)(param_1 + 0x38) = 0;
    lVar4 = (**(code **)(*param_2 + 0x68))(param_2,param_1,param_3,uVar5);
    *(long *)(param_1 + 8) = lVar4;
    if (lVar4 != 0) {
      *(long **)(param_1 + 0x10) = param_2;
      return 1;
    }
  }
  if (((*PTR_DAT_04bc3648 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc3648), iVar2 != 0))
  {
    *(undefined ***)PTR_DAT_04bc3640 = &PTR_LAB_04a893a8;
    __cxa_guard_release(PTR_DAT_04bc3648);
  }
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,PTR_DAT_04bc3640);
  iVar2 = 7;
  if ((uVar3 & 1) != 0) {
    iVar2 = 1;
  }
  if (iVar2 == 1) {
    if ((uVar3 & 1) == 0) {
      param_2 = (long *)0x0;
    }
    uVar1 = *(uint *)((long)param_2 + 0x7c);
    if (uVar1 == 0) {
      uVar5 = 1;
    }
    else if ((uVar1 & 0x3fffff) == 0x202) {
      uVar5 = 5;
    }
    else if ((uVar1 & 0x1ff) == 2 && (uVar1 >> 9 & 0x1ffe) - 0x1e < 0x10) {
      uVar5 = 2;
    }
    else {
      uVar5 = 7;
      if ((uVar1 & 0x3fffff) == 0x402) {
        uVar5 = 8;
      }
    }
  }
  else {
    uVar5 = 7;
  }
  return uVar5;
}

