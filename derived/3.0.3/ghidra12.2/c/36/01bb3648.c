
long FUN_01bb3648(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((((param_2 != 0) && (param_2 != 0xd)) && (param_2 != 0xe)) && (param_2 != 0xf)) {
    return 0;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x28);
  lVar6 = *(long *)PTR_DAT_04bb28f8;
  if (puVar5 != (undefined8 *)0x0) {
    if (((*PTR_DAT_04bc0af0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc0af0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc0ae8 = PTR_DAT_04bc0ab8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc0af0);
    }
    uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc0ae8);
    if ((uVar3 & 1) != 0) {
      uVar4 = *(uint *)(puVar5 + 0x23);
      goto LAB_01bb36d4;
    }
  }
  uVar4 = 2;
LAB_01bb36d4:
  if (3 < uVar4) {
    return 0;
  }
  lVar1 = lVar6 + 0x29f8 + (ulong)(uVar4 + 0x3a) * 0x128;
  if (0x50 < uVar4 + 0x3a) {
    lVar1 = lVar6 + 0x29f8;
  }
  return lVar1;
}

