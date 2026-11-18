
void FUN_036069dc(long *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  byte bVar6;
  bool bVar7;
  byte *pbVar8;
  long *plVar9;
  byte bVar10;
  undefined1 uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  byte *pbVar21;
  long lVar22;
  undefined4 *puVar23;
  undefined4 auStack_16834 [23040];
  byte local_34;
  byte local_33;
  byte local_32;
  byte local_31;
  
  lVar13 = param_1[2];
  switch(lVar13) {
  case 0:
    if ((char)param_1[1] == -0x78) {
      param_1[2] = 1;
    }
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  case 1:
    lVar13 = (ulong)((char)param_1[1] == '3') << 1;
    break;
  case 2:
    *(uint *)(param_1 + 3) = (uint)*(byte *)(param_1 + 1);
    lVar13 = 3;
    break;
  case 3:
    *(bool *)((long)param_1 + 0x1c) = (char)param_1[1] != '\0';
    lVar13 = 4;
    break;
  case 4:
    *(ushort *)((long)param_1 + 0x1e) = (ushort)*(byte *)(param_1 + 1);
    lVar13 = 5;
    break;
  case 5:
    *(ushort *)((long)param_1 + 0x1e) =
         *(ushort *)((long)param_1 + 0x1e) | (ushort)*(byte *)(param_1 + 1) << 8;
    lVar13 = 6;
    break;
  default:
    uVar5 = *(ushort *)((long)param_1 + 0x1e);
    uVar14 = (ulong)uVar5;
    uVar18 = lVar13 - 6;
    lVar20 = uVar18 - uVar14;
    if (uVar18 < uVar14) {
      *(char *)((long)param_1 + lVar13 + 0x1a) = (char)param_1[1];
      lVar13 = param_1[2];
    }
    else {
      if (uVar18 != uVar14) {
        if (lVar20 != 3) {
          if (lVar20 == 2) {
            param_1[2] = lVar13 + 1;
            uVar11 = *(undefined1 *)((long)param_1 + 9);
          }
          else {
            if (lVar20 != 1) {
              return;
            }
            uVar16 = (uint)*(ushort *)(param_1 + 0x54) | (uint)*(byte *)(param_1 + 1) << 8;
            uVar17 = (uint)(byte)(uVar5 >> 8) + (uVar5 & 0xff) +
                     (int)param_1[3] + (uint)*(byte *)((long)param_1 + 0x1c);
            *(short *)(param_1 + 0x54) = (short)uVar16;
            if (uVar5 != 0) {
              if (uVar5 == 1) {
                uVar19 = 0;
              }
              else {
                uVar18 = 0;
                do {
                  uVar19 = uVar18 + 2;
                  uVar17 = (uint)*(byte *)((long)param_1 + uVar18 + 0x21) +
                           (uVar17 + *(byte *)((long)param_1 + uVar18 + 0x20) & 0xffff);
                  uVar18 = uVar19;
                } while ((uVar14 & 0xfffe) != uVar19);
              }
              if ((uVar5 & 1) != 0) {
                uVar17 = (uint)*(byte *)((long)param_1 + uVar19 + 0x20) + (uVar17 & 0xffff);
              }
            }
            param_1[2] = lVar13 + 1;
            uVar11 = 0x81;
            *(byte *)((long)param_1 + 9) =
                 *(byte *)((long)param_1 + 9) & 0xfe | uVar16 != (uVar17 & 0xffff);
          }
          *(undefined1 *)(param_1 + 1) = uVar11;
          return;
        }
        param_1[2] = 0;
        *(undefined1 *)(param_1 + 1) = 0;
        switch((int)param_1[3]) {
        case 1:
          memset((void *)((long)param_1 + 0x2a2),0,0x1680);
          param_1[0x325] = 0;
          bVar10 = *(byte *)((long)param_1 + 9) & 0xf0;
          break;
        case 2:
          local_31 = *(byte *)((long)param_1 + 0x22);
          local_34 = local_31 & 3;
          local_33 = local_31 >> 2 & 3;
          local_32 = local_31 >> 4 & 3;
          local_31 = local_31 >> 6;
          bVar10 = *(byte *)((long)param_1 + 0x21);
          uVar14 = param_1[0x325];
          if (uVar14 < 0x280) {
            lVar13 = 0;
          }
          else {
            lVar13 = 0;
            uVar18 = 0;
            pbVar15 = (byte *)((long)param_1 + 0x2a3);
            do {
              lVar20 = 0;
              pbVar21 = pbVar15;
              do {
                puVar23 = auStack_16834 + lVar13 + 4;
                pbVar8 = pbVar21;
                lVar22 = 0;
                do {
                  bVar6 = pbVar8[-1];
                  bVar7 = lVar22 != -0x98;
                  bVar3 = *pbVar8;
                  uVar1 = *(undefined4 *)
                           (&UNK_04102250 +
                           (ulong)*(byte *)((ulong)&local_34 |
                                           (ulong)(bVar3 >> 5) & 2 | (ulong)(bVar6 >> 6) & 1) * 4);
                  puVar23[-4] = *(undefined4 *)
                                 (&UNK_04102250 +
                                 (ulong)*(byte *)((ulong)&local_34 |
                                                 (ulong)(bVar3 >> 6) & 2 | (ulong)(bVar6 >> 7)) * 4)
                  ;
                  puVar23[-3] = uVar1;
                  bVar4 = *(byte *)((ulong)&local_34 |
                                   (ulong)(bVar3 >> 1) & 2 | (ulong)(bVar6 >> 2) & 1);
                  uVar1 = *(undefined4 *)
                           (&UNK_04102250 +
                           (ulong)*(byte *)((ulong)&local_34 |
                                           (ulong)(bVar3 >> 2) & 2 | (ulong)(bVar6 >> 3) & 1) * 4);
                  uVar2 = *(undefined4 *)
                           (&UNK_04102250 +
                           (ulong)*(byte *)((ulong)&local_34 |
                                           (ulong)(bVar3 >> 3) & 2 | (ulong)(bVar6 >> 4) & 1) * 4);
                  puVar23[-2] = *(undefined4 *)
                                 (&UNK_04102250 +
                                 (ulong)*(byte *)((ulong)&local_34 |
                                                 (ulong)(bVar3 >> 4) & 2 | (ulong)(bVar6 >> 5) & 1)
                                 * 4);
                  puVar23[-1] = uVar2;
                  uVar2 = *(undefined4 *)(&UNK_04102250 + (ulong)bVar4 * 4);
                  *puVar23 = uVar1;
                  puVar23[1] = uVar2;
                  uVar1 = *(undefined4 *)
                           (&UNK_04102250 +
                           (ulong)*(byte *)((ulong)&local_34 |
                                           (ulong)bVar6 & 1 | ((ulong)bVar3 & 1) << 1) * 4);
                  puVar23[2] = *(undefined4 *)
                                (&UNK_04102250 +
                                (ulong)*(byte *)((ulong)&local_34 |
                                                (ulong)bVar3 & 2 | (ulong)(bVar6 >> 1) & 1) * 4);
                  puVar23[3] = uVar1;
                  puVar23 = puVar23 + 8;
                  pbVar8 = pbVar8 + 0x10;
                  lVar22 = lVar22 + -8;
                } while (bVar7);
                lVar20 = lVar20 + 1;
                lVar13 = lVar13 + 0xa0;
                pbVar21 = pbVar21 + 2;
              } while (lVar20 != 8);
              uVar18 = uVar18 + 1;
              pbVar15 = pbVar15 + 0x140;
            } while (uVar18 != (uVar14 / 0x140 & 0xfffffffffffffe));
          }
          if (uVar14 == 0) {
            memset(auStack_16834 + lVar13,0xff,0x500);
            lVar13 = lVar13 + 0x140;
          }
          plVar9 = *(long **)(*param_1 + 0x58);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x38))(plVar9,auStack_16834,lVar13,(bVar10 & 0xf) != 0);
          }
          bVar10 = *(byte *)((long)param_1 + 9) & 0xf7 | 2;
          break;
        default:
          goto switchD_036065f0_caseD_3;
        case 4:
          if (*(char *)((long)param_1 + 0x1c) == '\0') {
            if (*(short *)((long)param_1 + 0x1e) != 0) {
              uVar14 = 0;
              do {
                lVar13 = param_1[0x325];
                uVar11 = *(undefined1 *)((long)param_1 + uVar14 + 0x20);
                uVar14 = uVar14 + 1;
                param_1[0x325] = lVar13 + 1;
                *(undefined1 *)((long)param_1 + lVar13 + 0x2a2) = uVar11;
              } while (uVar14 < *(ushort *)((long)param_1 + 0x1e));
            }
          }
          else if (*(short *)((long)param_1 + 0x1e) != 0) {
            uVar14 = 0;
            do {
              bVar10 = *(byte *)((long)param_1 + uVar14 + 0x20);
              uVar18 = (ulong)(char)bVar10;
              uVar17 = (uint)bVar10;
              if ((char)bVar10 < '\0') {
                uVar17 = (uVar17 & 0x7f) + 2;
                uVar11 = *(undefined1 *)((long)param_1 + uVar14 + 0x21);
                if ((bVar10 & 0x7e) != 0) {
                  uVar16 = uVar17 & 0xfc;
                  do {
                    lVar13 = param_1[0x325];
                    uVar16 = uVar16 - 4;
                    param_1[0x325] = lVar13 + 1;
                    *(undefined1 *)((long)param_1 + lVar13 + 0x2a2) = uVar11;
                    lVar13 = param_1[0x325];
                    param_1[0x325] = lVar13 + 1;
                    *(undefined1 *)((long)param_1 + lVar13 + 0x2a2) = uVar11;
                    lVar13 = param_1[0x325];
                    param_1[0x325] = lVar13 + 1;
                    *(undefined1 *)((long)param_1 + lVar13 + 0x2a2) = uVar11;
                    lVar13 = param_1[0x325];
                    param_1[0x325] = lVar13 + 1;
                    *(undefined1 *)((long)param_1 + lVar13 + 0x2a2) = uVar11;
                  } while (uVar16 != 0);
                }
                for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                  lVar13 = param_1[0x325];
                  param_1[0x325] = lVar13 + 1;
                  *(undefined1 *)((long)param_1 + lVar13 + 0x2a2) = uVar11;
                }
                uVar18 = uVar14 + 2;
              }
              else {
                uVar19 = uVar14 + 1;
                if ((uVar17 + 2 & 1) == 0) {
                  lVar13 = param_1[0x325];
                  uVar11 = *(undefined1 *)((long)param_1 + uVar14 + 0x21);
                  uVar18 = uVar14 + 2;
                  param_1[0x325] = lVar13 + 1;
                  *(undefined1 *)((long)param_1 + lVar13 + 0x2a2) = uVar11;
                  uVar19 = uVar18;
                }
                if (uVar17 != 0) {
                  iVar12 = (uVar17 + 2 + (int)uVar14) - (int)uVar19;
                  do {
                    lVar13 = param_1[0x325];
                    uVar11 = *(undefined1 *)((long)param_1 + uVar19 + 0x20);
                    uVar18 = uVar19 + 2;
                    iVar12 = iVar12 + -2;
                    param_1[0x325] = lVar13 + 1;
                    *(undefined1 *)((long)param_1 + lVar13 + 0x2a2) = uVar11;
                    lVar13 = param_1[0x325];
                    uVar11 = *(undefined1 *)((long)param_1 + uVar19 + 0x21);
                    param_1[0x325] = lVar13 + 1;
                    *(undefined1 *)((long)param_1 + lVar13 + 0x2a2) = uVar11;
                    uVar19 = uVar18;
                  } while (iVar12 != 0);
                }
              }
              uVar14 = uVar18;
            } while (uVar14 < *(ushort *)((long)param_1 + 0x1e));
          }
          if (param_1[0x325] == 0) {
            return;
          }
          bVar10 = *(byte *)((long)param_1 + 9);
          *(byte *)((long)param_1 + 9) = bVar10 | 8;
          if (param_1[0x325] != 0x1680) {
            return;
          }
          bVar10 = bVar10 | 0xc;
          break;
        case 8:
        case 0xf:
          bVar10 = *(byte *)((long)param_1 + 9) & 0xfd;
        }
        *(byte *)((long)param_1 + 9) = bVar10;
switchD_036065f0_caseD_3:
        return;
      }
      *(ushort *)(param_1 + 0x54) = (ushort)*(byte *)(param_1 + 1);
    }
    lVar13 = lVar13 + 1;
  }
  param_1[2] = lVar13;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

