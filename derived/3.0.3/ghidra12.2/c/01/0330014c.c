
void FUN_0330014c(long param_1,char param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  int local_14;
  
  iVar1 = *(int *)(param_1 + 0x1050);
  switch(iVar1) {
  case 0:
    lVar9 = 0x1020;
    break;
  default:
    goto switchD_03300184_caseD_1;
  case 2:
    lVar9 = 0x1024;
    break;
  case 4:
    lVar9 = 0x1028;
    break;
  case 8:
    lVar9 = 0x1038;
  }
  if ((param_2 == '\x01') || (iVar2 = iVar1, *(int *)(param_1 + lVar9) == 0)) {
switchD_03300184_caseD_1:
    FUN_033005bc(param_1);
    iVar2 = *(int *)(param_1 + 0x1050);
  }
  iVar7 = 0x12;
  switch(iVar2) {
  case 0:
  case 3:
    local_14 = *(int *)(param_1 + 0x1020);
    puVar6 = (undefined8 *)&DAT_05731f10;
    break;
  case 1:
    goto switchD_033001f0_caseD_1;
  case 2:
    iVar7 = *(int *)(param_1 + 0x1024) + 0x12;
    if (2 < *(int *)(param_1 + 0x1024) - 2U) {
      iVar7 = 0x13;
    }
    goto switchD_033001f0_caseD_1;
  case 4:
    local_14 = *(int *)(param_1 + 0x1028);
    puVar6 = &DAT_05731fb4;
    break;
  case 5:
    bVar3 = *(int *)(param_1 + 0x102c) == 2;
    iVar5 = 0x17;
    goto LAB_03300294;
  case 6:
    bVar3 = *(int *)(param_1 + 0x1030) == 2;
    iVar5 = 0x18;
    goto LAB_03300294;
  case 7:
    bVar3 = *(int *)(param_1 + 0x1034) == 2;
    iVar5 = 0x19;
LAB_03300294:
    iVar7 = 0x11;
    if (!bVar3) {
      iVar7 = iVar5;
    }
    goto switchD_033001f0_caseD_1;
  case 8:
  case 9:
    local_14 = *(int *)(param_1 + 0x1038);
    puVar6 = &DAT_05731f5c;
    break;
  default:
    iVar7 = DAT_05731f54;
    goto switchD_033001f0_caseD_1;
  }
  iVar7 = *(int *)((long)puVar6 + (long)local_14 * 4);
switchD_033001f0_caseD_1:
  if (param_2 == '\x01') {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    switch(iVar2) {
    case 0:
      uVar8 = *(undefined4 *)(param_1 + 0x103c);
      break;
    case 5:
      uVar8 = *(undefined4 *)(param_1 + 0x1040);
      break;
    case 6:
      uVar8 = *(undefined4 *)(param_1 + 0x1044);
      break;
    case 7:
      uVar8 = *(undefined4 *)(param_1 + 0x1048);
      break;
    case 8:
      uVar8 = *(undefined4 *)(param_1 + 0x104c);
    }
  }
  FUN_033008cc(param_1,iVar7,0,uVar8);
  if (iVar1 != 1) {
    lVar9 = *(long *)(param_1 + 0x518);
    if (((*(long *)(lVar9 + 0x20) != 0) && (-1 < *(int *)(lVar9 + 0x30))) &&
       (plVar4 = *(long **)(*(long *)(lVar9 + 0x20) + 0x80), plVar4 != (long *)0x0)) {
      (**(code **)(*plVar4 + 0x20))();
    }
    *(undefined4 *)(lVar9 + 0x30) = 0xffffffff;
    *(undefined1 *)(lVar9 + 0x710) = 0;
    *(long *)(lVar9 + 0x28) = lVar9 + 0x38;
  }
  lVar9 = *(long *)(param_1 + 0x518);
  if (((*(long *)(lVar9 + 0x20) != 0) && (-1 < *(int *)(lVar9 + 0x30))) &&
     (plVar4 = *(long **)(*(long *)(lVar9 + 0x20) + 0x80), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x20))();
  }
  *(undefined4 *)(lVar9 + 0x30) = 0xffffffff;
  *(long *)(lVar9 + 0x28) = lVar9 + 0x38;
  *(undefined1 *)(lVar9 + 0x710) = 0;
  return;
}

