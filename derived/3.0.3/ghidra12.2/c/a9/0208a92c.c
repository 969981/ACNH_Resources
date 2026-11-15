
void FUN_0208a92c(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *local_30;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  
  piVar1 = *(int **)(param_1 + 8);
  FUN_0071c8d0(&local_30,param_2,*(undefined8 *)(param_1 + 0x10),0);
  plVar2 = local_30;
  if (local_30 != (long *)0x0) {
    if ((*PTR_DAT_04bb37d8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8);
      if (iVar3 != 0) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
    }
    uVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb37d0);
    if ((uVar4 & 1) == 0) {
      local_27 = 0;
    }
  }
  if (*piVar1 < piVar1[1]) {
    puVar5 = *(undefined8 **)(piVar1 + 4);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 *)(piVar1 + 4) = *puVar5;
    }
    *puVar5 = local_30;
    *(undefined1 *)(puVar5 + 1) = local_28;
    *(undefined1 *)((long)puVar5 + 10) = local_26;
    *(undefined1 *)((long)puVar5 + 9) = local_27;
    *(undefined1 *)((long)puVar5 + 0xb) = local_25;
    if (*piVar1 < piVar1[1]) {
      *(undefined8 **)(*(long *)(piVar1 + 2) + (long)*piVar1 * 8) = puVar5;
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}

