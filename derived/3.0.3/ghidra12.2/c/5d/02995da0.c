
/* WARNING: Type propagation algorithm not settling */

void FUN_02995da0(long param_1,undefined1 *param_2,ushort *param_3,uint param_4,uint param_5,
                 long param_6)

{
  undefined1 *puVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  ushort uVar10;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  ulong uVar15;
  char cVar16;
  undefined2 uVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  byte bVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  byte *pbVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  cVar7 = *(char *)(param_6 + 3);
  cVar8 = *(char *)(param_6 + 2);
  uVar32 = *(undefined4 *)(param_2 + 4);
  bVar13 = cVar8 == '\0';
  bVar14 = *(char *)(param_6 + 1) != '\0';
  if (DAT_04c487d4 == -1) {
    uVar30 = 0;
  }
  else {
    puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar3 = PTR_DAT_04bc39f8;
    }
    uVar30 = *(uint *)(puVar3 + 4) & 1;
  }
  puVar1 = (undefined1 *)(param_1 + 0x274) + (ulong)*(byte *)(param_1 + 0x1f8) * 0x24;
  if (0xf1 < *(byte *)(param_1 + 0x1f8)) {
    puVar1 = (undefined1 *)(param_1 + 0x274);
  }
  *(undefined2 *)(puVar1 + 2) = 0xffff;
  puVar1[1] = 0;
  *puVar1 = (char)uVar32;
  *(undefined4 *)(puVar1 + 4) = 0xf6f6f6f6;
  *(undefined8 *)(puVar1 + 8) = 0xfff6fff6fff6fff6;
  *(undefined4 *)(puVar1 + 0x10) = 0xfff6fff6;
  *(undefined8 *)(puVar1 + 0x14) = 0xff7fffffff7fffff;
  *(undefined8 *)(puVar1 + 0x1c) = 0xff7fffffff7fffff;
  *(short *)(puVar1 + 2) = (short)*(undefined4 *)(param_2 + 0x10);
  if (uVar30 != 0) {
    *(short *)(puVar1 + 0x10) = (short)*(undefined4 *)(param_2 + 0x3c);
    *(short *)(puVar1 + 0x12) = (short)*(undefined4 *)(param_2 + 0x40);
  }
  if ((*param_3 >> 1 & 1) == 0) {
    bVar12 = false;
    goto LAB_02995f80;
  }
  if ((param_4 & 1) == 0) {
    if (bVar13 && bVar14) {
      bVar12 = false;
      if ((cVar7 != '\0') && (uVar30 == 1)) {
        uVar15 = FUN_0299ad00(param_1,param_2,param_3);
        if ((uVar15 & 1) != 0) goto LAB_02995f70;
        bVar12 = false;
      }
LAB_02995f80:
      if ((((*param_3 >> 8 & 1) != 0) && ((param_4 & 1) == 0)) &&
         ((!bVar13 || !bVar14 || (cVar7 != '\0')))) {
LAB_02995ff4:
        if (*(char *)((long)param_3 + 3) != param_2[10]) {
          param_2[10] = *(char *)((long)param_3 + 3);
        }
      }
      if ((*param_3 & 1) == 0) goto LAB_02996010;
      if ((param_4 & 1) == 0) {
        if (!bVar13 || !bVar14) goto LAB_029965a8;
        if ((cVar7 != '\0') && (uVar30 == 1)) {
          uVar17 = (undefined2)*(undefined4 *)(param_3 + 2);
          goto LAB_029960ac;
        }
        goto LAB_029960dc;
      }
      goto LAB_0299606c;
    }
    uVar15 = FUN_0299ad00(param_1,param_2,param_3);
    if ((cVar8 != '\0') && ((uVar15 & 1) != 0)) {
LAB_02995f70:
      bVar12 = true;
      puVar1[7] = (char)*(undefined4 *)(param_2 + 0x14);
      goto LAB_02995f80;
    }
    if ((*param_3 >> 8 & 1) != 0) {
      bVar12 = false;
      goto LAB_02995ff4;
    }
    bVar12 = false;
    if ((*param_3 & 1) != 0) {
LAB_029965a8:
      iVar28 = *(int *)(param_3 + 2);
      if (*(int *)(param_2 + 0xc) != iVar28) {
        *(int *)(param_2 + 0xc) = iVar28;
        *param_2 = 1;
        if (cVar8 != '\0') {
          *(short *)(puVar1 + 8) = (short)iVar28;
          bVar12 = true;
        }
      }
    }
LAB_02996010:
    if ((((!bVar13 || !bVar14) && ((*param_3 & 0x200) != 0 && (param_4 & 1) == 0)) &&
        (*(int *)(param_2 + 0x14) == *(int *)(param_3 + 8))) &&
       (*(int *)(param_2 + 0xc) == *(int *)(param_3 + 4))) {
      *(undefined4 *)(param_2 + 0xc) = 0;
      param_2[8] = 0;
      *param_2 = 1;
      if (cVar8 != '\0') {
        puVar1[4] = 0;
        uVar17 = (undefined2)*(undefined4 *)(param_2 + 0xc);
LAB_029960ac:
        bVar12 = true;
        *(undefined2 *)(puVar1 + 8) = uVar17;
      }
    }
  }
  else {
    if (cVar8 == '\0') {
      if (cVar7 != '\0') {
        FUN_0299ad00(param_1,param_2,param_3);
      }
LAB_02995fc4:
      bVar12 = false;
      uVar10 = *param_3;
    }
    else {
      uVar31 = FUN_0299ad00(param_1,param_2,param_3);
      if ((uVar30 & uVar31) != 1) goto LAB_02995fc4;
      bVar12 = true;
      puVar1[7] = (char)*(undefined4 *)(param_2 + 0x14);
      uVar10 = *param_3;
    }
    if ((uVar10 & 1) != 0) {
LAB_0299606c:
      if (cVar8 == '\0') {
        if ((cVar7 != '\0') && (*(int *)(param_2 + 0xc) != *(int *)(param_3 + 2))) {
          *(int *)(param_2 + 0xc) = *(int *)(param_3 + 2);
          *param_2 = 1;
        }
      }
      else {
        iVar28 = *(int *)(param_3 + 2);
        if (*(int *)(param_2 + 0xc) != iVar28) {
          bVar12 = true;
          *(int *)(param_2 + 0xc) = iVar28;
          *param_2 = 1;
          *(short *)(puVar1 + 8) = (short)iVar28;
        }
      }
    }
  }
LAB_029960dc:
  if ((*param_3 >> 2 & 1) != 0) {
    if ((param_4 & 1) == 0) {
      if (bVar13 && bVar14) {
        if (((cVar7 != '\0') && (uVar30 == 1)) && (cVar16 = (char)param_3[1], param_2[8] != cVar16))
        {
          bVar12 = true;
          param_2[8] = cVar16;
          *param_2 = 1;
          puVar1[4] = cVar16;
        }
      }
      else {
        cVar16 = (char)param_3[1];
        if (param_2[8] != cVar16) {
          param_2[8] = cVar16;
          *param_2 = 1;
          if (cVar8 != '\0') {
            puVar1[4] = cVar16;
            bVar12 = true;
          }
        }
      }
    }
    else if (cVar8 == '\0') {
      if ((cVar7 != '\0') && (param_2[8] != (char)param_3[1])) {
        param_2[8] = (char)param_3[1];
        *param_2 = 1;
      }
    }
    else if (uVar30 != 0) {
      cVar16 = (char)param_3[1];
      if (param_2[8] != cVar16) {
        bVar12 = true;
        param_2[8] = cVar16;
        *param_2 = 1;
        puVar1[4] = cVar16;
      }
      iVar28 = *(int *)(param_2 + 0x10);
      if (-1 < iVar28) {
        iVar23 = *(int *)(param_1 + 0x188);
        uVar31 = iVar28 - iVar23;
        if (iVar28 < iVar23) {
          lVar25 = *(long *)(param_1 + 0x160);
          cVar16 = '\x01';
          if (*(int *)(param_2 + 0x18) == 4) {
            cVar16 = '\x02';
          }
          if (lVar25 != param_1 + 0x158) {
            do {
              lVar19 = *(long *)(lVar25 + -8);
              if ((*(char *)(lVar19 + 8) == cVar16) &&
                 (*(int *)(lVar19 + 0xc) == *(int *)(param_2 + 0xc))) goto LAB_02996d88;
              lVar25 = *(long *)(lVar25 + 8);
            } while (lVar25 + -8 != param_1 + 0x150);
          }
        }
        else {
          iVar23 = *(uint *)(param_1 + 0x198) + iVar23;
          uVar24 = iVar28 - iVar23;
          if (iVar28 < iVar23) {
            plVar20 = (long *)(param_1 + 0x1a0);
            if (*(uint *)(param_1 + 0x198) <= uVar31) {
              uVar31 = 0;
            }
            uVar24 = uVar31;
          }
          else {
            if ((int)(iVar23 + *(uint *)(param_1 + 0x1a8)) <= iVar28) goto LAB_029960e4;
            plVar20 = (long *)(param_1 + 0x1b0);
            if (*(uint *)(param_1 + 0x1a8) <= uVar24) {
              uVar24 = 0;
            }
          }
          if (*plVar20 != 0) {
            lVar19 = *plVar20 + (long)(int)uVar24 * 0x50;
LAB_02996d88:
            lVar19 = *(long *)(lVar19 + 0x18);
            if ((lVar19 != 0) && (param_2[8] != '\0')) {
              *(undefined4 *)(lVar19 + 0x150) = *(undefined4 *)(param_2 + 0x14);
              *(byte *)(lVar19 + 0x130) = *(byte *)(lVar19 + 0x130) | 0xc;
            }
          }
        }
      }
    }
  }
LAB_029960e4:
  if ((*param_3 >> 3 & 1) != 0) {
    if ((param_4 & 1) == 0) {
      if (bVar13 && bVar14) {
        if (((cVar7 != '\0') && (uVar30 == 1)) &&
           (*(int *)(param_2 + 0x18) != *(int *)(param_3 + 10))) {
          *(int *)(param_2 + 0x18) = *(int *)(param_3 + 10);
          *param_2 = 1;
          bVar12 = true;
        }
      }
      else if (*(int *)(param_2 + 0x18) != *(int *)(param_3 + 10)) {
        *(int *)(param_2 + 0x18) = *(int *)(param_3 + 10);
        *param_2 = 1;
        if (cVar8 != '\0') goto LAB_029964f4;
      }
    }
    else if (cVar8 == '\0') {
      if ((cVar7 != '\0') && (*(int *)(param_2 + 0x18) != *(int *)(param_3 + 10))) {
        *(int *)(param_2 + 0x18) = *(int *)(param_3 + 10);
        *param_2 = 1;
      }
    }
    else if (*(int *)(param_2 + 0x18) != *(int *)(param_3 + 10)) {
      *(int *)(param_2 + 0x18) = *(int *)(param_3 + 10);
      *param_2 = 1;
      if (uVar30 != 0) {
LAB_029964f4:
        bVar12 = true;
        puVar1[5] = (char)*(undefined4 *)(param_2 + 0x18);
      }
    }
  }
  if ((*param_3 >> 4 & 1) != 0) {
    if ((param_4 & 1) == 0) {
      if (bVar13 && bVar14) {
        if (((cVar7 != '\0') && (uVar30 == 1)) &&
           (*(int *)(param_2 + 0x1c) != *(int *)(param_3 + 0xc))) {
          *(int *)(param_2 + 0x1c) = *(int *)(param_3 + 0xc);
          bVar12 = true;
          *param_2 = 1;
          puVar1[6] = (char)*(undefined4 *)(param_2 + 0x1c);
        }
      }
      else if (*(int *)(param_2 + 0x1c) != *(int *)(param_3 + 0xc)) {
        *(int *)(param_2 + 0x1c) = *(int *)(param_3 + 0xc);
        *param_2 = 1;
        if (cVar8 != '\0') goto LAB_02996534;
      }
    }
    else if (cVar8 == '\0') {
      if ((cVar7 != '\0') && (*(int *)(param_2 + 0x1c) != *(int *)(param_3 + 0xc))) {
        *(int *)(param_2 + 0x1c) = *(int *)(param_3 + 0xc);
        *param_2 = 1;
      }
    }
    else if (*(int *)(param_2 + 0x1c) != *(int *)(param_3 + 0xc)) {
      *(int *)(param_2 + 0x1c) = *(int *)(param_3 + 0xc);
      *param_2 = 1;
      if (uVar30 != 0) {
LAB_02996534:
        bVar12 = true;
        puVar1[6] = (char)*(undefined4 *)(param_2 + 0x1c);
      }
    }
  }
  if (param_2[10] == 0xff) {
    uVar31 = 1;
    uVar10 = *param_3;
  }
  else {
    bVar21 = DAT_0548e140;
    if (DAT_04cd19d8 == 0) {
joined_r0x02996368:
      if (7 < bVar21) {
LAB_0299636c:
        if (DAT_0537d558 != (long *)0x0) {
          lVar19 = *DAT_0537d558;
          bVar21 = *(byte *)(lVar19 + 0x473);
          pbVar26 = PTR_DAT_04bb5038;
          if ((long)(char)bVar21 != 0xffffffffffffffff) {
            puVar2 = (uint *)(lVar19 + 0x48) + ((long)(char)bVar21 & 0xffffffffU) * 0x20;
            if (7 < bVar21) {
              puVar2 = (uint *)(lVar19 + 0x48);
            }
            if ((*puVar2 & 8) != 0) {
              pbVar26 = (byte *)(lVar19 + 0x471);
            }
          }
          bVar21 = *pbVar26;
          if (*pbVar26 < 8) goto LAB_029963d8;
        }
        bVar21 = DAT_0548e168;
        if (7 < DAT_0548e168) {
          uVar31 = 0;
          uVar10 = *param_3;
          goto joined_r0x029966bc;
        }
      }
    }
    else {
      pbVar26 = &DAT_0548e140;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar26 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      bVar21 = *pbVar26;
      if (7 < *pbVar26) {
        if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          bVar21 = *(byte *)(DAT_054f5738 + 0x11a5);
          goto joined_r0x02996368;
        }
        goto LAB_0299636c;
      }
    }
LAB_029963d8:
    uVar31 = (uint)(bVar21 == param_2[10]);
    uVar10 = *param_3;
  }
joined_r0x029966bc:
  if ((uVar10 >> 6 & 1) != 0) {
    if ((param_4 & 1) == 0) {
      if (bVar13 && bVar14) {
        if ((cVar7 != '\0') && ((uVar30 & uVar31) != 0)) {
          fVar34 = *(float *)(param_3 + 0x10);
          fVar33 = *(float *)(param_3 + 0x12);
          fVar35 = *(float *)(param_3 + 0x14);
          if ((*(float *)(param_2 + 0x48) != fVar34) ||
             ((*(float *)(param_2 + 0x4c) != fVar33 || (*(float *)(param_2 + 0x50) != fVar35)))) {
            *(float *)(param_2 + 0x48) = fVar34;
            *(float *)(param_2 + 0x4c) = fVar33;
            *(float *)(param_2 + 0x50) = fVar35;
            *param_2 = 1;
            *(float *)(puVar1 + 0x14) = fVar34;
            uVar32 = *(undefined4 *)(param_2 + 0x4c);
            goto LAB_02996598;
          }
        }
      }
      else if ((uVar30 == 0) || (uVar31 != 0)) {
        fVar34 = *(float *)(param_3 + 0x10);
        fVar33 = *(float *)(param_3 + 0x12);
        fVar35 = *(float *)(param_3 + 0x14);
        if ((*(float *)(param_2 + 0x48) != fVar34) ||
           ((*(float *)(param_2 + 0x4c) != fVar33 || (*(float *)(param_2 + 0x50) != fVar35)))) {
          *(float *)(param_2 + 0x48) = fVar34;
          *(float *)(param_2 + 0x4c) = fVar33;
          *(float *)(param_2 + 0x50) = fVar35;
          *param_2 = 1;
          if (cVar8 != '\0') goto LAB_0299658c;
        }
      }
    }
    else if (cVar8 == '\0') {
      if (cVar7 != '\0') {
        fVar34 = *(float *)(param_3 + 0x12);
        fVar33 = *(float *)(param_3 + 0x14);
        if (((*(float *)(param_2 + 0x48) != *(float *)(param_3 + 0x10)) ||
            (*(float *)(param_2 + 0x4c) != fVar34)) || (*(float *)(param_2 + 0x50) != fVar33)) {
          *(float *)(param_2 + 0x48) = *(float *)(param_3 + 0x10);
          *(float *)(param_2 + 0x4c) = fVar34;
          *(float *)(param_2 + 0x50) = fVar33;
          *param_2 = 1;
        }
      }
    }
    else {
      fVar34 = *(float *)(param_3 + 0x10);
      fVar33 = *(float *)(param_3 + 0x12);
      fVar35 = *(float *)(param_3 + 0x14);
      if (((*(float *)(param_2 + 0x48) != fVar34) || (*(float *)(param_2 + 0x4c) != fVar33)) ||
         (*(float *)(param_2 + 0x50) != fVar35)) {
        *(float *)(param_2 + 0x48) = fVar34;
        *(float *)(param_2 + 0x4c) = fVar33;
        *(float *)(param_2 + 0x50) = fVar35;
        *param_2 = 1;
        if (uVar30 != 0) {
LAB_0299658c:
          *(float *)(puVar1 + 0x14) = fVar34;
          uVar32 = *(undefined4 *)(param_2 + 0x4c);
LAB_02996598:
          bVar12 = true;
          *(undefined4 *)(puVar1 + 0x18) = uVar32;
          *(undefined4 *)(puVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x50);
        }
      }
    }
  }
  if ((*param_3 >> 5 & 1) == 0) {
LAB_029966d0:
    bVar21 = 0;
  }
  else {
    if ((param_4 & 1) != 0) {
      if (cVar8 == '\0') {
        if ((cVar7 != '\0') && (*(float *)(param_2 + 0x54) != *(float *)(param_3 + 0xe))) {
          bVar21 = 0;
          *(float *)(param_2 + 0x54) = *(float *)(param_3 + 0xe);
          *param_2 = 1;
          goto LAB_029966d4;
        }
      }
      else {
        fVar34 = *(float *)(param_3 + 0xe);
        if (*(float *)(param_2 + 0x54) != fVar34) {
          *(float *)(param_2 + 0x54) = fVar34;
          *param_2 = 1;
          if (uVar30 != 0) {
LAB_029968d4:
            *(float *)(puVar1 + 0x20) = fVar34;
            bVar21 = 1;
            bVar12 = true;
            goto LAB_029966d4;
          }
        }
      }
      goto LAB_029966d0;
    }
    if (!bVar13 || !bVar14) {
      if (uVar30 == 0) {
        fVar34 = *(float *)(param_3 + 0xe);
        if (*(float *)(param_2 + 0x54) != fVar34) {
          *(float *)(param_2 + 0x54) = fVar34;
          *param_2 = 1;
          if (cVar8 != '\0') {
            bVar21 = 0;
            bVar12 = true;
            *(float *)(puVar1 + 0x20) = fVar34;
            goto LAB_029966d4;
          }
        }
      }
      else if ((uVar31 != 0) &&
              (fVar34 = *(float *)(param_3 + 0xe), *(float *)(param_2 + 0x54) != fVar34)) {
        *(float *)(param_2 + 0x54) = fVar34;
        *param_2 = 1;
        if (cVar8 != '\0') goto LAB_029968d4;
      }
      goto LAB_029966d0;
    }
    if ((cVar7 == '\0') || ((uVar30 & uVar31) == 0)) {
      bVar21 = 0;
    }
    else {
      fVar34 = *(float *)(param_3 + 0xe);
      if (*(float *)(param_2 + 0x54) == fVar34) goto LAB_029966d0;
      *(float *)(param_2 + 0x54) = fVar34;
      bVar21 = 0;
      bVar12 = true;
      *param_2 = 1;
      *(float *)(puVar1 + 0x20) = fVar34;
    }
  }
LAB_029966d4:
  if ((*param_3 & 0x60) != 0) {
    fVar34 = 0.0;
    if (*(float *)(param_2 + 0x54) <= 500.0) {
      fVar34 = *(float *)(param_2 + 0x54);
    }
    fVar33 = sinf(fVar34);
    fVar34 = cosf(fVar34);
    fVar35 = fVar33 * 0.0;
    *(float *)(param_2 + 0x60) = fVar33 + 0.0;
    *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_2 + 0x48);
    *(float *)(param_2 + 0x58) = fVar34;
    *(float *)(param_2 + 0x5c) = fVar35;
    *(float *)(param_2 + 0x70) = fVar35;
    *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_2 + 0x4c);
    *(float *)(param_2 + 0x78) = -fVar33;
    *(float *)(param_2 + 0x7c) = fVar34 * 0.0;
    *(float *)(param_2 + 0x80) = fVar34;
    *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_2 + 0x50);
    *(float *)(param_2 + 0x68) = fVar34 * 0.0;
    *(float *)(param_2 + 0x6c) = fVar35 * 0.0 + 1.0;
  }
  if (((param_5 & 1) != 0) && ((param_4 & 1) == 0)) {
    *(undefined8 *)(param_2 + 0x3c) = *(undefined8 *)(param_2 + 0x24);
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_2 + 0x2c);
  }
  if ((*param_3 >> 7 & 1) == 0) {
LAB_02996778:
    bVar11 = 0;
  }
  else {
    if ((param_4 & 1) == 0) {
      if (bVar13 && bVar14) {
        if ((cVar7 != '\0') && (uVar30 == 1)) {
          if (uVar31 == 0) {
            if (((*(int *)(param_2 + 0x30) != *(int *)(param_3 + 0x16)) ||
                (*(int *)(param_2 + 0x34) != *(int *)(param_3 + 0x18))) ||
               (*(int *)(param_2 + 0x38) != *(int *)(param_3 + 0x1a))) {
              *(int *)(param_2 + 0x30) = *(int *)(param_3 + 0x16);
              goto LAB_02996ce4;
            }
          }
          else {
            iVar28 = *(int *)(param_3 + 0x16);
            iVar23 = *(int *)(param_3 + 0x18);
            iVar18 = *(int *)(param_3 + 0x1a);
            if (((*(int *)(param_2 + 0x24) != iVar28) || (*(int *)(param_2 + 0x28) != iVar23)) ||
               (*(int *)(param_2 + 0x2c) != iVar18)) {
              bVar12 = true;
              *(int *)(param_2 + 0x24) = iVar28;
              *(int *)(param_2 + 0x28) = iVar23;
              *param_2 = 1;
              *(int *)(param_2 + 0x2c) = iVar18;
              *(int *)(param_2 + 0x30) = iVar28;
              *(int *)(param_2 + 0x34) = iVar23;
              *(int *)(param_2 + 0x38) = iVar18;
            }
          }
        }
      }
      else if (uVar30 == 0) {
        iVar28 = *(int *)(param_3 + 0x16);
        iVar23 = *(int *)(param_3 + 0x18);
        iVar18 = *(int *)(param_3 + 0x1a);
        if (((*(int *)(param_2 + 0x24) != iVar28) || (*(int *)(param_2 + 0x28) != iVar23)) ||
           (*(int *)(param_2 + 0x2c) != iVar18)) {
          *(int *)(param_2 + 0x24) = iVar28;
          *(int *)(param_2 + 0x28) = iVar23;
          *param_2 = 1;
          *(int *)(param_2 + 0x2c) = iVar18;
          *(int *)(param_2 + 0x30) = iVar28;
          *(int *)(param_2 + 0x34) = iVar23;
          *(int *)(param_2 + 0x38) = iVar18;
          if (cVar8 == '\0') goto LAB_02996c64;
          *(short *)(puVar1 + 10) = (short)iVar28;
          bVar11 = 0;
          uVar17 = (undefined2)*(undefined4 *)(param_2 + 0x28);
          goto LAB_0299697c;
        }
      }
      else if (uVar31 == 0) {
        if (((*(int *)(param_2 + 0x30) != *(int *)(param_3 + 0x16)) ||
            (*(int *)(param_2 + 0x34) != *(int *)(param_3 + 0x18))) ||
           (*(int *)(param_2 + 0x38) != *(int *)(param_3 + 0x1a))) {
          *(int *)(param_2 + 0x30) = *(int *)(param_3 + 0x16);
LAB_02996ce4:
          *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_3 + 0x18);
          *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x1a);
        }
      }
      else {
        iVar28 = *(int *)(param_3 + 0x16);
        iVar23 = *(int *)(param_3 + 0x18);
        iVar18 = *(int *)(param_3 + 0x1a);
        if (((*(int *)(param_2 + 0x24) != iVar28) || (*(int *)(param_2 + 0x28) != iVar23)) ||
           (*(int *)(param_2 + 0x2c) != iVar18)) {
          *(int *)(param_2 + 0x24) = iVar28;
          *(int *)(param_2 + 0x28) = iVar23;
          *param_2 = 1;
          *(int *)(param_2 + 0x2c) = iVar18;
          *(int *)(param_2 + 0x30) = iVar28;
          *(int *)(param_2 + 0x34) = iVar23;
          *(int *)(param_2 + 0x38) = iVar18;
          if (cVar8 != '\0') {
            *(short *)(puVar1 + 10) = (short)iVar28;
            goto LAB_02996970;
          }
          goto LAB_02996d34;
        }
      }
      goto LAB_02996778;
    }
    if (cVar8 == '\0') {
      if (cVar7 == '\0') {
LAB_02996c64:
        bVar11 = 0;
      }
      else {
        iVar28 = *(int *)(param_3 + 0x16);
        iVar23 = *(int *)(param_3 + 0x18);
        iVar18 = *(int *)(param_3 + 0x1a);
        if (((*(int *)(param_2 + 0x24) == iVar28) && (*(int *)(param_2 + 0x28) == iVar23)) &&
           (*(int *)(param_2 + 0x2c) == iVar18)) {
          iVar28 = *(int *)(param_2 + 0x24);
          iVar23 = *(int *)(param_2 + 0x28);
          iVar18 = *(int *)(param_2 + 0x2c);
        }
        else {
          *(int *)(param_2 + 0x24) = iVar28;
          *(int *)(param_2 + 0x28) = iVar23;
          *(int *)(param_2 + 0x2c) = iVar18;
          *(int *)(param_2 + 0x30) = iVar28;
          *param_2 = 1;
          *(int *)(param_2 + 0x34) = iVar23;
          *(int *)(param_2 + 0x38) = iVar18;
        }
        if (((*(int *)(param_2 + 0x3c) != -1) || (*(int *)(param_2 + 0x40) != -1)) ||
           (*(int *)(param_2 + 0x44) != -1)) goto LAB_02996d34;
        bVar11 = 0;
        *(int *)(param_2 + 0x3c) = iVar28;
        *(int *)(param_2 + 0x40) = iVar23;
        *(int *)(param_2 + 0x44) = iVar18;
      }
    }
    else {
      iVar28 = *(int *)(param_2 + 0x24);
      iVar18 = *(int *)(param_2 + 0x28);
      iVar5 = *(int *)(param_2 + 0x2c);
      iVar23 = *(int *)(param_3 + 0x16);
      iVar4 = *(int *)(param_3 + 0x18);
      iVar6 = *(int *)(param_3 + 0x1a);
      iVar22 = iVar28;
      iVar29 = iVar18;
      iVar27 = iVar5;
      if ((iVar28 != iVar23 || iVar18 != iVar4) || iVar5 != iVar6) {
        *(int *)(param_2 + 0x24) = iVar23;
        *(int *)(param_2 + 0x28) = iVar4;
        *param_2 = 1;
        *(int *)(param_2 + 0x2c) = iVar6;
        *(int *)(param_2 + 0x30) = iVar23;
        *(int *)(param_2 + 0x34) = iVar4;
        *(int *)(param_2 + 0x38) = iVar6;
        iVar22 = iVar23;
        iVar29 = iVar4;
        iVar27 = iVar6;
      }
      if (((*(int *)(param_2 + 0x3c) == -1) && (*(int *)(param_2 + 0x40) == -1)) &&
         (*(int *)(param_2 + 0x44) == -1)) {
        *(int *)(param_2 + 0x3c) = iVar22;
        *(int *)(param_2 + 0x40) = iVar29;
        *(int *)(param_2 + 0x44) = iVar27;
      }
      if ((uVar30 & ((iVar28 != iVar23 || iVar18 != iVar4) || iVar5 != iVar6)) == 1) {
        *(short *)(puVar1 + 10) = (short)iVar22;
LAB_02996970:
        uVar17 = (undefined2)*(undefined4 *)(param_2 + 0x28);
        bVar11 = 1;
LAB_0299697c:
        bVar12 = true;
        *(undefined2 *)(puVar1 + 0xc) = uVar17;
        *(short *)(puVar1 + 0xe) = (short)*(undefined4 *)(param_2 + 0x2c);
      }
      else {
LAB_02996d34:
        bVar11 = 0;
      }
    }
  }
  if (param_2[9] != '\0') {
    if (DAT_04c487d4 != -1) {
      puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar3 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar3 + 4) & 1) != 0) {
        lVar19 = *(long *)PTR_DAT_04bb26a8;
        nn::os::LockMutex((MutexType *)(lVar19 + 0x896c8));
        cVar16 = *(char *)(lVar19 + 0x89691);
        cVar9 = *(char *)(lVar19 + 0x89692);
        nn::os::UnlockMutex((MutexType *)(lVar19 + 0x896c8));
        if ((cVar16 == '\0') || (cVar9 == '\0')) {
          param_2[9] = 0;
        }
        if (!(bool)(bVar21 | bVar11)) goto LAB_02996830;
      }
    }
    param_2[9] = 0;
  }
LAB_02996830:
  if (param_2[1] == '\0') {
    if (((cVar7 != '\0') && (uVar30 == 1)) && (!(bool)(bVar12 ^ 1))) {
      puVar1[5] = (char)*(undefined4 *)(param_2 + 0x18);
      *(short *)(puVar1 + 10) = (short)*(undefined4 *)(param_2 + 0x24);
      *(short *)(puVar1 + 0xc) = (short)*(undefined4 *)(param_2 + 0x28);
      *(short *)(puVar1 + 0xe) = (short)*(undefined4 *)(param_2 + 0x2c);
    }
  }
  else {
    param_2[1] = 0;
    if (cVar8 != '\0') {
      *(short *)(puVar1 + 8) = (short)*(undefined4 *)(param_2 + 0xc);
      puVar1[7] = (char)*(undefined4 *)(param_2 + 0x14);
      puVar1[4] = param_2[8];
      puVar1[5] = (char)*(undefined4 *)(param_2 + 0x18);
      puVar1[6] = (char)*(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(param_2 + 0x48);
      *(undefined4 *)(puVar1 + 0x18) = *(undefined4 *)(param_2 + 0x4c);
      *(undefined4 *)(puVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x50);
      *(undefined4 *)(puVar1 + 0x20) = *(undefined4 *)(param_2 + 0x54);
      *(short *)(puVar1 + 10) = (short)*(undefined4 *)(param_2 + 0x24);
      *(short *)(puVar1 + 0xc) = (short)*(undefined4 *)(param_2 + 0x28);
      *(short *)(puVar1 + 0xe) = (short)*(undefined4 *)(param_2 + 0x2c);
      goto LAB_029969c8;
    }
  }
  if (!bVar12) {
    return;
  }
LAB_029969c8:
  *(char *)(param_1 + 0x1f8) = *(char *)(param_1 + 0x1f8) + '\x01';
  return;
}

