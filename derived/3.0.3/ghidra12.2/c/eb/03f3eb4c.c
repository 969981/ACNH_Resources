
void FUN_03f3eb4c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((*(uint *)(param_1 + 0x10) & 0xfffffffe) == 8) &&
     (puVar2 = *(undefined8 **)(param_1 + 0x30), puVar2 != (undefined8 *)0x0)) {
    if ((*PTR_DAT_04bb4458 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4458);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4458);
      }
    }
    (**(code **)*puVar2)(puVar2,PTR_DAT_04bb4450);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

