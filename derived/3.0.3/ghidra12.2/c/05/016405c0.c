
void FUN_016405c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  puVar3 = PTR_DAT_04bb5ce0;
  lVar8 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar8 == 0) {
    uVar11 = 0;
  }
  else {
    iVar4 = *(int *)(lVar8 + 0xe48);
    uVar11 = 1;
    if (iVar4 != 1) {
      if ((iVar4 < 2) || (5 < iVar4)) {
        if ((iVar4 < 6) || (0x10 < iVar4)) {
          if ((iVar4 < 0x11) || (0x12 < iVar4)) {
            uVar10 = 6;
            if (iVar4 != 0x14) {
              uVar10 = 3;
            }
            uVar11 = 5;
            if (iVar4 != 0x13) {
              uVar11 = uVar10;
            }
          }
          else {
            uVar11 = 4;
          }
        }
        else {
          uVar11 = 3;
        }
      }
      else {
        uVar11 = 2;
      }
    }
  }
  uVar7 = 0;
  switch(uVar11) {
  case 1:
    break;
  case 3:
    if (lVar8 != 0) {
      iVar4 = FUN_017f8a28(lVar8 + 0xda0);
      if (iVar4 == 2) {
        uVar7 = 3;
      }
      else {
        uVar7 = 2;
        if (*(long *)puVar3 != 0) {
          iVar4 = FUN_017f8990(*(long *)puVar3 + 0xda0);
          uVar7 = 2;
          if (iVar4 == 2) {
            uVar7 = 3;
          }
        }
      }
      break;
    }
  default:
    uVar7 = 2;
    break;
  case 4:
switchD_016406c0_caseD_4:
    uVar7 = 4;
    break;
  case 5:
    uVar7 = 6;
    break;
  case 6:
    if ((lVar8 != 0) &&
       (uVar2 = (*(int *)(lVar8 + 0xf68) * 2 + 4) * (*(int *)(lVar8 + 0xf64) * 2 + 4), 0x24 < uVar2)
       ) {
      if (0x3c < uVar2) {
        uVar7 = 2;
        if ((0x40 < uVar2) && (uVar7 = 5, 100 < uVar2)) {
          uVar7 = 2;
        }
        break;
      }
      goto switchD_016406c0_caseD_4;
    }
  case 2:
    uVar7 = 1;
  }
  if (uVar7 < *(uint *)(*(long *)(param_1 + 0x1e8) + 400)) {
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x1e8) + 0x198) + (long)(int)uVar7 * 8);
  }
  else {
    lVar8 = 0;
  }
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0x158) + 0xf0))(lVar8 + 0x158);
  *(undefined4 *)((long)param_2 + 0x14) = *puVar5;
  *(undefined4 *)(param_2 + 3) = puVar5[1];
  *(undefined4 *)((long)param_2 + 0x1c) = puVar5[2];
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0x1f0) + 0xf0))(lVar8 + 0x1f0);
  *(undefined4 *)(param_2 + 5) = *puVar5;
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0x1c0) + 0xf0))(lVar8 + 0x1c0);
  *(undefined4 *)((long)param_2 + 0x24) = *puVar5;
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 400) + 0xf0))(lVar8 + 400);
  uVar11 = *puVar5;
  *(undefined4 *)(param_2 + 2) = 0x3f800000;
  *(undefined4 *)(param_2 + 4) = uVar11;
  iVar4 = *(int *)(param_1 + 0x98);
  if (iVar4 == 2) {
    uVar7 = 0;
    if (*(long *)puVar3 != 0) {
      uVar7 = (uint)*(byte *)(*(long *)puVar3 + 0xf70);
    }
    if (uVar7 < *(uint *)(*(long *)(param_1 + 0x1e8) + 0x1720)) {
      lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x1e8) + 0x1728) + (ulong)uVar7 * 8);
    }
    else {
      lVar8 = 0;
    }
    puVar6 = (undefined8 *)(**(code **)(*(long *)(lVar8 + 0x158) + 0xf0))(lVar8 + 0x158);
    uVar1 = puVar6[1];
    *param_2 = *puVar6;
    param_2[1] = uVar1;
    if (*(long *)puVar3 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)(*(long *)puVar3 + 0xf74);
    }
    *(undefined4 *)(param_2 + 2) = uVar11;
  }
  else {
    if (iVar4 == 1) {
      lVar9 = *(long *)(lVar8 + 0x290);
      lVar8 = lVar8 + 0x290;
    }
    else {
      if (iVar4 != 0) {
        return;
      }
      lVar9 = *(long *)(lVar8 + 0x220);
      lVar8 = lVar8 + 0x220;
    }
    puVar6 = (undefined8 *)(**(code **)(lVar9 + 0xf0))(lVar8);
    uVar1 = puVar6[1];
    *param_2 = *puVar6;
    param_2[1] = uVar1;
  }
  return;
}

