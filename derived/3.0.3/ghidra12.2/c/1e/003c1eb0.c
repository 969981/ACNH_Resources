
void FUN_003c1eb0(long param_1,long param_2,long param_3,long param_4,int param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_88;
  
  lVar3 = FUN_03b38a74();
  iVar1 = *(int *)(lVar3 + (ulong)param_6 * 4 + 0xe0);
  lVar3 = FUN_03b38a74();
  if (*(int *)(param_3 + 4) != 0) {
    param_3 = param_3 + (long)param_5 * 0x18;
    fVar14 = *(float *)(param_3 + 8);
    fVar11 = *(float *)(param_3 + 0xc);
    fVar13 = *(float *)(param_3 + 0x10);
    fVar12 = *(float *)(param_3 + 0x14);
    fVar10 = *(float *)(param_3 + 0x18);
    fVar9 = *(float *)(param_3 + 0x1c);
    lVar3 = FUN_03b38a74();
    iVar2 = *(int *)(lVar3 + (ulong)param_6 * 4 + 0xe4);
    goto joined_r0x003c1f34;
  }
  local_88._4_4_ = 0;
  if (*(char *)(lVar3 + 0xa65) != '\0') {
    local_88._4_4_ = 0x1000000;
  }
  switch(*(undefined4 *)(param_1 + 0x1f8)) {
  default:
    local_88 = (ulong)local_88._4_4_ << 0x20;
    break;
  case 1:
    local_88 = (ulong)local_88._4_4_ << 0x20;
    goto LAB_003c2070;
  case 2:
    local_88 = (ulong)local_88._4_4_ << 0x20;
    goto LAB_003c2094;
  case 3:
    local_88 = CONCAT44(local_88._4_4_,1);
    break;
  case 4:
    local_88 = CONCAT35(local_88._5_3_,0x100000001);
    break;
  case 5:
    uVar5 = 1;
    goto LAB_003c2090;
  case 6:
    local_88 = CONCAT44(local_88._4_4_,2);
    break;
  case 7:
    local_88 = CONCAT44(local_88._4_4_,2);
LAB_003c2070:
    local_88._0_5_ = CONCAT14(1,(undefined4)local_88);
    break;
  case 8:
    uVar5 = 2;
LAB_003c2090:
    local_88 = CONCAT44(local_88._4_4_,uVar5);
LAB_003c2094:
    local_88._0_6_ = CONCAT24(0x101,(undefined4)local_88);
  }
  if (iVar1 - 1U < 2) {
    fVar11 = 0.0;
    iVar2 = *(int *)(param_1 + 0x1c4);
    if ((iVar2 < 2) || (*(int *)(param_1 + 500) != 1)) {
      if ((*(int *)(param_1 + 0x1c0) != 0) && (*(int *)(param_1 + 500) != 0)) {
        lVar3 = FUN_03b38a74();
        if (*(char *)(lVar3 + 0xa65) == '\0') {
          fVar14 = *(float *)(param_3 + 0x38);
          if (*(int *)(param_1 + 0x1c0) != 1) goto LAB_003c2180;
          fVar13 = (float)FUN_003b7ccc(fVar14,&local_88,iVar1);
          fVar12 = 0.0;
          goto LAB_003c21c8;
        }
        iVar2 = *(int *)(param_1 + 0x1c4);
      }
      fVar14 = *(float *)(param_3 + 0x38);
      if ((param_5 == 0) && (iVar2 == 2)) {
LAB_003c2150:
        fVar13 = -1.0;
LAB_003c2198:
        fVar14 = fVar14 + fVar13;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x1c0);
        if ((param_5 == 1) && (iVar2 == 2)) {
          if (iVar6 == 1) goto LAB_003c2150;
LAB_003c2194:
          fVar13 = 1.0;
          goto LAB_003c2198;
        }
        if (iVar6 == 1) goto LAB_003c2150;
        if (iVar6 == 2) goto LAB_003c2194;
      }
      fVar13 = (float)FUN_003b7ccc(fVar14,&local_88,iVar1);
LAB_003c21b8:
      fVar12 = (float)FUN_003b7ccc(0.0 - fVar14,&local_88,iVar1);
    }
    else {
      if (param_5 == 1) {
        fVar14 = *(float *)(param_3 + 0x38);
LAB_003c2180:
        fVar13 = 0.0;
        goto LAB_003c21b8;
      }
      fVar12 = 0.0;
      if (param_5 == 0) {
        fVar13 = (float)FUN_003b7ccc(*(undefined4 *)(param_3 + 0x38),&local_88,iVar1);
      }
      else {
        fVar13 = 0.0;
      }
    }
LAB_003c21c8:
    if (iVar1 == 2) {
      fVar11 = (float)FUN_003b7d74(*(undefined4 *)(param_3 + 0x3c),&local_88);
      fVar14 = 2.0 - *(float *)(param_3 + 0x3c);
LAB_003c2210:
      fVar10 = (float)FUN_003b7d74(fVar14,&local_88);
    }
    else {
      fVar10 = 0.0;
      if (iVar1 == 1) goto LAB_003c21dc;
    }
  }
  else {
    fVar11 = 0.0;
    fVar13 = 0.0;
    fVar12 = 0.0;
    fVar10 = 0.0;
    if (iVar1 == 0) {
      fVar13 = (float)FUN_003b7ccc(&local_88,0);
      fVar12 = fVar13;
LAB_003c21dc:
      fVar11 = (float)FUN_003b7d74(0,&local_88);
      fVar14 = 2.0;
      goto LAB_003c2210;
    }
  }
  fVar14 = fVar13 * fVar11;
  fVar11 = fVar12 * fVar11;
  fVar13 = fVar13 * fVar10;
  fVar12 = fVar12 * fVar10;
  fVar9 = 0.0;
  fVar10 = 0.0;
  lVar3 = FUN_03b38a74();
  iVar2 = *(int *)(lVar3 + (ulong)param_6 * 4 + 0xe4);
joined_r0x003c1f34:
  if (iVar2 == 1) {
    if (iVar1 == 2) {
      fVar14 = fVar13 + fVar14;
      fVar11 = fVar12 + fVar11;
      fVar12 = 0.0;
      fVar13 = 0.0;
    }
  }
  else if (iVar2 == 0) {
    if (iVar1 == 2) {
      fVar14 = fVar13 + fVar14;
      fVar11 = fVar12 + fVar11;
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = (fVar11 + fVar14) * 0.5;
      fVar11 = fVar14;
    }
    else if (iVar1 == 1) {
      fVar14 = (fVar11 + fVar14) * 0.5;
      fVar11 = fVar14;
    }
  }
  if (param_4 == 0) {
    lVar3 = 0;
    do {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
      iVar1 = 0;
      iVar6 = (int)lVar3;
      if (iVar2 != 0) {
        iVar1 = iVar6 / iVar2;
      }
      iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 0x10))(*(long **)(param_1 + 0x280));
      fVar8 = 0.0;
      if (iVar1 < iVar2) {
        iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = iVar6 / iVar2;
        }
        fVar8 = fVar9;
        switch(iVar6 - iVar1 * iVar2) {
        case 0:
          fVar8 = fVar14;
          break;
        case 1:
          fVar8 = fVar11;
          break;
        case 2:
          fVar8 = fVar13;
          break;
        case 3:
          fVar8 = fVar12;
          break;
        case 4:
          fVar8 = fVar10;
        }
      }
      *(float *)(param_2 + lVar3 * 4) = fVar8;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x18);
  }
  else {
    uVar7 = 0;
    do {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
      iVar1 = 0;
      iVar6 = (int)uVar7;
      if (iVar2 != 0) {
        iVar1 = iVar6 / iVar2;
      }
      iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 0x10))(*(long **)(param_1 + 0x280));
      fVar8 = 0.0;
      if (iVar1 < iVar2) {
        uVar4 = FUN_003c0440(param_4);
        if ((((uVar4 & 1) == 0) || (uVar4 = FUN_003c0408(param_4), (uVar4 & 1) == 0)) ||
           (uVar4 = FUN_003c0420(param_4,iVar1), (uVar4 & 1) == 0)) {
          iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = iVar6 / iVar2;
          }
          fVar8 = fVar14;
          switch(iVar6 - iVar1 * iVar2) {
          case 1:
            fVar8 = fVar11;
            break;
          case 2:
            fVar8 = fVar13;
            break;
          case 3:
            fVar8 = fVar12;
            break;
          case 4:
            fVar8 = fVar10;
            break;
          case 5:
            fVar8 = fVar9;
          }
        }
        else {
          fVar8 = (float)FUN_003c03e0(param_4,param_5,uVar7 & 0xffffffff);
        }
      }
      *(float *)(param_2 + uVar7 * 4) = fVar8;
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x18);
  }
  return;
}

