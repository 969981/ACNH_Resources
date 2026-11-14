
void FUN_015de0d0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  long local_48;
  long local_28;
  
  if ((*(char *)(param_1 + 0x178) < 0) ||
     (uVar1 = (int)*(char *)(param_1 + 0x178) - 1, *(char *)(param_1 + 0x178) = (char)uVar1,
     (uVar1 & 0xff) != 0)) {
    lVar5 = *(long *)(param_1 + 0x48);
  }
  else {
    *(undefined1 *)(param_1 + 0x178) = 0xff;
    FUN_015dda88(param_1);
    lVar5 = *(long *)(param_1 + 0x48);
  }
  if ((lVar5 == 0) ||
     ((*(char *)(lVar5 + 0x968) != '\0' || *(char *)(lVar5 + 0x96b) == '\0') &&
      (*(char *)(lVar5 + 0x96c) == '\0' || *(char *)(lVar5 + 0x969) != '\0'))) {
    if (*(int *)(param_1 + 0x168) == 4) {
      *(undefined4 *)(param_1 + 0x168) = 5;
      return;
    }
    return;
  }
  iVar6 = *(int *)(param_1 + 0x168);
  if (iVar6 == 3) {
    plVar3 = *(long **)(lVar5 + 8);
    if (plVar3 == (long *)0x0) {
      return;
    }
    local_28 = 0;
    local_48 = 0;
    (**(code **)(*plVar3 + 0x70))(plVar3,&local_28,&local_48);
    if (5000000 < local_48 - local_28) {
      lVar5 = *(long *)(param_1 + 0x48);
      lVar8 = *(long *)(lVar5 + 0x960);
      if (lVar8 == 0) {
        lVar7 = 1;
      }
      else {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        lVar7 = *(long *)(lVar4 + 0xa8);
        *(long *)(lVar4 + 0xa8) = lVar8;
      }
      if (*(long *)(lVar5 + 0x958) != 0) {
        FUN_015db0b0();
      }
      if (lVar7 != 1) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        *(long *)(lVar5 + 0xa8) = lVar7;
      }
      *(undefined4 *)(param_1 + 0x168) = 4;
      lVar5 = *(long *)(param_1 + 0x48);
      goto joined_r0x015de1f0;
    }
    iVar6 = *(int *)(param_1 + 0x168);
  }
  if (iVar6 != 4) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x48);
joined_r0x015de1f0:
  if (lVar5 == 0) {
    return;
  }
  lVar8 = *(long *)(lVar5 + 0x958);
  if (lVar8 != 0) {
    uVar9 = FUN_02a55160();
    *(undefined4 *)(lVar8 + 0x9d8) = uVar9;
    lVar5 = *(long *)(param_1 + 0x48);
    if (lVar5 == 0) {
      return;
    }
  }
  puVar2 = PTR_DAT_04bb3350;
  lVar8 = *(long *)(lVar5 + 0x960);
  if (lVar8 == 0) {
    lVar7 = 1;
    lVar5 = *(long *)(lVar5 + 0x950);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = lVar8;
    lVar5 = *(long *)(lVar5 + 0x950);
  }
  if (lVar5 == 0) {
    lVar5 = -1;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x1a8);
  }
  if (lVar7 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar7;
  }
  if (lVar5 - 1U < 119999999) {
    *(long *)(param_1 + 0x170) = lVar5;
  }
  return;
}

