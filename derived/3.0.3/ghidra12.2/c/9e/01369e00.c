
void FUN_01369e00(byte *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  undefined8 local_c8;
  undefined **ppuStack_c0;
  long local_b8;
  undefined *puStack_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  char *pcStack_68;
  
  bVar6 = *param_1;
  if ((bVar6 & 1) == 0) {
    return;
  }
  lVar11 = *(long *)(param_1 + 200);
  iVar3 = *(int *)(param_1 + 0xc0);
  if (*(int *)(param_1 + 8) < 0xa9) {
    if (iVar3 == 0) {
      return;
    }
    iVar7 = 0;
    iVar12 = 0;
    puVar1 = PTR_DAT_04bb5070 + 0x10;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      local_b8 = *(long *)(lVar11 + (long)iVar12 * 0x70 + 0x58);
      if ((*(uint *)(local_b8 + 8) | 2) == 2) {
        lVar9 = lVar11 + (long)iVar12 * 0x70;
        *(int *)(lVar9 + 0x68) = iVar7;
        lStack_88 = lVar9 + 0x60;
        local_90 = lVar9 + 0x38;
        *(undefined8 *)(lVar9 + 0x50) = 0;
        *(byte **)(lVar9 + 0x40) = param_1;
        *(undefined1 **)(lVar9 + 0x48) = &LAB_0136ba50;
        local_80 = 0;
        uStack_78 = 0;
        pcStack_68 = "FieldTidyingCalcScore";
        local_a0 = 0;
        local_a8 = 1;
        local_a6 = 1;
        local_98 = (*(undefined8 **)PTR_DAT_04bb49a8)[1];
        ppuStack_c0 = &puStack_b0;
        local_c8 = 0;
        puStack_b0 = puVar1;
        local_70 = puVar2;
        FUN_03f45184(**(undefined8 **)PTR_DAT_04bb49a8,&local_c8);
      }
      iVar12 = iVar12 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar12);
    return;
  }
  if (iVar3 != 0) {
    iVar7 = 0;
    do {
      if (*(int *)(*(long *)(lVar11 + (long)iVar7 * 0x70 + 0x58) + 8) != 2) {
        return;
      }
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  pbVar8 = param_1 + 0xc;
  *param_1 = bVar6 & 0xfc | 2;
  if ((bVar6 >> 2 & 1) == 0) {
    lVar11 = 0;
    do {
      if (*(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x14) <
          *(float *)(param_1 + lVar11 + 0x1c) + *(float *)(param_1 + lVar11 + 0x20)) {
        uVar4 = *(undefined4 *)(param_1 + 0x14);
        uVar10 = *(undefined8 *)pbVar8;
        *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + lVar11 + 0x18);
        uVar5 = *(undefined4 *)(param_1 + lVar11 + 0x20);
        *(undefined8 *)(param_1 + lVar11 + 0x18) = uVar10;
        *(undefined4 *)(param_1 + lVar11 + 0x20) = uVar4;
        *(undefined4 *)(param_1 + 0x14) = uVar5;
      }
      lVar11 = lVar11 + 0xc;
    } while (lVar11 != 0xa8);
    lVar11 = 0;
    do {
      if (*(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x20) <
          *(float *)(param_1 + lVar11 + 0x28) + *(float *)(param_1 + lVar11 + 0x2c)) {
        uVar4 = *(undefined4 *)(param_1 + 0x20);
        uVar10 = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + lVar11 + 0x24);
        uVar5 = *(undefined4 *)(param_1 + lVar11 + 0x2c);
        *(undefined8 *)(param_1 + lVar11 + 0x24) = uVar10;
        *(undefined4 *)(param_1 + lVar11 + 0x2c) = uVar4;
        *(undefined4 *)(param_1 + 0x20) = uVar5;
      }
      lVar11 = lVar11 + 0xc;
    } while (lVar11 != 0x9c);
    lVar11 = 0;
    do {
      if (*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x2c) <
          *(float *)(param_1 + lVar11 + 0x34) + *(float *)(param_1 + lVar11 + 0x38)) {
        uVar4 = *(undefined4 *)(param_1 + 0x2c);
        uVar10 = *(undefined8 *)(param_1 + 0x24);
        *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + lVar11 + 0x30);
        uVar5 = *(undefined4 *)(param_1 + lVar11 + 0x38);
        *(undefined8 *)(param_1 + lVar11 + 0x30) = uVar10;
        *(undefined4 *)(param_1 + lVar11 + 0x38) = uVar4;
        *(undefined4 *)(param_1 + 0x2c) = uVar5;
      }
      lVar11 = lVar11 + 0xc;
    } while (lVar11 != 0x90);
    pbVar8 = param_1 + 0x30;
    fVar13 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38);
    if (fVar13 < *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x3c);
      uVar4 = *(undefined4 *)(param_1 + 0x44);
      *(undefined8 *)(param_1 + 0x3c) = uVar10;
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38);
    }
    if (fVar13 < *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x50)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = *(undefined4 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x48) = uVar10;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38);
    }
    if (fVar13 < *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x5c)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x54);
      uVar4 = *(undefined4 *)(param_1 + 0x5c);
      *(undefined8 *)(param_1 + 0x54) = uVar10;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38);
    }
    if (fVar13 < *(float *)(param_1 + 100) + *(float *)(param_1 + 0x68)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x60);
      uVar4 = *(undefined4 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x60) = uVar10;
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38);
    }
    if (fVar13 < *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x74)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x6c);
      uVar4 = *(undefined4 *)(param_1 + 0x74);
      *(undefined8 *)(param_1 + 0x6c) = uVar10;
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38);
    }
    if (fVar13 < *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x80)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x78);
      uVar4 = *(undefined4 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x78) = uVar10;
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38);
    }
    if (fVar13 < *(float *)(param_1 + 0x88) + *(float *)(param_1 + 0x8c)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x84);
      uVar4 = *(undefined4 *)(param_1 + 0x8c);
      *(undefined8 *)(param_1 + 0x84) = uVar10;
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38);
    }
    if (fVar13 < *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0x98)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x90);
      uVar4 = *(undefined4 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x90) = uVar10;
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38);
    }
    if (fVar13 < *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0xa4)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x9c);
      uVar4 = *(undefined4 *)(param_1 + 0xa4);
      *(undefined8 *)(param_1 + 0x9c) = uVar10;
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38);
    }
    if (fVar13 < *(float *)(param_1 + 0xac) + *(float *)(param_1 + 0xb0)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0xa8);
      uVar4 = *(undefined4 *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xa8) = uVar10;
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38);
    }
    if (fVar13 < *(float *)(param_1 + 0xb8) + *(float *)(param_1 + 0xbc)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0xb4);
      uVar4 = *(undefined4 *)(param_1 + 0xbc);
      *(undefined8 *)(param_1 + 0xb4) = uVar10;
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
    }
    pbVar8 = param_1 + 0x3c;
    fVar13 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44);
    if (fVar13 < *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x50)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = *(undefined4 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x48) = uVar10;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      fVar13 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44);
    }
    if (fVar13 < *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x5c)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x54);
      uVar4 = *(undefined4 *)(param_1 + 0x5c);
      *(undefined8 *)(param_1 + 0x54) = uVar10;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      fVar13 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44);
    }
    if (fVar13 < *(float *)(param_1 + 100) + *(float *)(param_1 + 0x68)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x60);
      uVar4 = *(undefined4 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x60) = uVar10;
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      fVar13 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44);
    }
    if (fVar13 < *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x74)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x6c);
      uVar4 = *(undefined4 *)(param_1 + 0x74);
      *(undefined8 *)(param_1 + 0x6c) = uVar10;
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      fVar13 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44);
    }
    if (fVar13 < *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x80)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x78);
      uVar4 = *(undefined4 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x78) = uVar10;
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      fVar13 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44);
    }
    if (fVar13 < *(float *)(param_1 + 0x88) + *(float *)(param_1 + 0x8c)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x84);
      uVar4 = *(undefined4 *)(param_1 + 0x8c);
      *(undefined8 *)(param_1 + 0x84) = uVar10;
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      fVar13 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44);
    }
    if (fVar13 < *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0x98)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x90);
      uVar4 = *(undefined4 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x90) = uVar10;
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      fVar13 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44);
    }
    if (fVar13 < *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0xa4)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x9c);
      uVar4 = *(undefined4 *)(param_1 + 0xa4);
      *(undefined8 *)(param_1 + 0x9c) = uVar10;
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      fVar13 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44);
    }
    if (fVar13 < *(float *)(param_1 + 0xac) + *(float *)(param_1 + 0xb0)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0xa8);
      uVar4 = *(undefined4 *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xa8) = uVar10;
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      fVar13 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44);
    }
    if (*(float *)(param_1 + 0xb8) + *(float *)(param_1 + 0xbc) <= fVar13) goto LAB_0136b02c;
  }
  else {
    fVar13 = *(float *)(param_1 + 0x10);
    if (fVar13 < *(float *)(param_1 + 0x1c)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x18);
      uVar4 = *(undefined4 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = uVar10;
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      fVar13 = *(float *)(param_1 + 0x10);
    }
    if (fVar13 < *(float *)(param_1 + 0x28)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x24);
      uVar4 = *(undefined4 *)(param_1 + 0x2c);
      *(undefined8 *)(param_1 + 0x24) = uVar10;
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      fVar13 = *(float *)(param_1 + 0x10);
    }
    if (fVar13 < *(float *)(param_1 + 0x34)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = *(undefined4 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x30) = uVar10;
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      fVar13 = *(float *)(param_1 + 0x10);
    }
    if (fVar13 < *(float *)(param_1 + 0x40)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x3c);
      uVar4 = *(undefined4 *)(param_1 + 0x44);
      *(undefined8 *)(param_1 + 0x3c) = uVar10;
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      fVar13 = *(float *)(param_1 + 0x10);
    }
    if (fVar13 < *(float *)(param_1 + 0x4c)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = *(undefined4 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x48) = uVar10;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      fVar13 = *(float *)(param_1 + 0x10);
    }
    if (fVar13 < *(float *)(param_1 + 0x58)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x54);
      uVar4 = *(undefined4 *)(param_1 + 0x5c);
      *(undefined8 *)(param_1 + 0x54) = uVar10;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      fVar13 = *(float *)(param_1 + 0x10);
    }
    if (fVar13 < *(float *)(param_1 + 100)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x60);
      uVar4 = *(undefined4 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x60) = uVar10;
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      fVar13 = *(float *)(param_1 + 0x10);
    }
    if (fVar13 < *(float *)(param_1 + 0x70)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x6c);
      uVar4 = *(undefined4 *)(param_1 + 0x74);
      *(undefined8 *)(param_1 + 0x6c) = uVar10;
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      fVar13 = *(float *)(param_1 + 0x10);
    }
    if (fVar13 < *(float *)(param_1 + 0x7c)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x78);
      uVar4 = *(undefined4 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x78) = uVar10;
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      fVar13 = *(float *)(param_1 + 0x10);
    }
    if (fVar13 < *(float *)(param_1 + 0x88)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x84);
      uVar4 = *(undefined4 *)(param_1 + 0x8c);
      *(undefined8 *)(param_1 + 0x84) = uVar10;
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      fVar13 = *(float *)(param_1 + 0x10);
    }
    if (fVar13 < *(float *)(param_1 + 0x94)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x90);
      uVar4 = *(undefined4 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x90) = uVar10;
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      fVar13 = *(float *)(param_1 + 0x10);
    }
    if (fVar13 < *(float *)(param_1 + 0xa0)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x9c);
      uVar4 = *(undefined4 *)(param_1 + 0xa4);
      *(undefined8 *)(param_1 + 0x9c) = uVar10;
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      fVar13 = *(float *)(param_1 + 0x10);
    }
    if (fVar13 < *(float *)(param_1 + 0xac)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0xa8);
      uVar4 = *(undefined4 *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xa8) = uVar10;
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      fVar13 = *(float *)(param_1 + 0x10);
    }
    if (fVar13 < *(float *)(param_1 + 0xb8)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0xb4);
      uVar4 = *(undefined4 *)(param_1 + 0xbc);
      *(undefined8 *)(param_1 + 0xb4) = uVar10;
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = uVar4;
    }
    fVar13 = *(float *)(param_1 + 0x1c);
    pbVar8 = param_1 + 0x18;
    if (fVar13 < *(float *)(param_1 + 0x28)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x24);
      uVar4 = *(undefined4 *)(param_1 + 0x2c);
      *(undefined8 *)(param_1 + 0x24) = uVar10;
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      fVar13 = *(float *)(param_1 + 0x1c);
    }
    if (fVar13 < *(float *)(param_1 + 0x34)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = *(undefined4 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x30) = uVar10;
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      fVar13 = *(float *)(param_1 + 0x1c);
    }
    if (fVar13 < *(float *)(param_1 + 0x40)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x3c);
      uVar4 = *(undefined4 *)(param_1 + 0x44);
      *(undefined8 *)(param_1 + 0x3c) = uVar10;
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      fVar13 = *(float *)(param_1 + 0x1c);
    }
    if (fVar13 < *(float *)(param_1 + 0x4c)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = *(undefined4 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x48) = uVar10;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      fVar13 = *(float *)(param_1 + 0x1c);
    }
    if (fVar13 < *(float *)(param_1 + 0x58)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x54);
      uVar4 = *(undefined4 *)(param_1 + 0x5c);
      *(undefined8 *)(param_1 + 0x54) = uVar10;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      fVar13 = *(float *)(param_1 + 0x1c);
    }
    if (fVar13 < *(float *)(param_1 + 100)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x60);
      uVar4 = *(undefined4 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x60) = uVar10;
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      fVar13 = *(float *)(param_1 + 0x1c);
    }
    if (fVar13 < *(float *)(param_1 + 0x70)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x6c);
      uVar4 = *(undefined4 *)(param_1 + 0x74);
      *(undefined8 *)(param_1 + 0x6c) = uVar10;
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      fVar13 = *(float *)(param_1 + 0x1c);
    }
    if (fVar13 < *(float *)(param_1 + 0x7c)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x78);
      uVar4 = *(undefined4 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x78) = uVar10;
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      fVar13 = *(float *)(param_1 + 0x1c);
    }
    if (fVar13 < *(float *)(param_1 + 0x88)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x84);
      uVar4 = *(undefined4 *)(param_1 + 0x8c);
      *(undefined8 *)(param_1 + 0x84) = uVar10;
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      fVar13 = *(float *)(param_1 + 0x1c);
    }
    if (fVar13 < *(float *)(param_1 + 0x94)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x90);
      uVar4 = *(undefined4 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x90) = uVar10;
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      fVar13 = *(float *)(param_1 + 0x1c);
    }
    if (fVar13 < *(float *)(param_1 + 0xa0)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x9c);
      uVar4 = *(undefined4 *)(param_1 + 0xa4);
      *(undefined8 *)(param_1 + 0x9c) = uVar10;
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      fVar13 = *(float *)(param_1 + 0x1c);
    }
    if (fVar13 < *(float *)(param_1 + 0xac)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0xa8);
      uVar4 = *(undefined4 *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xa8) = uVar10;
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      fVar13 = *(float *)(param_1 + 0x1c);
    }
    if (fVar13 < *(float *)(param_1 + 0xb8)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0xb4);
      uVar4 = *(undefined4 *)(param_1 + 0xbc);
      *(undefined8 *)(param_1 + 0xb4) = uVar10;
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar4;
    }
    fVar13 = *(float *)(param_1 + 0x28);
    pbVar8 = param_1 + 0x24;
    if (fVar13 < *(float *)(param_1 + 0x34)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = *(undefined4 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x30) = uVar10;
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
      fVar13 = *(float *)(param_1 + 0x28);
    }
    if (fVar13 < *(float *)(param_1 + 0x40)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x3c);
      uVar4 = *(undefined4 *)(param_1 + 0x44);
      *(undefined8 *)(param_1 + 0x3c) = uVar10;
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
      fVar13 = *(float *)(param_1 + 0x28);
    }
    if (fVar13 < *(float *)(param_1 + 0x4c)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = *(undefined4 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x48) = uVar10;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
      fVar13 = *(float *)(param_1 + 0x28);
    }
    if (fVar13 < *(float *)(param_1 + 0x58)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x54);
      uVar4 = *(undefined4 *)(param_1 + 0x5c);
      *(undefined8 *)(param_1 + 0x54) = uVar10;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
      fVar13 = *(float *)(param_1 + 0x28);
    }
    if (fVar13 < *(float *)(param_1 + 100)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x60);
      uVar4 = *(undefined4 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x60) = uVar10;
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
      fVar13 = *(float *)(param_1 + 0x28);
    }
    if (fVar13 < *(float *)(param_1 + 0x70)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x6c);
      uVar4 = *(undefined4 *)(param_1 + 0x74);
      *(undefined8 *)(param_1 + 0x6c) = uVar10;
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
      fVar13 = *(float *)(param_1 + 0x28);
    }
    if (fVar13 < *(float *)(param_1 + 0x7c)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x78);
      uVar4 = *(undefined4 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x78) = uVar10;
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
      fVar13 = *(float *)(param_1 + 0x28);
    }
    if (fVar13 < *(float *)(param_1 + 0x88)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x84);
      uVar4 = *(undefined4 *)(param_1 + 0x8c);
      *(undefined8 *)(param_1 + 0x84) = uVar10;
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
      fVar13 = *(float *)(param_1 + 0x28);
    }
    if (fVar13 < *(float *)(param_1 + 0x94)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x90);
      uVar4 = *(undefined4 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x90) = uVar10;
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
      fVar13 = *(float *)(param_1 + 0x28);
    }
    if (fVar13 < *(float *)(param_1 + 0xa0)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x9c);
      uVar4 = *(undefined4 *)(param_1 + 0xa4);
      *(undefined8 *)(param_1 + 0x9c) = uVar10;
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
      fVar13 = *(float *)(param_1 + 0x28);
    }
    if (fVar13 < *(float *)(param_1 + 0xac)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0xa8);
      uVar4 = *(undefined4 *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xa8) = uVar10;
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
      fVar13 = *(float *)(param_1 + 0x28);
    }
    if (fVar13 < *(float *)(param_1 + 0xb8)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0xb4);
      uVar4 = *(undefined4 *)(param_1 + 0xbc);
      *(undefined8 *)(param_1 + 0xb4) = uVar10;
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
    }
    fVar13 = *(float *)(param_1 + 0x34);
    pbVar8 = param_1 + 0x30;
    if (fVar13 < *(float *)(param_1 + 0x40)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x3c);
      uVar4 = *(undefined4 *)(param_1 + 0x44);
      *(undefined8 *)(param_1 + 0x3c) = uVar10;
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34);
    }
    if (fVar13 < *(float *)(param_1 + 0x4c)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = *(undefined4 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x48) = uVar10;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34);
    }
    if (fVar13 < *(float *)(param_1 + 0x58)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x54);
      uVar4 = *(undefined4 *)(param_1 + 0x5c);
      *(undefined8 *)(param_1 + 0x54) = uVar10;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34);
    }
    if (fVar13 < *(float *)(param_1 + 100)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x60);
      uVar4 = *(undefined4 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x60) = uVar10;
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34);
    }
    if (fVar13 < *(float *)(param_1 + 0x70)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x6c);
      uVar4 = *(undefined4 *)(param_1 + 0x74);
      *(undefined8 *)(param_1 + 0x6c) = uVar10;
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34);
    }
    if (fVar13 < *(float *)(param_1 + 0x7c)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x78);
      uVar4 = *(undefined4 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x78) = uVar10;
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34);
    }
    if (fVar13 < *(float *)(param_1 + 0x88)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x84);
      uVar4 = *(undefined4 *)(param_1 + 0x8c);
      *(undefined8 *)(param_1 + 0x84) = uVar10;
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34);
    }
    if (fVar13 < *(float *)(param_1 + 0x94)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x90);
      uVar4 = *(undefined4 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x90) = uVar10;
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34);
    }
    if (fVar13 < *(float *)(param_1 + 0xa0)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x9c);
      uVar4 = *(undefined4 *)(param_1 + 0xa4);
      *(undefined8 *)(param_1 + 0x9c) = uVar10;
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34);
    }
    if (fVar13 < *(float *)(param_1 + 0xac)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0xa8);
      uVar4 = *(undefined4 *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xa8) = uVar10;
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      fVar13 = *(float *)(param_1 + 0x34);
    }
    if (fVar13 < *(float *)(param_1 + 0xb8)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0xb4);
      uVar4 = *(undefined4 *)(param_1 + 0xbc);
      *(undefined8 *)(param_1 + 0xb4) = uVar10;
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
    }
    fVar13 = *(float *)(param_1 + 0x40);
    pbVar8 = param_1 + 0x3c;
    if (fVar13 < *(float *)(param_1 + 0x4c)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = *(undefined4 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x48) = uVar10;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      fVar13 = *(float *)(param_1 + 0x40);
    }
    if (fVar13 < *(float *)(param_1 + 0x58)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x54);
      uVar4 = *(undefined4 *)(param_1 + 0x5c);
      *(undefined8 *)(param_1 + 0x54) = uVar10;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      fVar13 = *(float *)(param_1 + 0x40);
    }
    if (fVar13 < *(float *)(param_1 + 100)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x60);
      uVar4 = *(undefined4 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x60) = uVar10;
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      fVar13 = *(float *)(param_1 + 0x40);
    }
    if (fVar13 < *(float *)(param_1 + 0x70)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x6c);
      uVar4 = *(undefined4 *)(param_1 + 0x74);
      *(undefined8 *)(param_1 + 0x6c) = uVar10;
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      fVar13 = *(float *)(param_1 + 0x40);
    }
    if (fVar13 < *(float *)(param_1 + 0x7c)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x78);
      uVar4 = *(undefined4 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x78) = uVar10;
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      fVar13 = *(float *)(param_1 + 0x40);
    }
    if (fVar13 < *(float *)(param_1 + 0x88)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x84);
      uVar4 = *(undefined4 *)(param_1 + 0x8c);
      *(undefined8 *)(param_1 + 0x84) = uVar10;
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      fVar13 = *(float *)(param_1 + 0x40);
    }
    if (fVar13 < *(float *)(param_1 + 0x94)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x90);
      uVar4 = *(undefined4 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x90) = uVar10;
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      fVar13 = *(float *)(param_1 + 0x40);
    }
    if (fVar13 < *(float *)(param_1 + 0xa0)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0x9c);
      uVar4 = *(undefined4 *)(param_1 + 0xa4);
      *(undefined8 *)(param_1 + 0x9c) = uVar10;
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      fVar13 = *(float *)(param_1 + 0x40);
    }
    if (fVar13 < *(float *)(param_1 + 0xac)) {
      uVar10 = *(undefined8 *)pbVar8;
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 0xa8);
      uVar4 = *(undefined4 *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xa8) = uVar10;
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      fVar13 = *(float *)(param_1 + 0x40);
    }
    if (*(float *)(param_1 + 0xb8) <= fVar13) goto LAB_0136b02c;
  }
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0xbc);
LAB_0136b02c:
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x48] = 0xff;
  param_1[0x49] = 0xff;
  param_1[0x4a] = 0xff;
  param_1[0x4b] = 0xff;
  param_1[0x54] = 0xff;
  param_1[0x55] = 0xff;
  param_1[0x56] = 0xff;
  param_1[0x57] = 0xff;
  param_1[0x60] = 0xff;
  param_1[0x61] = 0xff;
  param_1[0x62] = 0xff;
  param_1[99] = 0xff;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0xff;
  param_1[0x6d] = 0xff;
  param_1[0x6e] = 0xff;
  param_1[0x6f] = 0xff;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0xff;
  param_1[0x79] = 0xff;
  param_1[0x7a] = 0xff;
  param_1[0x7b] = 0xff;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0xff;
  param_1[0x85] = 0xff;
  param_1[0x86] = 0xff;
  param_1[0x87] = 0xff;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0xff;
  param_1[0x91] = 0xff;
  param_1[0x92] = 0xff;
  param_1[0x93] = 0xff;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0xff;
  param_1[0x9d] = 0xff;
  param_1[0x9e] = 0xff;
  param_1[0x9f] = 0xff;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0xff;
  param_1[0xa9] = 0xff;
  param_1[0xaa] = 0xff;
  param_1[0xab] = 0xff;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0xff;
  param_1[0xb5] = 0xff;
  param_1[0xb6] = 0xff;
  param_1[0xb7] = 0xff;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  return;
}

