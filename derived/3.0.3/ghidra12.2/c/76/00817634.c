
undefined8 FUN_00817634(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if ((*(byte *)(param_1 + 0x18) >> 1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_03f2d924(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar3 = (undefined8 *)FUN_03f2d7f0(param_1 + 0x10);
    if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb4be0 = PTR_DAT_04bb4448 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4be8);
    }
    if ((puVar3 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bb4be0), (uVar2 & 1) != 0)) {
      return puVar3[6];
    }
  }
  return 0;
}

