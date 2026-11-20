
void FUN_03d85320(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  long lStack_28;
  
  if (*(int *)(param_2 + 8) != 1) {
    if (*(int *)(param_2 + 8) != 0) {
      return;
    }
    switch(*(undefined4 *)(param_2 + 0xc)) {
    case 0:
      if ((*(int *)(param_2 + 0x10) != 8) && (*(int *)(param_2 + 0x10) != 1)) {
        return;
      }
      goto LAB_03d85430;
    case 1:
      if (*(int *)(param_2 + 0x10) - 2U < 2) break;
      if (*(int *)(param_2 + 0x10) != 0) {
        return;
      }
LAB_03d854f4:
      uVar4 = *(undefined4 *)(param_1 + 0x2b8);
      uVar2 = 9;
      goto LAB_03d85728;
    case 2:
    case 9:
      if (*(int *)(param_2 + 0x10) != 0) {
        return;
      }
      goto LAB_03d853c8;
    default:
      goto switchD_03d85368_caseD_3;
    case 4:
      if ((*(int *)(param_2 + 0x10) != 0xb) && (*(int *)(param_2 + 0x10) != 5)) {
        return;
      }
LAB_03d85430:
      uStack_3c = *(undefined4 *)(param_1 + 0x2b8);
      local_40 = 7;
LAB_03d85438:
      local_38 = *(undefined4 *)(param_1 + 700);
      uStack_34 = 0xffffffff;
      puVar1 = *(undefined8 **)(param_1 + 0x260);
      local_30 = 0;
      lStack_28 = param_1;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,&local_40);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x268);
      if (puVar1 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar1)(puVar1,&local_40);
      return;
    case 5:
      if (1 < *(int *)(param_2 + 0x10) - 6U) {
        if (*(int *)(param_2 + 0x10) != 4) {
          return;
        }
        goto LAB_03d854f4;
      }
      break;
    case 6:
    case 0xc:
      if (*(int *)(param_2 + 0x10) != 4) {
        return;
      }
LAB_03d853c8:
      uStack_3c = *(undefined4 *)(param_1 + 0x2b8);
      local_40 = 0xd;
      goto LAB_03d85438;
    case 8:
      iVar6 = *(int *)(param_2 + 0x10);
      if (1 < iVar6 - 9U) {
        if (iVar6 == 0) goto LAB_03d854f4;
        if (iVar6 != 2) {
          return;
        }
      }
      break;
    case 0xb:
      iVar6 = *(int *)(param_2 + 0x10);
      if (1 < iVar6 - 0xcU) {
        if (iVar6 == 4) goto LAB_03d854f4;
        if (iVar6 != 6) {
          return;
        }
      }
    }
    uVar4 = *(undefined4 *)(param_1 + 0x2b8);
    uVar2 = 0xb;
    goto LAB_03d85728;
  }
  switch(*(undefined4 *)(param_2 + 0xc)) {
  case 0:
    if ((*(int *)(param_2 + 0x10) != 8) && (*(int *)(param_2 + 0x10) != 1)) {
      return;
    }
    goto LAB_03d855bc;
  case 1:
    iVar6 = *(int *)(param_2 + 0x10);
    if ((iVar6 == 9) || (iVar6 == 2)) {
      FUN_03d5e304(param_1,6,*(undefined4 *)(param_1 + 0x2b8),*(undefined4 *)(param_1 + 700),
                   0xffffffff,0);
      iVar6 = *(int *)(param_2 + 0x10);
      if (iVar6 == 2) goto LAB_03d85700;
    }
    if (iVar6 != 0) {
      if (iVar6 != 3) {
        return;
      }
LAB_03d85700:
      uVar4 = *(undefined4 *)(param_1 + 0x2b8);
      uVar5 = *(undefined4 *)(param_1 + 700);
      uVar2 = 0xc;
      goto LAB_03d85734;
    }
    break;
  case 2:
  case 9:
    if (*(int *)(param_2 + 0x10) != 0) {
      return;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x2b8);
    uVar5 = *(undefined4 *)(param_1 + 700);
    uVar2 = 0xe;
    goto LAB_03d85734;
  case 3:
    if (*(int *)(param_2 + 0x10) != 1) {
      return;
    }
    if (1 < *(int *)(param_1 + 0x2b8) - 3U) {
      return;
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x218) + 0x18);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        if (**(long **)(lVar7 + 0x20) != 0) {
          lVar8 = *(long *)(**(long **)(lVar7 + 0x20) + 0x10);
        }
      }
      if (lVar8 == *(long *)(param_1 + 0x218)) {
        return;
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 0x280);
    uVar3 = 0;
    goto LAB_03d85774;
  case 4:
    if ((*(int *)(param_2 + 0x10) != 0xb) && (*(int *)(param_2 + 0x10) != 5)) {
      return;
    }
LAB_03d855bc:
    uVar4 = *(undefined4 *)(param_1 + 0x2b8);
    uVar5 = *(undefined4 *)(param_1 + 700);
    uVar2 = 8;
    goto LAB_03d85734;
  case 5:
    iVar6 = *(int *)(param_2 + 0x10);
    if ((iVar6 == 0xc) || (iVar6 == 6)) {
      FUN_03d5e304(param_1,6,*(undefined4 *)(param_1 + 0x2b8),*(undefined4 *)(param_1 + 700),
                   0xffffffff,0);
      iVar6 = *(int *)(param_2 + 0x10);
      if (iVar6 == 6) goto LAB_03d85700;
    }
    if (iVar6 != 4) {
      if (iVar6 != 7) {
        return;
      }
      goto LAB_03d85700;
    }
    break;
  case 6:
  case 0xc:
    if (*(int *)(param_2 + 0x10) != 4) {
      return;
    }
    uStack_3c = *(undefined4 *)(param_1 + 0x2b8);
    local_40 = 0xe;
    goto LAB_03d85438;
  case 7:
    if (*(int *)(param_2 + 0x10) != 5) {
      return;
    }
    if (1 < *(int *)(param_1 + 0x2b8) - 3U) {
      return;
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x218) + 0x18);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        if (**(long **)(lVar7 + 0x20) != 0) {
          lVar8 = *(long *)(**(long **)(lVar7 + 0x20) + 0x10);
        }
      }
      if (lVar8 == *(long *)(param_1 + 0x218)) {
        return;
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 0x280);
    uVar3 = 4;
LAB_03d85774:
    FUN_03c83760(uVar2,uVar3);
    return;
  case 8:
    iVar6 = *(int *)(param_2 + 0x10);
    if ((iVar6 == 9) || (iVar6 == 2)) {
      FUN_03d5e304(param_1,6,*(undefined4 *)(param_1 + 0x2b8),*(undefined4 *)(param_1 + 700),
                   0xffffffff,0);
      iVar6 = *(int *)(param_2 + 0x10);
      if (iVar6 == 2) goto LAB_03d85700;
    }
    if (iVar6 - 9U < 2) goto LAB_03d85700;
    if (iVar6 != 0) {
      return;
    }
    break;
  default:
switchD_03d85368_caseD_3:
    return;
  case 0xb:
    iVar6 = *(int *)(param_2 + 0x10);
    if ((iVar6 == 0xc) || (iVar6 == 6)) {
      FUN_03d5e304(param_1,6,*(undefined4 *)(param_1 + 0x2b8),*(undefined4 *)(param_1 + 700),
                   0xffffffff,0);
      iVar6 = *(int *)(param_2 + 0x10);
      if (iVar6 == 6) goto LAB_03d85700;
    }
    if (iVar6 - 0xcU < 2) goto LAB_03d85700;
    if (iVar6 != 4) {
      return;
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 0x2b8);
  uVar2 = 10;
LAB_03d85728:
  uVar5 = *(undefined4 *)(param_1 + 700);
LAB_03d85734:
  FUN_03d5e304(param_1,uVar2,uVar4,uVar5,0xffffffff,0);
  return;
}

