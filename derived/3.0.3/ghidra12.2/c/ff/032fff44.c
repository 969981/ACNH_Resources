
void FUN_032fff44(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint local_24;
  
  FUN_0252d11c(&local_24);
  puVar2 = PTR_DAT_04bb32e0;
  uVar6 = local_24 & 0xff;
  if (7 < uVar6) {
    uVar6 = 0xff;
  }
  uVar9 = (uint)(byte)*PTR_DAT_04bb32e0;
  if (7 < uVar9) {
    uVar9 = 0xff;
  }
  if ((uVar6 == uVar9) || (lVar4 = FUN_033d0598(&DAT_0548e140), *(char *)(lVar4 + 0x335) == '\0')) {
    local_24 = (**(code **)(*DAT_0572d470 + 0x18))();
    uVar10 = 3;
    if (local_24 != 7) {
      uVar10 = 1;
    }
    uVar1 = 2;
    if (local_24 != 4) {
      uVar1 = uVar10;
    }
    *(undefined4 *)(param_1 + 0x1024) = uVar1;
    FUN_0252d11c(&local_24);
    uVar6 = local_24 & 0xff;
    if (7 < uVar6) {
      uVar6 = 0xff;
    }
    uVar9 = (uint)(byte)*puVar2;
    if (7 < uVar9) {
      uVar9 = 0xff;
    }
    if (uVar6 != uVar9) {
      lVar4 = FUN_033d0598(&DAT_0548e140);
      *(undefined1 *)(lVar4 + 0x335) = 1;
    }
  }
  iVar11 = 0x12;
  switch(*(undefined4 *)(param_1 + 0x1050)) {
  case 0:
  case 3:
    local_24 = *(uint *)(param_1 + 0x1020);
    puVar8 = (undefined8 *)&DAT_05731f10;
    break;
  case 1:
    goto switchD_03300040_caseD_1;
  case 2:
    local_24 = *(uint *)(param_1 + 0x1024);
    iVar11 = local_24 + 0x12;
    if (2 < local_24 - 2) {
      iVar11 = 0x13;
    }
    goto switchD_03300040_caseD_1;
  case 4:
    local_24 = *(uint *)(param_1 + 0x1028);
    puVar8 = &DAT_05731fb4;
    break;
  case 5:
    bVar3 = *(int *)(param_1 + 0x102c) == 2;
    iVar7 = 0x17;
    goto LAB_033000e4;
  case 6:
    bVar3 = *(int *)(param_1 + 0x1030) == 2;
    iVar7 = 0x18;
    goto LAB_033000e4;
  case 7:
    bVar3 = *(int *)(param_1 + 0x1034) == 2;
    iVar7 = 0x19;
LAB_033000e4:
    iVar11 = 0x11;
    if (!bVar3) {
      iVar11 = iVar7;
    }
    goto switchD_03300040_caseD_1;
  case 8:
  case 9:
    local_24 = *(uint *)(param_1 + 0x1038);
    puVar8 = &DAT_05731f5c;
    break;
  default:
    iVar11 = DAT_05731f54;
    goto switchD_03300040_caseD_1;
  }
  iVar11 = *(int *)((long)puVar8 + (long)(int)local_24 * 4);
switchD_03300040_caseD_1:
  FUN_033008cc(param_1,iVar11,1,0);
  lVar4 = *(long *)(param_1 + 0x518);
  if (((*(long *)(lVar4 + 0x20) != 0) && (-1 < *(int *)(lVar4 + 0x30))) &&
     (plVar5 = *(long **)(*(long *)(lVar4 + 0x20) + 0x80), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(undefined1 *)(lVar4 + 0x710) = 0;
  *(long *)(lVar4 + 0x28) = lVar4 + 0x38;
  *(undefined4 *)(lVar4 + 0x30) = 0xffffffff;
  return;
}

