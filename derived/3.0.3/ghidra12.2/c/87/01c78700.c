
/* WARNING: Removing unreachable block (ram,0x01c78874) */

void FUN_01c78700(long *param_1,uint *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined *local_40;
  char *pcStack_38;
  
  lVar5 = *param_1;
  nn::os::LockMutex((MutexType *)(lVar5 + 0x48));
  puVar3 = PTR_DAT_04bb3728;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a57de51) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "TapIndoorSelectCloudIsland";
    iVar4 = FUN_02743000(&local_40);
    if (iVar4 == 0) {
      plVar6 = (long *)*param_1;
      if (*(long *)(*(long *)puVar3 + 0x50) == 0) goto LAB_01c78808;
    }
    else {
      plVar6 = (long *)*param_1;
    }
    plVar8 = plVar6 + 2;
    do {
      plVar8 = (long *)plVar8[1];
      if (plVar8 == plVar6 + 2) goto LAB_01c787cc;
    } while (*(uint *)((long)plVar8 - (long)*(int *)((long)plVar6 + 0x24)) != *param_2);
    if ((plVar8 != (long *)0x0) && (plVar8 != (long *)(long)*(int *)((long)plVar6 + 0x24)))
    goto LAB_01c78808;
LAB_01c787cc:
    if (*plVar6 == 0) goto LAB_01c78808;
    puVar1 = (undefined2 *)(*plVar6 + 8);
    puVar2 = puVar1 + (ulong)*param_2 * 0xb4;
    if (3 < *param_2) {
      puVar2 = puVar1;
    }
    if ((*(char *)((long)puVar2 + 0x161) == '\0') || (*(char *)(puVar2 + 0xb0) == '\0'))
    goto LAB_01c78808;
    *puVar2 = 1;
  }
  plVar6 = (long *)*param_1;
LAB_01c78808:
  plVar9 = plVar6 + 2;
  lVar7 = *plVar9;
  plVar8 = (long *)((long)*(int *)((long)plVar6 + 0x24) + (long)param_2);
  *plVar9 = (long)plVar8;
  *plVar8 = lVar7;
  plVar8[1] = (long)plVar9;
  if (lVar7 != 0) {
    *(long **)(lVar7 + 8) = plVar8;
  }
  *(int *)(plVar6 + 4) = (int)plVar6[4] + 1;
  lVar7 = *(long *)puVar3;
  *(byte *)(lVar7 + 0x1a8) = *(byte *)(lVar7 + 0x1a8) | 0x10;
  local_40 = (undefined *)CONCAT44(local_40._4_4_,0x11);
  puVar3 = local_40;
  local_40._0_4_ = 0x11;
  if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) < 0x12) {
    local_40._0_4_ = 0;
  }
  *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)local_40 * 0x38 + 0x30) =
       0;
  local_40 = puVar3;
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x48));
  return;
}

