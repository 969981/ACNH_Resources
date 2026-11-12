
undefined8 * FUN_0069c150(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_8;
  
  puVar5 = param_1;
  if (param_1 != (undefined8 *)0x0) {
    local_8 = 0;
    uVar3 = (**(code **)*param_1)();
    if (((*PTR_DAT_04bdf430 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bdf430), iVar2 != 0)) {
      if (((*PTR_DAT_04bdf3c0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bdf3c0), puVar1 = PTR_DAT_04bdf3d0, iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bdf3d0 = PTR_PTR_04bdf3d8;
        *(undefined8 *)(puVar1 + 8) = 0;
        *(undefined8 *)(puVar1 + 0x10) = 0;
        *(undefined8 *)(puVar1 + 0x18) = 0;
        __cxa_guard_release(PTR_DAT_04bdf3c0);
      }
      puVar1 = PTR_DAT_04bdf440;
      *(undefined **)PTR_DAT_04bdf440 = PTR_PTR_04bdf3c8;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      __cxa_guard_release(PTR_DAT_04bdf430);
    }
    local_50 = &local_8;
    local_30 = 0;
    local_28 = 0;
    local_40 = PTR_PTR_04bdf438;
    uStack_38 = 0;
    puStack_48 = PTR_PTR_04bdf3d8;
    uVar4 = FUN_00692170(uVar3,&local_50,0);
    puVar5 = (undefined8 *)0x0;
    if ((uVar4 & 1) != 0) {
      puVar5 = (undefined8 *)(local_8 + (long)param_1);
    }
  }
  return puVar5;
}

