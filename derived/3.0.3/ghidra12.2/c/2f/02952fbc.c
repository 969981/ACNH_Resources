
undefined8 * FUN_02952fbc(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x3b8);
  if (((*PTR_DAT_04bb40f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb40f8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb40f0 = PTR_DAT_04bb4100 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb40f8);
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bb40f0);
    if ((uVar2 & 1) == 0) {
      puVar3 = (undefined8 *)0x0;
    }
  }
  return puVar3;
}

