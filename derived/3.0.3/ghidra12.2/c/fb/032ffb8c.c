
void FUN_032ffb8c(long param_1)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  uint local_24;
  
  uVar4 = *(undefined4 *)(param_1 + 0x1050);
  switch(uVar4) {
  case 0:
  case 8:
    FUN_0252d11c(&local_24);
    pbVar10 = PTR_DAT_04bb32e0;
    uVar3 = local_24 & 0xff;
    if (7 < uVar3) {
      uVar3 = 0xff;
    }
    uVar7 = (uint)(byte)*PTR_DAT_04bb32e0;
    if (7 < uVar7) {
      uVar7 = 0xff;
    }
    if ((uVar3 == uVar7) || (lVar9 = FUN_033d0598(&DAT_0548e140), *(char *)(lVar9 + 0x334) == '\0'))
    {
      if (*(int *)(param_1 + 0x1050) != 8) {
        local_24 = (**(code **)(*DAT_0572d470 + 0x18))();
        if (0xb < local_24) goto LAB_032ffce0;
        uVar4 = *(undefined4 *)(&DAT_0418d788 + (long)(int)local_24 * 4);
        goto LAB_032ffce4;
      }
      FUN_033005bc(param_1);
LAB_032ffce8:
      FUN_0252d11c(&local_24);
      uVar3 = local_24 & 0xff;
      if (7 < uVar3) {
        uVar3 = 0xff;
      }
      uVar7 = (uint)*pbVar10;
      if (7 < uVar7) {
        uVar7 = 0xff;
      }
      if (uVar3 != uVar7) {
        lVar9 = FUN_033d0598(&DAT_0548e140);
        *(undefined1 *)(lVar9 + 0x334) = 1;
      }
    }
    break;
  default:
    goto switchD_032ffbc0_caseD_1;
  case 3:
  case 9:
    FUN_0252d11c(&local_24);
    pbVar10 = PTR_DAT_04bb32e0;
    uVar3 = local_24 & 0xff;
    if (7 < uVar3) {
      uVar3 = 0xff;
    }
    uVar7 = (uint)(byte)*PTR_DAT_04bb32e0;
    if (7 < uVar7) {
      uVar7 = 0xff;
    }
    if ((uVar3 == uVar7) || (lVar9 = FUN_033d0598(&DAT_0548e140), *(char *)(lVar9 + 0x334) == '\0'))
    {
      local_24 = (**(code **)(*DAT_0572d470 + 0x18))();
      if (local_24 - 1 < 0xb) {
        uVar4 = *(undefined4 *)(&DAT_0418d7b8 + (long)(int)(local_24 - 1) * 4);
      }
      else {
LAB_032ffce0:
        uVar4 = 0xe;
      }
LAB_032ffce4:
      *(undefined4 *)(param_1 + 0x1020) = uVar4;
      goto LAB_032ffce8;
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 0x1050);
switchD_032ffbc0_caseD_1:
  iVar8 = 0x12;
  switch(uVar4) {
  case 0:
  case 3:
    local_24 = *(uint *)(param_1 + 0x1020);
    puVar6 = (undefined8 *)&DAT_05731f10;
    break;
  case 1:
    goto switchD_032ffd50_caseD_1;
  case 2:
    local_24 = *(uint *)(param_1 + 0x1024);
    iVar8 = local_24 + 0x12;
    if (2 < local_24 - 2) {
      iVar8 = 0x13;
    }
    goto switchD_032ffd50_caseD_1;
  case 4:
    local_24 = *(uint *)(param_1 + 0x1028);
    puVar6 = &DAT_05731fb4;
    break;
  case 5:
    bVar1 = *(int *)(param_1 + 0x102c) == 2;
    iVar5 = 0x17;
    goto LAB_032ffdf4;
  case 6:
    bVar1 = *(int *)(param_1 + 0x1030) == 2;
    iVar5 = 0x18;
    goto LAB_032ffdf4;
  case 7:
    bVar1 = *(int *)(param_1 + 0x1034) == 2;
    iVar5 = 0x19;
LAB_032ffdf4:
    iVar8 = 0x11;
    if (!bVar1) {
      iVar8 = iVar5;
    }
    goto switchD_032ffd50_caseD_1;
  case 8:
  case 9:
    local_24 = *(uint *)(param_1 + 0x1038);
    puVar6 = &DAT_05731f5c;
    break;
  default:
    iVar8 = DAT_05731f54;
    goto switchD_032ffd50_caseD_1;
  }
  iVar8 = *(int *)((long)puVar6 + (long)(int)local_24 * 4);
switchD_032ffd50_caseD_1:
  FUN_033008cc(param_1,iVar8,1,0);
  lVar9 = *(long *)(param_1 + 0x518);
  if (((*(long *)(lVar9 + 0x20) != 0) && (-1 < *(int *)(lVar9 + 0x30))) &&
     (plVar2 = *(long **)(*(long *)(lVar9 + 0x20) + 0x80), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(undefined1 *)(lVar9 + 0x710) = 0;
  *(long *)(lVar9 + 0x28) = lVar9 + 0x38;
  *(undefined4 *)(lVar9 + 0x30) = 0xffffffff;
  return;
}

