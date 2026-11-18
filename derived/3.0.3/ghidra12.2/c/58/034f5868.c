
bool FUN_034f5868(long param_1)

{
  byte *pbVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  char *pcVar13;
  byte local_4c [4];
  undefined *local_48;
  char *local_40;
  undefined8 local_38;
  
  pbVar1 = (byte *)(param_1 + 0x1f8);
  piVar2 = (int *)(param_1 + 0x1d2a0);
  *piVar2 = -1;
  puVar11 = PTR_DAT_04bb2020;
  local_48 = PTR_DAT_04bb2020 + 0x10;
  local_40 = "WHEREAREN_NoticeAboutMemberPage";
  iVar4 = FUN_0274bce0(pbVar1,&local_48);
  if (iVar4 == 0) {
    *piVar2 = 0;
    goto LAB_034f5a78;
  }
  local_4c[0] = *pbVar1;
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
  lVar6 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_4c,1);
  if (lVar6 == 0) goto LAB_034f5a78;
  local_48 = puVar11 + 0x10;
  local_40 = "WHEREAREN_GetInspectRewardsNum";
  uVar5 = FUN_0274bce0(pbVar1,&local_48);
  if ((int)uVar5 < 1) goto LAB_034f5a78;
  lVar10 = lVar6 + 0x194b0;
  if (*(long *)(lVar6 + 0x194b8) == 0) {
    lVar10 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  plVar3 = (long *)(lVar10 + 0x2cd18);
  lVar6 = *(long *)(lVar10 + 0x2cd38);
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar10 + 0x2cd38);
      uVar7 = uVar7 & 0xffffffff;
      if (lVar6 == 0) goto LAB_034f59a8;
    }
    plVar8 = *(long **)(lVar6 + 0x20);
    if (plVar8 != (long *)0x0) {
      local_48 = (undefined *)*plVar3;
      local_40 = *(char **)(lVar10 + 0x2cd20);
      local_38 = 0x1c;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
    }
  }
LAB_034f59a8:
  puVar12 = (undefined *)*plVar3;
  pcVar13 = *(char **)(lVar10 + 0x2cd20);
  puVar11 = puVar12 + (long)pcVar13;
  if (*(int *)(puVar11 + 0xc) == 0) {
    iVar4 = 1;
LAB_034f5a54:
    *piVar2 = iVar4;
  }
  else {
    if ((*(long *)(lVar10 + 0x2cd38) != 0) &&
       (plVar8 = *(long **)(*(long *)(lVar10 + 0x2cd38) + 0x20), plVar8 != (long *)0x0)) {
      local_38 = 0x1c;
      local_48 = puVar12;
      local_40 = pcVar13;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
      puVar12 = (undefined *)*plVar3;
      pcVar13 = *(char **)(lVar10 + 0x2cd20);
      puVar11 = puVar12 + (long)pcVar13;
    }
    if ((1 < uVar5) && (*(int *)(puVar11 + 0x10) == 0)) {
      iVar4 = 2;
      goto LAB_034f5a54;
    }
    if ((*(long *)(lVar10 + 0x2cd38) != 0) &&
       (plVar8 = *(long **)(*(long *)(lVar10 + 0x2cd38) + 0x20), plVar8 != (long *)0x0)) {
      local_38 = 0x1c;
      local_48 = puVar12;
      local_40 = pcVar13;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
      puVar11 = (undefined *)(*(long *)(lVar10 + 0x2cd20) + *plVar3);
    }
    if ((2 < uVar5) && (*(int *)(puVar11 + 0x14) == 0)) {
      iVar4 = 3;
      goto LAB_034f5a54;
    }
  }
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar10 + 0x2cd38) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0x2cd38) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
LAB_034f5a78:
  return *piVar2 != -1;
}

