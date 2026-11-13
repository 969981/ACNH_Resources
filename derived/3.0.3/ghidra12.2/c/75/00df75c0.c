
undefined8 * FUN_00df75c0(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (*(long *)PTR_DAT_04bb2720 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)(*(long *)PTR_DAT_04bb2720 + 0x330);
  }
  if (((*PTR_DAT_04bb8cd8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb8cd8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb8cd0 = PTR_DAT_04bb61e8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb8cd8);
  }
  if (((puVar3 == (undefined8 *)0x0) ||
      (uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bb8cd0), (uVar2 & 1) == 0)) ||
     (puVar3 = (undefined8 *)puVar3[0x74], puVar3 == (undefined8 *)0x0)) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if (((*PTR_DAT_04bb8ce8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb8ce8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb8ce0 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb8ce8);
    }
    uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bb8ce0);
    if ((uVar2 & 1) == 0) {
      puVar3 = (undefined8 *)0x0;
    }
  }
  return puVar3;
}

