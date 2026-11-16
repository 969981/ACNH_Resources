
void FUN_0280b2c0(int *param_1,byte *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar7;
  uint uVar6;
  uint uVar5;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 local_50;
  undefined8 local_48;
  
  bVar2 = *param_2;
  if (bVar2 != 3) {
    uVar10 = 0;
    do {
      uVar9 = uVar10;
      if (param_2[uVar9 + 1] == 3) goto LAB_0280b334;
      if (uVar9 == 0xfe) goto LAB_0280b5e4;
      uVar10 = uVar9 + 2;
    } while (param_2[uVar9 + 2] != 3);
    uVar9 = uVar9 + 1;
LAB_0280b334:
    if (0xfe < uVar9) {
LAB_0280b5e4:
      iVar11 = 3;
      goto LAB_0280c9a8;
    }
  }
  local_50 = 0;
  local_48 = 0;
  if (*param_3 < 8) {
    uVar5 = (uint)bVar2;
    uVar6 = (uint)bVar2;
    uVar7 = (uint)bVar2;
    switch(*param_3) {
    case 0:
      if (DAT_0559c96c != uVar7) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c96c == param_2[uVar9 + 1]) goto LAB_0280b3b4;
          if (uVar9 == 0xfe) goto LAB_0280b3bc;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c96c != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280b3b4:
        if (0xfe < uVar9) {
LAB_0280b3bc:
          if (DAT_0559c96c < 0x79) {
            uVar10 = (ulong)(DAT_0559c96c >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c96c & 0x1f);
          }
        }
      }
      if (DAT_0559c970 != uVar7) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c970 == param_2[uVar9 + 1]) goto LAB_0280b438;
          if (uVar9 == 0xfe) goto LAB_0280b440;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c970 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280b438:
        if (0xfe < uVar9) {
LAB_0280b440:
          if (DAT_0559c970 < 0x79) {
            uVar10 = (ulong)(DAT_0559c970 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c970 & 0x1f);
          }
        }
      }
      if (DAT_0559c974 != uVar7) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c974 == param_2[uVar9 + 1]) goto LAB_0280b4c4;
          if (uVar9 == 0xfe) goto LAB_0280b4cc;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c974 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280b4c4:
        if (0xfe < uVar9) {
LAB_0280b4cc:
          if (DAT_0559c974 < 0x79) {
            uVar10 = (ulong)(DAT_0559c974 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c974 & 0x1f);
          }
        }
      }
      if (DAT_0559c978 != uVar7) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c978 == param_2[uVar9 + 1]) goto LAB_0280b548;
          if (uVar9 == 0xfe) goto LAB_0280b550;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c978 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280b548:
        if (0xfe < uVar9) {
LAB_0280b550:
          if (DAT_0559c978 < 0x79) {
            uVar10 = (ulong)(DAT_0559c978 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c978 & 0x1f);
          }
        }
      }
      if (((param_4 & 1) != 0) && (DAT_0559c97c != uVar5)) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          uVar7 = DAT_0559c97c;
          if (DAT_0559c97c == param_2[uVar9 + 1]) goto joined_r0x0280c798;
          if (uVar9 == 0xfe) goto joined_r0x0280c7a4;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c97c != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
joined_r0x0280c798:
        if (0xfe < uVar9) {
joined_r0x0280c7a4:
          if (uVar7 < 0x79) {
            lVar8 = (ulong)(uVar7 >> 5) * 4;
            *(uint *)((long)&local_50 + lVar8) =
                 1 << (ulong)(uVar7 & 0x1f) | *(uint *)((long)&local_50 + lVar8);
          }
        }
      }
      break;
    case 1:
      if (DAT_0559c980 != bVar2) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c980 == param_2[uVar9 + 1]) goto LAB_0280b644;
          if (uVar9 == 0xfe) goto LAB_0280b64c;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c980 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280b644:
        if (0xfe < uVar9) {
LAB_0280b64c:
          if (DAT_0559c980 < 0x79) {
            uVar10 = (ulong)(DAT_0559c980 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c980 & 0x1f);
          }
        }
      }
      if (DAT_0559c984 != uVar7) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c984 == param_2[uVar9 + 1]) goto LAB_0280b6c8;
          if (uVar9 == 0xfe) goto LAB_0280b6d0;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c984 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280b6c8:
        if (0xfe < uVar9) {
LAB_0280b6d0:
          if (DAT_0559c984 < 0x79) {
            uVar10 = (ulong)(DAT_0559c984 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c984 & 0x1f);
          }
        }
      }
      if (DAT_0559c988 != uVar7) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c988 == param_2[uVar9 + 1]) goto LAB_0280b754;
          if (uVar9 == 0xfe) goto LAB_0280b75c;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c988 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280b754:
        if (0xfe < uVar9) {
LAB_0280b75c:
          if (DAT_0559c988 < 0x79) {
            uVar10 = (ulong)(DAT_0559c988 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c988 & 0x1f);
          }
        }
      }
      if (DAT_0559c98c != uVar7) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c98c == param_2[uVar9 + 1]) goto LAB_0280b7d8;
          if (uVar9 == 0xfe) goto LAB_0280b7e0;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c98c != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280b7d8:
        if (0xfe < uVar9) {
LAB_0280b7e0:
          if (DAT_0559c98c < 0x79) {
            uVar10 = (ulong)(DAT_0559c98c >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c98c & 0x1f);
          }
        }
      }
      if (((param_4 & 1) != 0) && (DAT_0559c990 != uVar7)) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          uVar7 = DAT_0559c990;
          if (DAT_0559c990 == param_2[uVar9 + 1]) goto joined_r0x0280c798;
          if (uVar9 == 0xfe) goto joined_r0x0280c7a4;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c990 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
        goto joined_r0x0280c798;
      }
      break;
    case 2:
      if (DAT_0559c994 != uVar7) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c994 == param_2[uVar9 + 1]) goto LAB_0280b8c4;
          if (uVar9 == 0xfe) goto LAB_0280b8cc;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c994 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280b8c4:
        if (0xfe < uVar9) {
LAB_0280b8cc:
          if (DAT_0559c994 < 0x79) {
            uVar10 = (ulong)(DAT_0559c994 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c994 & 0x1f);
          }
        }
      }
      if (DAT_0559c998 != uVar7) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c998 == param_2[uVar9 + 1]) goto LAB_0280b948;
          if (uVar9 == 0xfe) goto LAB_0280b950;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c998 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280b948:
        if (0xfe < uVar9) {
LAB_0280b950:
          if (DAT_0559c998 < 0x79) {
            uVar10 = (ulong)(DAT_0559c998 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c998 & 0x1f);
          }
        }
      }
      if (DAT_0559c99c != uVar7) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c99c == param_2[uVar9 + 1]) goto LAB_0280b9d4;
          if (uVar9 == 0xfe) goto LAB_0280b9dc;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c99c != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280b9d4:
        if (0xfe < uVar9) {
LAB_0280b9dc:
          if (DAT_0559c99c < 0x79) {
            uVar10 = (ulong)(DAT_0559c99c >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c99c & 0x1f);
          }
        }
      }
      if (DAT_0559c9a0 != uVar7) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c9a0 == param_2[uVar9 + 1]) goto LAB_0280ba58;
          if (uVar9 == 0xfe) goto LAB_0280ba60;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c9a0 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280ba58:
        if (0xfe < uVar9) {
LAB_0280ba60:
          if (DAT_0559c9a0 < 0x79) {
            uVar10 = (ulong)(DAT_0559c9a0 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c9a0 & 0x1f);
          }
        }
      }
      if (((param_4 & 1) != 0) && (DAT_0559c9a4 != bVar2)) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          uVar7 = DAT_0559c9a4;
          if (DAT_0559c9a4 == param_2[uVar9 + 1]) goto joined_r0x0280c798;
          if (uVar9 == 0xfe) goto joined_r0x0280c7a4;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c9a4 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
        goto joined_r0x0280c798;
      }
      break;
    case 3:
      if (DAT_0559c9a8 != uVar5) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c9a8 == param_2[uVar9 + 1]) goto LAB_0280bb44;
          if (uVar9 == 0xfe) goto LAB_0280bb4c;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c9a8 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280bb44:
        if (0xfe < uVar9) {
LAB_0280bb4c:
          if (DAT_0559c9a8 < 0x79) {
            uVar10 = (ulong)(DAT_0559c9a8 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c9a8 & 0x1f);
          }
        }
      }
      if (DAT_0559c9ac != uVar7) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c9ac == param_2[uVar9 + 1]) goto LAB_0280bbc8;
          if (uVar9 == 0xfe) goto LAB_0280bbd0;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c9ac != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280bbc8:
        if (0xfe < uVar9) {
LAB_0280bbd0:
          if (DAT_0559c9ac < 0x79) {
            uVar10 = (ulong)(DAT_0559c9ac >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c9ac & 0x1f);
          }
        }
      }
      if (DAT_0559c9b0 != uVar7) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c9b0 == param_2[uVar9 + 1]) goto LAB_0280bc54;
          if (uVar9 == 0xfe) goto LAB_0280bc5c;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c9b0 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280bc54:
        if (0xfe < uVar9) {
LAB_0280bc5c:
          if (DAT_0559c9b0 < 0x79) {
            uVar10 = (ulong)(DAT_0559c9b0 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c9b0 & 0x1f);
          }
        }
      }
      if (DAT_0559c9b4 != uVar7) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c9b4 == param_2[uVar9 + 1]) goto LAB_0280bcd8;
          if (uVar9 == 0xfe) goto LAB_0280bce0;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c9b4 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280bcd8:
        if (0xfe < uVar9) {
LAB_0280bce0:
          if (DAT_0559c9b4 < 0x79) {
            uVar10 = (ulong)(DAT_0559c9b4 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c9b4 & 0x1f);
          }
        }
      }
      if (((param_4 & 1) != 0) && (DAT_0559c9b8 != uVar7)) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          uVar7 = DAT_0559c9b8;
          if (DAT_0559c9b8 == param_2[uVar9 + 1]) goto joined_r0x0280c798;
          if (uVar9 == 0xfe) goto joined_r0x0280c7a4;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c9b8 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
        goto joined_r0x0280c798;
      }
      break;
    case 4:
      if (DAT_0559c91c != uVar6) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c91c == param_2[uVar9 + 1]) goto LAB_0280bdc4;
          if (uVar9 == 0xfe) goto LAB_0280bdcc;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c91c != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280bdc4:
        if (0xfe < uVar9) {
LAB_0280bdcc:
          if (DAT_0559c91c < 0x79) {
            uVar10 = (ulong)(DAT_0559c91c >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c91c & 0x1f);
          }
        }
      }
      if (DAT_0559c920 != uVar6) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c920 == param_2[uVar9 + 1]) goto LAB_0280be48;
          if (uVar9 == 0xfe) goto LAB_0280be50;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c920 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280be48:
        if (0xfe < uVar9) {
LAB_0280be50:
          if (DAT_0559c920 < 0x79) {
            uVar10 = (ulong)(DAT_0559c920 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c920 & 0x1f);
          }
        }
      }
      if (DAT_0559c924 != uVar6) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c924 == param_2[uVar9 + 1]) goto LAB_0280bed4;
          if (uVar9 == 0xfe) goto LAB_0280bedc;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c924 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280bed4:
        if (0xfe < uVar9) {
LAB_0280bedc:
          if (DAT_0559c924 < 0x79) {
            uVar10 = (ulong)(DAT_0559c924 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c924 & 0x1f);
          }
        }
      }
      if (DAT_0559c928 != uVar6) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c928 == param_2[uVar9 + 1]) goto LAB_0280bf58;
          if (uVar9 == 0xfe) goto LAB_0280bf60;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c928 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280bf58:
        if (0xfe < uVar9) {
LAB_0280bf60:
          if (DAT_0559c928 < 0x79) {
            uVar10 = (ulong)(DAT_0559c928 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c928 & 0x1f);
          }
        }
      }
      if (((param_4 & 1) != 0) && (DAT_0559c92c != uVar5)) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          uVar7 = DAT_0559c92c;
          if (DAT_0559c92c == param_2[uVar9 + 1]) goto joined_r0x0280c798;
          if (uVar9 == 0xfe) goto joined_r0x0280c7a4;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c92c != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
        goto joined_r0x0280c798;
      }
      break;
    case 5:
      if (DAT_0559c930 != uVar5) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c930 == param_2[uVar9 + 1]) goto LAB_0280c044;
          if (uVar9 == 0xfe) goto LAB_0280c04c;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c930 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280c044:
        if (0xfe < uVar9) {
LAB_0280c04c:
          if (DAT_0559c930 < 0x79) {
            uVar10 = (ulong)(DAT_0559c930 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c930 & 0x1f);
          }
        }
      }
      if (DAT_0559c934 != uVar6) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c934 == param_2[uVar9 + 1]) goto LAB_0280c0c8;
          if (uVar9 == 0xfe) goto LAB_0280c0d0;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c934 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280c0c8:
        if (0xfe < uVar9) {
LAB_0280c0d0:
          if (DAT_0559c934 < 0x79) {
            uVar10 = (ulong)(DAT_0559c934 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c934 & 0x1f);
          }
        }
      }
      if (DAT_0559c938 != uVar6) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c938 == param_2[uVar9 + 1]) goto LAB_0280c154;
          if (uVar9 == 0xfe) goto LAB_0280c15c;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c938 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280c154:
        if (0xfe < uVar9) {
LAB_0280c15c:
          if (DAT_0559c938 < 0x79) {
            uVar10 = (ulong)(DAT_0559c938 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c938 & 0x1f);
          }
        }
      }
      if (DAT_0559c93c != uVar6) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c93c == param_2[uVar9 + 1]) goto LAB_0280c1d8;
          if (uVar9 == 0xfe) goto LAB_0280c1e0;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c93c != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280c1d8:
        if (0xfe < uVar9) {
LAB_0280c1e0:
          if (DAT_0559c93c < 0x79) {
            uVar10 = (ulong)(DAT_0559c93c >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c93c & 0x1f);
          }
        }
      }
      if (((param_4 & 1) != 0) && (DAT_0559c940 != uVar6)) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          uVar7 = DAT_0559c940;
          if (DAT_0559c940 == param_2[uVar9 + 1]) goto joined_r0x0280c798;
          if (uVar9 == 0xfe) goto joined_r0x0280c7a4;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c940 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
        goto joined_r0x0280c798;
      }
      break;
    case 6:
      if (DAT_0559c944 != uVar6) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c944 == param_2[uVar9 + 1]) goto LAB_0280c2c4;
          if (uVar9 == 0xfe) goto LAB_0280c2cc;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c944 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280c2c4:
        if (0xfe < uVar9) {
LAB_0280c2cc:
          if (DAT_0559c944 < 0x79) {
            uVar10 = (ulong)(DAT_0559c944 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c944 & 0x1f);
          }
        }
      }
      if (DAT_0559c948 != uVar6) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c948 == param_2[uVar9 + 1]) goto LAB_0280c348;
          if (uVar9 == 0xfe) goto LAB_0280c350;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c948 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280c348:
        if (0xfe < uVar9) {
LAB_0280c350:
          if (DAT_0559c948 < 0x79) {
            uVar10 = (ulong)(DAT_0559c948 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c948 & 0x1f);
          }
        }
      }
      if (DAT_0559c94c != uVar6) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c94c == param_2[uVar9 + 1]) goto LAB_0280c3d4;
          if (uVar9 == 0xfe) goto LAB_0280c3dc;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c94c != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280c3d4:
        if (0xfe < uVar9) {
LAB_0280c3dc:
          if (DAT_0559c94c < 0x79) {
            uVar10 = (ulong)(DAT_0559c94c >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c94c & 0x1f);
          }
        }
      }
      if (DAT_0559c950 != uVar6) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c950 == param_2[uVar9 + 1]) goto LAB_0280c458;
          if (uVar9 == 0xfe) goto LAB_0280c460;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c950 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280c458:
        if (0xfe < uVar9) {
LAB_0280c460:
          if (DAT_0559c950 < 0x79) {
            uVar10 = (ulong)(DAT_0559c950 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c950 & 0x1f);
          }
        }
      }
      if (((param_4 & 1) != 0) && (DAT_0559c954 != uVar5)) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          uVar7 = DAT_0559c954;
          if (DAT_0559c954 == param_2[uVar9 + 1]) goto joined_r0x0280c798;
          if (uVar9 == 0xfe) goto joined_r0x0280c7a4;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c954 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
        goto joined_r0x0280c798;
      }
      break;
    case 7:
      if (DAT_0559c958 != bVar2) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c958 == param_2[uVar9 + 1]) goto LAB_0280c574;
          if (uVar9 == 0xfe) goto LAB_0280c57c;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c958 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280c574:
        if (0xfe < uVar9) {
LAB_0280c57c:
          if (DAT_0559c958 < 0x79) {
            uVar10 = (ulong)(DAT_0559c958 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c958 & 0x1f);
          }
        }
      }
      if (DAT_0559c95c != uVar6) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c95c == param_2[uVar9 + 1]) goto LAB_0280c5f8;
          if (uVar9 == 0xfe) goto LAB_0280c600;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c95c != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280c5f8:
        if (0xfe < uVar9) {
LAB_0280c600:
          if (DAT_0559c95c < 0x79) {
            uVar10 = (ulong)(DAT_0559c95c >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c95c & 0x1f);
          }
        }
      }
      if (DAT_0559c960 != uVar6) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c960 == param_2[uVar9 + 1]) goto LAB_0280c684;
          if (uVar9 == 0xfe) goto LAB_0280c68c;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c960 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280c684:
        if (0xfe < uVar9) {
LAB_0280c68c:
          if (DAT_0559c960 < 0x79) {
            uVar10 = (ulong)(DAT_0559c960 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c960 & 0x1f);
          }
        }
      }
      if (DAT_0559c964 != uVar6) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          if (DAT_0559c964 == param_2[uVar9 + 1]) goto LAB_0280c708;
          if (uVar9 == 0xfe) goto LAB_0280c710;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c964 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
LAB_0280c708:
        if (0xfe < uVar9) {
LAB_0280c710:
          if (DAT_0559c964 < 0x79) {
            uVar10 = (ulong)(DAT_0559c964 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_50 + uVar10) =
                 *(uint *)((long)&local_50 + uVar10) | 1 << (ulong)(DAT_0559c964 & 0x1f);
          }
        }
      }
      if (((param_4 & 1) != 0) && (DAT_0559c968 != uVar6)) {
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          uVar7 = DAT_0559c968;
          if (DAT_0559c968 == param_2[uVar9 + 1]) goto joined_r0x0280c798;
          if (uVar9 == 0xfe) goto joined_r0x0280c7a4;
          uVar10 = uVar9 + 2;
        } while (DAT_0559c968 != param_2[uVar9 + 2]);
        uVar9 = uVar9 + 1;
        goto joined_r0x0280c798;
      }
    }
  }
  uVar7 = (uint)local_50 - ((uint)local_50 >> 1 & 0x55555555);
  uVar6 = local_50._4_4_ - (local_50._4_4_ >> 1 & 0x55555555);
  uVar5 = (uint)local_48 - ((uint)local_48 >> 1 & 0x55555555);
  uVar4 = local_48._4_4_ - (local_48._4_4_ >> 1 & 0x55555555);
  uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
  uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
  uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
  uVar7 = uVar7 + (uVar7 >> 8);
  uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
  uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
  uVar6 = uVar6 + (uVar6 >> 8);
  uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
  uVar1 = uVar7 + (uVar7 >> 0x10) & 0x3f;
  uVar5 = uVar5 + (uVar5 >> 8);
  uVar7 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + uVar1;
  uVar6 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar5 = uVar7 + (uVar5 + (uVar5 >> 0x10) & 0x3f);
  uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
  uVar6 = uVar6 + (uVar6 >> 8);
  uVar6 = uVar5 + (uVar6 + (uVar6 >> 0x10) & 0x3f);
  if (uVar6 == 0) {
    iVar11 = 0;
  }
  else {
    uVar4 = nn::os::GetSystemTick();
    uVar3 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
    uVar4 = uVar3 ^ uVar3 * 0x800;
    uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
    uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
    uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
    uVar4 = (uint)((ulong)(uVar4 >> 8 ^ uVar3 >> 0x13 ^ uVar4 ^ uVar3) * (ulong)uVar6 >> 0x20);
    if (uVar4 < uVar1) {
      lVar8 = 0;
      uVar5 = 0;
    }
    else if (uVar4 < uVar7) {
      lVar8 = 1;
      uVar5 = uVar1;
    }
    else if (uVar4 < uVar5) {
      lVar8 = 2;
      uVar5 = uVar7;
    }
    else {
      if (uVar6 <= uVar4) {
        iVar11 = -1;
        goto LAB_0280c9a8;
      }
      lVar8 = 3;
    }
    uVar7 = *(uint *)((long)&local_50 + lVar8 * 4);
    if (uVar7 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      iVar11 = (uVar4 - uVar5) + 2;
      uVar6 = 0xffffffff;
      do {
        iVar11 = iVar11 + -1;
        if (iVar11 < 2) {
          uVar7 = uVar7 - 1 & (uVar7 ^ 0xffffffff);
          uVar7 = uVar7 - (uVar7 >> 1 & 0x55555555);
          uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
          uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
          uVar7 = uVar7 + (uVar7 >> 8);
          uVar6 = uVar7 + (uVar7 >> 0x10) & 0x3f;
          break;
        }
        uVar7 = uVar7 - 1 & uVar7;
      } while (uVar7 != 0);
    }
    iVar11 = uVar6 + (int)lVar8 * 0x20;
  }
LAB_0280c9a8:
  *param_1 = iVar11;
  return;
}

