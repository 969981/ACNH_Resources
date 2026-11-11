
void FUN_003878f0(long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,long param_5,
                 long param_6,long param_7)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  int iVar27;
  long lVar28;
  undefined8 uVar29;
  undefined4 *puVar30;
  long *plVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  byte *pbVar37;
  byte *pbVar38;
  long lVar39;
  undefined4 uVar40;
  float fVar41;
  long local_88;
  
  FUN_0037c270();
  *param_1 = (long)(PTR_DAT_04bd08a8 + 0x10);
  lVar33 = param_5;
  lVar28 = param_5;
  lVar39 = param_5;
  if (param_6 == 0) {
    lVar34 = *(long *)(param_7 + 0x30);
    local_88 = lVar34;
LAB_003879cc:
    lVar36 = param_5;
  }
  else {
    uVar9 = *(ushort *)(param_7 + 0x40);
    if (uVar9 != 0 || *(short *)(param_7 + 0x44) != 0) {
      lVar34 = *(long *)(param_7 + 0x30);
      local_88 = lVar34;
      if ((uVar9 & 1) != 0) {
        local_88 = *(long *)(param_7 + 0x38);
        lVar39 = param_6;
      }
      if ((uVar9 & 2) != 0) {
        lVar28 = param_6;
      }
      if ((uVar9 & 4) != 0) {
        lVar33 = param_6;
      }
      goto LAB_003879cc;
    }
    lVar34 = *(long *)(param_7 + 0x38);
    lVar33 = param_6;
    lVar28 = param_6;
    lVar36 = param_6;
    lVar39 = param_6;
    local_88 = lVar34;
  }
  param_1[0x1e] = 0;
  param_1[0x1d] = -1;
  param_1[0x23] = 0;
  *(undefined1 **)((long)param_1 + 0x124) = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0xff000000ff000000;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  uVar10 = *(ushort *)(lVar36 + 0x54);
  uVar11 = *(ushort *)(lVar33 + 0x5e);
  uVar12 = *(ushort *)(lVar39 + 0x56);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(lVar36 + 0x68);
  *(undefined4 *)((long)param_1 + 0xec) = *(undefined4 *)(lVar36 + 0x6c);
  *(undefined1 *)((long)param_1 + 0x116) = *(undefined1 *)(lVar28 + 0x5c);
  bVar8 = *(byte *)(lVar28 + 0x5d);
  *(ushort *)((long)param_1 + 0x114) = bVar8 & 3;
  *(undefined4 *)((long)param_1 + 0x104) = *(undefined4 *)(lVar36 + 0x78);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar36 + 0x7c);
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(lVar36 + 0x60);
  uVar9 = *(short *)(lVar36 + 0x5e) << 3;
  uVar13 = (bVar8 | uVar9) & 0x103;
  *(ushort *)((long)param_1 + 0x114) = uVar13;
  uVar4 = (*(ushort *)(lVar36 + 0x5e) >> 10 & 1) << 0xb;
  *(ushort *)((long)param_1 + 0x114) = uVar13 | uVar4;
  uVar11 = bVar8 & 3 | (uVar11 & 1) << 3;
  uVar13 = *(ushort *)(lVar36 + 0x5e);
  *(ushort *)((long)param_1 + 0x114) = uVar9 & 0x100 | uVar4 | uVar11;
  uVar40 = *(undefined4 *)(lVar33 + 0x88);
  *(undefined4 *)((long)param_1 + 0x11c) = *(undefined4 *)(lVar33 + 0x84);
  *(undefined4 *)(param_1 + 0x24) = uVar40;
  uVar40 = *(undefined4 *)(lVar33 + 0x90);
  *(undefined4 *)((long)param_1 + 0x124) = *(undefined4 *)(lVar33 + 0x8c);
  *(undefined4 *)(param_1 + 0x25) = uVar40;
  *(undefined4 *)((long)param_1 + 300) = *(undefined4 *)(lVar33 + 0x94);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(lVar33 + 0x98);
  *(undefined4 *)((long)param_1 + 0x134) = *(undefined4 *)(lVar33 + 0x9c);
  uVar11 = uVar11 | (*(ushort *)(lVar36 + 0x5e) >> 2 & 1) << 4;
  *(ushort *)((long)param_1 + 0x114) = uVar9 & 0x100 | uVar4 | uVar11;
  uVar11 = uVar11 | (*(ushort *)(lVar36 + 0x5e) >> 3 & 1) << 5;
  *(ushort *)((long)param_1 + 0x114) = uVar9 & 0x100 | uVar4 | uVar11;
  uVar11 = uVar11 | (*(ushort *)(lVar36 + 0x5e) >> 4 & 1) << 7;
  *(ushort *)((long)param_1 + 0x114) = uVar9 & 0x100 | uVar4 | uVar11;
  uVar4 = uVar4 | uVar9 & 0x100 | uVar11 | (*(ushort *)(lVar36 + 0x5e) >> 8 & 1) << 9;
  *(ushort *)((long)param_1 + 0x114) = uVar4;
  uVar4 = uVar4 | (*(ushort *)(lVar36 + 0x5e) & 0x200) << 1;
  *(ushort *)((long)param_1 + 0x114) = uVar4;
  uVar4 = uVar4 | (*(ushort *)(lVar36 + 0x5e) & 0x800) << 1;
  *(ushort *)((long)param_1 + 0x114) = uVar4;
  uVar4 = uVar4 | *(ushort *)(lVar36 + 0x5e) & 0x2000;
  *(ushort *)((long)param_1 + 0x114) = uVar4;
  uVar4 = uVar4 | (*(ushort *)(lVar36 + 0x5e) >> 0xe) << 0xf;
  *(ushort *)((long)param_1 + 0x114) = uVar4;
  *(ushort *)((long)param_1 + 0x114) = uVar4 | (ushort)*(byte *)(param_7 + 0xd2) << 0xe | 0x40;
  if (((uVar13 >> 6 & 1) == 0) || (*(uint *)(lVar36 + 0xa0) == 0)) {
    param_1[0x27] = 0;
  }
  else {
    pbVar38 = (byte *)(lVar36 + (ulong)*(uint *)(lVar36 + 0xa0));
    pbVar37 = pbVar38 + 1;
    bVar8 = *pbVar38;
    lVar28 = FUN_00367b30(0x10);
    param_1[0x27] = lVar28;
    uVar29 = FUN_00367b30(0x40);
    *(undefined8 *)(param_1[0x27] + 8) = uVar29;
    uVar29 = FUN_00367b30(0x40);
    *(undefined8 *)param_1[0x27] = uVar29;
    if (bVar8 == 0) {
      **(undefined4 **)(param_1[0x27] + 8) = 0;
LAB_00387c5c:
      bVar14 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 4) = 0;
LAB_00387c6c:
      bVar15 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 8) = 0;
LAB_00387c7c:
      bVar16 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0xc) = 0;
LAB_00387c8c:
      bVar17 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x10) = 0;
LAB_00387c9c:
      bVar18 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x14) = 0;
LAB_00387cac:
      bVar19 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x18) = 0;
LAB_00387cbc:
      bVar20 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x1c) = 0;
LAB_00387ccc:
      bVar21 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x20) = 0;
LAB_00387cdc:
      bVar22 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x24) = 0;
LAB_00387cec:
      bVar23 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x28) = 0;
LAB_00387cfc:
      bVar24 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x2c) = 0;
LAB_00387d0c:
      bVar25 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x30) = 0;
LAB_00387d1c:
      bVar26 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x34) = 0;
LAB_00387d2c:
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x38) = 0;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x3c) = 0;
      if (bVar8 == 0) {
        **(undefined4 **)param_1[0x27] = 0;
        pbVar38 = pbVar37;
        if (!bVar14) goto LAB_00387e8c;
LAB_00387d5c:
        pbVar37 = pbVar38 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 4) = *(undefined4 *)pbVar38;
        pbVar38 = pbVar37;
        if (!bVar15) goto LAB_00387d70;
LAB_00387e9c:
        pbVar38 = pbVar37 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 8) = *(undefined4 *)pbVar37;
        if (!bVar16) goto LAB_00387eb0;
LAB_00387d80:
        pbVar37 = pbVar38 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0xc) = *(undefined4 *)pbVar38;
        pbVar38 = pbVar37;
        if (!bVar17) goto LAB_00387d94;
LAB_00387ec0:
        pbVar37 = pbVar38 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0x10) = *(undefined4 *)pbVar38;
        pbVar38 = pbVar37;
        if (bVar18) goto LAB_00387ed8;
LAB_00387da8:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x14) = 0;
        if (bVar19) goto LAB_00387db8;
LAB_00387eec:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x18) = 0;
        pbVar37 = pbVar38;
        if (bVar20) goto LAB_00387efc;
LAB_00387dcc:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x1c) = 0;
        if (bVar21) goto LAB_00387ddc;
LAB_00387f10:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x20) = 0;
        pbVar38 = pbVar37;
        if (bVar22) goto LAB_00387f20;
LAB_00387df0:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x24) = 0;
        pbVar37 = pbVar38;
        if (!bVar23) goto LAB_00387e04;
LAB_00387f38:
        pbVar37 = pbVar38 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0x28) = *(undefined4 *)pbVar38;
        if (!bVar24) goto LAB_00387f4c;
LAB_00387e14:
        pbVar38 = pbVar37 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0x2c) = *(undefined4 *)pbVar37;
        pbVar37 = pbVar38;
        if (!bVar25) goto LAB_00387e28;
LAB_00387f5c:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x30) = *(undefined4 *)pbVar37;
        pbVar37 = pbVar37 + 4;
      }
      else {
        pbVar38 = pbVar37 + 4;
        **(undefined4 **)param_1[0x27] = *(undefined4 *)pbVar37;
        pbVar37 = pbVar38;
        if (bVar14) goto LAB_00387d5c;
LAB_00387e8c:
        *(undefined4 *)(*(long *)param_1[0x27] + 4) = 0;
        pbVar38 = pbVar37;
        if (bVar15) goto LAB_00387e9c;
LAB_00387d70:
        *(undefined4 *)(*(long *)param_1[0x27] + 8) = 0;
        if (bVar16) goto LAB_00387d80;
LAB_00387eb0:
        *(undefined4 *)(*(long *)param_1[0x27] + 0xc) = 0;
        pbVar37 = pbVar38;
        if (bVar17) goto LAB_00387ec0;
LAB_00387d94:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x10) = 0;
        pbVar38 = pbVar37;
        if (!bVar18) goto LAB_00387da8;
LAB_00387ed8:
        pbVar38 = pbVar37 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0x14) = *(undefined4 *)pbVar37;
        if (!bVar19) goto LAB_00387eec;
LAB_00387db8:
        pbVar37 = pbVar38 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0x18) = *(undefined4 *)pbVar38;
        pbVar38 = pbVar37;
        if (!bVar20) goto LAB_00387dcc;
LAB_00387efc:
        pbVar37 = pbVar38 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0x1c) = *(undefined4 *)pbVar38;
        if (!bVar21) goto LAB_00387f10;
LAB_00387ddc:
        pbVar38 = pbVar37 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0x20) = *(undefined4 *)pbVar37;
        pbVar37 = pbVar38;
        if (!bVar22) goto LAB_00387df0;
LAB_00387f20:
        pbVar38 = pbVar37 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0x24) = *(undefined4 *)pbVar37;
        pbVar37 = pbVar38;
        if (bVar23) goto LAB_00387f38;
LAB_00387e04:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x28) = 0;
        if (bVar24) goto LAB_00387e14;
LAB_00387f4c:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x2c) = 0;
        if (bVar25) goto LAB_00387f5c;
LAB_00387e28:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x30) = 0;
      }
      uVar40 = 0;
      if (bVar26) {
        uVar40 = *(undefined4 *)pbVar37;
      }
      *(undefined4 *)(*(long *)param_1[0x27] + 0x34) = uVar40;
      *(undefined4 *)(*(long *)param_1[0x27] + 0x38) = 0;
    }
    else {
      **(undefined4 **)(param_1[0x27] + 8) = *(undefined4 *)pbVar37;
      if (bVar8 == 1) {
        pbVar37 = pbVar38 + 5;
        goto LAB_00387c5c;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 4) = *(undefined4 *)(pbVar38 + 5);
      if (bVar8 < 3) {
        pbVar37 = pbVar38 + 9;
        bVar14 = true;
        goto LAB_00387c6c;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 8) = *(undefined4 *)(pbVar38 + 9);
      if (bVar8 == 3) {
        pbVar37 = pbVar38 + 0xd;
        bVar14 = true;
        bVar15 = true;
        goto LAB_00387c7c;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0xc) = *(undefined4 *)(pbVar38 + 0xd);
      if (bVar8 < 5) {
        pbVar37 = pbVar38 + 0x11;
        bVar15 = true;
        bVar14 = true;
        bVar16 = true;
        goto LAB_00387c8c;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x10) = *(undefined4 *)(pbVar38 + 0x11);
      if (bVar8 == 5) {
        pbVar37 = pbVar38 + 0x15;
        bVar16 = true;
        bVar14 = true;
        bVar15 = true;
        bVar17 = true;
        goto LAB_00387c9c;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x14) = *(undefined4 *)(pbVar38 + 0x15);
      if (bVar8 < 7) {
        pbVar37 = pbVar38 + 0x19;
        bVar17 = true;
        bVar15 = true;
        bVar14 = true;
        bVar16 = true;
        bVar18 = true;
        goto LAB_00387cac;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x18) = *(undefined4 *)(pbVar38 + 0x19);
      if (bVar8 == 7) {
        pbVar37 = pbVar38 + 0x1d;
        bVar18 = true;
        bVar16 = true;
        bVar14 = true;
        bVar15 = true;
        bVar17 = true;
        bVar19 = true;
        goto LAB_00387cbc;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x1c) = *(undefined4 *)(pbVar38 + 0x1d);
      if (bVar8 < 9) {
        pbVar37 = pbVar38 + 0x21;
        bVar19 = true;
        bVar17 = true;
        bVar15 = true;
        bVar14 = true;
        bVar16 = true;
        bVar18 = true;
        bVar20 = true;
        goto LAB_00387ccc;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x20) = *(undefined4 *)(pbVar38 + 0x21);
      if (bVar8 == 9) {
        pbVar37 = pbVar38 + 0x25;
        bVar20 = true;
        bVar18 = true;
        bVar16 = true;
        bVar14 = true;
        bVar15 = true;
        bVar17 = true;
        bVar19 = true;
        bVar21 = true;
        goto LAB_00387cdc;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x24) = *(undefined4 *)(pbVar38 + 0x25);
      if (bVar8 < 0xb) {
        pbVar37 = pbVar38 + 0x29;
        bVar21 = true;
        bVar19 = true;
        bVar17 = true;
        bVar15 = true;
        bVar14 = true;
        bVar16 = true;
        bVar18 = true;
        bVar20 = true;
        bVar22 = true;
        goto LAB_00387cec;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x28) = *(undefined4 *)(pbVar38 + 0x29);
      if (bVar8 == 0xb) {
        pbVar37 = pbVar38 + 0x2d;
        bVar22 = true;
        bVar20 = true;
        bVar18 = true;
        bVar16 = true;
        bVar14 = true;
        bVar15 = true;
        bVar17 = true;
        bVar19 = true;
        bVar21 = true;
        bVar23 = true;
        goto LAB_00387cfc;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x2c) = *(undefined4 *)(pbVar38 + 0x2d);
      if (bVar8 < 0xd) {
        pbVar37 = pbVar38 + 0x31;
        bVar23 = true;
        bVar21 = true;
        bVar19 = true;
        bVar17 = true;
        bVar15 = true;
        bVar14 = true;
        bVar16 = true;
        bVar18 = true;
        bVar20 = true;
        bVar22 = true;
        bVar24 = true;
        goto LAB_00387d0c;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x30) = *(undefined4 *)(pbVar38 + 0x31);
      if (bVar8 == 0xd) {
        pbVar37 = pbVar38 + 0x35;
        bVar24 = true;
        bVar22 = true;
        bVar20 = true;
        bVar18 = true;
        bVar16 = true;
        bVar14 = true;
        bVar15 = true;
        bVar17 = true;
        bVar19 = true;
        bVar21 = true;
        bVar23 = true;
        bVar25 = true;
        goto LAB_00387d1c;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x34) = *(undefined4 *)(pbVar38 + 0x35);
      if (bVar8 < 0xf) {
        pbVar37 = pbVar38 + 0x39;
        bVar25 = true;
        bVar23 = true;
        bVar21 = true;
        bVar19 = true;
        bVar17 = true;
        bVar15 = true;
        bVar14 = true;
        bVar16 = true;
        bVar18 = true;
        bVar20 = true;
        bVar22 = true;
        bVar24 = true;
        bVar26 = true;
        goto LAB_00387d2c;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x38) = *(undefined4 *)(pbVar38 + 0x39);
      if (bVar8 == 0xf) {
        pbVar38 = pbVar38 + 0x3d;
        *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x3c) = 0;
      }
      else {
        *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x3c) = *(undefined4 *)(pbVar38 + 0x3d);
        pbVar38 = pbVar38 + 0x41;
      }
      **(undefined4 **)param_1[0x27] = *(undefined4 *)pbVar38;
      *(undefined4 *)(*(long *)param_1[0x27] + 4) = *(undefined4 *)(pbVar38 + 4);
      *(undefined4 *)(*(long *)param_1[0x27] + 8) = *(undefined4 *)(pbVar38 + 8);
      *(undefined4 *)(*(long *)param_1[0x27] + 0xc) = *(undefined4 *)(pbVar38 + 0xc);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x10) = *(undefined4 *)(pbVar38 + 0x10);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x14) = *(undefined4 *)(pbVar38 + 0x14);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x18) = *(undefined4 *)(pbVar38 + 0x18);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x1c) = *(undefined4 *)(pbVar38 + 0x1c);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x20) = *(undefined4 *)(pbVar38 + 0x20);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x24) = *(undefined4 *)(pbVar38 + 0x24);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x28) = *(undefined4 *)(pbVar38 + 0x28);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x2c) = *(undefined4 *)(pbVar38 + 0x2c);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x30) = *(undefined4 *)(pbVar38 + 0x30);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x34) = *(undefined4 *)(pbVar38 + 0x34);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x38) = *(undefined4 *)(pbVar38 + 0x38);
      if (bVar8 != 0xf) {
        *(undefined4 *)(*(long *)param_1[0x27] + 0x3c) = *(undefined4 *)(pbVar38 + 0x3c);
        goto joined_r0x00387bd0;
      }
    }
    *(undefined4 *)(*(long *)param_1[0x27] + 0x3c) = 0;
  }
joined_r0x00387bd0:
  if ((uVar13 >> 7 & 1) != 0) {
    puVar6 = PTR_DAT_04bd06c8;
    if (*(char *)(param_7 + 0xd1) != '\0') {
      puVar6 = PTR_DAT_04bd06b0;
    }
    param_1[0x21] = (long)puVar6;
  }
  if (((*(ushort *)((long)param_1 + 0x114) >> 7 & 1) == 0) || (*(uint *)(lVar36 + 0xa4) == 0))
  goto LAB_003880e0;
  puVar2 = (undefined4 *)(lVar36 + (ulong)*(uint *)(lVar36 + 0xa4));
  if (*(char *)((long)puVar2 + 10) == '\0') {
    lVar28 = 0;
LAB_00387fbc:
    lVar33 = 0x30;
  }
  else {
    lVar28 = 0xc;
    if (0x800 < *(ushort *)(param_7 + 0xd6)) {
      lVar28 = 0x20;
    }
    lVar28 = (long)puVar2 + lVar28;
    if ((ulong)*(byte *)(lVar28 + 4) == 0) goto LAB_00387fbc;
    lVar33 = (ulong)*(byte *)(lVar28 + 4) * 0x10 + 0x20;
  }
  puVar30 = (undefined4 *)FUN_00367b30(lVar33);
  param_1[0x2a] = (long)puVar30;
  *puVar30 = *puVar2;
  *(undefined4 *)(param_1[0x2a] + 4) = puVar2[1];
  *(undefined8 *)(param_1[0x2a] + 8) = 0;
  *(undefined1 *)(param_1[0x2a] + 0x10) = *(undefined1 *)(puVar2 + 2);
  *(undefined1 *)(param_1[0x2a] + 0x11) = *(undefined1 *)((long)puVar2 + 9);
  if (*(ushort *)(param_7 + 0xd6) < 0x801) {
    *(undefined4 *)(param_1[0x2a] + 0x14) = 0;
    *(undefined4 *)(param_1[0x2a] + 0x18) = 0;
    *(undefined4 *)(param_1[0x2a] + 0x1c) = 0;
  }
  else {
    *(undefined4 *)(param_1[0x2a] + 0x14) = puVar2[3];
    *(undefined4 *)(param_1[0x2a] + 0x18) = puVar2[4];
    *(uint *)(param_1[0x2a] + 0x1c) = (uint)*(byte *)(puVar2 + 5);
  }
  if (lVar28 == 0) {
    *(undefined1 *)(param_1[0x2a] + 0x12) = 0;
  }
  else {
    *(undefined1 *)(param_1[0x2a] + 0x12) = *(undefined1 *)(lVar28 + 4);
    if (*(char *)(lVar28 + 4) != '\0') {
      lVar33 = 0;
      uVar35 = 0;
      do {
        lVar1 = uVar35 * 4;
        uVar35 = uVar35 + 1;
        lVar1 = lVar28 + (ulong)*(uint *)(lVar28 + 8 + lVar1);
        *(long *)(param_1[0x2a] + lVar33 + 0x20) = lVar1;
        lVar3 = param_1[0x2a] + lVar33;
        lVar33 = lVar33 + 0x10;
        *(uint *)(lVar3 + 0x28) = (uint)*(byte *)(lVar1 + 1);
      } while (uVar35 < *(byte *)(lVar28 + 4));
    }
  }
LAB_003880e0:
  lVar28 = *(long *)(lVar34 + 8) + 0xc;
  plVar31 = (long *)(**(code **)(**(long **)(lVar34 + 0x30) + 0x68))
                              (*(long **)(lVar34 + 0x30),param_3,
                               lVar28 + (ulong)*(uint *)(lVar28 + (ulong)*(ushort *)(lVar36 + 0x5a)
                                                                  * 4));
  param_1[0x1e] = (long)plVar31;
  fVar41 = *(float *)(lVar36 + 0x70);
  if ((*(ushort *)(lVar36 + 0x5e) >> 0xc & 1) == 0) {
    *(float *)(param_1 + 0x1f) = fVar41;
    fVar41 = *(float *)(lVar36 + 0x74);
  }
  else {
    iVar27 = (**(code **)(*plVar31 + 0x20))();
    *(float *)(param_1 + 0x1f) = fVar41 * (float)iVar27;
    fVar41 = *(float *)(lVar36 + 0x74);
    iVar27 = (**(code **)(*(long *)param_1[0x1e] + 0x28))();
    fVar41 = fVar41 * (float)iVar27;
  }
  *(float *)((long)param_1 + 0xfc) = fVar41;
  uVar32 = FUN_003649a0(*(undefined8 *)(param_7 + 0x30),*(undefined2 *)(param_5 + 0x58));
  uVar29 = 0;
  if (param_6 != 0) {
    uVar29 = FUN_003649a0(*(undefined8 *)(param_7 + 0x38),*(undefined2 *)(param_6 + 0x58));
  }
  plVar31 = (long *)FUN_00367b30(0x50);
  if (plVar31 != (long *)0x0) {
    *plVar31 = (long)(PTR_DAT_04bd08c0 + 0x10);
    FUN_003745c0(plVar31,param_2,param_3,uVar32,uVar29,param_7);
  }
  param_1[0x28] = (long)plVar31;
  if (*(uint *)(lVar39 + 0x80) != 0) {
    param_1[0x1c] = lVar39 + (ulong)*(uint *)(lVar39 + 0x80);
  }
  *param_4 = (uint)*(ushort *)(lVar36 + 0x5e);
  uVar5 = 0;
  if (1 < uVar12) {
    uVar5 = (uVar12 >> 1) - 1;
  }
  uVar35 = 0;
  if (1 < uVar10) {
    uVar35 = (ulong)((uVar10 >> 1) - 1);
  }
  *(undefined8 *)(param_4 + 2) = *(undefined8 *)(local_88 + 0x38);
  uVar7 = *(uint *)(lVar39 + 100);
  param_4[8] = uVar5;
  *(ulong *)(param_4 + 4) = lVar39 + (ulong)uVar7;
  *(ulong *)(param_4 + 6) = uVar35;
  *(undefined1 *)((long)param_1 + 0x117) = *(undefined1 *)(param_7 + 0xd1);
  return;
}

