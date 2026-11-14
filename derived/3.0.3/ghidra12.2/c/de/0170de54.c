
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0170de54(long *param_1,short *param_2)

{
  long *plVar1;
  float *pfVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char cVar6;
  undefined2 uVar7;
  short sVar8;
  ulong uVar9;
  undefined *puVar10;
  byte bVar11;
  uint uVar12;
  ushort uVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  uint *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  uint local_68;
  byte local_64 [4];
  
  puVar10 = PTR_DAT_04bb43c0;
  if (*param_2 == -2) {
    return;
  }
  sVar8 = param_2[0x3a];
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  uVar12 = FUN_0277d6c4(param_2);
  lVar15 = *(long *)puVar10;
  if (lVar15 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      local_b0 = (uint *)0x0;
      uStack_b8 = *(long *)param_2;
      local_c0 = PTR_DAT_04bc0510 + 0x10;
      uVar12 = FUN_0277d6c4(&uStack_b8);
      if (*(long *)puVar10 == 0) {
LAB_0170df90:
        puVar16 = (uint *)0x0;
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_0170df90;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar12 = FUN_0277d6c4(param_2);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if (*(uint *)(lVar15 + 0x1d8) <= uVar12) goto LAB_0170df90;
        puVar16 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar12 * 8);
        if (puVar16 != (uint *)0x0) {
          local_b0 = puVar16;
        }
      }
      bVar11 = FUN_01af8a5c(&local_c0);
      if (((char)sVar8 != '\0') && ((bVar11 & 1) != 0)) {
        if (puVar16 == (uint *)0x0) {
          uVar13 = 0xbc;
        }
        else {
          uVar12 = *puVar16;
          uVar13 = 0;
          if ((uVar12 != 0) && (puVar16 != (uint *)(ulong)uVar12)) {
            puVar14 = (uint *)((long)puVar16 - (long)(ulong)uVar12);
            uVar13 = 0;
            if (*puVar14 != 0) {
              uVar12 = puVar14[1];
              if ((uVar12 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                lVar15 = 0xc;
                if (*(char *)((long)puVar14 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
                if (lVar15 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar12 != 0) {
                    uVar3 = (uint)((ulong)((long)puVar16 - lVar15) / (ulong)uVar12);
                  }
                  if (*puVar14 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar13 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                     uVar13 < 0xbd)) goto LAB_0170e03c;
                }
              }
              uVar13 = 0;
            }
          }
        }
LAB_0170e03c:
        bVar11 = uVar13 == 0x6d;
      }
      if (((bVar11 & 1) != 0) && (*(char *)((long)param_2 + 0x25) == '\0')) {
        lVar15 = *(long *)(param_1[9] + 0x68);
        local_88 = (undefined *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1[9] + 0x230));
        local_c0 = (undefined *)
                   ((ulong)(uint)(*(int *)(param_2 + 0xe) + *(int *)(lVar15 + 0x2b4)) << 0x20);
        uStack_b8._0_4_ = (float)(*(int *)(param_2 + 0x10) + *(int *)(lVar15 + 0x2b8));
        FUN_016f742c((long)&local_c0 + 4,&local_88,0);
        uStack_b8 = (ulong)(uint)uStack_b8._4_4_ << 0x20;
        local_64[0] = *(byte *)(param_2 + 0x12);
        if (7 < local_64[0]) {
          local_64[0] = 0xff;
        }
        FUN_009a33d8(*(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 0x14),
                     *(undefined4 *)(param_2 + 0x1a),*(undefined8 *)PTR_DAT_04bb4820,param_2,
                     param_2 + 4,&local_c0,local_64,(char)param_2[0x13]);
        goto LAB_0170e458;
      }
      lVar15 = *(long *)puVar10;
    }
  }
  uVar12 = FUN_0277d6c4(param_2);
  lVar17 = *(long *)puVar10;
  if (lVar17 == 0) {
LAB_0170e1c8:
    if ((((*(float *)(param_2 + 0x1c) == 1.0) &&
         (((*(float *)(param_2 + 0x1e) == 0.0 && (*(float *)(param_2 + 0x20) == 0.0)) &&
          (*(float *)(param_2 + 0x22) == 0.0)))) &&
        (((*(float *)(param_2 + 0x24) == 0.0 && (*(float *)(param_2 + 0x26) == 1.0)) &&
         (*(float *)(param_2 + 0x28) == 0.0)))) &&
       (((*(float *)(param_2 + 0x2a) == 0.0 && (*(float *)(param_2 + 0x2c) == 0.0)) &&
        ((*(float *)(param_2 + 0x2e) == 0.0 &&
         ((*(float *)(param_2 + 0x30) == 1.0 && (*(float *)(param_2 + 0x32) == 0.0)))))))) {
LAB_0170e25c:
      FUN_012253d0(*(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 0x18),
                   *(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x36),
                   *(undefined4 *)(param_2 + 0x38),*(undefined8 *)PTR_DAT_04bb4778,param_1,param_2,
                   param_2 + 4,(char)param_2[0x16]);
      goto LAB_0170e458;
    }
    local_c0 = (undefined *)_DAT_04102200;
    local_b0 = (uint *)_DAT_04102880;
    uStack_b8._4_4_ = *(float *)(param_2 + 4);
    uStack_a8._4_4_ = *(float *)(param_2 + 6);
    uStack_a8._0_4_ = (float)_UNK_04102888;
    local_a0 = _DAT_041023d0;
    uStack_98._4_4_ = *(float *)(param_2 + 8);
    uStack_b8._0_4_ = (float)_UNK_04102208;
    uStack_98._0_4_ = (float)_UNK_041023d8;
    if ((char)param_2[0x16] == '\0') {
      uVar25 = _DAT_04102200;
      uVar28 = _DAT_04102880;
      uVar29 = _DAT_041023d0;
    }
    else {
      local_68 = *(uint *)(param_1[9] + 0x230);
      FUN_016f742c(&local_88,&local_68,0);
      pfVar2 = (float *)(PTR_DAT_04bb2d00 + ((ulong)((uint)local_88 >> 0x14) & 0xff0));
      fVar22 = (float)((uint)local_88 & 0xffffff) * 5.9604645e-08;
      fVar35 = *pfVar2 + fVar22 * pfVar2[1];
      fVar26 = pfVar2[2] + fVar22 * pfVar2[3];
      fVar23 = -(pfVar2[1] * fVar22) - *pfVar2;
      fVar30 = fVar35 * 0.0;
      fVar32 = fVar26 * 0.0;
      fVar38 = fVar30 * 0.0 + 1.0;
      fVar35 = fVar35 + 0.0;
      fVar21 = SUB84(local_c0,0);
      fVar37 = (float)((ulong)local_c0 >> 0x20);
      fVar22 = fVar23 * (float)uStack_b8;
      fVar24 = fVar32 * (float)uStack_b8;
      fVar20 = (float)uStack_b8 * 0.0;
      uStack_b8._0_4_ = fVar35 * fVar21 + fVar30 * fVar37 + fVar26 * (float)uStack_b8 + 0.0;
      uStack_b8._4_4_ = uStack_b8._4_4_ + fVar21 * 0.0 + fVar37 * 0.0 + fVar20;
      fVar31 = SUB84(local_b0,0);
      fVar33 = (float)((ulong)local_b0 >> 0x20);
      fVar20 = fVar23 * (float)uStack_a8;
      fVar36 = fVar32 * (float)uStack_a8;
      fVar19 = (float)uStack_a8 * 0.0;
      fVar34 = (float)local_a0;
      fVar39 = (float)((ulong)local_a0 >> 0x20);
      fVar23 = fVar23 * (float)uStack_98;
      fVar18 = fVar32 * (float)uStack_98;
      fVar27 = (float)uStack_98 * 0.0;
      uStack_a8._0_4_ = fVar35 * fVar31 + fVar30 * fVar33 + fVar26 * (float)uStack_a8 + 0.0;
      uStack_a8._4_4_ = uStack_a8._4_4_ + fVar31 * 0.0 + fVar33 * 0.0 + fVar19;
      uStack_98._0_4_ = fVar35 * fVar34 + fVar30 * fVar39 + fVar26 * (float)uStack_98 + 0.0;
      uStack_98._4_4_ = uStack_98._4_4_ + fVar34 * 0.0 + fVar39 * 0.0 + fVar27;
      uVar25 = CONCAT44(fVar30 * fVar21 + fVar38 * fVar37 + fVar24 + 0.0,
                        fVar26 * fVar21 + fVar32 * fVar37 + fVar22 + 0.0);
      uVar28 = CONCAT44(fVar30 * fVar31 + fVar38 * fVar33 + fVar36 + 0.0,
                        fVar26 * fVar31 + fVar32 * fVar33 + fVar20 + 0.0);
      uVar29 = CONCAT44(fVar30 * fVar34 + fVar38 * fVar39 + fVar18 + 0.0,
                        fVar26 * fVar34 + fVar32 * fVar39 + fVar23 + 0.0);
    }
    fVar23 = (float)uVar28;
    fVar19 = (float)*(undefined8 *)(param_2 + 0x1c);
    fVar27 = (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
    fVar32 = (float)*(undefined8 *)(param_2 + 0x20);
    fVar35 = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
    fVar24 = (float)((ulong)uVar28 >> 0x20);
    fVar21 = (float)*(undefined8 *)(param_2 + 0x24);
    fVar26 = (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20);
    fVar31 = (float)*(undefined8 *)(param_2 + 0x28);
    fVar38 = (float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
    fVar22 = (float)uVar25;
    fVar20 = (float)((ulong)uVar25 >> 0x20);
    fVar36 = (float)uVar29;
    fVar18 = (float)((ulong)uVar29 >> 0x20);
    fVar37 = (float)*(undefined8 *)(param_2 + 0x2c);
    fVar30 = (float)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20);
    fVar33 = (float)*(undefined8 *)(param_2 + 0x30);
    fVar34 = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
    local_c0 = (undefined *)
               CONCAT44(fVar27 * fVar22 + fVar26 * fVar20 + fVar30 * (float)uStack_b8 + 0.0,
                        fVar19 * fVar22 + fVar21 * fVar20 + fVar37 * (float)uStack_b8 + 0.0);
    uStack_b8 = CONCAT44(uStack_b8._4_4_ +
                         fVar35 * fVar22 + fVar38 * fVar20 + fVar34 * (float)uStack_b8,
                         fVar32 * fVar22 + fVar31 * fVar20 + fVar33 * (float)uStack_b8 + 0.0);
    local_b0 = (uint *)CONCAT44(fVar27 * fVar23 + fVar26 * fVar24 + fVar30 * (float)uStack_a8 + 0.0,
                                fVar19 * fVar23 + fVar21 * fVar24 + fVar37 * (float)uStack_a8 + 0.0)
    ;
    uStack_a8 = CONCAT44(uStack_a8._4_4_ +
                         fVar35 * fVar23 + fVar38 * fVar24 + fVar34 * (float)uStack_a8,
                         fVar32 * fVar23 + fVar31 * fVar24 + fVar33 * (float)uStack_a8 + 0.0);
    local_a0 = CONCAT44(fVar27 * fVar36 + fVar26 * fVar18 + fVar30 * (float)uStack_98 + 0.0,
                        fVar19 * fVar36 + fVar21 * fVar18 + fVar37 * (float)uStack_98 + 0.0);
    uStack_98 = CONCAT44(uStack_98._4_4_ +
                         fVar35 * fVar36 + fVar38 * fVar18 + fVar34 * (float)uStack_98,
                         fVar32 * fVar36 + fVar31 * fVar18 + fVar33 * (float)uStack_98 + 0.0);
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar12) ||
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_0170e1c8;
    local_80 = *(undefined4 *)param_2;
    uStack_7c = *(undefined4 *)(param_2 + 2);
    plVar1 = param_1 + 0xbd1;
    local_78 = 0;
    local_88 = PTR_DAT_04bc0510 + 0x10;
    uVar12 = FUN_0277d6c4(&local_80);
    if (*(long *)puVar10 == 0) {
LAB_0170e500:
      cVar6 = (char)*plVar1;
joined_r0x0170e504:
      puVar16 = (uint *)0x0;
      uVar25 = _DAT_04102200;
      local_a0 = _DAT_041023d0;
      uVar28 = _DAT_04102880;
    }
    else {
      lVar15 = *(long *)(lVar17 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((*(uint *)(lVar15 + 0x1d8) <= uVar12) ||
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_0170e500;
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar12 = FUN_0277d6c4(param_2);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if (*(uint *)(lVar15 + 0x1d8) <= uVar12) {
        cVar6 = (char)*plVar1;
        goto joined_r0x0170e504;
      }
      puVar16 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar12 * 8);
      cVar6 = (char)*plVar1;
      uVar25 = _DAT_04102200;
      local_a0 = _DAT_041023d0;
      uVar28 = _DAT_04102880;
    }
    _DAT_04102200 = uVar25;
    _DAT_041023d0 = local_a0;
    _DAT_04102880 = uVar28;
    if (cVar6 != '\0') {
      if (puVar16 == (uint *)0x0) {
        uVar12 = 0xbc;
      }
      else {
        uVar3 = *puVar16;
        uVar12 = 0;
        if ((uVar3 != 0) && (puVar16 != (uint *)(ulong)uVar3)) {
          puVar14 = (uint *)((long)puVar16 - (long)(ulong)uVar3);
          uVar12 = 0;
          if (*puVar14 != 0) {
            uVar12 = puVar14[1];
            if ((uVar12 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
              if (lVar15 != 0) {
                uVar3 = 0;
                if ((ulong)uVar12 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar16 - lVar15) / (ulong)uVar12);
                }
                if (*puVar14 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar12 = (uint)*(ushort *)
                                    (*(long *)((long)PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                   uVar12 < 0xbd)) goto LAB_0170e5a0;
              }
            }
            uVar12 = 0;
          }
        }
      }
LAB_0170e5a0:
      uVar9 = (ulong)local_c0 >> 0x20;
      local_c0 = (undefined *)CONCAT44((int)uVar9,uVar12);
      if (uVar12 == 0x61) {
        FUN_01706aa0(*(undefined4 *)(param_2 + 10),param_1);
        (**(code **)(*param_1 + 0x328))(&local_c0,param_1);
        local_68 = 0;
        (**(code **)(*param_1 + 0x2d0))(param_1,&local_c0,&local_68);
        lVar15 = FUN_0170b82c(param_1,*(undefined4 *)(param_1[9] + 0x230),2);
        uVar29 = _DAT_04102080;
        uVar28 = _UNK_04101d98;
        uVar25 = _DAT_04101d90;
        if (lVar15 != 0) {
          *(undefined8 *)(lVar15 + 0x34c) = _UNK_04102088;
          *(undefined8 *)(lVar15 + 0x344) = uVar29;
          *(undefined8 *)(lVar15 + 0x35c) = uVar28;
          *(undefined8 *)(lVar15 + 0x354) = uVar25;
          uVar25 = _DAT_041022d0;
          *(undefined8 *)(lVar15 + 0x36c) = _UNK_041022d8;
          *(undefined8 *)(lVar15 + 0x364) = uVar25;
        }
        goto LAB_0170e458;
      }
    }
    if (((((*(float *)(param_2 + 0x1c) == 1.0) && (*(float *)(param_2 + 0x1e) == 0.0)) &&
         (*(float *)(param_2 + 0x20) == 0.0)) &&
        ((((*(float *)(param_2 + 0x22) == 0.0 && (*(float *)(param_2 + 0x24) == 0.0)) &&
          ((*(float *)(param_2 + 0x26) == 1.0 &&
           ((*(float *)(param_2 + 0x28) == 0.0 && (*(float *)(param_2 + 0x2a) == 0.0)))))) &&
         (*(float *)(param_2 + 0x2c) == 0.0)))) &&
       (((*(float *)(param_2 + 0x2e) == 0.0 && (*(float *)(param_2 + 0x30) == 1.0)) &&
        (*(float *)(param_2 + 0x32) == 0.0)))) goto LAB_0170e25c;
    uStack_b8._4_4_ = *(float *)(param_2 + 4);
    uStack_a8._4_4_ = *(float *)(param_2 + 6);
    uStack_98._4_4_ = *(float *)(param_2 + 8);
    uStack_b8._0_4_ = (float)_UNK_04102208;
    uStack_a8._0_4_ = (float)_UNK_04102888;
    uStack_98._0_4_ = (float)_UNK_041023d8;
    if ((char)param_2[0x16] != '\0') {
      local_c4 = *(undefined4 *)(param_1[9] + 0x230);
      local_c0 = (undefined *)uVar25;
      local_b0 = (uint *)uVar28;
      FUN_016f742c(&local_68,&local_c4,0);
      pfVar2 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(local_68 >> 0x14) & 0xff0));
      fVar22 = (float)(local_68 & 0xffffff) * 5.9604645e-08;
      fVar36 = *pfVar2 + fVar22 * pfVar2[1];
      fVar27 = pfVar2[2] + fVar22 * pfVar2[3];
      fVar23 = -(pfVar2[1] * fVar22) - *pfVar2;
      fVar32 = fVar36 * 0.0;
      fVar24 = fVar27 * 0.0;
      fVar37 = fVar32 * 0.0 + 1.0;
      fVar36 = fVar36 + 0.0;
      fVar18 = SUB84(local_c0,0);
      fVar19 = (float)((ulong)local_c0 >> 0x20);
      fVar35 = SUB84(local_b0,0);
      fVar21 = (float)((ulong)local_b0 >> 0x20);
      fVar22 = (float)uStack_b8 * 0.0;
      fVar20 = (float)uStack_a8 * 0.0;
      uVar25 = CONCAT44(fVar32 * fVar18 + fVar37 * fVar19 + fVar24 * (float)uStack_b8 + 0.0,
                        fVar27 * fVar18 + fVar24 * fVar19 + fVar23 * (float)uStack_b8 + 0.0);
      uStack_b8._0_4_ = fVar36 * fVar18 + fVar32 * fVar19 + fVar27 * (float)uStack_b8 + 0.0;
      uStack_b8._4_4_ = uStack_b8._4_4_ + fVar18 * 0.0 + fVar19 * 0.0 + fVar22;
      fVar18 = (float)local_a0;
      fVar19 = (float)((ulong)local_a0 >> 0x20);
      uVar28 = CONCAT44(fVar32 * fVar35 + fVar37 * fVar21 + fVar24 * (float)uStack_a8 + 0.0,
                        fVar27 * fVar35 + fVar24 * fVar21 + fVar23 * (float)uStack_a8 + 0.0);
      uStack_a8._0_4_ = fVar36 * fVar35 + fVar32 * fVar21 + fVar27 * (float)uStack_a8 + 0.0;
      uStack_a8._4_4_ = uStack_a8._4_4_ + fVar35 * 0.0 + fVar21 * 0.0 + fVar20;
      fVar22 = (float)uStack_98 * 0.0;
      local_a0 = CONCAT44(fVar32 * fVar18 + fVar37 * fVar19 + fVar24 * (float)uStack_98 + 0.0,
                          fVar27 * fVar18 + fVar24 * fVar19 + fVar23 * (float)uStack_98 + 0.0);
      uStack_98._0_4_ = fVar36 * fVar18 + fVar32 * fVar19 + fVar27 * (float)uStack_98 + 0.0;
      uStack_98._4_4_ = uStack_98._4_4_ + fVar18 * 0.0 + fVar19 * 0.0 + fVar22;
    }
    fVar23 = (float)uVar28;
    fVar19 = (float)*(undefined8 *)(param_2 + 0x1c);
    fVar27 = (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
    fVar32 = (float)*(undefined8 *)(param_2 + 0x20);
    fVar35 = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
    fVar24 = (float)((ulong)uVar28 >> 0x20);
    fVar21 = (float)*(undefined8 *)(param_2 + 0x24);
    fVar26 = (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20);
    fVar31 = (float)*(undefined8 *)(param_2 + 0x28);
    fVar38 = (float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
    fVar22 = (float)uVar25;
    fVar20 = (float)((ulong)uVar25 >> 0x20);
    fVar36 = (float)local_a0;
    fVar18 = (float)((ulong)local_a0 >> 0x20);
    fVar37 = (float)*(undefined8 *)(param_2 + 0x2c);
    fVar30 = (float)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20);
    fVar33 = (float)*(undefined8 *)(param_2 + 0x30);
    fVar34 = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
    local_c0 = (undefined *)
               CONCAT44(fVar27 * fVar22 + fVar26 * fVar20 + fVar30 * (float)uStack_b8 + 0.0,
                        fVar19 * fVar22 + fVar21 * fVar20 + fVar37 * (float)uStack_b8 + 0.0);
    uStack_b8 = CONCAT44(uStack_b8._4_4_ +
                         fVar35 * fVar22 + fVar38 * fVar20 + fVar34 * (float)uStack_b8,
                         fVar32 * fVar22 + fVar31 * fVar20 + fVar33 * (float)uStack_b8 + 0.0);
    local_b0 = (uint *)CONCAT44(fVar27 * fVar23 + fVar26 * fVar24 + fVar30 * (float)uStack_a8 + 0.0,
                                fVar19 * fVar23 + fVar21 * fVar24 + fVar37 * (float)uStack_a8 + 0.0)
    ;
    uStack_a8 = CONCAT44(uStack_a8._4_4_ +
                         fVar35 * fVar23 + fVar38 * fVar24 + fVar34 * (float)uStack_a8,
                         fVar32 * fVar23 + fVar31 * fVar24 + fVar33 * (float)uStack_a8 + 0.0);
    local_a0 = CONCAT44(fVar27 * fVar36 + fVar26 * fVar18 + fVar30 * (float)uStack_98 + 0.0,
                        fVar19 * fVar36 + fVar21 * fVar18 + fVar37 * (float)uStack_98 + 0.0);
    uStack_98 = CONCAT44(uStack_98._4_4_ +
                         fVar35 * fVar36 + fVar38 * fVar18 + fVar34 * (float)uStack_98,
                         fVar32 * fVar36 + fVar31 * fVar18 + fVar33 * (float)uStack_98 + 0.0);
  }
  FUN_01225960(*(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 0x34),
               *(undefined4 *)(param_2 + 0x36),*(undefined4 *)(param_2 + 0x38),
               *(undefined8 *)PTR_DAT_04bb4778,param_1,param_2,&local_c0);
LAB_0170e458:
  puVar10 = PTR_DAT_04bb37e0;
  uVar28 = _UNK_04102208;
  uVar25 = _DAT_04102200;
  param_1[0x23f] = 0;
  *(undefined4 *)(param_1 + 0x242) = 0;
  *(undefined4 *)(param_1 + 0x24e) = 0;
  param_1[0x240] = 0x3f80000000000000;
  uVar5 = puVar10[2];
  uVar7 = *(undefined2 *)puVar10;
  *(undefined4 *)((long)param_1 + 0x121c) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x128c) = 0;
  *(undefined1 *)((long)param_1 + 0x11f2) = uVar5;
  *(undefined2 *)(param_1 + 0x23e) = uVar7;
  *(undefined *)((long)param_1 + 0x11f3) = puVar10[3];
  uVar4 = *(undefined4 *)(puVar10 + 4);
  *(undefined8 *)((long)param_1 + 0x1234) = uVar28;
  *(undefined8 *)((long)param_1 + 0x122c) = uVar25;
  uVar28 = _UNK_04102888;
  uVar25 = _DAT_04102880;
  *(undefined2 *)(param_1 + 0x241) = 0xff00;
  *(undefined2 *)(param_1 + 0x243) = 0;
  *(undefined1 *)((long)param_1 + 0x1274) = 0;
  *(undefined8 *)((long)param_1 + 0x1224) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x1284) = 0;
  *(undefined4 *)((long)param_1 + 0x11f4) = uVar4;
  *(undefined8 *)((long)param_1 + 0x1244) = uVar28;
  *(undefined8 *)((long)param_1 + 0x123c) = uVar25;
  uVar25 = _DAT_041023d0;
  *(undefined8 *)((long)param_1 + 0x1254) = _UNK_041023d8;
  *(undefined8 *)((long)param_1 + 0x124c) = uVar25;
  return;
}

