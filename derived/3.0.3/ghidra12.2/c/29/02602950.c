
void FUN_02602950(long *param_1,ulong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *local_68;
  char *local_60;
  undefined8 uStack_58;
  
  if (*(int *)((long)param_1 + 0x24) != 0) {
    return;
  }
  iVar6 = (**(code **)(*param_1 + 0x20))();
  if (iVar6 == -1) {
    return;
  }
  iVar6 = (**(code **)(*param_1 + 0x20))(param_1);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,iVar6);
  if (0xc < iVar6) {
    return;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb2268 + 0xb0) == '\0') {
    return;
  }
  if (*(byte *)(param_1 + 3) < 8) {
    local_68 = (undefined *)CONCAT71(local_68._1_7_,*(byte *)(param_1 + 3));
    lVar8 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_68,1);
  }
  else {
    if (*(int *)((long)param_1 + 0x1c) == -1) {
      return;
    }
    if (*(long *)PTR_DAT_04bb46b0 == 0) {
      return;
    }
    lVar8 = FUN_026eec4c();
  }
  if (lVar8 == 0) {
    return;
  }
  lVar14 = lVar8 + 0x194b0;
  lVar12 = lVar14;
  if (*(long *)(lVar8 + 0x194b8) == 0) {
    lVar12 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  lVar13 = *(long *)(lVar12 + 0x2a840);
  if (lVar13 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      lVar13 = *(long *)(lVar12 + 0x2a840);
      uVar9 = uVar9 & 0xffffffff;
      if (lVar13 == 0) goto LAB_02602ab0;
    }
    plVar10 = *(long **)(lVar13 + 0x20);
    if (plVar10 != (long *)0x0) {
      local_68 = *(undefined **)(lVar12 + 0x2a820);
      local_60 = *(char **)(lVar12 + 0x2a828);
      uStack_58 = 0x400;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_68);
    }
  }
LAB_02602ab0:
  piVar1 = (int *)(*(long *)(lVar12 + 0x2a828) + *(long *)(lVar12 + 0x2a820));
  piVar3 = piVar1 + (param_2 & 0xffffffff);
  if ((param_2 & 0xffffff00) != 0) {
    piVar3 = piVar1;
  }
  *piVar3 = *piVar3 + 1;
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar12 + 0x2a840) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar12 + 0x2a840) + 0x18), puVar11 != (undefined8 *)0x0))
  {
    (**(code **)*puVar11)();
  }
  if (*(long *)(lVar8 + 0x194b8) == 0) {
    lVar14 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  if ((*(long **)(lVar14 + 0x2a840) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar14 + 0x2a840), puVar11 == (undefined8 *)0x0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = (**(code **)*puVar11)();
    uVar7 = uVar7 ^ 1;
  }
  puVar2 = (undefined4 *)(*(long *)(lVar14 + 0x2a828) + *(long *)(lVar14 + 0x2a820));
  puVar4 = puVar2 + (param_2 & 0xffffffff);
  if ((param_2 & 0xffffff00) != 0) {
    puVar4 = puVar2;
  }
  uVar5 = *puVar4;
  if ((((uVar7 & 1) == 0) && (*(long *)(lVar14 + 0x2a840) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar14 + 0x2a840) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  local_68 = PTR_DAT_04bb2020 + 0x10;
  local_60 = "SerialNumber";
  if (param_1[1] != 0) {
    FUN_02605660(param_1[1],&local_68,uVar5);
  }
  return;
}

