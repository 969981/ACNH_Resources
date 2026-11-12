
void FUN_008079b0(long param_1,ulong param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined2 *puVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  byte abStack_850 [2048];
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined2 local_47;
  undefined1 local_45;
  undefined2 local_44;
  undefined1 local_42;
  undefined1 local_41;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined1 local_39;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined4 local_15;
  undefined1 local_11;
  
  uVar15 = *DAT_04cb4960;
  if (0 < (int)uVar15) {
    uVar12 = 0;
    do {
      if (**(long **)(*(long *)(DAT_04cb4960 + 2) + uVar12 * 8) == param_3) {
        if ((int)(uint)uVar12 < 0) {
          return;
        }
        if (uVar15 <= (uint)uVar12) {
          return;
        }
        lVar14 = *(long *)(*(long *)(DAT_04cb4960 + 2) + uVar12 * 8);
        if (lVar14 == 0) {
          return;
        }
        local_4d = 0xff;
        local_50 = *(undefined2 *)(lVar14 + 0x88);
        local_49 = 0xff;
        cVar6 = *(char *)(lVar14 + 10);
        local_4c = *(undefined1 *)(lVar14 + 0x8b);
        local_4b = *(undefined1 *)(lVar14 + 0x8c);
        local_4e = *(undefined1 *)(lVar14 + 0x8a);
        local_4a = *(undefined1 *)(lVar14 + 0x8d);
        bVar9 = cVar6 != '\0';
        local_45 = 0xff;
        local_48 = *(undefined1 *)(lVar14 + 0x8e);
        local_47 = *(undefined2 *)(lVar14 + 0x8f);
        lVar2 = lVar14 + 0x10;
        if (bVar9) {
          lVar2 = 0;
        }
        local_41 = 0xff;
        lVar3 = 0;
        if (bVar9) {
          lVar3 = lVar14 + 0x10;
        }
        local_44 = *(undefined2 *)(lVar14 + 0x91);
        local_42 = *(undefined1 *)(lVar14 + 0x93);
        puVar4 = (undefined2 *)(lVar2 + 0x78);
        if (bVar9) {
          puVar4 = (undefined2 *)(lVar14 + 0x88);
        }
        local_3d = 0xff;
        local_40 = puVar4[6];
        local_3e = *(undefined1 *)(puVar4 + 7);
        local_39 = 0xff;
        local_3c = *(undefined2 *)((long)puVar4 + 0xf);
        local_3a = *(undefined1 *)((long)puVar4 + 0x11);
        local_35 = 0xff;
        local_38 = puVar4[9];
        local_36 = *(undefined1 *)(puVar4 + 10);
        if (cVar6 == '\0') {
          if (lVar2 != 0) {
            lVar16 = lVar2 + 0x78;
            goto LAB_00807ae0;
          }
          uVar15 = 0xffffffff;
        }
        else {
          lVar16 = lVar14 + 0x88;
LAB_00807ae0:
          uVar15 = (uint)*(byte *)(lVar16 + 0x16) << 0x10 | (uint)*(byte *)(lVar16 + 0x15) << 0x18 |
                   (uint)*(byte *)(lVar16 + 0x17) << 8;
        }
        local_34 = (char)(uVar15 >> 0x18);
        local_33 = (char)(uVar15 >> 0x10);
        local_32 = (char)(uVar15 >> 8);
        local_31 = 0xff;
        if (cVar6 == '\0') {
          if (lVar2 != 0) {
            lVar16 = lVar2 + 0x78;
            goto LAB_00807b30;
          }
          uVar15 = 0xffffffff;
        }
        else {
          lVar16 = lVar14 + 0x88;
LAB_00807b30:
          uVar15 = (uint)*(byte *)(lVar16 + 0x19) << 0x10 | (uint)*(byte *)(lVar16 + 0x18) << 0x18 |
                   (uint)*(byte *)(lVar16 + 0x1a) << 8;
        }
        local_30 = (char)(uVar15 >> 0x18);
        local_2f = (char)(uVar15 >> 0x10);
        local_2e = (char)(uVar15 >> 8);
        local_2d = 0xff;
        if (cVar6 == '\0') {
          if (lVar2 != 0) {
            lVar16 = lVar2 + 0x78;
            goto LAB_00807b80;
          }
          uVar15 = 0xffffffff;
        }
        else {
          lVar16 = lVar14 + 0x88;
LAB_00807b80:
          uVar15 = (uint)*(byte *)(lVar16 + 0x1c) << 0x10 | (uint)*(byte *)(lVar16 + 0x1b) << 0x18 |
                   (uint)*(byte *)(lVar16 + 0x1d) << 8;
        }
        local_2c = (char)(uVar15 >> 0x18);
        local_2b = (char)(uVar15 >> 0x10);
        local_2a = (char)(uVar15 >> 8);
        local_29 = 0xff;
        if (cVar6 == '\0') {
          if (lVar2 != 0) {
            lVar16 = lVar2 + 0x78;
            goto LAB_00807bd0;
          }
          uVar15 = 0xffffffff;
        }
        else {
          lVar16 = lVar14 + 0x88;
LAB_00807bd0:
          uVar15 = (uint)*(byte *)(lVar16 + 0x1f) << 0x10 | (uint)*(byte *)(lVar16 + 0x1e) << 0x18 |
                   (uint)*(byte *)(lVar16 + 0x20) << 8;
        }
        local_28 = (char)(uVar15 >> 0x18);
        local_27 = (char)(uVar15 >> 0x10);
        local_26 = (char)(uVar15 >> 8);
        local_25 = 0xff;
        if (cVar6 == '\0') {
          if (lVar2 != 0) {
            lVar16 = lVar2 + 0x78;
            goto LAB_00807c20;
          }
          uVar15 = 0xffffffff;
        }
        else {
          lVar16 = lVar14 + 0x88;
LAB_00807c20:
          uVar15 = (uint)*(byte *)(lVar16 + 0x22) << 0x10 | (uint)*(byte *)(lVar16 + 0x21) << 0x18 |
                   (uint)*(byte *)(lVar16 + 0x23) << 8;
        }
        local_24 = (char)(uVar15 >> 0x18);
        local_23 = (char)(uVar15 >> 0x10);
        local_22 = (char)(uVar15 >> 8);
        local_21 = 0xff;
        if (cVar6 == '\0') {
          if (lVar2 != 0) {
            lVar16 = lVar2 + 0x78;
            goto LAB_00807c70;
          }
          uVar15 = 0xffffffff;
        }
        else {
          lVar16 = lVar14 + 0x88;
LAB_00807c70:
          uVar15 = (uint)*(byte *)(lVar16 + 0x25) << 0x10 | (uint)*(byte *)(lVar16 + 0x24) << 0x18 |
                   (uint)*(byte *)(lVar16 + 0x26) << 8;
        }
        local_20 = (char)(uVar15 >> 0x18);
        local_1f = (char)(uVar15 >> 0x10);
        local_1e = (char)(uVar15 >> 8);
        local_1d = 0xff;
        if (cVar6 == '\0') {
          if (lVar2 != 0) {
            lVar16 = lVar2 + 0x78;
            goto LAB_00807cc0;
          }
          uVar15 = 0xffffffff;
        }
        else {
          lVar16 = lVar14 + 0x88;
LAB_00807cc0:
          uVar15 = (uint)*(byte *)(lVar16 + 0x28) << 0x10 | (uint)*(byte *)(lVar16 + 0x27) << 0x18 |
                   (uint)*(byte *)(lVar16 + 0x29) << 8;
        }
        local_1c = (char)(uVar15 >> 0x18);
        local_1b = (char)(uVar15 >> 0x10);
        local_1a = (char)(uVar15 >> 8);
        local_19 = 0xff;
        if (cVar6 == '\0') {
          if (lVar2 == 0) {
            uVar15 = 0xffffffff;
            goto LAB_00807d2c;
          }
          lVar14 = lVar2 + 0x78;
        }
        else {
          lVar14 = lVar14 + 0x88;
        }
        uVar15 = (uint)*(byte *)(lVar14 + 0x2b) << 0x10 | (uint)*(byte *)(lVar14 + 0x2a) << 0x18 |
                 (uint)*(byte *)(lVar14 + 0x2c) << 8;
LAB_00807d2c:
        local_11 = 0;
        local_18 = (char)(uVar15 >> 0x18);
        local_17 = (char)(uVar15 >> 0x10);
        local_16 = (char)(uVar15 >> 8);
        local_15 = 0xf5f5f5ff;
        uVar15 = 0;
        uVar17 = 0x20;
        if (cVar6 != '\0') {
          uVar17 = 0x40;
        }
        uVar13 = 5;
        if (cVar6 != '\0') {
          uVar13 = 6;
        }
        do {
          uVar18 = 0;
          uVar7 = (uVar15 & 0x1f) << 5;
          uVar10 = (uVar15 << (ulong)uVar13) << 2;
          do {
            if (cVar6 == '\0') {
              if (lVar2 != 0) {
                bVar5 = *(byte *)(lVar2 + 0xa5 + (ulong)((uVar18 & 0x1e | uVar7) >> 1));
                goto LAB_00807dd0;
              }
              uVar11 = 0;
            }
            else {
              uVar11 = (uVar15 >> 4 & 0x7fffffe) + (uVar18 >> 5);
              lVar14 = lVar3 + 0xa5 + (ulong)uVar11 * 0x200;
              if (3 < uVar11) {
                lVar14 = lVar3 + 0xa5;
              }
              bVar5 = *(byte *)(lVar14 + (ulong)((uVar18 & 0x1e | uVar7) >> 1));
LAB_00807dd0:
              uVar11 = bVar5 & 0xf;
              if ((uVar18 & 1) != 0) {
                uVar11 = (uint)(bVar5 >> 4);
              }
            }
            uVar1 = uVar10 & 4;
            uVar18 = uVar18 + 1;
            uVar8 = uVar10 >> 3;
            uVar10 = uVar10 + 4;
            abStack_850[uVar8] =
                 abStack_850[uVar8] & ((byte)(0xf << (ulong)uVar1) ^ 0xff) |
                 (byte)(uVar11 << (ulong)uVar1);
          } while (uVar17 != uVar18);
          uVar15 = uVar15 + 1;
          if (uVar15 == uVar17) {
            if (param_1 == 0) {
              return;
            }
            uVar12 = 0;
            uVar15 = 0;
            do {
              uVar18 = (uVar15 << (ulong)uVar13) << 2;
              uVar10 = uVar17;
              do {
                if (uVar12 < param_2) {
                  *(undefined4 *)(param_1 + uVar12 * 4) =
                       *(undefined4 *)
                        (abStack_850 +
                        ((0xfL << ((ulong)uVar18 & 4) & (ulong)abStack_850[uVar18 >> 3]) >>
                        ((ulong)uVar18 & 4)) * 4 + 0x800);
                  uVar12 = uVar12 + 1;
                }
                uVar18 = uVar18 + 4;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
              uVar15 = uVar15 + 1;
            } while (uVar15 != uVar17);
            return;
          }
        } while( true );
      }
      uVar12 = uVar12 + 1;
    } while (uVar15 != uVar12);
  }
  return;
}

