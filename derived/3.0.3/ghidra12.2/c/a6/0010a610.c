
/* WARNING: Type propagation algorithm not settling */

uint FUN_0010a610(long param_1,long param_2,long *param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  undefined1 uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  byte bVar16;
  uint uVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  uint uVar23;
  int local_4fc;
  uint uStack_4dc;
  ulong local_4c8;
  undefined2 local_4c0 [56];
  undefined1 auStack_450 [112];
  undefined1 auStack_3e0 [112];
  undefined4 local_370 [2];
  long local_368 [2];
  long local_358;
  long local_338;
  char local_300;
  long local_2e0 [14];
  ushort local_270;
  long local_258;
  undefined1 *local_250;
  undefined1 *local_248;
  undefined2 *local_240;
  long *local_238;
  undefined8 local_230;
  uint local_228;
  short local_224;
  short local_222;
  char local_220;
  undefined1 auStack_214 [4];
  undefined1 auStack_210 [112];
  short local_1a0 [56];
  long local_130;
  short local_128;
  undefined6 uStack_126;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long local_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  uint6 local_d0;
  undefined2 uStack_ca;
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined2 local_c0;
  undefined4 uStack_be;
  undefined2 uStack_ba;
  undefined4 local_b8;
  undefined2 uStack_b4;
  undefined2 uStack_b2;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  
  plVar1 = (long *)(param_1 + 0x6f4d8);
  local_4fc = 1000000;
LAB_0010a710:
  bVar4 = false;
  uStack_4dc = 0;
  bVar5 = false;
  bVar6 = false;
  uVar9 = 0xffff;
  *param_3 = 0;
  *(undefined2 *)(param_3 + 1) = 0;
  *(undefined8 *)((long)param_3 + 10) = uStack_a4;
  *(ulong *)((long)param_3 + 0x22) = (ulong)uStack_8c._6_2_ << 0x30;
  *(ulong *)((long)param_3 + 0x2a) = (ulong)uStack_84._6_2_ << 0x30;
  *(ulong *)((long)param_3 + 0x12) = (ulong)uStack_9c._6_2_ << 0x30;
  *(ulong *)((long)param_3 + 0x1a) = (ulong)uStack_94._6_2_ << 0x30;
  *(undefined2 *)((long)param_3 + 0x4a) = 0;
  *(ulong *)((long)param_3 + 0x3a) = (ulong)uStack_74._6_2_ << 0x30;
  *(ulong *)((long)param_3 + 0x42) = (ulong)local_6c._6_2_ << 0x30;
  *(ulong *)((long)param_3 + 0x32) = (ulong)uStack_7c._6_2_ << 0x30;
  *(undefined2 *)((long)param_3 + 100) = 0;
  *(undefined8 *)((long)param_3 + 0x54) = 0;
  *(undefined8 *)((long)param_3 + 0x5c) = 0;
  *(undefined8 *)((long)param_3 + 0x4c) = 0;
  *(undefined2 *)((long)param_3 + 0x66) = 0x110;
  *(undefined1 *)(param_3 + 0xd) = 0;
  *(undefined2 *)(param_3 + 0xe) = 0;
  *(undefined4 *)((long)param_3 + 0x72) = 0;
  *(undefined4 *)(param_3 + 0xf) = 0;
  *(undefined2 *)((long)param_3 + 0x7c) = 0;
  local_130 = 0;
  local_128 = 0;
  uStack_126 = (undefined6)uStack_a4;
  lStack_120._0_2_ = (undefined2)((ulong)uStack_a4 >> 0x30);
  lStack_118 = CONCAT62(lStack_118._2_6_,uStack_9c._6_2_);
  lStack_110 = CONCAT62(lStack_110._2_6_,uStack_94._6_2_);
  lStack_108 = CONCAT62(lStack_108._2_6_,uStack_8c._6_2_);
  lStack_f0 = CONCAT62(lStack_f0._2_6_,uStack_74._6_2_);
  local_e8 = CONCAT62((int6)((ulong)local_e8 >> 0x10),local_6c._6_2_);
  lStack_100 = CONCAT62(lStack_100._2_6_,uStack_84._6_2_);
  lStack_f8 = CONCAT62(lStack_f8._2_6_,uStack_7c._6_2_);
  uStack_d8 = uStack_d8 & 0xffffffff00000000;
  local_d0 = local_d0 & 0xffff00000000;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  uStack_ca = 0x110;
  local_c8 = 0;
  local_c0 = 0;
  uStack_be = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_9c = (ulong)uStack_9c._6_2_ << 0x30;
  uStack_94 = (ulong)uStack_94._6_2_ << 0x30;
  uStack_8c = (ulong)uStack_8c._6_2_ << 0x30;
  uStack_84 = (ulong)uStack_84._6_2_ << 0x30;
  uStack_7c = (ulong)uStack_7c._6_2_ << 0x30;
  uStack_74 = (ulong)uStack_74._6_2_ << 0x30;
  local_6c = (ulong)local_6c._6_2_ << 0x30;
LAB_0010a818:
  uVar20 = 0;
  iVar10 = 0;
  local_4c8 = 0xffffffff;
LAB_0010a82c:
  lVar21 = param_2 + uVar20 * 0x70;
  plVar22 = (long *)(lVar21 + 0x60);
  lVar14 = *plVar22;
  if (lVar14 == 0) goto joined_r0x0010ac94;
  cVar2 = *(char *)(param_2 + uVar20 * 0x70 + 0xb8);
  if (cVar2 == '\x01') {
    uVar23 = 0xe0000;
  }
  else if (cVar2 == '\x02') {
    uVar23 = 0xe0001;
  }
  else if (cVar2 == '\x03') {
    uVar23 = *(uint *)(lVar14 + 0x70);
  }
  else {
    uVar23 = (*(uint *)(lVar14 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar14 + 8) & 0xff00ff) << 8;
    uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
  }
  if (!bVar6) {
    bVar6 = *(long *)(param_2 + uVar20 * 0x70 + 0x70) != 0;
  }
  pbVar18 = (byte *)(param_2 + uVar20 * 0x70 + 0xb7);
  bVar11 = *pbVar18;
  if ((byte)((bVar11 & 0xf) - 3) < 2) goto joined_r0x0010ac94;
  lVar21 = lVar21 + 0x58;
  if ((int)uVar23 < 0x50000) {
    if (uVar23 < 7) goto LAB_0010a9b8;
LAB_0010a8e0:
    if ((*(byte *)(param_1 + 0x6f4b2) >> 1 & 1) == 0) goto LAB_0010a9d4;
LAB_0010a8ec:
    cVar2 = *(char *)(param_2 + 0x51);
    if (cVar2 == '\0') {
      if (((((*(byte *)(*(long *)(param_2 + 0x28) + 0x658) & 3) != 0) &&
           (lVar14 = *(long *)(*(long *)(param_2 + 0x28) + uVar20 * 0x50 + 0x40), lVar14 != 0)) &&
          ((*(byte *)(lVar14 + 0x2050) >> 1 & 1) != 0)) && (*(char *)(param_2 + 0x50) == '\x01')) {
        sVar7 = FUN_0010d990(param_1,param_2,lVar21,uVar23,iVar10,1,param_4);
        uVar9 = (int)sVar7;
        if (-1 < sVar7) {
          bVar11 = *pbVar18;
          goto LAB_0010a9d4;
        }
        goto LAB_0010b500;
      }
      goto LAB_0010a9d4;
    }
  }
  else {
    if (0x40000005 < (int)uVar23) {
      if ((uVar23 + 0xbffb0000 < 2) || (uVar23 == 0x40000006)) goto LAB_0010a9b8;
      goto LAB_0010a8e0;
    }
    if ((1 < uVar23 - 0x50000) && (1 < uVar23 - 0xe0000)) goto LAB_0010a8e0;
LAB_0010a9b8:
    local_130 = *(long *)(param_2 + 0x30);
    local_c0 = *(undefined2 *)(param_2 + 0x4c);
    if ((*(byte *)(param_1 + 0x6f4b2) >> 1 & 1) != 0) goto LAB_0010a8ec;
LAB_0010a9d4:
    cVar2 = *(char *)(param_2 + 0x51);
  }
  cVar3 = *(char *)(param_2 + 0x50);
  *pbVar18 = bVar11 | cVar3 << 4;
  lVar14 = *(long *)(param_2 + 0x28);
  iVar13 = (int)local_4c8;
  if (cVar2 == '\0') {
    if ((((*(byte *)(lVar14 + 0x658) & 3) == 0) ||
        (lVar15 = *(long *)(lVar14 + uVar20 * 0x50 + 0x40), lVar15 == 0)) ||
       (((*(byte *)(lVar15 + 0x2050) >> 1 & 1) == 0 || ((cVar3 != '\x06' && (cVar3 != '\x01')))))) {
      sVar7 = FUN_00109d40(param_1,lVar14,lVar21,iVar10,&local_130);
      uVar9 = (uint)sVar7;
      if ((int)uVar9 < 0) goto LAB_0010b500;
      if (*(char *)(param_2 + 0x50) == '\x06') {
        sVar7 = FUN_0010b7a0(param_1,&local_130,local_1a0,0x70);
        uVar9 = (uint)sVar7;
        if ((int)uVar9 < 1) goto LAB_0010aff4;
        if ((ulong)*(ushort *)(param_2 + 0x4c) == 0) {
          uVar17 = 0;
        }
        else {
          uVar19 = 0;
          do {
            if (*(short *)(*(long *)(param_2 + 0x30) + uVar19 * 2) != local_1a0[uVar19]) break;
            uVar19 = uVar19 + 1;
          } while (uVar19 < *(ushort *)(param_2 + 0x4c));
          uVar17 = (uint)uVar19;
        }
      }
      else {
        uVar17 = (uint)*(ushort *)(param_2 + 0x4c);
      }
      if (bVar4) goto joined_r0x0010ac18;
      if (((int)uStack_4dc < (int)uVar17) && (local_128 == (short)param_3[1])) {
        bVar4 = false;
      }
      else {
        bVar4 = false;
        if ((iVar13 != -1) && (local_128 <= (short)param_3[1])) goto joined_r0x0010ac94;
      }
    }
    else {
      sVar7 = FUN_00109d40(param_1,lVar14,lVar21,iVar10,&local_130);
      uVar9 = (int)sVar7;
      if (sVar7 < 0) goto LAB_0010b500;
      if (*(char *)(param_2 + 0x50) == '\x01') {
        sVar7 = FUN_0010b5b0();
      }
      else {
        sVar7 = FUN_0010b7a0(param_1,&local_130,local_1a0,0x70);
      }
      uVar17 = (uint)sVar7;
      if ((int)uVar17 < 1) {
        uVar9 = 0xffff9b24;
        if ((uVar17 & 0x7f00) != 0x1400 && uVar17 != 0) {
          uVar9 = uVar17;
        }
        goto LAB_0010b500;
      }
      if ((ulong)*(ushort *)(param_2 + 0x4c) == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          if (*(short *)(*(long *)(param_2 + 0x30) + uVar19 * 2) != local_1a0[uVar19]) break;
          uVar19 = uVar19 + 1;
        } while (uVar19 < *(ushort *)(param_2 + 0x4c));
      }
      uVar17 = (uint)uVar19;
      sVar7 = FUN_0010d990(param_1,param_2,lVar21,uVar23,iVar10,1,param_4);
      uVar9 = (uint)sVar7;
      if ((int)uVar9 < 0) goto LAB_0010b500;
      bVar4 = true;
joined_r0x0010ac18:
      if ((int)uVar17 <= (int)uStack_4dc) {
        if (uVar17 == uStack_4dc) {
          uVar17 = uStack_4dc;
          if ((iVar13 == -1) || ((short)param_3[1] < local_128)) goto LAB_0010ad74;
        }
        else if (iVar13 == -1) goto LAB_0010ad74;
        goto joined_r0x0010ac94;
      }
    }
LAB_0010ad74:
    param_3[2] = lStack_120;
    param_3[3] = lStack_118;
    *param_3 = local_130;
    param_3[1] = CONCAT62(uStack_126,local_128);
    param_3[6] = lStack_100;
    param_3[7] = lStack_f8;
    param_3[4] = lStack_110;
    param_3[5] = lStack_108;
    param_3[10] = uStack_e0;
    param_3[0xb] = uStack_d8;
    param_3[8] = lStack_f0;
    param_3[9] = local_e8;
    param_3[0xe] = CONCAT26(uStack_ba,CONCAT42(uStack_be,local_c0));
    param_3[0xf] = CONCAT26(uStack_b2,CONCAT24(uStack_b4,local_b8));
    param_3[0xc] = CONCAT26(uStack_ca,local_d0);
    param_3[0xd] = CONCAT71(uStack_c7,local_c8);
    FUN_0010c010(plVar22,*(byte *)(param_2 + 0x50) - 3 < 2,param_3);
    *(bool *)(param_1 + 0x6f4f8) = *(char *)(param_1 + uVar20 + 0x6f4fc) == '\x01';
    local_4c8 = uVar20 & 0xffffffff;
    uStack_4dc = uVar17;
  }
  else {
    sVar7 = FUN_00109d40(param_1,lVar14,lVar21,iVar10,&local_130);
    uVar9 = (int)sVar7;
    if (sVar7 < 0) goto LAB_0010b500;
    sVar7 = FUN_0010b5b0(param_1,&local_130,local_1a0,0x70);
    uVar9 = (uint)sVar7;
    if ((int)uVar9 < 1) {
LAB_0010aff4:
      uVar23 = 0xffff9b24;
      if ((uVar9 & 0x7f00) != 0x1400 && uVar9 != 0) {
        uVar23 = uVar9;
      }
      sVar7 = (short)uVar23;
      uVar9 = uVar23;
      goto joined_r0x0010b564;
    }
    if ((iVar13 == -1) || (sVar7 = FUN_00100410(auStack_210,local_1a0), 0 < sVar7)) {
      param_3[2] = lStack_120;
      param_3[3] = lStack_118;
      *param_3 = local_130;
      param_3[1] = CONCAT62(uStack_126,local_128);
      param_3[6] = lStack_100;
      param_3[7] = lStack_f8;
      param_3[4] = lStack_110;
      param_3[5] = lStack_108;
      param_3[10] = uStack_e0;
      param_3[0xb] = uStack_d8;
      param_3[8] = lStack_f0;
      param_3[9] = local_e8;
      param_3[0xe] = CONCAT26(uStack_ba,CONCAT42(uStack_be,local_c0));
      param_3[0xf] = CONCAT26(uStack_b2,CONCAT24(uStack_b4,local_b8));
      param_3[0xc] = CONCAT26(uStack_ca,local_d0);
      param_3[0xd] = CONCAT71(uStack_c7,local_c8);
      FUN_0010c010(plVar22,*(byte *)(param_2 + 0x50) - 3 < 2,param_3);
      *(bool *)(param_1 + 0x6f4f8) = *(char *)(param_1 + uVar20 + 0x6f4fc) == '\x01';
      FUN_00100350(auStack_210,local_1a0);
      local_4c8 = uVar20 & 0xffffffff;
    }
  }
joined_r0x0010ac94:
  iVar10 = iVar10 + 1;
  uVar20 = uVar20 + 1;
  if (0x13 < uVar20) goto LAB_0010ae3c;
  goto LAB_0010a82c;
LAB_0010ae3c:
  iVar10 = (int)local_4c8;
  if (iVar10 != -1) {
    lVar14 = (long)iVar10;
    if ((!bVar4) ||
       ((*(long *)(param_2 + lVar14 * 0x70 + 0x60) != 0 &&
        (*(long *)(*(long *)(param_2 + 0x28) + lVar14 * 0x50 + 0x40) == 0)))) {
      cVar2 = *(char *)(param_2 + lVar14 * 0x70 + 0xb8);
      if (cVar2 == '\x01') {
        uVar9 = 0xe0000;
      }
      else if (cVar2 == '\x02') {
        uVar9 = 0xe0001;
      }
      else {
        lVar14 = *(long *)(param_2 + lVar14 * 0x70 + 0x60);
        if (cVar2 == '\x03') {
          uVar9 = *(uint *)(lVar14 + 0x70);
        }
        else {
          uVar9 = *(uint *)(lVar14 + 8);
          uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
          uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
        }
      }
      uVar9 = FUN_0010d990(param_1,param_2,param_2 + (long)iVar10 * 0x70 + 0x58,uVar9,local_4c8,2,
                           param_4);
    }
    if (-1 < (short)uVar9) {
      uVar9 = 1;
    }
    sVar7 = (short)uVar9;
    goto joined_r0x0010b564;
  }
  if (((!bVar6) || (*(char *)(param_2 + 0x53) < '\0')) || (1 < *(byte *)(param_2 + 0x50))) {
    return 0;
  }
  uVar12 = 5;
  if (*(byte *)(param_2 + 0x50) != 0) {
    uVar12 = 6;
  }
  *(undefined1 *)(param_2 + 0x50) = uVar12;
  lVar14 = 0x40;
  pbVar18 = (byte *)(param_2 + 0xb8);
  do {
    while( true ) {
      lVar21 = *(long *)(pbVar18 + -0x58);
      if (lVar21 == 0) goto LAB_0010afbc;
      if (*pbVar18 - 1 < 2) break;
      if (*pbVar18 == 3) {
        uVar23 = *(uint *)(lVar21 + 0x70);
        if (0xdffff < (int)uVar23) goto LAB_0010af10;
LAB_0010af4c:
        if (uVar23 - 0x50000 < 2) goto LAB_0010af6c;
        if (uVar23 == 0x80020000) {
          if (((-1 < *(char *)(param_2 + 0x53)) && (*(char *)(param_1 + 3) == '\0')) &&
             ((*(ushort *)(param_1 + 0x6d63a) - 2 < 3 &&
              (*(ushort *)(param_1 + 0x6d642) <= *(ushort *)(param_1 + 0x6f4a6)))))
          goto LAB_0010afbc;
          goto LAB_0010af74;
        }
        if (uVar23 == 6) goto LAB_0010af6c;
      }
      else {
        uVar23 = (*(uint *)(lVar21 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar21 + 8) & 0xff00ff) << 8
        ;
        uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
        if ((int)uVar23 < 0xe0000) goto LAB_0010af4c;
LAB_0010af10:
        if (uVar23 - 0xe0000 < 2) break;
        if ((1 < uVar23 + 0xbffb0000) && (uVar23 != 0x40000006)) goto LAB_0010afbc;
LAB_0010af6c:
        if (*(long *)(pbVar18 + -0x48) != 0) {
LAB_0010af74:
          bVar5 = true;
          pbVar18[-1] = 1;
          lVar21 = *(long *)(*(long *)(param_2 + 0x28) + lVar14);
          if (lVar21 != 0) {
            *(undefined1 *)(lVar21 + 0x2050) = 0;
            *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x28) + lVar14) + 0x2051) = 0;
            *(undefined2 *)(*(long *)(*(long *)(param_2 + 0x28) + lVar14) + 0x1fe0) = 0;
            bVar5 = true;
            *(undefined2 *)(*(long *)(*(long *)(param_2 + 0x28) + lVar14) + 0x1fe2) = 0;
          }
        }
      }
LAB_0010afbc:
      lVar14 = lVar14 + 0x50;
      pbVar18 = pbVar18 + 0x70;
      if (lVar14 == 0x680) goto LAB_0010afcc;
    }
    if (*(long *)(pbVar18 + -0x48) == 0) goto LAB_0010afbc;
    bVar5 = true;
    pbVar18[-1] = 1;
    lVar14 = lVar14 + 0x50;
    pbVar18 = pbVar18 + 0x70;
  } while (lVar14 != 0x680);
LAB_0010afcc:
  if (!bVar5) goto LAB_0010a818;
  sVar7 = FUN_0010a160(param_1,param_2,param_4,auStack_214);
  uVar9 = (uint)sVar7;
  if ((int)uVar9 < 0) goto LAB_0010b500;
  goto LAB_0010a818;
LAB_0010b500:
  sVar7 = (short)uVar9;
joined_r0x0010b564:
  if (sVar7 < 1) {
    return uVar9;
  }
  local_4fc = local_4fc + -1;
  if (local_4fc == 0) {
    return 0;
  }
  if (((*(char *)(param_2 + 0x53) < '\0') || (*(char *)(param_1 + 3) != '\0')) ||
     (2 < *(ushort *)(param_1 + 0x6d63a) - 2)) {
    local_224 = 0;
  }
  else {
    if (*(byte *)(param_2 + 0x50) - 5 < 2) {
      local_224 = FUN_0010b7a0();
    }
    else {
      local_224 = FUN_0010b5b0(param_1,param_3,auStack_3e0,0x70);
    }
    if (local_224 < 1) {
      return (int)local_224;
    }
    uVar8 = FUN_001004d0(auStack_3e0);
    if ((uVar8 < *(byte *)(param_1 + 0x6d648)) || (*(byte *)(param_1 + 0x6d649) < uVar8))
    goto LAB_0010a710;
  }
  if (*plVar1 == 0) {
    return 1;
  }
  if (local_224 == 0) {
    local_224 = FUN_0010b5b0(param_1,param_3,auStack_3e0,0x70);
    if (local_224 < 1) {
      return (int)local_224;
    }
  }
  local_222 = FUN_0010b7a0(param_1,param_3,auStack_450,0x70);
  if (local_222 < 1) {
    return (int)local_222;
  }
  cVar2 = (char)param_3[0xd];
  if (cVar2 == '\x01') {
    uVar9 = 0xe0000;
    lVar14 = param_3[6];
joined_r0x0010b144:
    if (lVar14 == 0) goto LAB_0010b10c;
LAB_0010b178:
    local_228 = FUN_0010b9c0(param_1,param_3,0xff,local_4c0,0x70);
    if ((int)local_228 < 0) {
      return local_228;
    }
  }
  else {
    if (cVar2 == '\x02') {
      uVar9 = 0xe0001;
      lVar14 = param_3[6];
    }
    else {
      if (cVar2 == '\x03') {
        uVar9 = *(uint *)(param_3[2] + 0x70);
        lVar14 = param_3[6];
        goto joined_r0x0010b144;
      }
      uVar9 = *(uint *)(param_3[2] + 8);
      uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
      uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
      lVar14 = param_3[6];
    }
    if (lVar14 != 0) goto LAB_0010b178;
LAB_0010b10c:
    if (((uVar9 - 0xe0000 < 2) || (uVar9 == 0x80020000)) || (uVar9 == 0x80030000))
    goto LAB_0010b178;
    local_228 = 0;
    local_4c0[0] = 0;
  }
  local_248 = auStack_450;
  local_250 = auStack_3e0;
  local_240 = local_4c0;
  local_230 = *(undefined8 *)(param_1 + 0x6f4e0);
  local_220 = '\0';
  local_258 = param_2;
  local_238 = param_3;
  sVar7 = (*(code *)*plVar1)(param_1,&local_258);
  if (sVar7 == 0) goto LAB_0010a710;
  if (1 < *(byte *)(param_3 + 0xd) - 1) {
    if (*(byte *)(param_3 + 0xd) == 3) {
      uVar9 = *(uint *)(param_3[2] + 0x70);
    }
    else {
      uVar9 = *(uint *)(param_3[2] + 8);
      uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
      uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    }
    if (uVar9 == 0x80020000) {
      bVar11 = *(byte *)((long)param_3 + 0x67);
      if ((bVar11 & 0xf0) != 0x10) goto LAB_0010b25c;
      if (*(char *)((long)param_3 + 0x66) == ' ') {
        return 1;
      }
    }
  }
  bVar11 = *(byte *)((long)param_3 + 0x67);
LAB_0010b25c:
  if ((0x1f < bVar11) || (bVar11 = *(byte *)((long)param_3 + 0x66), bVar11 < 0x20)) {
    return 1;
  }
  local_370[0] = 0;
  memcpy(local_2e0,param_3,0x88);
  bVar16 = 1;
  do {
    sVar7 = FUN_0010be60(param_1,local_2e0,local_368,local_370);
    uVar9 = (uint)sVar7;
    if ((int)uVar9 < 0) {
      return uVar9;
    }
    local_220 = ((byte)local_270 & 0x7f) + local_220;
    local_368[0] = local_2e0[0] + ((ulong)local_270 & 0x7f) * 2;
    local_224 = FUN_0010b5b0(param_1,local_368,auStack_3e0,0x70);
    if (local_224 < 1) {
      return (int)local_224;
    }
    local_222 = FUN_0010b7a0(param_1,local_368,auStack_450,0x70);
    if (local_222 < 1) {
      return (int)local_222;
    }
    if (local_300 == '\x01') {
      uVar23 = 0xe0000;
joined_r0x0010b370:
      if (local_338 == 0) goto LAB_0010b338;
LAB_0010b3a4:
      local_228 = FUN_0010b9c0(param_1,local_368,0xff,local_4c0,0x70);
      if ((int)local_228 < 0) {
        return local_228;
      }
    }
    else {
      if (local_300 == '\x02') {
        uVar23 = 0xe0001;
      }
      else {
        if (local_300 == '\x03') {
          uVar23 = *(uint *)(local_358 + 0x70);
          goto joined_r0x0010b370;
        }
        uVar23 = (*(uint *)(local_358 + 8) & 0xff00ff00) >> 8 |
                 (*(uint *)(local_358 + 8) & 0xff00ff) << 8;
        uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
      }
      if (local_338 != 0) goto LAB_0010b3a4;
LAB_0010b338:
      if (((uVar23 - 0xe0000 < 2) || (uVar23 == 0x80020000)) || (uVar23 == 0x80030000))
      goto LAB_0010b3a4;
      local_228 = 0;
      local_4c0[0] = 0;
    }
    local_248 = auStack_450;
    local_250 = auStack_3e0;
    local_238 = local_368;
    local_240 = local_4c0;
    local_230 = *(undefined8 *)(param_1 + 0x6f4e0);
    local_258 = param_2;
    sVar7 = (*(code *)*plVar1)(param_1,&local_258);
    if (sVar7 == 0) {
      *(byte *)((long)param_3 + 0x66) = bVar16 << 4;
      break;
    }
    memcpy(local_2e0,local_368,0x88);
    bVar16 = bVar16 + 1;
  } while (bVar16 < bVar11 >> 4);
  if (uVar9 != 0) {
    return uVar9;
  }
  goto LAB_0010a710;
}

