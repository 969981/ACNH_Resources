
void FUN_0096561c(long param_1,long param_2,float *param_3,float *param_4,long param_5,
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
  int iVar13;
  float fVar14;
  float local_40;
  float fStack_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float local_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float local_14;
  
  uVar6 = 0;
  switch(param_6) {
  case 1:
    break;
  case 2:
switchD_00965650_caseD_2:
    uVar6 = 0xffffffff;
    break;
  case 3:
    uVar6 = 2;
    break;
  case 4:
    local_24 = param_3[1];
    fStack_18 = param_3[2];
    fStack_3c = param_4[1];
    fStack_30 = param_4[2];
    fVar12 = fStack_30 - local_24;
    fVar11 = fStack_3c - fStack_18;
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
LAB_009656e4:
      iVar13 = *(int *)(param_5 + 0xc);
      local_1c = (float)*(int *)(param_5 + 8) * 5.0;
      fStack_28 = local_1c + *(float *)(param_1 + 0x28);
      bVar2 = *(char *)(param_2 + 0x4c99) != '\0' && (param_7 == 8 || param_7 == 0x1c);
      uVar5 = 4;
      uVar1 = *(undefined4 *)PTR_DAT_04bb3238;
      goto LAB_00965858;
    }
    fVar7 = *param_3;
    fVar14 = fVar7;
    if (fStack_18 <= fVar7) {
      fVar14 = fStack_18;
    }
    fVar8 = fVar7;
    if (fVar7 <= fStack_18) {
      fVar8 = fStack_18;
    }
    fVar10 = local_24;
    if (fStack_18 <= local_24) {
      fVar10 = fStack_18;
    }
    fVar9 = local_24;
    if (local_24 <= fStack_18) {
      fVar9 = fStack_18;
    }
    if (local_24 <= fVar7) {
      fVar14 = fVar10;
    }
    if (fVar7 <= local_24) {
      fVar8 = fVar9;
    }
    if (*(float *)(param_1 + 0x30) <= fVar8 - fVar14) goto switchD_00965650_caseD_2;
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
    local_24 = param_3[1];
    fStack_18 = param_3[2];
    fStack_3c = param_4[1];
    fStack_30 = param_4[2];
    fVar12 = fStack_3c - fStack_18;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (fStack_30 - local_24 <= 1.25) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar12)) {
        bVar2 = fVar12 < 1.25;
        bVar3 = fVar12 == 1.25;
        bVar4 = false;
      }
    }
    if (!bVar3 && bVar2 == bVar4) goto LAB_009656e4;
    fVar14 = *param_3;
    fVar11 = fVar14;
    if (fStack_18 <= fVar14) {
      fVar11 = fStack_18;
    }
    fVar7 = fVar14;
    if (fVar14 <= fStack_18) {
      fVar7 = fStack_18;
    }
    fVar8 = local_24;
    if (fStack_18 <= local_24) {
      fVar8 = fStack_18;
    }
    fVar10 = local_24;
    if (local_24 <= fStack_18) {
      fVar10 = fStack_18;
    }
    if (local_24 <= fVar14) {
      fVar11 = fVar8;
    }
    if (fVar14 <= local_24) {
      fVar7 = fVar10;
    }
    if (*(float *)(param_1 + 0x30) <= fVar7 - fVar11) {
      return;
    }
    bVar2 = true;
    if ((-1.25 <= fStack_30 - local_24) && (bVar2 = false, !NAN(fVar12))) {
      bVar2 = fVar12 < -1.25;
    }
    if (!bVar2) {
      fVar11 = *param_4;
      fVar12 = fVar11;
      if (fStack_30 <= fVar11) {
        fVar12 = fStack_30;
      }
      fVar14 = fVar11;
      if (fVar11 <= fStack_30) {
        fVar14 = fStack_30;
      }
      fVar7 = fStack_3c;
      if (fStack_30 <= fStack_3c) {
        fVar7 = fStack_30;
      }
      fVar8 = fStack_3c;
      if (fStack_3c <= fStack_30) {
        fVar8 = fStack_30;
      }
      if (fStack_3c <= fVar11) {
        fVar12 = fVar7;
      }
      if (fVar11 <= fStack_3c) {
        fVar14 = fVar8;
      }
      if (fVar14 - fVar12 < *(float *)(param_1 + 0x30)) {
        return;
      }
      goto switchD_00965650_caseD_2;
    }
    uVar6 = 0xfffffffe;
  }
  iVar13 = *(int *)(param_5 + 0xc);
  fStack_30 = param_3[1];
  fStack_3c = param_3[2];
  local_1c = (float)*(int *)(param_5 + 8) * 5.0;
  fStack_28 = local_1c + *(float *)(param_1 + 0x28);
  if (uVar6 < 4) {
    uVar5 = *(undefined8 *)(&UNK_04057700 + (long)(int)uVar6 * 8);
  }
  else {
    uVar5 = 8;
  }
  bVar2 = false;
  uVar1 = *(undefined4 *)PTR_DAT_04bb3238;
  local_24 = fStack_30;
  fStack_18 = fStack_3c;
LAB_00965858:
  local_14 = (float)iVar13 * 5.0;
  local_40 = local_1c;
  local_38 = local_14;
  local_34 = fStack_28;
  local_2c = local_14;
  fStack_20 = local_14;
  FUN_0096693c(param_2,&local_1c,&fStack_28,&local_34,&local_40,uVar5,uVar1,0,0,bVar2,0);
  return;
}

