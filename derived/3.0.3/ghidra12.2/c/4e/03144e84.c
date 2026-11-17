
undefined8 FUN_03144e84(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x578);
  if (((*PTR_DAT_04bc84e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc84e8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc84e0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc84e8);
  }
  if (puVar4 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc84e0);
    uVar3 = 0;
    if ((param_2 < 8) && ((uVar2 & 1) != 0)) {
      uVar3 = *(undefined8 *)(puVar4[(ulong)param_2 + 0x6d] + 0xa0);
    }
  }
  return uVar3;
}

