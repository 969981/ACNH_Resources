
void FUN_03143754(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  undefined *local_30;
  char *pcStack_28;
  
  if (*(int *)(param_1 + 8) == 3) {
    iVar2 = *(int *)(param_1 + 0x50) + 1;
    local_30 = PTR_DAT_04bb2020 + 0x10;
    *(int *)(param_1 + 0x50) = iVar2;
    pcStack_28 = "MainmenuCamera1stPersonView";
    iVar1 = FUN_0274bce0(param_1 + 0x48,&local_30);
    iVar5 = 8;
    if (iVar1 != 0) {
      iVar5 = 0xc;
    }
    if (iVar5 <= iVar2) {
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    puVar3 = (undefined8 *)
             FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),0xb,PTR_DAT_04bb32e0);
    if (puVar3 != (undefined8 *)0x0) {
      if (((*PTR_DAT_04bc84e8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc84e8), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bc84e0 = PTR_DAT_04bb7c30 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc84e8);
      }
      uVar4 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc84e0);
      if ((uVar4 & 1) != 0) {
        FUN_03148410(puVar3,*(undefined4 *)(param_1 + 0x50));
        return;
      }
    }
  }
  return;
}

