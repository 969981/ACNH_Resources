
void FUN_02602bc0(long param_1,ulong param_2)

{
  long *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined *local_58;
  char *local_50;
  undefined8 uStack_48;
  
  if ((*(int *)(param_1 + 0x24) != 0) || (*(long *)PTR_DAT_04bb46b0 == 0)) {
    return;
  }
  lVar7 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))();
  if (lVar7 == 0) {
    return;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb2268 + 0xb0) == '\0') {
    return;
  }
  plVar1 = (long *)(lVar7 + 0x276eb0);
  lVar10 = *(long *)(lVar7 + 0x276ed0);
  if (lVar10 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      lVar10 = *(long *)(lVar7 + 0x276ed0);
      uVar8 = uVar8 & 0xffffffff;
      if (lVar10 == 0) goto LAB_02602c94;
    }
    plVar11 = *(long **)(lVar10 + 0x20);
    if (plVar11 != (long *)0x0) {
      local_58 = (undefined *)*plVar1;
      local_50 = *(char **)(lVar7 + 0x276eb8);
      uStack_48 = 0x400;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_58);
    }
  }
LAB_02602c94:
  uVar4 = param_2 & 0xffffff00;
  piVar2 = (int *)(*(long *)(lVar7 + 0x276eb8) + *plVar1);
  piVar5 = piVar2 + (param_2 & 0xffffffff);
  if (uVar4 != 0) {
    piVar5 = piVar2;
  }
  *piVar5 = *piVar5 + 1;
  plVar11 = *(long **)(lVar7 + 0x276ed0);
  if ((uVar8 & 1) == 0) {
LAB_02602cdc:
    if (plVar11 != (long *)0x0) {
LAB_02602ce0:
      if ((undefined8 *)*plVar11 != (undefined8 *)0x0) {
        uVar8 = (*(code *)**(undefined8 **)*plVar11)();
        puVar3 = (undefined4 *)(*(long *)(lVar7 + 0x276eb8) + *plVar1);
        puVar6 = puVar3 + (param_2 & 0xffffffff);
        if (uVar4 != 0) {
          puVar6 = puVar3;
        }
        uVar12 = *puVar6;
        if ((((uVar8 & 1) != 0) && (*(long *)(lVar7 + 0x276ed0) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar7 + 0x276ed0) + 8), puVar9 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar9)();
        }
        goto LAB_02602d48;
      }
    }
  }
  else if (plVar11 != (long *)0x0) {
    if ((undefined8 *)plVar11[3] != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)plVar11[3])();
      plVar11 = *(long **)(lVar7 + 0x276ed0);
      goto LAB_02602cdc;
    }
    goto LAB_02602ce0;
  }
  puVar3 = (undefined4 *)(*(long *)(lVar7 + 0x276eb8) + *plVar1);
  puVar6 = puVar3 + (param_2 & 0xffffffff);
  if (uVar4 != 0) {
    puVar6 = puVar3;
  }
  uVar12 = *puVar6;
LAB_02602d48:
  local_58 = PTR_DAT_04bb2020 + 0x10;
  local_50 = "SerialNumber";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_58,uVar12);
  }
  return;
}

