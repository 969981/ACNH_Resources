
undefined8 FUN_038cf2b0(long *param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  
  *param_2 = 0;
  if (*param_1 == 0) {
    return 0;
  }
  if ((char)param_1[3] != '\0') {
    return 1;
  }
  iVar4 = (int)param_1[2];
  if (*(int *)((long)param_1 + 0x14) <= iVar4) {
    return 0;
  }
  pbVar3 = (byte *)(*param_1 + (long)iVar4);
  while( true ) {
    uVar8 = 0;
    bVar1 = *pbVar3;
    while( true ) {
      iVar5 = (int)uVar8;
      if (bVar1 == 0) {
        if (iVar5 == 0) {
          return 0;
        }
        (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],pbVar3,uVar8 & 0xffffffff);
        uVar2 = 0;
        iVar5 = (int)param_1[2] + iVar5;
        goto LAB_038cf388;
      }
      if (bVar1 == 0x25) break;
      uVar8 = uVar8 + 1;
      bVar1 = pbVar3[uVar8];
    }
    pbVar7 = pbVar3 + uVar8;
    bVar1 = pbVar7[1];
    if (bVar1 != 0x25) break;
    (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],pbVar3,uVar8 + 1);
    pbVar3 = pbVar7 + 2;
    iVar4 = (int)param_1[2] + iVar5 + 2;
    *(int *)(param_1 + 2) = iVar4;
  }
  if (iVar5 != 0) {
    (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],pbVar3,uVar8 & 0xffffffff);
    iVar4 = (int)param_1[2] + iVar5;
    uVar8 = 0;
    *(int *)(param_1 + 2) = iVar4;
    bVar1 = pbVar7[1];
  }
  iVar5 = (int)uVar8;
  if (bVar1 == 0x3c) {
    iVar5 = iVar5 + 2;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    if (bVar1 != 0x40) {
      *param_2 = 0x25;
      lVar6 = 0;
LAB_038cf424:
      pbVar7 = pbVar7 + 1;
      bVar1 = *pbVar7;
      switch((uint)bVar1) {
      case 0x20:
      case 0x23:
      case 0x2b:
      case 0x2d:
      case 0x2e:
      case 0x4c:
      case 0x68:
      case 0x6c:
switchD_038cf440_caseD_20:
        if (0x1e - iVar5 == (int)lVar6) goto LAB_038cf488;
        param_2[lVar6 + 1] = bVar1;
        lVar6 = lVar6 + 1;
        goto LAB_038cf424;
      default:
        if (bVar1 == 0x7a || bVar1 - 0x30 < 10) goto switchD_038cf440_caseD_20;
      }
      if (bVar1 != 0) {
        param_2[lVar6 + 1] = bVar1;
        iVar5 = (int)lVar6 + 2;
        param_2[iVar5] = 0;
        iVar4 = (int)param_1[2];
        goto LAB_038cf3f4;
      }
LAB_038cf488:
      *param_2 = 0;
      uVar2 = 1;
      iVar5 = *(int *)((long)param_1 + 0x14);
      goto LAB_038cf388;
    }
    iVar5 = iVar5 + 2;
  }
LAB_038cf3f4:
  iVar5 = iVar5 + iVar4;
  uVar2 = 1;
LAB_038cf388:
  *(int *)(param_1 + 2) = iVar5;
  return uVar2;
}

