
void FUN_03f860a0(long *param_1)

{
  int iVar1;
  byte *pbVar2;
  short *psVar3;
  char cVar4;
  byte bVar5;
  short sVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  uint uVar15;
  uint uVar16;
  ushort uVar17;
  short sVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  
  plVar14 = param_1 + 0x2018;
  iVar11 = (int)*plVar14 + -1;
  *(int *)plVar14 = iVar11;
  if (iVar11 == 0) {
    *(int *)plVar14 = *(int *)((long)param_1 + 0x100c4);
    uVar16 = (int)param_1[0x2019] * 2;
    uVar15 = uVar16 ^ 0x40001;
    if (-1 < (int)uVar16) {
      uVar15 = uVar16;
    }
    *(uint *)(param_1 + 0x2019) = uVar15;
    uVar16 = (-(uVar15 >> 0xf & 1) & 0x80000000 | (uVar15 & 0xffff) << 0xf) + (short)uVar15 * -0x80;
    uVar15 = uVar16 + 0x7fff;
    if (-1 < (int)uVar16) {
      uVar15 = uVar16;
    }
    *(short *)((long)param_1 + 0x100cc) = (short)(uVar15 >> 0xf);
  }
  puVar9 = PTR_DAT_04bdf238;
  puVar8 = PTR_DAT_04bdf230;
  plVar14 = param_1 + 0x201a;
  do {
    if ((char)plVar14[0x10] == '\0') {
LAB_03f86174:
      *(undefined1 *)(plVar14 + 0x10) = 0;
      *(byte *)((long)param_1 + 0x105cc) =
           *(byte *)((long)param_1 + 0x105cc) | *(byte *)((long)plVar14 + 0x87);
      if (*(int *)(param_1[0x20be] + 0x68) == 0) {
        *(byte *)((long)param_1 + 0x105ac) =
             *(byte *)((long)param_1 + 0x105ac) & *(byte *)(plVar14 + 0x11);
      }
      *(byte *)((long)param_1 + 0x105e4) =
           *(byte *)((long)param_1 + 0x105e4) & *(byte *)(plVar14 + 0x11);
      goto LAB_03f861a4;
    }
    iVar11 = (int)plVar14[0xe] + -1;
    *(int *)(plVar14 + 0xe) = iVar11;
    if (iVar11 != 0) {
      cVar4 = *(char *)((long)plVar14 + 0x84);
      goto joined_r0x03f861cc;
    }
    switch((char)plVar14[0x10]) {
    case '\x01':
      uVar17 = *(short *)((long)plVar14 + 0x5c) - 0x20;
      *(ushort *)((long)plVar14 + 0x5c) = uVar17;
      if ((short)uVar17 < 1) {
LAB_03f86170:
        *(undefined2 *)((long)plVar14 + 0x5c) = 0;
        goto LAB_03f86174;
      }
      *(undefined4 *)(plVar14 + 0xe) = *(undefined4 *)((long)plVar14 + 0x74);
      *(int *)(plVar14 + 10) = (int)((int)(short)plVar14[0xb] * (uint)uVar17) >> 3;
      *(int *)((long)plVar14 + 0x54) =
           (int)((int)*(short *)((long)plVar14 + 0x5a) * (uint)uVar17) >> 3;
      if ((char)param_1[0x20bd] != '\0') goto LAB_03f861a4;
      goto LAB_03f87ee0;
    case '\x02':
      sVar18 = *(short *)((long)plVar14 + 0x5c) + -8;
      uVar15 = (uint)sVar18;
      *(short *)((long)plVar14 + 0x5c) = sVar18;
      if ((int)uVar15 < 1) goto LAB_03f86170;
      break;
    default:
      uVar15 = (uint)*(ushort *)((long)plVar14 + 0x5c);
      break;
    case '\x04':
      sVar18 = *(short *)((long)plVar14 + 0x5c) + -0x20;
      goto LAB_03f862d8;
    case '\x05':
    case '\v':
      sVar18 = *(short *)((long)plVar14 + 0x5c) +
               (short)((uint)-(int)*(short *)((long)plVar14 + 0x5c) >> 8);
LAB_03f862d8:
      uVar15 = (int)sVar18 & ((int)sVar18 >> 0x1f ^ 0xffffffffU);
      *(short *)((long)plVar14 + 0x5c) = (short)uVar15;
      break;
    case '\x06':
      sVar18 = *(short *)((long)plVar14 + 0x5c) + 0x20;
      goto LAB_03f86324;
    case '\a':
      uVar15 = (uint)(short)(*(short *)((long)plVar14 + 0x5c) + 0x20);
      if (0x7f7 < (int)uVar15) {
        uVar15 = 0x7f8;
      }
      *(short *)((long)plVar14 + 0x5c) = (short)uVar15;
      if (0x5ff < (int)uVar15) {
        *(undefined1 *)(plVar14 + 0x10) = 8;
      }
      break;
    case '\b':
      sVar18 = *(short *)((long)plVar14 + 0x5c) + 8;
LAB_03f86324:
      uVar15 = (uint)sVar18;
      *(short *)((long)plVar14 + 0x5c) = sVar18;
      if (0x7f7 < (int)uVar15) {
        uVar15 = 0x7f8;
        *(undefined1 *)(plVar14 + 0x10) = 3;
        *(undefined2 *)((long)plVar14 + 0x5c) = 0x7f8;
      }
      break;
    case '\t':
      sVar18 = 0x2aa;
      if (*(short *)((long)plVar14 + 0x66) != 1) {
        sVar18 = 0x20;
      }
      sVar18 = sVar18 + *(short *)((long)plVar14 + 0x5c);
      uVar15 = (uint)sVar18;
      *(short *)((long)plVar14 + 0x5c) = sVar18;
      if (0x7f7 < (int)uVar15) {
        uVar16 = (uint)*(ushort *)(plVar14 + 0xd);
        uVar15 = 0x7f8;
        *(undefined1 *)(plVar14 + 0x10) = 10;
        *(undefined2 *)((long)plVar14 + 0x5c) = 0x7f8;
LAB_03f863a0:
        *(uint *)((long)plVar14 + 0x74) = uVar16;
      }
      break;
    case '\n':
      uVar15 = (int)*(short *)((long)plVar14 + 0x5c) +
               ((uint)-(int)*(short *)((long)plVar14 + 0x5c) >> 8);
      *(short *)((long)plVar14 + 0x5c) = (short)uVar15;
      if ((int)(short)uVar15 <= (int)(uint)*(ushort *)((long)plVar14 + 0x6a)) {
        uVar16 = *(uint *)((long)plVar14 + 0x6c);
        *(undefined1 *)(plVar14 + 0x10) = 0xb;
        goto LAB_03f863a0;
      }
    }
    *(undefined4 *)(plVar14 + 0xe) = *(undefined4 *)((long)plVar14 + 0x74);
    *(int *)(plVar14 + 10) = (int)(short)plVar14[0xb] * (int)(short)uVar15 >> 3;
    *(int *)((long)plVar14 + 0x54) = (int)*(short *)((long)plVar14 + 0x5a) * (int)(short)uVar15 >> 3
    ;
    cVar4 = *(char *)((long)plVar14 + 0x84);
joined_r0x03f861cc:
    if (cVar4 == '\0') {
      if (*(char *)((long)plVar14 + 0x83) == '\0') {
        uVar15 = (int)plVar14[9] + *(int *)((long)plVar14 + 0x4c);
      }
      else {
        uVar15 = *(uint *)((long)plVar14 + 0x4c) >> 4;
        uVar15 = uVar15 + ((int)(((int)*(short *)((long)plVar14 - 0x34) *
                                  (int)*(short *)((long)plVar14 - 0x4a) >> 0x10) * uVar15) >> 10);
        uVar22 = *(uint *)(plVar14 + 9) >> 4 & 0x3fff;
        uVar16 = uVar22 ^ 0x7fff;
        if ((int)(uVar15 + uVar22) < 0x8000) {
          uVar16 = uVar15;
        }
        uVar15 = *(uint *)(plVar14 + 9) + uVar16 * 0x10;
      }
      *(uint *)(plVar14 + 9) = uVar15;
      uVar16 = uVar15 >> 0x10 & 0x10;
      if (*(ushort *)((long)plVar14 + 0x5e) == uVar16) goto LAB_03f87e50;
      *(short *)((long)plVar14 + 0x5e) = (short)uVar16;
      *(ushort *)((long)plVar14 + 0x4a) = (ushort)(uVar15 >> 0x10) & 0x1f;
      *(short *)plVar14 = (short)plVar14[8];
      *(undefined4 *)((long)plVar14 + 2) = *(undefined4 *)((long)plVar14 + 0x42);
      if (*(char *)((long)plVar14 + 0x85) == '\0') {
        uVar17 = *(ushort *)((long)plVar14 + 100);
LAB_03f86498:
        psVar3 = (short *)((long)plVar14 + (ulong)uVar16 * 2 + 6);
        if (uVar17 < 0xfff8) {
          pbVar2 = (byte *)(*param_1 + (ulong)(uint)uVar17);
          bVar5 = *pbVar2;
          *(byte *)((long)plVar14 + 0x85) = bVar5 & 1;
          if (((bVar5 & 1) != 0) &&
             (*(byte *)((long)plVar14 + 0x86) = bVar5 & 2, (bVar5 >> 1 & 1) == 0)) {
            *(undefined2 *)((long)plVar14 + 0x5c) = 0;
          }
          bVar7 = bVar5 >> 2 & 3;
          sVar18 = *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 4);
          uVar22 = (uint)(char)pbVar2[1];
          sVar6 = *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 2);
          uVar15 = (uint)sVar18;
          iVar11 = (int)uVar15 >> 1;
          iVar21 = (int)sVar6;
          iVar13 = iVar21 >> 1;
          if (bVar5 < 0xd0) {
            uVar12 = (uint)(bVar5 >> 4);
            iVar10 = (((int)(char)pbVar2[1] >> 4) << (ulong)uVar12) >> 1;
            if (bVar7 == 1) {
              iVar10 = iVar11 + ((int)-uVar15 >> 5) + iVar10;
              if (0x7ffe < iVar10) {
                iVar10 = 0x7fff;
              }
              if (iVar10 < -0x7fff) {
                iVar10 = 0;
              }
              sVar18 = (short)(iVar10 << 1);
              iVar13 = (int)sVar18;
              *psVar3 = sVar18;
              iVar11 = (-iVar13 >> 5) + ((((int)(uVar22 << 0x1c) >> 0x1c) << (ulong)uVar12) >> 1) +
                       (iVar13 >> 1);
            }
            else if (bVar7 == 3) {
              iVar10 = ((uVar15 + ((int)(uVar15 * -0xd) >> 7)) - iVar13) + (iVar13 + iVar21 >> 4) +
                       iVar10;
              if (0x7ffe < iVar10) {
                iVar10 = 0x7fff;
              }
              if (iVar10 < -0x7fff) {
                iVar10 = 0;
              }
              sVar18 = (short)(iVar10 << 1);
              *psVar3 = sVar18;
              iVar13 = (int)sVar18;
              iVar11 = (((int)(iVar11 + uVar15) >> 4) - iVar11) +
                       ((((int)(uVar22 << 0x1c) >> 0x1c) << (ulong)uVar12) >> 1) + iVar13 +
                       (iVar13 * -0xd >> 7);
            }
            else {
              iVar11 = (int)(uVar22 << 0x1c) >> 0x1c;
              if (bVar7 == 2) {
                iVar21 = (int)sVar18 >> 1;
                iVar10 = ((int)sVar18 - ((int)sVar6 >> 1)) + ((int)sVar6 >> 5) +
                         (-iVar21 - (int)sVar18 >> 5) + iVar10;
                if (0x7ffe < iVar10) {
                  iVar10 = 0x7fff;
                }
                if (iVar10 < -0x7fff) {
                  iVar10 = 0;
                }
                sVar6 = (short)(iVar10 << 1);
                *psVar3 = sVar6;
                iVar13 = (int)sVar6;
                iVar11 = (((int)sVar18 >> 5) - iVar21) + ((iVar11 << (ulong)uVar12) >> 1) + iVar13 +
                         (-(iVar13 + (iVar13 >> 1)) >> 5);
              }
              else {
                if (0x7ffe < iVar10) {
                  iVar10 = 0x7fff;
                }
                if (iVar10 < -0x7fff) {
                  iVar10 = 0;
                }
                sVar18 = (short)(iVar10 << 1);
                *psVar3 = sVar18;
                iVar13 = (int)sVar18;
                iVar11 = (iVar11 << (ulong)uVar12) >> 1;
              }
            }
            if (0x7ffe < iVar11) {
              iVar11 = 0x7fff;
            }
            if (iVar11 < -0x7fff) {
              iVar11 = 0;
            }
            sVar18 = (short)(iVar11 << 1);
            *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 8) = sVar18;
            iVar10 = (int)sVar18;
            iVar20 = (int)(char)pbVar2[2];
            iVar11 = ((iVar20 >> 4) << (ulong)uVar12) >> 1;
            iVar21 = iVar10 >> 1;
            if (bVar7 == 1) {
              iVar11 = iVar21 + (-iVar10 >> 5) + iVar11;
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 10) = sVar18;
              iVar11 = (int)sVar18;
              iVar13 = (-iVar11 >> 5) + ((((iVar20 << 0x1c) >> 0x1c) << (ulong)uVar12) >> 1) +
                       (iVar11 >> 1);
            }
            else {
              iVar1 = iVar13 >> 1;
              if (bVar7 == 3) {
                iVar11 = (iVar10 - iVar1) + (iVar1 + iVar13 >> 4) + iVar11 + (iVar10 * -0xd >> 7);
                if (0x7ffe < iVar11) {
                  iVar11 = 0x7fff;
                }
                if (iVar11 < -0x7fff) {
                  iVar11 = 0;
                }
                sVar18 = (short)(iVar11 << 1);
                *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 10) = sVar18;
                iVar11 = (int)sVar18;
                iVar13 = (((((iVar20 << 0x1c) >> 0x1c) << (ulong)uVar12) >> 1) - iVar21) +
                         (iVar21 + iVar10 >> 4) + iVar11 + (iVar11 * -0xd >> 7);
              }
              else {
                iVar20 = (iVar20 << 0x1c) >> 0x1c;
                if (bVar7 == 2) {
                  iVar11 = (iVar10 - iVar1) + (iVar13 >> 5) + iVar11 + (-iVar21 - iVar10 >> 5);
                  if (0x7ffe < iVar11) {
                    iVar11 = 0x7fff;
                  }
                  if (iVar11 < -0x7fff) {
                    iVar11 = 0;
                  }
                  sVar18 = (short)(iVar11 << 1);
                  *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 10) = sVar18;
                  iVar11 = (int)sVar18;
                  iVar13 = ((iVar10 >> 5) - iVar21) + ((iVar20 << (ulong)uVar12) >> 1) + iVar11 +
                           (-(iVar11 + (iVar11 >> 1)) >> 5);
                }
                else {
                  if (0x7ffe < iVar11) {
                    iVar11 = 0x7fff;
                  }
                  iVar13 = (iVar20 << (ulong)uVar12) >> 1;
                  if (iVar11 < -0x7fff) {
                    iVar11 = 0;
                  }
                  sVar18 = (short)(iVar11 << 1);
                  *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 10) = sVar18;
                  iVar11 = (int)sVar18;
                }
              }
            }
            if (0x7ffe < iVar13) {
              iVar13 = 0x7fff;
            }
            if (iVar13 < -0x7fff) {
              iVar13 = 0;
            }
            sVar18 = (short)(iVar13 << 1);
            *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0xc) = sVar18;
            iVar10 = (int)sVar18;
            iVar20 = (int)(char)pbVar2[3];
            iVar13 = ((iVar20 >> 4) << (ulong)uVar12) >> 1;
            iVar21 = iVar10 >> 1;
            if (bVar7 == 1) {
              iVar13 = iVar21 + (-iVar10 >> 5) + iVar13;
              if (0x7ffe < iVar13) {
                iVar13 = 0x7fff;
              }
              if (iVar13 < -0x7fff) {
                iVar13 = 0;
              }
              sVar18 = (short)(iVar13 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0xe) = sVar18;
              iVar13 = (int)sVar18;
              iVar11 = (-iVar13 >> 5) + ((((iVar20 << 0x1c) >> 0x1c) << (ulong)uVar12) >> 1) +
                       (iVar13 >> 1);
            }
            else {
              iVar1 = iVar11 >> 1;
              if (bVar7 == 3) {
                iVar11 = (iVar10 - iVar1) + (iVar1 + iVar11 >> 4) + iVar13 + (iVar10 * -0xd >> 7);
                if (0x7ffe < iVar11) {
                  iVar11 = 0x7fff;
                }
                if (iVar11 < -0x7fff) {
                  iVar11 = 0;
                }
                sVar18 = (short)(iVar11 << 1);
                *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0xe) = sVar18;
                iVar13 = (int)sVar18;
                iVar11 = (((((iVar20 << 0x1c) >> 0x1c) << (ulong)uVar12) >> 1) - iVar21) +
                         (iVar21 + iVar10 >> 4) + iVar13 + (iVar13 * -0xd >> 7);
              }
              else {
                iVar20 = (iVar20 << 0x1c) >> 0x1c;
                if (bVar7 == 2) {
                  iVar11 = (iVar10 - iVar1) + (iVar11 >> 5) + iVar13 + (-iVar21 - iVar10 >> 5);
                  if (0x7ffe < iVar11) {
                    iVar11 = 0x7fff;
                  }
                  if (iVar11 < -0x7fff) {
                    iVar11 = 0;
                  }
                  sVar18 = (short)(iVar11 << 1);
                  *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0xe) = sVar18;
                  iVar13 = (int)sVar18;
                  iVar11 = ((iVar10 >> 5) - iVar21) + ((iVar20 << (ulong)uVar12) >> 1) + iVar13 +
                           (-(iVar13 + (iVar13 >> 1)) >> 5);
                }
                else {
                  if (0x7ffe < iVar13) {
                    iVar13 = 0x7fff;
                  }
                  iVar11 = (iVar20 << (ulong)uVar12) >> 1;
                  if (iVar13 < -0x7fff) {
                    iVar13 = 0;
                  }
                  sVar18 = (short)(iVar13 << 1);
                  *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0xe) = sVar18;
                  iVar13 = (int)sVar18;
                }
              }
            }
            if (0x7ffe < iVar11) {
              iVar11 = 0x7fff;
            }
            if (iVar11 < -0x7fff) {
              iVar11 = 0;
            }
            sVar18 = (short)(iVar11 << 1);
            *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x10) = sVar18;
            iVar10 = (int)sVar18;
            iVar20 = (int)(char)pbVar2[4];
            iVar11 = ((iVar20 >> 4) << (ulong)uVar12) >> 1;
            iVar21 = iVar10 >> 1;
            if (bVar7 == 1) {
              iVar11 = iVar21 + (-iVar10 >> 5) + iVar11;
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x12) = sVar18;
              iVar11 = (int)sVar18;
              iVar13 = (-iVar11 >> 5) + ((((iVar20 << 0x1c) >> 0x1c) << (ulong)uVar12) >> 1) +
                       (iVar11 >> 1);
            }
            else {
              iVar1 = iVar13 >> 1;
              if (bVar7 == 3) {
                iVar11 = (iVar10 - iVar1) + (iVar1 + iVar13 >> 4) + iVar11 + (iVar10 * -0xd >> 7);
                if (0x7ffe < iVar11) {
                  iVar11 = 0x7fff;
                }
                if (iVar11 < -0x7fff) {
                  iVar11 = 0;
                }
                sVar18 = (short)(iVar11 << 1);
                *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x12) = sVar18;
                iVar11 = (int)sVar18;
                iVar13 = (((((iVar20 << 0x1c) >> 0x1c) << (ulong)uVar12) >> 1) - iVar21) +
                         (iVar21 + iVar10 >> 4) + iVar11 + (iVar11 * -0xd >> 7);
              }
              else {
                iVar20 = (iVar20 << 0x1c) >> 0x1c;
                if (bVar7 == 2) {
                  iVar11 = (iVar10 - iVar1) + (iVar13 >> 5) + iVar11 + (-iVar21 - iVar10 >> 5);
                  if (0x7ffe < iVar11) {
                    iVar11 = 0x7fff;
                  }
                  if (iVar11 < -0x7fff) {
                    iVar11 = 0;
                  }
                  sVar18 = (short)(iVar11 << 1);
                  *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x12) = sVar18;
                  iVar11 = (int)sVar18;
                  iVar13 = ((iVar10 >> 5) - iVar21) + ((iVar20 << (ulong)uVar12) >> 1) + iVar11 +
                           (-(iVar11 + (iVar11 >> 1)) >> 5);
                }
                else {
                  if (0x7ffe < iVar11) {
                    iVar11 = 0x7fff;
                  }
                  iVar13 = (iVar20 << (ulong)uVar12) >> 1;
                  if (iVar11 < -0x7fff) {
                    iVar11 = 0;
                  }
                  sVar18 = (short)(iVar11 << 1);
                  *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x12) = sVar18;
                  iVar11 = (int)sVar18;
                }
              }
            }
            if (0x7ffe < iVar13) {
              iVar13 = 0x7fff;
            }
            if (iVar13 < -0x7fff) {
              iVar13 = 0;
            }
            sVar18 = (short)(iVar13 << 1);
            *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x14) = sVar18;
            iVar10 = (int)sVar18;
            iVar20 = (int)(char)pbVar2[5];
            iVar13 = ((iVar20 >> 4) << (ulong)uVar12) >> 1;
            iVar21 = iVar10 >> 1;
            if (bVar7 == 1) {
              iVar13 = iVar21 + (-iVar10 >> 5) + iVar13;
              if (0x7ffe < iVar13) {
                iVar13 = 0x7fff;
              }
              if (iVar13 < -0x7fff) {
                iVar13 = 0;
              }
              sVar18 = (short)(iVar13 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x16) = sVar18;
              iVar13 = (int)sVar18;
              iVar11 = (-iVar13 >> 5) + ((((iVar20 << 0x1c) >> 0x1c) << (ulong)uVar12) >> 1) +
                       (iVar13 >> 1);
            }
            else {
              iVar1 = iVar11 >> 1;
              if (bVar7 == 3) {
                iVar11 = (iVar10 - iVar1) + (iVar1 + iVar11 >> 4) + iVar13 + (iVar10 * -0xd >> 7);
                if (0x7ffe < iVar11) {
                  iVar11 = 0x7fff;
                }
                if (iVar11 < -0x7fff) {
                  iVar11 = 0;
                }
                sVar18 = (short)(iVar11 << 1);
                *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x16) = sVar18;
                iVar13 = (int)sVar18;
                iVar11 = (((((iVar20 << 0x1c) >> 0x1c) << (ulong)uVar12) >> 1) - iVar21) +
                         (iVar21 + iVar10 >> 4) + iVar13 + (iVar13 * -0xd >> 7);
              }
              else {
                iVar20 = (iVar20 << 0x1c) >> 0x1c;
                if (bVar7 == 2) {
                  iVar11 = (iVar10 - iVar1) + (iVar11 >> 5) + iVar13 + (-iVar21 - iVar10 >> 5);
                  if (0x7ffe < iVar11) {
                    iVar11 = 0x7fff;
                  }
                  if (iVar11 < -0x7fff) {
                    iVar11 = 0;
                  }
                  sVar18 = (short)(iVar11 << 1);
                  *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x16) = sVar18;
                  iVar13 = (int)sVar18;
                  iVar11 = ((iVar10 >> 5) - iVar21) + ((iVar20 << (ulong)uVar12) >> 1) + iVar13 +
                           (-(iVar13 + (iVar13 >> 1)) >> 5);
                }
                else {
                  if (0x7ffe < iVar13) {
                    iVar13 = 0x7fff;
                  }
                  iVar11 = (iVar20 << (ulong)uVar12) >> 1;
                  if (iVar13 < -0x7fff) {
                    iVar13 = 0;
                  }
                  sVar18 = (short)(iVar13 << 1);
                  *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x16) = sVar18;
                  iVar13 = (int)sVar18;
                }
              }
            }
            if (0x7ffe < iVar11) {
              iVar11 = 0x7fff;
            }
            if (iVar11 < -0x7fff) {
              iVar11 = 0;
            }
            sVar18 = (short)(iVar11 << 1);
            *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x18) = sVar18;
            iVar10 = (int)sVar18;
            iVar20 = (int)(char)pbVar2[6];
            iVar11 = ((iVar20 >> 4) << (ulong)uVar12) >> 1;
            iVar21 = iVar10 >> 1;
            if (bVar7 == 1) {
              iVar11 = iVar21 + (-iVar10 >> 5) + iVar11;
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1a) = sVar18;
              iVar11 = (int)sVar18;
              iVar13 = (-iVar11 >> 5) + ((((iVar20 << 0x1c) >> 0x1c) << (ulong)uVar12) >> 1) +
                       (iVar11 >> 1);
            }
            else {
              iVar1 = iVar13 >> 1;
              if (bVar7 == 3) {
                iVar11 = (iVar10 - iVar1) + (iVar1 + iVar13 >> 4) + iVar11 + (iVar10 * -0xd >> 7);
                if (0x7ffe < iVar11) {
                  iVar11 = 0x7fff;
                }
                if (iVar11 < -0x7fff) {
                  iVar11 = 0;
                }
                sVar18 = (short)(iVar11 << 1);
                *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1a) = sVar18;
                iVar11 = (int)sVar18;
                iVar13 = (((((iVar20 << 0x1c) >> 0x1c) << (ulong)uVar12) >> 1) - iVar21) +
                         (iVar21 + iVar10 >> 4) + iVar11 + (iVar11 * -0xd >> 7);
              }
              else {
                iVar20 = (iVar20 << 0x1c) >> 0x1c;
                if (bVar7 == 2) {
                  iVar11 = (iVar10 - iVar1) + (iVar13 >> 5) + iVar11 + (-iVar21 - iVar10 >> 5);
                  if (0x7ffe < iVar11) {
                    iVar11 = 0x7fff;
                  }
                  if (iVar11 < -0x7fff) {
                    iVar11 = 0;
                  }
                  sVar18 = (short)(iVar11 << 1);
                  *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1a) = sVar18;
                  iVar11 = (int)sVar18;
                  iVar13 = ((iVar10 >> 5) - iVar21) + ((iVar20 << (ulong)uVar12) >> 1) + iVar11 +
                           (-(iVar11 + (iVar11 >> 1)) >> 5);
                }
                else {
                  if (0x7ffe < iVar11) {
                    iVar11 = 0x7fff;
                  }
                  iVar13 = (iVar20 << (ulong)uVar12) >> 1;
                  if (iVar11 < -0x7fff) {
                    iVar11 = 0;
                  }
                  sVar18 = (short)(iVar11 << 1);
                  *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1a) = sVar18;
                  iVar11 = (int)sVar18;
                }
              }
            }
            if (0x7ffe < iVar13) {
              iVar13 = 0x7fff;
            }
            if (iVar13 < -0x7fff) {
              iVar13 = 0;
            }
            sVar18 = (short)(iVar13 << 1);
            *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1c) = sVar18;
            iVar10 = (int)sVar18;
            iVar20 = (int)(char)pbVar2[7];
            iVar13 = ((iVar20 >> 4) << (ulong)uVar12) >> 1;
            iVar21 = iVar10 >> 1;
            if (bVar7 == 1) {
              iVar13 = iVar21 + (-iVar10 >> 5) + iVar13;
              if (0x7ffe < iVar13) {
                iVar13 = 0x7fff;
              }
              if (iVar13 < -0x7fff) {
                iVar13 = 0;
              }
              sVar18 = (short)(iVar13 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1e) = sVar18;
              iVar13 = (int)sVar18;
              iVar11 = (-iVar13 >> 5) + ((((iVar20 << 0x1c) >> 0x1c) << (ulong)uVar12) >> 1) +
                       (iVar13 >> 1);
            }
            else {
              iVar1 = iVar11 >> 1;
              if (bVar7 == 3) {
                iVar11 = (iVar10 - iVar1) + (iVar1 + iVar11 >> 4) + iVar13 + (iVar10 * -0xd >> 7);
                if (0x7ffe < iVar11) {
                  iVar11 = 0x7fff;
                }
                if (iVar11 < -0x7fff) {
                  iVar11 = 0;
                }
                sVar18 = (short)(iVar11 << 1);
                *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1e) = sVar18;
                iVar13 = (int)sVar18;
                iVar11 = (((((iVar20 << 0x1c) >> 0x1c) << (ulong)uVar12) >> 1) - iVar21) +
                         (iVar21 + iVar10 >> 4) + iVar13 + (iVar13 * -0xd >> 7);
              }
              else {
                iVar20 = (iVar20 << 0x1c) >> 0x1c;
                if (bVar7 == 2) {
                  iVar11 = (iVar10 - iVar1) + (iVar11 >> 5) + iVar13 + (-iVar21 - iVar10 >> 5);
                  if (0x7ffe < iVar11) {
                    iVar11 = 0x7fff;
                  }
                  if (iVar11 < -0x7fff) {
                    iVar11 = 0;
                  }
                  sVar18 = (short)(iVar11 << 1);
                  *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1e) = sVar18;
                  iVar13 = (int)sVar18;
                  iVar11 = ((iVar10 >> 5) - iVar21) + ((iVar20 << (ulong)uVar12) >> 1) + iVar13 +
                           (-(iVar13 + (iVar13 >> 1)) >> 5);
                }
                else {
                  if (0x7ffe < iVar13) {
                    iVar13 = 0x7fff;
                  }
                  iVar11 = (iVar20 << (ulong)uVar12) >> 1;
                  if (iVar13 < -0x7fff) {
                    iVar13 = 0;
                  }
                  sVar18 = (short)(iVar13 << 1);
                  *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1e) = sVar18;
                  iVar13 = (int)sVar18;
                }
              }
            }
            if (0x7ffe < iVar11) {
              iVar11 = 0x7fff;
            }
            if (iVar11 < -0x7fff) {
              iVar11 = 0;
            }
            sVar18 = (short)(iVar11 << 1);
            *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x20) = sVar18;
            iVar10 = (int)sVar18;
            iVar20 = (int)(char)pbVar2[8];
            iVar11 = ((iVar20 >> 4) << (ulong)uVar12) >> 1;
            iVar21 = iVar10 >> 1;
            if (bVar7 == 1) {
              iVar11 = iVar21 + (-iVar10 >> 5) + iVar11;
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x22) = sVar18;
              uVar15 = (-(int)sVar18 >> 5) + ((((iVar20 << 0x1c) >> 0x1c) << (ulong)uVar12) >> 1) +
                       ((int)sVar18 >> 1);
            }
            else {
              iVar1 = iVar13 >> 1;
              if (bVar7 == 3) {
                iVar11 = (iVar10 - iVar1) + (iVar1 + iVar13 >> 4) + iVar11 + (iVar10 * -0xd >> 7);
                if (0x7ffe < iVar11) {
                  iVar11 = 0x7fff;
                }
                if (iVar11 < -0x7fff) {
                  iVar11 = 0;
                }
                sVar18 = (short)(iVar11 << 1);
                *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x22) = sVar18;
                uVar15 = (((((iVar20 << 0x1c) >> 0x1c) << (ulong)uVar12) >> 1) - iVar21) +
                         (iVar21 + iVar10 >> 4) + (int)sVar18 + (sVar18 * -0xd >> 7);
              }
              else {
                iVar20 = (iVar20 << 0x1c) >> 0x1c;
                if (bVar7 == 2) {
                  iVar11 = (iVar10 - iVar1) + (iVar13 >> 5) + iVar11 + (-iVar21 - iVar10 >> 5);
                  if (0x7ffe < iVar11) {
                    iVar11 = 0x7fff;
                  }
                  if (iVar11 < -0x7fff) {
                    iVar11 = 0;
                  }
                  sVar18 = (short)(iVar11 << 1);
                  *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x22) = sVar18;
                  iVar11 = (int)sVar18;
                  uVar15 = ((iVar10 >> 5) - iVar21) + ((iVar20 << (ulong)uVar12) >> 1) + iVar11 +
                           (-(iVar11 + (iVar11 >> 1)) >> 5);
                }
                else {
                  if (0x7ffe < iVar11) {
                    iVar11 = 0x7fff;
                  }
                  uVar15 = (iVar20 << (ulong)uVar12) >> 1;
                  if (iVar11 < -0x7fff) {
                    iVar11 = 0;
                  }
                  *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x22) = (short)(iVar11 << 1);
                }
              }
            }
          }
          else {
            uVar12 = uVar22 & 0xfffff800;
            cVar4 = (char)(uVar22 << 4);
            if (bVar7 == 1) {
              iVar11 = uVar12 + (int)(short)((short)(uVar15 >> 1) + (short)(-uVar15 >> 5));
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *psVar3 = sVar18;
              iVar11 = (int)(short)((short)((uint)(int)sVar18 >> 1) +
                                   (short)((uint)-(int)sVar18 >> 5)) +
                       (int)(short)((short)cVar4 & 0xf800);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 8) = sVar18;
              bVar5 = pbVar2[2];
              iVar11 = (int)(short)((short)((uint)(int)sVar18 >> 1) +
                                   (short)((uint)-(int)sVar18 >> 5)) +
                       (int)(short)((short)(char)bVar5 & 0xf800);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 10) = sVar18;
              iVar11 = (int)(short)((short)((uint)(int)sVar18 >> 1) +
                                   (short)((uint)-(int)sVar18 >> 5)) +
                       (int)(short)((short)(char)(bVar5 << 4) & 0xf800);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0xc) = sVar18;
              bVar5 = pbVar2[3];
              iVar11 = (int)(short)((short)((uint)(int)sVar18 >> 1) +
                                   (short)((uint)-(int)sVar18 >> 5)) +
                       (int)(short)((short)(char)bVar5 & 0xf800);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0xe) = sVar18;
              iVar11 = (int)(short)((short)((uint)(int)sVar18 >> 1) +
                                   (short)((uint)-(int)sVar18 >> 5)) +
                       (int)(short)((short)(char)(bVar5 << 4) & 0xf800);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x10) = sVar18;
              bVar5 = pbVar2[4];
              iVar11 = (int)(short)((short)((uint)(int)sVar18 >> 1) +
                                   (short)((uint)-(int)sVar18 >> 5)) +
                       (int)(short)((short)(char)bVar5 & 0xf800);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x12) = sVar18;
              iVar11 = (int)(short)((short)((uint)(int)sVar18 >> 1) +
                                   (short)((uint)-(int)sVar18 >> 5)) +
                       (int)(short)((short)(char)(bVar5 << 4) & 0xf800);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x14) = sVar18;
              bVar5 = pbVar2[5];
              iVar11 = (int)(short)((short)((uint)(int)sVar18 >> 1) +
                                   (short)((uint)-(int)sVar18 >> 5)) +
                       (int)(short)((short)(char)bVar5 & 0xf800);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x16) = sVar18;
              iVar11 = (int)(short)((short)((uint)(int)sVar18 >> 1) +
                                   (short)((uint)-(int)sVar18 >> 5)) +
                       (int)(short)((short)(char)(bVar5 << 4) & 0xf800);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x18) = sVar18;
              bVar5 = pbVar2[6];
              iVar11 = (int)(short)((short)((uint)(int)sVar18 >> 1) +
                                   (short)((uint)-(int)sVar18 >> 5)) +
                       (int)(short)((short)(char)bVar5 & 0xf800);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1a) = sVar18;
              iVar11 = (int)(short)((short)((uint)(int)sVar18 >> 1) +
                                   (short)((uint)-(int)sVar18 >> 5)) +
                       (int)(short)((short)(char)(bVar5 << 4) & 0xf800);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1c) = sVar18;
              bVar5 = pbVar2[7];
              iVar11 = (int)(short)((short)((uint)(int)sVar18 >> 1) +
                                   (short)((uint)-(int)sVar18 >> 5)) +
                       (int)(short)((short)(char)bVar5 & 0xf800);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1e) = sVar18;
              iVar11 = (int)(short)((short)((uint)(int)sVar18 >> 1) +
                                   (short)((uint)-(int)sVar18 >> 5)) +
                       (int)(short)((short)(char)(bVar5 << 4) & 0xf800);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x20) = sVar18;
              bVar5 = pbVar2[8];
              iVar11 = (int)(short)((short)((uint)(int)sVar18 >> 1) +
                                   (short)((uint)-(int)sVar18 >> 5)) +
                       (int)(short)((short)(char)bVar5 & 0xf800);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x22) = sVar18;
              uVar15 = ((int)(char)(bVar5 << 4) & 0xfffff800U) + (-(int)sVar18 >> 5) +
                       ((int)sVar18 >> 1);
            }
            else if (bVar7 == 2) {
              iVar13 = (uVar15 - iVar13) + (iVar21 >> 5) + ((int)(-iVar11 - uVar15) >> 5) + uVar12;
              if (0x7ffe < iVar13) {
                iVar13 = 0x7fff;
              }
              if (iVar13 < -0x7fff) {
                iVar13 = 0;
              }
              sVar18 = (short)(iVar13 << 1);
              *psVar3 = sVar18;
              iVar21 = (int)sVar18;
              iVar13 = (iVar13 << 0x11) >> 0x11;
              iVar11 = (((int)cVar4 & 0xfffff800U) - iVar11) + ((int)uVar15 >> 5) + iVar21 +
                       (-(iVar13 + iVar21) >> 5);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 8) = sVar18;
              iVar20 = (int)sVar18;
              iVar10 = (iVar11 << 0x11) >> 0x11;
              bVar5 = pbVar2[2];
              iVar11 = (iVar20 - iVar13) + (iVar21 >> 5) + (-(iVar10 + iVar20) >> 5) +
                       ((int)(char)bVar5 & 0xfffff800U);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 10) = sVar18;
              iVar21 = (int)sVar18;
              iVar13 = (iVar11 << 0x11) >> 0x11;
              iVar11 = (((int)(char)(bVar5 << 4) & 0xfffff800U) - iVar10) + (iVar20 >> 5) + iVar21 +
                       (-(iVar13 + iVar21) >> 5);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0xc) = sVar18;
              iVar20 = (int)sVar18;
              iVar10 = (iVar11 << 0x11) >> 0x11;
              bVar5 = pbVar2[3];
              iVar11 = (((int)(char)bVar5 & 0xfffff800U) - iVar13) + (iVar21 >> 5) + iVar20 +
                       (-(iVar10 + iVar20) >> 5);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0xe) = sVar18;
              iVar21 = (int)sVar18;
              iVar13 = (iVar11 << 0x11) >> 0x11;
              iVar11 = (((int)(char)(bVar5 << 4) & 0xfffff800U) - iVar10) + (iVar20 >> 5) + iVar21 +
                       (-(iVar13 + iVar21) >> 5);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x10) = sVar18;
              iVar20 = (int)sVar18;
              iVar10 = (iVar11 << 0x11) >> 0x11;
              bVar5 = pbVar2[4];
              iVar11 = (((int)(char)bVar5 & 0xfffff800U) - iVar13) + (iVar21 >> 5) + iVar20 +
                       (-(iVar10 + iVar20) >> 5);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x12) = sVar18;
              iVar21 = (int)sVar18;
              iVar13 = (iVar11 << 0x11) >> 0x11;
              iVar11 = (((int)(char)(bVar5 << 4) & 0xfffff800U) - iVar10) + (iVar20 >> 5) + iVar21 +
                       (-(iVar13 + iVar21) >> 5);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x14) = sVar18;
              iVar20 = (int)sVar18;
              iVar10 = (iVar11 << 0x11) >> 0x11;
              bVar5 = pbVar2[5];
              iVar11 = (((int)(char)bVar5 & 0xfffff800U) - iVar13) + (iVar21 >> 5) + iVar20 +
                       (-(iVar10 + iVar20) >> 5);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x16) = sVar18;
              iVar21 = (int)sVar18;
              iVar13 = (iVar11 << 0x11) >> 0x11;
              iVar11 = (((int)(char)(bVar5 << 4) & 0xfffff800U) - iVar10) + (iVar20 >> 5) + iVar21 +
                       (-(iVar13 + iVar21) >> 5);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x18) = sVar18;
              iVar20 = (int)sVar18;
              iVar10 = (iVar11 << 0x11) >> 0x11;
              bVar5 = pbVar2[6];
              iVar11 = (((int)(char)bVar5 & 0xfffff800U) - iVar13) + (iVar21 >> 5) + iVar20 +
                       (-(iVar10 + iVar20) >> 5);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1a) = sVar18;
              iVar21 = (int)sVar18;
              iVar13 = (iVar11 << 0x11) >> 0x11;
              iVar11 = (((int)(char)(bVar5 << 4) & 0xfffff800U) - iVar10) + (iVar20 >> 5) + iVar21 +
                       (-(iVar13 + iVar21) >> 5);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1c) = sVar18;
              iVar20 = (int)sVar18;
              iVar10 = (iVar11 << 0x11) >> 0x11;
              bVar5 = pbVar2[7];
              iVar11 = (((int)(char)bVar5 & 0xfffff800U) - iVar13) + (iVar21 >> 5) + iVar20 +
                       (-(iVar10 + iVar20) >> 5);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1e) = sVar18;
              iVar21 = (int)sVar18;
              iVar13 = (iVar11 << 0x11) >> 0x11;
              iVar11 = (((int)(char)(bVar5 << 4) & 0xfffff800U) - iVar10) + (iVar20 >> 5) + iVar21 +
                       (-(iVar13 + iVar21) >> 5);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x20) = sVar18;
              iVar20 = (int)sVar18;
              iVar10 = (iVar11 << 0x11) >> 0x11;
              bVar5 = pbVar2[8];
              iVar11 = (((int)(char)bVar5 & 0xfffff800U) - iVar13) + (iVar21 >> 5) + iVar20 +
                       (-(iVar10 + iVar20) >> 5);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x22) = sVar18;
              iVar11 = (int)sVar18;
              uVar15 = (((int)(char)(bVar5 << 4) & 0xfffff800U) - iVar10) + (iVar20 >> 5) + iVar11 +
                       (-(iVar11 + (iVar11 >> 1)) >> 5);
            }
            else if (bVar7 == 3) {
              iVar13 = ((uVar15 + ((int)(uVar15 * -0xd) >> 7)) - iVar13) + uVar12 +
                       (iVar13 + iVar21 >> 4);
              if (0x7ffe < iVar13) {
                iVar13 = 0x7fff;
              }
              if (iVar13 < -0x7fff) {
                iVar13 = 0;
              }
              sVar18 = (short)(iVar13 << 1);
              iVar21 = (int)sVar18;
              *psVar3 = sVar18;
              iVar13 = (iVar13 << 0x11) >> 0x11;
              iVar11 = (((int)cVar4 & 0xfffff800U) - iVar11) + ((int)(iVar11 + uVar15) >> 4) +
                       iVar21 + (iVar21 * -0xd >> 7);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 8) = sVar18;
              iVar20 = (int)sVar18;
              iVar10 = (iVar11 << 0x11) >> 0x11;
              bVar5 = pbVar2[2];
              iVar11 = (iVar20 - iVar13) + (iVar13 + iVar21 >> 4) + (iVar20 * -0xd >> 7) +
                       ((int)(char)bVar5 & 0xfffff800U);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              iVar21 = (int)sVar18;
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 10) = sVar18;
              iVar13 = (iVar11 << 0x11) >> 0x11;
              iVar11 = (((int)(char)(bVar5 << 4) & 0xfffff800U) - iVar10) + (iVar10 + iVar20 >> 4) +
                       iVar21 + (iVar21 * -0xd >> 7);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0xc) = sVar18;
              iVar20 = (int)sVar18;
              iVar10 = (iVar11 << 0x11) >> 0x11;
              bVar5 = pbVar2[3];
              iVar11 = (((int)(char)bVar5 & 0xfffff800U) - iVar13) + (iVar13 + iVar21 >> 4) + iVar20
                       + (iVar20 * -0xd >> 7);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              iVar21 = (int)sVar18;
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0xe) = sVar18;
              iVar13 = (iVar11 << 0x11) >> 0x11;
              iVar11 = (((int)(char)(bVar5 << 4) & 0xfffff800U) - iVar10) + (iVar10 + iVar20 >> 4) +
                       iVar21 + (iVar21 * -0xd >> 7);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x10) = sVar18;
              iVar20 = (int)sVar18;
              iVar10 = (iVar11 << 0x11) >> 0x11;
              bVar5 = pbVar2[4];
              iVar11 = (((int)(char)bVar5 & 0xfffff800U) - iVar13) + (iVar13 + iVar21 >> 4) + iVar20
                       + (iVar20 * -0xd >> 7);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              iVar21 = (int)sVar18;
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x12) = sVar18;
              iVar13 = (iVar11 << 0x11) >> 0x11;
              iVar11 = (((int)(char)(bVar5 << 4) & 0xfffff800U) - iVar10) + (iVar10 + iVar20 >> 4) +
                       iVar21 + (iVar21 * -0xd >> 7);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x14) = sVar18;
              iVar20 = (int)sVar18;
              iVar10 = (iVar11 << 0x11) >> 0x11;
              bVar5 = pbVar2[5];
              iVar11 = (((int)(char)bVar5 & 0xfffff800U) - iVar13) + (iVar13 + iVar21 >> 4) + iVar20
                       + (iVar20 * -0xd >> 7);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              iVar21 = (int)sVar18;
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x16) = sVar18;
              iVar13 = (iVar11 << 0x11) >> 0x11;
              iVar11 = (((int)(char)(bVar5 << 4) & 0xfffff800U) - iVar10) + (iVar10 + iVar20 >> 4) +
                       iVar21 + (iVar21 * -0xd >> 7);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x18) = sVar18;
              iVar20 = (int)sVar18;
              iVar10 = (iVar11 << 0x11) >> 0x11;
              bVar5 = pbVar2[6];
              iVar11 = (((int)(char)bVar5 & 0xfffff800U) - iVar13) + (iVar13 + iVar21 >> 4) + iVar20
                       + (iVar20 * -0xd >> 7);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              iVar21 = (int)sVar18;
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1a) = sVar18;
              iVar13 = (iVar11 << 0x11) >> 0x11;
              iVar11 = (((int)(char)(bVar5 << 4) & 0xfffff800U) - iVar10) + (iVar10 + iVar20 >> 4) +
                       iVar21 + (iVar21 * -0xd >> 7);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1c) = sVar18;
              iVar20 = (int)sVar18;
              iVar10 = (iVar11 << 0x11) >> 0x11;
              bVar5 = pbVar2[7];
              iVar11 = (((int)(char)bVar5 & 0xfffff800U) - iVar13) + (iVar13 + iVar21 >> 4) + iVar20
                       + (iVar20 * -0xd >> 7);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              iVar21 = (int)sVar18;
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1e) = sVar18;
              iVar13 = (iVar11 << 0x11) >> 0x11;
              iVar11 = (((int)(char)(bVar5 << 4) & 0xfffff800U) - iVar10) + (iVar10 + iVar20 >> 4) +
                       iVar21 + (iVar21 * -0xd >> 7);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x20) = sVar18;
              iVar20 = (int)sVar18;
              iVar10 = (iVar11 << 0x11) >> 0x11;
              bVar5 = pbVar2[8];
              iVar11 = (((int)(char)bVar5 & 0xfffff800U) - iVar13) + (iVar13 + iVar21 >> 4) + iVar20
                       + (iVar20 * -0xd >> 7);
              if (0x7ffe < iVar11) {
                iVar11 = 0x7fff;
              }
              if (iVar11 < -0x7fff) {
                iVar11 = 0;
              }
              sVar18 = (short)(iVar11 << 1);
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x22) = sVar18;
              uVar15 = (((int)(char)(bVar5 << 4) & 0xfffff800U) - iVar10) + (iVar10 + iVar20 >> 4) +
                       (int)sVar18 + (sVar18 * -0xd >> 7);
            }
            else {
              if (0x7ffe < (int)uVar12) {
                uVar12 = 0x7fff;
              }
              if ((int)uVar12 < -0x7fff) {
                uVar12 = 0;
              }
              *psVar3 = (short)(uVar12 << 1);
              uVar15 = (int)cVar4 & 0xfffff800;
              if (0x7ffe < (int)uVar15) {
                uVar15 = 0x7fff;
              }
              if ((int)uVar15 < -0x7fff) {
                uVar15 = 0;
              }
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 8) = (short)(uVar15 << 1);
              bVar5 = pbVar2[2];
              uVar15 = (int)(char)bVar5 & 0xfffff800;
              if (0x7ffe < (int)uVar15) {
                uVar15 = 0x7fff;
              }
              if ((int)uVar15 < -0x7fff) {
                uVar15 = 0;
              }
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 10) = (short)(uVar15 << 1);
              uVar15 = (int)(char)(bVar5 << 4) & 0xfffff800;
              if (0x7ffe < (int)uVar15) {
                uVar15 = 0x7fff;
              }
              if ((int)uVar15 < -0x7fff) {
                uVar15 = 0;
              }
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0xc) = (short)(uVar15 << 1);
              bVar5 = pbVar2[3];
              uVar15 = (int)(char)bVar5 & 0xfffff800;
              if (0x7ffe < (int)uVar15) {
                uVar15 = 0x7fff;
              }
              if ((int)uVar15 < -0x7fff) {
                uVar15 = 0;
              }
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0xe) = (short)(uVar15 << 1);
              uVar15 = (int)(char)(bVar5 << 4) & 0xfffff800;
              if (0x7ffe < (int)uVar15) {
                uVar15 = 0x7fff;
              }
              if ((int)uVar15 < -0x7fff) {
                uVar15 = 0;
              }
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x10) = (short)(uVar15 << 1);
              bVar5 = pbVar2[4];
              uVar15 = (int)(char)bVar5 & 0xfffff800;
              if (0x7ffe < (int)uVar15) {
                uVar15 = 0x7fff;
              }
              if ((int)uVar15 < -0x7fff) {
                uVar15 = 0;
              }
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x12) = (short)(uVar15 << 1);
              uVar15 = (int)(char)(bVar5 << 4) & 0xfffff800;
              if (0x7ffe < (int)uVar15) {
                uVar15 = 0x7fff;
              }
              if ((int)uVar15 < -0x7fff) {
                uVar15 = 0;
              }
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x14) = (short)(uVar15 << 1);
              bVar5 = pbVar2[5];
              uVar15 = (int)(char)bVar5 & 0xfffff800;
              if (0x7ffe < (int)uVar15) {
                uVar15 = 0x7fff;
              }
              if ((int)uVar15 < -0x7fff) {
                uVar15 = 0;
              }
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x16) = (short)(uVar15 << 1);
              uVar15 = (int)(char)(bVar5 << 4) & 0xfffff800;
              if (0x7ffe < (int)uVar15) {
                uVar15 = 0x7fff;
              }
              if ((int)uVar15 < -0x7fff) {
                uVar15 = 0;
              }
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x18) = (short)(uVar15 << 1);
              bVar5 = pbVar2[6];
              uVar15 = (int)(char)bVar5 & 0xfffff800;
              if (0x7ffe < (int)uVar15) {
                uVar15 = 0x7fff;
              }
              if ((int)uVar15 < -0x7fff) {
                uVar15 = 0;
              }
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1a) = (short)(uVar15 << 1);
              uVar15 = (int)(char)(bVar5 << 4) & 0xfffff800;
              if (0x7ffe < (int)uVar15) {
                uVar15 = 0x7fff;
              }
              if ((int)uVar15 < -0x7fff) {
                uVar15 = 0;
              }
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1c) = (short)(uVar15 << 1);
              bVar5 = pbVar2[7];
              uVar15 = (int)(char)bVar5 & 0xfffff800;
              if (0x7ffe < (int)uVar15) {
                uVar15 = 0x7fff;
              }
              if ((int)uVar15 < -0x7fff) {
                uVar15 = 0;
              }
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1e) = (short)(uVar15 << 1);
              uVar15 = (int)(char)(bVar5 << 4) & 0xfffff800;
              if (0x7ffe < (int)uVar15) {
                uVar15 = 0x7fff;
              }
              if ((int)uVar15 < -0x7fff) {
                uVar15 = 0;
              }
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x20) = (short)(uVar15 << 1);
              bVar5 = pbVar2[8];
              uVar15 = (int)(char)bVar5 & 0xfffff800;
              if (0x7ffe < (int)uVar15) {
                uVar15 = 0x7fff;
              }
              if ((int)uVar15 < -0x7fff) {
                uVar15 = 0;
              }
              *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x22) = (short)(uVar15 << 1);
              uVar15 = (int)(char)(bVar5 << 4) & 0xfffff800;
            }
          }
          if (0x7ffe < (int)uVar15) {
            uVar15 = 0x7fff;
          }
          if ((int)uVar15 < -0x7fff) {
            uVar15 = 0;
          }
          *(short *)((long)plVar14 + (ulong)uVar16 * 2 + 0x24) = (short)(uVar15 << 1);
        }
        else {
          *(undefined2 *)((long)plVar14 + 0x85) = 1;
          *(undefined8 *)((long)plVar14 + (ulong)uVar16 * 2 + 0x16) = 0;
          *(undefined8 *)((long)plVar14 + (ulong)uVar16 * 2 + 0x1e) = 0;
          psVar3[0] = 0;
          psVar3[1] = 0;
          psVar3[2] = 0;
          psVar3[3] = 0;
          *(undefined8 *)((long)plVar14 + (ulong)uVar16 * 2 + 0xe) = 0;
        }
        *(short *)((long)plVar14 + 100) = *(short *)((long)plVar14 + 100) + 9;
        goto LAB_03f87e50;
      }
      if (*(char *)((long)plVar14 + 0x86) != '\0') {
        *(byte *)((long)param_1 + 0x105cc) =
             *(byte *)((long)param_1 + 0x105cc) | *(byte *)((long)plVar14 + 0x87);
        *(undefined1 *)((long)plVar14 + 0x85) = 0;
        uVar17 = *(ushort *)((ulong)*(ushort *)((long)plVar14 + 0x62) + *param_1 + 2);
        uVar16 = (uint)*(ushort *)((long)plVar14 + 0x5e);
        *(ushort *)((long)plVar14 + 100) = uVar17;
        goto LAB_03f86498;
      }
      *(undefined1 *)(plVar14 + 0x10) = 1;
      plVar14[0xe] = 0x100000001;
      cVar4 = (char)param_1[0x20bd];
    }
    else {
      uVar15 = (int)plVar14[9] + 0x10000;
      uVar17 = (ushort)(uVar15 >> 0x10);
      *(uint *)(plVar14 + 9) = uVar15;
      uVar15 = uVar15 >> 0x10 & 0x10;
      if (*(ushort *)((long)plVar14 + 0x5e) != uVar15) {
        *(short *)((long)plVar14 + 0x5e) = (short)uVar15;
        *(short *)plVar14 = (short)plVar14[8];
        *(undefined4 *)((long)plVar14 + 2) = *(undefined4 *)((long)plVar14 + 0x42);
        uVar17 = uVar17 & 0x1f;
        *(ushort *)((long)plVar14 + 0x4a) = uVar17;
      }
      *(undefined2 *)((long)plVar14 + (long)(short)uVar17 * 2 + 6) =
           *(undefined2 *)((long)param_1 + 0x100cc);
LAB_03f87e50:
      sVar18 = *(short *)((long)plVar14 + 0x4a);
      sVar6 = *(short *)((long)plVar14 + 0x8a);
      if (*(short *)((long)plVar14 + 0x8a) <= sVar18) {
        sVar6 = sVar18;
      }
      *(short *)((long)plVar14 + 0x8a) = sVar6;
      if (sVar6 < 3) {
        *(undefined2 *)((long)plVar14 + 0x46) = 0;
        cVar4 = (char)param_1[0x20bd];
      }
      else {
        psVar3 = (short *)((long)plVar14 + (long)sVar18 * 2);
        uVar19 = (ulong)(*(ushort *)(plVar14 + 9) >> 6) & 0x3fc;
        uVar15 = (uint)uVar19;
        uVar17 = 0;
        if (*(int *)(puVar9 + uVar19) != 0) {
          uVar17 = (ushort)(((int)*(short *)(puVar8 + uVar19 * 2) * (int)*psVar3 +
                             (int)*(short *)(puVar8 + (ulong)(uVar15 | 1) * 2) * (int)psVar3[1] +
                             (int)*(short *)(puVar8 + (ulong)(uVar15 | 2) * 2) * (int)psVar3[2] +
                            (int)*(short *)(puVar8 + (ulong)(uVar15 | 3) * 2) * (int)psVar3[3]) /
                           *(int *)(puVar9 + uVar19));
        }
        *(ushort *)((long)plVar14 + 0x46) = uVar17 & 0xfffe;
        cVar4 = (char)param_1[0x20bd];
      }
    }
    if (cVar4 == '\0') {
LAB_03f87ee0:
      *(int *)plVar14[0xf] =
           *(int *)plVar14[0xf] +
           ((int)(((int)*(short *)((long)plVar14 + 0x46) * (int)*(short *)((long)plVar14 + 0x5c) >>
                   0xb & 0xfffffffeU) * (int)(short)plVar14[0xb]) >> 7);
      *(int *)(plVar14[0xf] + 4) =
           *(int *)(plVar14[0xf] + 4) +
           ((int)(((int)*(short *)((long)plVar14 + 0x46) * (int)*(short *)((long)plVar14 + 0x5c) >>
                   0xb & 0xfffffffeU) * (int)*(short *)((long)plVar14 + 0x5a)) >> 7);
    }
LAB_03f861a4:
    plVar14 = plVar14 + 0x12;
    if (param_1 + 0x20aa <= plVar14) {
      return;
    }
  } while( true );
}

