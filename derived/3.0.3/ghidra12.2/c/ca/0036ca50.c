
void FUN_0036ca50(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  ushort uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ushort *puVar16;
  ulong uVar17;
  ushort *puVar18;
  long lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  if (*(short *)(param_3 + 0x7a) != 0) {
    uVar17 = 0;
    plVar1 = (long *)(param_2 + 0x70);
    do {
      lVar19 = *(long *)(param_3 + 0x70);
      plVar7 = (long *)(**(code **)PTR_DAT_04bd0800)(0x40,4,*(undefined8 *)PTR_DAT_04bd0810);
      if (plVar7 != (long *)0x0) {
        *plVar7 = (long)plVar7;
        plVar7[1] = (long)plVar7;
        plVar7[4] = 0;
        *(undefined4 *)((long)plVar7 + 0x27) = 0;
        plVar7[2] = 0;
        plVar7[3] = 0;
        plVar7[6] = 0;
        plVar7[7] = 0;
      }
      lVar10 = lVar19 + uVar17 * 0xa0;
      FUN_0036d8c0(plVar7,lVar10 + 0x18,lVar10 + 0x38,lVar10 + 0x58,
                   *(char *)(lVar10 + 0x10) == '\x01',*(char *)(lVar10 + 0x11) == '\x01',
                   *(char *)(lVar10 + 0x13) == '\x01');
      puVar8 = (undefined8 *)(**(code **)PTR_DAT_04bd0800)(0x10,4,*(undefined8 *)PTR_DAT_04bd0810);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = 0;
        puVar8[1] = 0;
      }
      lVar10 = lVar19 + uVar17 * 0xa0;
      plVar7[7] = (long)puVar8;
      *(undefined4 *)puVar8 = *(undefined4 *)(lVar10 + 8);
      puVar16 = (ushort *)(lVar10 + 0x80);
      uVar6 = *puVar16;
      *(uint *)((long)puVar8 + 4) = (uint)uVar6;
      lVar10 = (**(code **)PTR_DAT_04bd0800)((ulong)uVar6 << 5,4,*(undefined8 *)PTR_DAT_04bd0810);
      if ((uVar6 != 0) && (lVar10 != 0)) {
        if (uVar6 < 4) {
          lVar11 = 0;
        }
        else {
          lVar9 = 0;
          lVar11 = 0;
          do {
            puVar13 = (undefined8 *)(lVar10 + lVar9);
            lVar9 = lVar9 + 0x80;
            *(undefined8 *)((long)puVar13 + 0xc) = 0;
            lVar11 = lVar11 + 4;
            *puVar13 = 0;
            *(undefined1 *)(puVar13 + 1) = 0;
            *(undefined8 *)((long)puVar13 + 0x2c) = 0;
            *(undefined1 *)(puVar13 + 5) = 0;
            *(undefined8 *)((long)puVar13 + 0x4c) = 0;
            *(undefined1 *)(puVar13 + 9) = 0;
            *(undefined8 *)((long)puVar13 + 0x6c) = 0;
            *(undefined1 *)(puVar13 + 0xd) = 0;
            puVar13[0xf] = 0;
            puVar13[3] = 0;
            puVar13[4] = 0;
            puVar13[7] = 0;
            puVar13[8] = 0;
            puVar13[0xb] = 0;
            puVar13[0xc] = 0;
          } while (((ulong)uVar6 & 0xfffc) * 0x20 != lVar9);
        }
        uVar14 = (ulong)uVar6 & 3;
        if ((uVar6 & 3) != 0) {
          puVar13 = (undefined8 *)(lVar10 + lVar11 * 0x20 + 0xc);
          do {
            *puVar13 = 0;
            uVar14 = uVar14 - 1;
            *(undefined8 *)((long)puVar13 + -0xc) = 0;
            *(undefined1 *)((long)puVar13 + -4) = 0;
            *(undefined8 *)((long)puVar13 + 0xc) = 0;
            puVar13 = puVar13 + 4;
          } while (uVar14 != 0);
        }
      }
      puVar8[1] = lVar10;
      if (*puVar16 != 0) {
        uVar14 = 0;
        do {
          puVar2 = (undefined4 *)(puVar8[1] + uVar14 * 0x20);
          if ((long)*(int *)((long)puVar8 + 4) <= (long)uVar14) {
            puVar2 = (undefined4 *)0x0;
          }
          lVar10 = *(long *)(lVar19 + uVar17 * 0xa0 + 0x78) + uVar14 * 0x40;
          uVar20 = *(undefined4 *)(lVar10 + 0x20);
          uVar21 = *(undefined4 *)(lVar10 + 0x24);
          uVar22 = *(undefined4 *)(lVar10 + 0x28);
          *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(lVar10 + 0x2c);
          *puVar2 = uVar20;
          puVar2[1] = uVar21;
          puVar2[3] = uVar22;
          puVar18 = (ushort *)(lVar10 + 0x38);
          uVar6 = *puVar18;
          puVar2[4] = (uint)uVar6;
          lVar9 = (**(code **)PTR_DAT_04bd0800)
                            ((ulong)uVar6 * 0x40 + (ulong)(uint)uVar6 * -8,4,
                             *(undefined8 *)PTR_DAT_04bd0810);
          if ((uVar6 != 0) && (lVar9 != 0)) {
            if (uVar6 < 4) {
              lVar12 = 0;
            }
            else {
              lVar11 = 0;
              lVar12 = 0;
              do {
                puVar13 = (undefined8 *)(lVar9 + lVar11);
                lVar11 = lVar11 + 0xe0;
                *(undefined4 *)((long)puVar13 + 0xc) = 0;
                lVar12 = lVar12 + 4;
                *puVar13 = 0;
                *(undefined1 *)(puVar13 + 1) = 0;
                *(undefined1 *)(puVar13 + 6) = 0;
                *(undefined4 *)((long)puVar13 + 0x44) = 0;
                puVar13[7] = 0;
                *(undefined1 *)(puVar13 + 8) = 0;
                *(undefined1 *)(puVar13 + 0xd) = 0;
                *(undefined4 *)((long)puVar13 + 0x7c) = 0;
                puVar13[0xe] = 0;
                *(undefined1 *)(puVar13 + 0xf) = 0;
                *(undefined1 *)(puVar13 + 0x14) = 0;
                *(undefined4 *)((long)puVar13 + 0xb4) = 0;
                puVar13[0x15] = 0;
                *(undefined1 *)(puVar13 + 0x16) = 0;
                *(undefined1 *)(puVar13 + 0x1b) = 0;
              } while ((ulong)(uVar6 >> 2) * 0xe0 != lVar11);
            }
            uVar15 = (ulong)uVar6 & 3;
            if ((uVar6 & 3) != 0) {
              puVar13 = (undefined8 *)(lVar9 + lVar12 * 0x38);
              do {
                *(undefined4 *)((long)puVar13 + 0xc) = 0;
                uVar15 = uVar15 - 1;
                *puVar13 = 0;
                *(undefined1 *)(puVar13 + 1) = 0;
                *(undefined1 *)(puVar13 + 6) = 0;
                puVar13 = puVar13 + 7;
              } while (uVar15 != 0);
            }
          }
          *(long *)(puVar2 + 6) = lVar9;
          if (*puVar18 != 0) {
            lVar11 = 0;
            lVar9 = 0;
            uVar15 = 0;
            do {
              while( true ) {
                puVar3 = (undefined4 *)(*(long *)(puVar2 + 6) + lVar11);
                if ((long)(int)puVar2[4] <= (long)uVar15) {
                  puVar3 = (undefined4 *)0x0;
                }
                puVar4 = (undefined4 *)(*(long *)(lVar10 + 0x30) + lVar9);
                uVar20 = *puVar4;
                puVar3[1] = 0x3f800000;
                *puVar3 = uVar20;
                *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(puVar4 + 2);
                puVar3[3] = puVar4[1];
                cVar5 = *(char *)(puVar4 + 0x12);
                *(bool *)(puVar3 + 0xc) = cVar5 != '\0';
                if (cVar5 == '\0') break;
                puVar3[4] = puVar4[0x11];
                puVar3[5] = (uint)*(byte *)(puVar4 + 0x12);
                *(undefined4 **)(puVar3 + 6) = puVar4 + 0x13;
                *(undefined4 **)(puVar3 + 8) = puVar4 + 0x1b;
                *(undefined4 **)(puVar3 + 10) = puVar4 + 0x23;
                uVar15 = uVar15 + 1;
                lVar9 = lVar9 + 0xac;
                lVar11 = lVar11 + 0x38;
                if (*puVar18 <= uVar15) goto LAB_0036cca4;
              }
              puVar3[4] = puVar4[0xc];
              puVar3[5] = puVar4[0xd];
              puVar3[6] = puVar4[0xe];
              puVar3[7] = puVar4[0xf];
              uVar15 = uVar15 + 1;
              lVar9 = lVar9 + 0xac;
              lVar11 = lVar11 + 0x38;
            } while (uVar15 < *puVar18);
          }
LAB_0036cca4:
          uVar14 = uVar14 + 1;
        } while (uVar14 < *puVar16);
      }
      lVar10 = *plVar7;
      *plVar7 = *plVar1;
      *(long **)(lVar10 + 8) = plVar1;
      *(long **)(*plVar1 + 8) = plVar7;
      *plVar1 = lVar10;
      FUN_0036e0d0(param_1,plVar7,param_3,lVar19 + uVar17 * 0xa0);
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(ushort *)(param_3 + 0x7a));
  }
  return;
}

