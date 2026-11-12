
void FUN_009666ac(long param_1,long param_2,float *param_3,float *param_4,long param_5,
                 undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  
  uVar6 = 0;
  switch(param_6) {
  case 1:
    break;
  case 2:
switchD_009666e0_caseD_2:
    uVar6 = 0xffffffff;
    break;
  case 3:
    uVar6 = 2;
    break;
  case 4:
    fStack_24 = param_3[1];
    local_18 = param_3[2];
    local_3c = param_4[1];
    fStack_30 = param_4[2];
    fVar12 = fStack_30 - fStack_24;
    fVar11 = local_3c - local_18;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (fVar12 <= 1.25) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar11)) {
        bVar2 = fVar11 < 1.25;
        bVar3 = fVar11 == 1.25;
        bVar4 = false;
      }
    }
    if (!bVar3 && bVar2 == bVar4) {
LAB_00966774:
      fStack_14 = (float)*(int *)(param_5 + 0xc) * 5.0;
      fStack_1c = (float)*(int *)(param_5 + 8) * 5.0 + *(float *)(param_1 + 0x28);
      local_20 = fStack_14 + *(float *)(param_1 + 0x28);
      bVar2 = *(char *)(param_2 + 0x4c99) != '\0' && (param_7 == 8 || param_7 == 0x1c);
      uVar5 = 4;
      uVar1 = *(undefined4 *)PTR_DAT_04bb3238;
      goto LAB_009668f0;
    }
    fVar7 = *param_3;
    fVar13 = fVar7;
    if (local_18 <= fVar7) {
      fVar13 = local_18;
    }
    fVar8 = fVar7;
    if (fVar7 <= local_18) {
      fVar8 = local_18;
    }
    fVar10 = fStack_24;
    if (local_18 <= fStack_24) {
      fVar10 = local_18;
    }
    fVar9 = fStack_24;
    if (fStack_24 <= local_18) {
      fVar9 = local_18;
    }
    if (fStack_24 <= fVar7) {
      fVar13 = fVar10;
    }
    if (fVar7 <= fStack_24) {
      fVar8 = fVar9;
    }
    if (*(float *)(param_1 + 0x30) <= fVar8 - fVar13) goto switchD_009666e0_caseD_2;
    bVar2 = true;
    if ((-1.25 <= fVar11) && (bVar2 = false, !NAN(fVar12))) {
      bVar2 = fVar12 < -1.25;
    }
    uVar6 = 0xfffffffe;
    if (!bVar2) {
      uVar6 = 0xffffffff;
    }
    break;
  case 5:
    uVar6 = 3;
    break;
  default:
    fStack_24 = param_3[1];
    local_18 = param_3[2];
    local_3c = param_4[1];
    fStack_30 = param_4[2];
    fVar12 = local_3c - local_18;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (fStack_30 - fStack_24 <= 1.25) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar12)) {
        bVar2 = fVar12 < 1.25;
        bVar3 = fVar12 == 1.25;
        bVar4 = false;
      }
    }
    if (!bVar3 && bVar2 == bVar4) goto LAB_00966774;
    fVar13 = *param_3;
    fVar11 = fVar13;
    if (local_18 <= fVar13) {
      fVar11 = local_18;
    }
    fVar7 = fVar13;
    if (fVar13 <= local_18) {
      fVar7 = local_18;
    }
    fVar8 = fStack_24;
    if (local_18 <= fStack_24) {
      fVar8 = local_18;
    }
    fVar10 = fStack_24;
    if (fStack_24 <= local_18) {
      fVar10 = local_18;
    }
    if (fStack_24 <= fVar13) {
      fVar11 = fVar8;
    }
    if (fVar13 <= fStack_24) {
      fVar7 = fVar10;
    }
    if (*(float *)(param_1 + 0x30) <= fVar7 - fVar11) {
      return;
    }
    bVar2 = true;
    if ((-1.25 <= fStack_30 - fStack_24) && (bVar2 = false, !NAN(fVar12))) {
      bVar2 = fVar12 < -1.25;
    }
    if (!bVar2) {
      fVar11 = *param_4;
      fVar12 = fVar11;
      if (fStack_30 <= fVar11) {
        fVar12 = fStack_30;
      }
      fVar13 = fVar11;
      if (fVar11 <= fStack_30) {
        fVar13 = fStack_30;
      }
      fVar7 = local_3c;
      if (fStack_30 <= local_3c) {
        fVar7 = fStack_30;
      }
      fVar8 = local_3c;
      if (local_3c <= fStack_30) {
        fVar8 = fStack_30;
      }
      if (local_3c <= fVar11) {
        fVar12 = fVar7;
      }
      if (fVar11 <= local_3c) {
        fVar13 = fVar8;
      }
      if (fVar13 - fVar12 < *(float *)(param_1 + 0x30)) {
        return;
      }
      goto switchD_009666e0_caseD_2;
    }
    uVar6 = 0xfffffffe;
  }
  fStack_14 = (float)*(int *)(param_5 + 0xc) * 5.0;
  fStack_30 = param_3[1];
  local_3c = param_3[2];
  fStack_1c = (float)*(int *)(param_5 + 8) * 5.0 + *(float *)(param_1 + 0x28);
  local_20 = fStack_14 + *(float *)(param_1 + 0x28);
  if (uVar6 < 4) {
    uVar5 = *(undefined8 *)(&UNK_04057700 + (long)(int)uVar6 * 8);
  }
  else {
    uVar5 = 8;
  }
  bVar2 = false;
  uVar1 = *(undefined4 *)PTR_DAT_04bb3238;
  fStack_24 = fStack_30;
  local_18 = local_3c;
LAB_009668f0:
  local_40 = fStack_1c;
  local_38 = fStack_14;
  local_34 = fStack_1c;
  local_2c = local_20;
  local_28 = fStack_1c;
  FUN_0096693c(param_2,&fStack_1c,&local_28,&local_34,&local_40,uVar5,uVar1,0,0,bVar2,0);
  return;
}

