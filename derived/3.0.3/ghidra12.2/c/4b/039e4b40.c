
void FUN_039e4b40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  byte bVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  byte *pbVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  bVar11 = *(byte *)(param_1 + 0x308);
  *(undefined4 *)(param_1 + 0x5f8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  uVar7 = bVar11 & 0xffffffdf;
  *(byte *)(param_1 + 0x308) = (byte)uVar7;
  if ((bVar11 >> 1 & 1) != 0) {
    if ((bVar11 & 0x18) == 8) {
      *(byte *)(param_1 + 0x308) = (byte)uVar7 | 0x10;
    }
    uVar7 = *(uint *)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x30b) = 0;
    if (uVar7 != 0) {
      lVar15 = *(long *)(param_1 + 0x30);
      uVar16 = 0;
      lVar1 = param_1 + 0x310;
      do {
        uVar17 = (ulong)*(byte *)(param_1 + 0x30b);
        lVar19 = *(long *)(param_1 + 0x618);
        lVar13 = param_1;
        do {
          lVar8 = lVar13;
          lVar13 = *(long *)(lVar8 + 0x170);
        } while (lVar13 != 0);
        lVar13 = (long)(int)uVar16;
        if (*(uint *)(param_1 + 0x610) <= uVar16) {
          lVar13 = 0;
        }
        if ((*(int *)(lVar8 + 0x6e8) == 0) && ((*(byte *)(param_1 + 0x308) & 1) != 0)) {
          lVar10 = lVar19 + lVar13 * 0x168;
          lVar8 = lVar1 + uVar17 * 0x5c;
          bVar11 = *(byte *)(lVar8 + 3) & 0xfe | *(byte *)(lVar10 + 0x138);
          *(byte *)(lVar8 + 3) = bVar11;
          bVar11 = bVar11 & 0xfd | *(char *)(lVar10 + 0x158) << 1;
        }
        else {
          lVar8 = lVar1 + uVar17 * 0x5c;
          bVar11 = *(byte *)(lVar8 + 3) | 3;
        }
        *(byte *)(lVar8 + 3) = bVar11;
        plVar14 = *(long **)(lVar15 + (long)(int)uVar16 * 8);
        if ((plVar14 != (long *)0x0) && ((char)plVar14[0xb] != '\0')) {
          uVar4 = *(uint *)(lVar19 + lVar13 * 0x168 + 0x18);
          pbVar18 = (byte *)(lVar1 + uVar17 * 0x5c);
          if (uVar4 != *pbVar18) {
            bVar11 = *(byte *)(param_1 + 0x308);
            *pbVar18 = (byte)uVar4;
            *(byte *)(param_1 + 0x308) = bVar11 | 0x10;
          }
          fVar20 = *(float *)(lVar19 + lVar13 * 0x168 + 0x58);
          pfVar9 = (float *)(lVar1 + uVar17 * 0x5c + 0x54);
          if (*pfVar9 != fVar20) {
            bVar11 = *(byte *)(param_1 + 0x308);
            *pfVar9 = fVar20;
            *(byte *)(param_1 + 0x308) = bVar11 | 0x10;
          }
          fVar20 = *(float *)(lVar19 + lVar13 * 0x168 + 0x78);
          pfVar9 = (float *)(lVar1 + uVar17 * 0x5c + 0x58);
          if (*pfVar9 != fVar20) {
            bVar11 = *(byte *)(param_1 + 0x308);
            *pfVar9 = fVar20;
            *(byte *)(param_1 + 0x308) = bVar11 | 0x10;
          }
          iVar5 = (**(code **)(*plVar14 + 0xb0))(plVar14);
          if (iVar5 == *DAT_05ae9058) {
            fVar23 = *(float *)(plVar14 + 0x2a);
            lVar8 = lVar1 + uVar17 * 0x5c;
            fVar20 = fVar23 * *(float *)(plVar14 + 0x25);
            fVar21 = fVar23 * *(float *)((long)plVar14 + 300);
            fVar22 = fVar23 * *(float *)(plVar14 + 0x26);
            fVar23 = fVar23 * *(float *)((long)plVar14 + 0x134);
            if (((((*(float *)(lVar8 + 8) != fVar20) || (*(float *)(lVar8 + 0xc) != fVar21)) ||
                 ((*(float *)(lVar8 + 0x10) != fVar22 ||
                  ((*(float *)(lVar8 + 0x14) != fVar23 ||
                   (lVar10 = lVar1 + uVar17 * 0x5c, *(float *)(lVar10 + 0x18) != fVar20)))))) ||
                (*(float *)(lVar10 + 0x1c) != fVar21)) ||
               ((*(float *)(lVar10 + 0x20) != fVar22 || (*(float *)(lVar10 + 0x24) != fVar23)))) {
              bVar11 = *(byte *)(param_1 + 0x308);
              lVar10 = lVar1 + uVar17 * 0x5c;
              *(float *)(lVar8 + 8) = fVar20;
              *(float *)(lVar8 + 0xc) = fVar21;
              *(float *)(lVar8 + 0x10) = fVar22;
              *(float *)(lVar8 + 0x14) = fVar23;
              *(float *)(lVar10 + 0x18) = fVar20;
              *(float *)(lVar10 + 0x1c) = fVar21;
              *(float *)(lVar10 + 0x20) = fVar22;
              *(float *)(lVar10 + 0x24) = fVar23;
              *(byte *)(param_1 + 0x308) = bVar11 | 0x10;
            }
            lVar8 = lVar1 + uVar17 * 0x5c;
            pfVar9 = (float *)(lVar8 + 0x48);
            if (((*pfVar9 != 0.0) || (*(float *)(lVar8 + 0x4c) != 0.0)) ||
               (*(float *)(lVar8 + 0x50) != 1.0)) {
              bVar11 = *(byte *)(param_1 + 0x308);
              pfVar9[0] = 0.0;
              pfVar9[1] = 0.0;
              *(byte *)(param_1 + 0x308) = bVar11 | 0x10;
              *(undefined4 *)(lVar8 + 0x50) = 0x3f800000;
            }
            lVar8 = lVar19 + lVar13 * 0x168;
            cVar6 = *(char *)(lVar8 + 0x160);
            pcVar12 = (char *)(lVar1 + uVar17 * 0x5c + 1);
            if (*pcVar12 != cVar6) {
              bVar11 = *(byte *)(param_1 + 0x308);
              *pcVar12 = cVar6;
              *(byte *)(param_1 + 0x308) = bVar11 | 0x10;
              cVar6 = *(char *)(lVar8 + 0x160);
            }
LAB_039e5274:
            pcVar12 = (char *)(lVar1 + uVar17 * 0x5c + 2);
            if (*pcVar12 != cVar6) {
              bVar11 = *(byte *)(param_1 + 0x308);
              *pcVar12 = cVar6;
              *(byte *)(param_1 + 0x308) = bVar11 | 0x10;
            }
          }
          else {
            if (iVar5 == *DAT_05ae9068) {
              lVar8 = param_1;
              do {
                lVar10 = lVar8;
                lVar8 = *(long *)(lVar10 + 0x170);
              } while (lVar8 != 0);
              if ((*(int *)(lVar10 + 0x6e8) == 3) && (*pbVar18 == 1)) {
LAB_039e4ed8:
                fVar24 = *(float *)(plVar14 + 0x34);
                fVar21 = fVar24 * *(float *)(plVar14 + 0x2a);
                fVar22 = fVar24 * *(float *)((long)plVar14 + 0x154);
                fVar23 = fVar24 * *(float *)(plVar14 + 0x2b);
                fVar24 = fVar24 * *(float *)((long)plVar14 + 0x15c);
LAB_039e510c:
                lVar8 = lVar1 + uVar17 * 0x5c;
                if ((((*(float *)(lVar8 + 8) != 0.0) || (*(float *)(lVar8 + 0xc) != 0.0)) ||
                    (*(float *)(lVar8 + 0x10) != 0.0)) ||
                   (((*(float *)(lVar8 + 0x14) != 1.0 ||
                     (lVar10 = lVar1 + uVar17 * 0x5c, *(float *)(lVar10 + 0x18) != fVar21)) ||
                    ((*(float *)(lVar10 + 0x1c) != fVar22 ||
                     ((*(float *)(lVar10 + 0x20) != fVar23 || (*(float *)(lVar10 + 0x24) != fVar24))
                     )))))) {
                  bVar11 = *(byte *)(param_1 + 0x308);
                  *(float *)(lVar8 + 8) = 0.0;
                  fVar25 = 0.0;
                  fVar26 = 0.0;
                  fVar27 = 1.0;
                  *(byte *)(param_1 + 0x308) = bVar11 | 0x10;
LAB_039e5190:
                  lVar8 = lVar1 + uVar17 * 0x5c;
                  *(float *)(lVar8 + 0xc) = fVar25;
                  *(float *)(lVar8 + 0x10) = fVar26;
                  *(float *)(lVar8 + 0x14) = fVar27;
                  *(float *)(lVar8 + 0x18) = fVar21;
                  *(float *)(lVar8 + 0x1c) = fVar22;
                  *(float *)(lVar8 + 0x20) = fVar23;
                  *(float *)(lVar8 + 0x24) = fVar24;
                }
              }
              else {
                lVar8 = param_1;
                do {
                  lVar10 = lVar8;
                  lVar8 = *(long *)(lVar10 + 0x170);
                } while (lVar8 != 0);
                if (*(int *)(lVar10 + 0x6e8) == 1) goto LAB_039e4ed8;
                lVar8 = param_1;
                do {
                  lVar10 = lVar8;
                  lVar8 = *(long *)(lVar10 + 0x170);
                } while (lVar8 != 0);
                fVar20 = *(float *)(plVar14 + 0x34);
                if (*(int *)(lVar10 + 0x6e8) == 2) {
                  fVar21 = fVar20 * *(float *)(plVar14 + 0x2a);
                  fVar22 = fVar20 * *(float *)((long)plVar14 + 0x154);
                  fVar23 = fVar20 * *(float *)(plVar14 + 0x2b);
                  fVar24 = fVar20 * *(float *)((long)plVar14 + 0x15c);
                  goto LAB_039e510c;
                }
                lVar8 = lVar1 + uVar17 * 0x5c;
                fVar21 = fVar20 * *(float *)(plVar14 + 0x25);
                fVar22 = fVar20 * *(float *)((long)plVar14 + 300);
                fVar23 = fVar20 * *(float *)(plVar14 + 0x26);
                fVar24 = fVar20 * *(float *)((long)plVar14 + 0x134);
                fVar25 = fVar20 * *(float *)((long)plVar14 + 0x17c);
                fVar26 = fVar20 * *(float *)(plVar14 + 0x30);
                fVar27 = fVar20 * *(float *)((long)plVar14 + 0x184);
                if (((((*(float *)(lVar8 + 8) != fVar20 * *(float *)(plVar14 + 0x2f)) ||
                      (*(float *)(lVar8 + 0xc) != fVar25)) || (*(float *)(lVar8 + 0x10) != fVar26))
                    || ((*(float *)(lVar8 + 0x14) != fVar27 ||
                        (lVar10 = lVar1 + uVar17 * 0x5c, *(float *)(lVar10 + 0x18) != fVar21)))) ||
                   ((*(float *)(lVar10 + 0x1c) != fVar22 ||
                    ((*(float *)(lVar10 + 0x20) != fVar23 || (*(float *)(lVar10 + 0x24) != fVar24)))
                    ))) {
                  bVar11 = *(byte *)(param_1 + 0x308);
                  *(float *)(lVar8 + 8) = fVar20 * *(float *)(plVar14 + 0x2f);
                  *(byte *)(param_1 + 0x308) = bVar11 | 0x10;
                  goto LAB_039e5190;
                }
              }
              lVar8 = param_1;
              do {
                lVar10 = lVar8;
                lVar8 = *(long *)(lVar10 + 0x170);
              } while (lVar8 != 0);
              if ((*(int *)(lVar10 + 0x6e8) == 2) && (*pbVar18 != 1)) {
                *(byte *)(param_1 + 0x308) = *(byte *)(param_1 + 0x308) | 0x10;
                *pbVar18 = 1;
              }
              lVar8 = lVar1 + uVar17 * 0x5c;
              if (((*(float *)(lVar8 + 0x48) != *(float *)(plVar14 + 0x38)) ||
                  (*(float *)(lVar8 + 0x4c) != *(float *)((long)plVar14 + 0x1c4))) ||
                 (*(float *)(lVar8 + 0x50) != *(float *)(plVar14 + 0x39))) {
                *(byte *)(param_1 + 0x308) = *(byte *)(param_1 + 0x308) | 0x10;
                *(float *)(lVar8 + 0x48) = *(float *)(plVar14 + 0x38);
                *(undefined4 *)(lVar8 + 0x4c) = *(undefined4 *)((long)plVar14 + 0x1c4);
                *(int *)(lVar8 + 0x50) = (int)plVar14[0x39];
              }
              cVar6 = *(char *)(lVar19 + lVar13 * 0x168 + 0x160);
              pcVar12 = (char *)(lVar1 + uVar17 * 0x5c + 1);
              if (*pcVar12 != cVar6) {
                bVar11 = *(byte *)(param_1 + 0x308);
                *pcVar12 = cVar6;
                *(byte *)(param_1 + 0x308) = bVar11 | 0x10;
              }
              cVar6 = *(char *)(lVar19 + lVar13 * 0x168 + 0x161);
              goto LAB_039e5274;
            }
            if (iVar5 != **(short **)PTR_DAT_04bbd930) goto LAB_039e4c3c;
            fVar25 = *(float *)(plVar14 + 0x2f);
            lVar8 = lVar1 + uVar17 * 0x5c;
            fVar20 = *(float *)(plVar14 + 0x25);
            fVar22 = *(float *)(plVar14 + 0x26);
            fVar21 = fVar25 * *(float *)((long)plVar14 + 300);
            fVar23 = fVar25 * *(float *)((long)plVar14 + 0x134);
            fVar27 = *(float *)(plVar14 + 0x2b);
            fVar24 = fVar25 * *(float *)((long)plVar14 + 0x154);
            fVar26 = fVar25 * *(float *)((long)plVar14 + 0x15c);
            if ((((*(float *)(lVar8 + 8) != fVar25 * *(float *)(plVar14 + 0x2a)) ||
                 (*(float *)(lVar8 + 0xc) != fVar24)) ||
                ((*(float *)(lVar8 + 0x10) != fVar25 * fVar27 ||
                 ((*(float *)(lVar8 + 0x14) != fVar26 ||
                  (lVar10 = lVar1 + uVar17 * 0x5c, *(float *)(lVar10 + 0x18) != fVar25 * fVar20)))))
                ) || ((*(float *)(lVar10 + 0x1c) != fVar21 ||
                      ((*(float *)(lVar10 + 0x20) != fVar25 * fVar22 ||
                       (*(float *)(lVar10 + 0x24) != fVar23)))))) {
              bVar11 = *(byte *)(param_1 + 0x308);
              lVar10 = lVar1 + uVar17 * 0x5c;
              *(float *)(lVar8 + 8) = fVar25 * *(float *)(plVar14 + 0x2a);
              *(float *)(lVar8 + 0xc) = fVar24;
              *(float *)(lVar8 + 0x10) = fVar25 * fVar27;
              *(float *)(lVar8 + 0x14) = fVar26;
              *(float *)(lVar10 + 0x18) = fVar25 * fVar20;
              *(float *)(lVar10 + 0x1c) = fVar21;
              *(float *)(lVar10 + 0x20) = fVar25 * fVar22;
              *(float *)(lVar10 + 0x24) = fVar23;
              *(byte *)(param_1 + 0x308) = bVar11 | 0x10;
            }
            lVar8 = lVar1 + uVar17 * 0x5c;
            fVar20 = *(float *)((long)plVar14 + 0x19c);
            fVar21 = *(float *)(plVar14 + 0x34);
            if (((*(float *)(lVar8 + 0x48) != -*(float *)(plVar14 + 0x33)) ||
                (*(float *)(lVar8 + 0x4c) != -fVar20)) || (*(float *)(lVar8 + 0x50) != -fVar21)) {
              bVar11 = *(byte *)(param_1 + 0x308);
              *(float *)(lVar8 + 0x48) = -*(float *)(plVar14 + 0x33);
              *(float *)(lVar8 + 0x4c) = -fVar20;
              *(float *)(lVar8 + 0x50) = -fVar21;
              *(byte *)(param_1 + 0x308) = bVar11 | 0x10;
            }
            pcVar12 = (char *)(lVar1 + uVar17 * 0x5c + 1);
            if (*pcVar12 != '\x02') {
              *(byte *)(param_1 + 0x308) = *(byte *)(param_1 + 0x308) | 0x10;
              *pcVar12 = '\x02';
            }
            pcVar12 = (char *)(lVar1 + uVar17 * 0x5c + 2);
            if (*pcVar12 != '\x02') {
              *(byte *)(param_1 + 0x308) = *(byte *)(param_1 + 0x308) | 0x10;
              *pcVar12 = '\x02';
            }
          }
          iVar5 = (**(code **)(*plVar14 + 0xb0))(plVar14);
          if ((iVar5 == *(int *)(param_1 + 0x828)) &&
             (*(uint *)(param_1 + 0x800) == (uint)*(ushort *)(plVar14 + 0x16))) {
            lVar8 = lVar1 + uVar17 * 0x5c;
            uVar2 = *(undefined8 *)(lVar8 + 0x18);
            uVar3 = *(undefined8 *)(lVar8 + 0x20);
            *(undefined4 *)(param_1 + 0x5f8) = *(undefined4 *)(lVar8 + 0x50);
            *(undefined8 *)(param_1 + 0x5fc) = uVar2;
            *(undefined8 *)(param_1 + 0x604) = uVar3;
            *(undefined8 *)(param_1 + 0x5f0) = *(undefined8 *)(lVar8 + 0x48);
          }
          lVar8 = lVar1 + uVar17 * 0x5c;
          fVar20 = *(float *)(lVar8 + 0x18);
          fVar21 = *(float *)(lVar8 + 0x1c);
          fVar24 = *(float *)(lVar19 + lVar13 * 0x168 + 0x38);
          fVar22 = *(float *)(lVar8 + 0x20);
          fVar23 = *(float *)(lVar8 + 0x24);
          *(char *)(param_1 + 0x30b) = *(char *)(param_1 + 0x30b) + '\x01';
          *(float *)(lVar8 + 0x38) = fVar24 * fVar20;
          *(float *)(lVar8 + 0x3c) = fVar24 * fVar21;
          *(float *)(lVar8 + 0x40) = fVar24 * fVar22;
          *(float *)(lVar8 + 0x44) = fVar24 * fVar23;
          *(float *)(lVar8 + 0x2c) = fVar24 * *(float *)(lVar8 + 0xc);
          *(float *)(lVar8 + 0x34) = fVar24 * *(float *)(lVar8 + 0x14);
          *(float *)(lVar8 + 0x28) = fVar24 * *(float *)(lVar8 + 8);
          *(float *)(lVar8 + 0x30) = fVar24 * *(float *)(lVar8 + 0x10);
        }
LAB_039e4c3c:
        uVar16 = uVar16 + 1;
      } while (uVar7 != uVar16);
      if (*(char *)(param_1 + 0x30b) != '\0') {
        uVar7 = (uint)*(byte *)(param_1 + 0x308);
        goto LAB_039e5474;
      }
    }
    if (((*(float *)(param_1 + 0x318) != 0.0) || (*(float *)(param_1 + 0x31c) != 0.0)) ||
       ((*(float *)(param_1 + 800) != 0.0 ||
        ((((*(float *)(param_1 + 0x324) != 1.0 || (*(float *)(param_1 + 0x328) != 0.0)) ||
          (*(float *)(param_1 + 0x32c) != 0.0)) ||
         ((*(float *)(param_1 + 0x330) != 0.0 || (*(float *)(param_1 + 0x334) != 1.0)))))))) {
      *(undefined8 *)(param_1 + 0x318) = 0;
      *(undefined8 *)(param_1 + 800) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0x328) = 0;
      *(undefined8 *)(param_1 + 0x330) = 0x3f80000000000000;
      *(byte *)(param_1 + 0x308) = *(byte *)(param_1 + 0x308) | 0x10;
    }
    if (*(float *)(param_1 + 0x358) == 0.0) {
      uVar7 = (uint)*(byte *)(param_1 + 0x308);
      if ((*(float *)(param_1 + 0x35c) != 0.0) || (*(float *)(param_1 + 0x360) != 1.0))
      goto LAB_039e54d8;
      cVar6 = *(char *)(param_1 + 0x311);
    }
    else {
      uVar7 = (uint)*(byte *)(param_1 + 0x308);
LAB_039e54d8:
      uVar7 = uVar7 | 0x10;
      *(undefined8 *)(param_1 + 0x358) = 0;
      *(char *)(param_1 + 0x308) = (char)uVar7;
      *(undefined4 *)(param_1 + 0x360) = 0x3f800000;
      cVar6 = *(char *)(param_1 + 0x311);
    }
    if (cVar6 != '\0') {
      uVar7 = uVar7 | 0x10;
      *(undefined1 *)(param_1 + 0x311) = 0;
      *(char *)(param_1 + 0x308) = (char)uVar7;
    }
  }
LAB_039e5474:
  bVar11 = (byte)uVar7;
  if ((uVar7 >> 4 & 1) == 0) {
    if (*(long *)(param_1 + 0x170) == 0) {
      iVar5 = *(int *)(param_1 + 0x848);
    }
    else {
      iVar5 = *(int *)(*(long *)(param_1 + 0x170) + 0x848);
    }
    if ((iVar5 == 2) || (*(char *)(param_1 + 0x30b) == '\0')) goto LAB_039e54a8;
  }
  bVar11 = bVar11 | 0x20;
LAB_039e54a8:
  *(byte *)(param_1 + 0x308) = bVar11 & 0xe3;
  return;
}

