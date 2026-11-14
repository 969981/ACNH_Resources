
uint FUN_016f0c64(float *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_cc;
  float fStack_c8;
  float local_c4;
  float local_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  float local_9c;
  float fStack_98;
  float local_94;
  float fStack_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  float fStack_78;
  float local_74;
  float local_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined2 local_64;
  undefined2 uStack_62;
  
  fVar9 = *param_1;
  fVar12 = 0.0;
  fVar10 = param_1[2];
  fVar7 = param_1[3] - fVar9;
  fVar8 = param_1[5] - fVar10;
  fVar11 = SQRT(fVar7 * fVar7 + 0.0 + fVar8 * fVar8);
  fVar13 = fVar8;
  fVar14 = fVar7;
  if (0.0 < fVar11) {
    fVar11 = 1.0 / fVar11;
    fVar14 = fVar7 * fVar11;
    fVar12 = fVar11 * 0.0;
    fVar13 = fVar8 * fVar11;
  }
  if (*(char *)((long)param_1 + 0x1a) == '\0') {
    if (*(char *)((long)param_1 + 0x19) == '\0') {
      fVar14 = fVar14 * 10.0;
      fVar12 = fVar12 * 10.0;
      fVar7 = fVar13 * 10.0;
    }
    else {
      uVar3 = FUN_006f0400();
      fVar7 = (float)uVar3 * 8.381903e-08;
      fVar8 = (float)(uVar3 + 0x20000000 & 0xc0000000) * 8.381903e-08;
      if (fVar8 <= 360.0) {
        if (fVar8 < 0.0) {
          fVar9 = fVar8 / 360.0 + -1.0;
          goto LAB_016f0d90;
        }
      }
      else {
        fVar9 = fVar8 / 360.0;
LAB_016f0d90:
        fVar8 = fVar8 - (float)(int)fVar9 * 360.0;
      }
      if (fVar7 <= 360.0) {
        if (fVar7 < 0.0) {
          fVar9 = fVar7 / 360.0 + -1.0;
          goto LAB_016f0dcc;
        }
      }
      else {
        fVar9 = fVar7 / 360.0;
LAB_016f0dcc:
        fVar7 = fVar7 - (float)(int)fVar9 * 360.0;
      }
      fVar9 = 0.0;
      if (fVar8 != fVar7) {
        fVar10 = fVar8 - fVar7;
        fVar9 = fVar10;
        if (fVar8 <= fVar7) {
          fVar9 = fVar7 - fVar8;
        }
        if (fVar9 <= 180.0) {
          fVar9 = fVar7 - fVar8;
          if (fVar7 < fVar8) goto LAB_016f0e28;
        }
        else {
          fVar10 = 360.0 - fVar9;
          fVar9 = fVar10;
          if (fVar8 <= fVar7) {
LAB_016f0e28:
            fVar9 = -fVar10;
          }
        }
      }
      fVar10 = param_1[2];
      fVar7 = -fVar9;
      if (0.0 <= fVar9) {
        fVar7 = fVar9;
      }
      fVar7 = (fVar7 / 45.0) * 4.1421356 + 10.0;
      fVar14 = fVar14 * fVar7;
      fVar12 = fVar12 * fVar7;
      fVar7 = fVar13 * fVar7;
      fVar9 = *param_1;
    }
  }
  else {
    fVar8 = SQRT(fVar8 * fVar8 + fVar7 * fVar7);
    fVar7 = 10.0;
    if (fVar8 <= 10.0) {
      fVar7 = fVar8;
    }
    fVar14 = fVar7 * fVar14;
    fVar12 = fVar7 * fVar12;
    fVar7 = fVar7 * fVar13;
  }
  fVar9 = fVar9 + fVar14;
  fVar10 = fVar10 + fVar7;
  fVar12 = fVar12 + param_1[1];
  local_80 = *(undefined8 *)param_1;
  uStack_62 = (undefined2)((ulong)*(undefined8 *)(param_1 + 6) >> 0x30);
  _uStack_68 = CONCAT24(1,(int)*(undefined8 *)(param_1 + 6));
  fStack_78 = (float)*(undefined8 *)(param_1 + 2);
  _fStack_78 = CONCAT44(fVar9,fStack_78);
  _local_70 = CONCAT44(fVar10,fVar12);
  if (param_2 != (float *)0x0) {
    *param_2 = fVar9;
    param_2[1] = fVar12;
    param_2[2] = fVar10;
  }
  if (*(char *)(param_1 + 6) != '\0') {
    lVar4 = FUN_0251e98c(1);
    pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x2a0) + 0xf0))(lVar4 + 0x2a0);
    fVar13 = *pfVar5;
    local_84 = 1;
    local_8c = 0x103f800000;
    fStack_90 = fVar13 * 0.6;
    local_9c = fVar9;
    fStack_98 = fVar12;
    local_94 = fVar10;
    iVar1 = FUN_016ed290(&local_9c,0,0,0);
    local_b0 = CONCAT44(fStack_90,local_94);
    local_b8 = CONCAT44(fStack_98,local_9c);
    _uStack_a8 = CONCAT44(4,(int)local_8c);
    uStack_a0 = local_84;
    iVar2 = FUN_016ed290(&local_b8,0,0,0);
    if ((iVar1 != 0) || (iVar2 == 0)) {
      fVar14 = (float)local_80;
      fVar7 = fStack_78;
      local_ba = 0;
      local_8c = CONCAT44(0x67,(undefined4)local_8c);
      local_bc = 0x101;
      fVar10 = (fVar10 - fStack_78) * 0.25;
      fVar8 = (fVar9 - (float)local_80) * 0.25;
      fVar12 = local_80._4_4_ + 0.0;
      local_cc = (float)local_80 + fVar8;
      fVar13 = fVar13 * 0.9;
      local_c4 = fStack_78 + fVar10;
      fStack_c8 = fVar12;
      local_c0 = fVar13;
      local_9c = local_cc;
      fStack_98 = fVar12;
      local_94 = local_c4;
      fStack_90 = fVar13;
      iVar1 = FUN_016ed290(&local_9c,0,0,0);
      if ((iVar1 == 0) && (uVar6 = FUN_016e9c80(fVar13,&local_cc,1,1,0), (uVar6 & 1) != 0)) {
LAB_016f10ac:
        uVar3 = 1;
        goto LAB_016f10c0;
      }
      local_8c = CONCAT44(0x67,(undefined4)local_8c);
      local_ba = 0;
      local_bc = 0x101;
      local_cc = fVar14 + fVar8 + fVar8;
      local_c4 = fVar7 + fVar10 + fVar10;
      fStack_c8 = fVar12;
      local_c0 = fVar13;
      local_9c = local_cc;
      fStack_98 = fVar12;
      local_94 = local_c4;
      fStack_90 = fVar13;
      iVar1 = FUN_016ed290(&local_9c,0,0,0);
      if (iVar1 == 0) {
        uVar6 = FUN_016e9c80(local_c0,&local_cc,(undefined1)local_bc,local_bc._1_1_,local_ba);
        if ((uVar6 & 1) != 0) goto LAB_016f10ac;
      }
      local_8c = CONCAT44(0x67,(undefined4)local_8c);
      local_ba = 0;
      local_bc = 0x101;
      local_cc = fVar14 + fVar8 * 3.0;
      local_c4 = fVar7 + fVar10 * 3.0;
      fStack_c8 = fVar12;
      local_c0 = fVar13;
      local_9c = local_cc;
      fStack_98 = fVar12;
      local_94 = local_c4;
      fStack_90 = fVar13;
      iVar1 = FUN_016ed290(&local_9c,0,0,0);
      if (iVar1 == 0) {
        uVar6 = FUN_016e9c80(local_c0,&local_cc,(undefined1)local_bc,local_bc._1_1_,local_ba);
        if ((uVar6 & 1) != 0) goto LAB_016f10ac;
      }
    }
  }
  uVar3 = FUN_016f10f0(&local_80,param_2);
LAB_016f10c0:
  return uVar3 & 1;
}

