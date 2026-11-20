
void FUN_03f5b4a4(long param_1)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  ushort uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  pbVar1 = &LAB_0038a448 + param_1;
  bVar5 = *pbVar1;
  puVar2 = (uint *)(param_1 + 0x34e0b4);
  if (((char)bVar5 < '\0') &&
     (iVar8 = *(int *)(&LAB_0038a450 + param_1), *(int *)(&LAB_0038a450 + param_1) = iVar8 + -1,
     iVar8 + -1 == 0)) {
    *pbVar1 = bVar5 & 0x7f;
    if ((&LAB_0038a458)[param_1] != '\0') {
      uVar7 = *puVar2;
      (&LAB_0038a458)[param_1] = 0;
      *puVar2 = uVar7 + 1;
    }
    if (*(char *)(param_1 + 0x34e0d0) == '\0') {
      FUN_03f4d1a0(param_1,0,*(undefined2 *)(param_1 + 0x34e0e8),*(undefined1 *)(param_1 + 0x34e0b6)
                  );
      uVar7 = *(ushort *)(param_1 + 0x34e0e8) - 1;
      *(short *)(param_1 + 0x34e0e8) = (short)uVar7;
      if (*(char *)(param_1 + 0x34e0d0) != '\0') {
        *(undefined1 *)(param_1 + 0x34e0e9) = 1;
        uVar7 = (uint)*(ushort *)(param_1 + 0x34e0e8);
      }
      uVar4 = *(ushort *)puVar2;
      FUN_03f4d1a0(param_1,0,uVar7,uVar4 >> 8);
      iVar8 = *(ushort *)(param_1 + 0x34e0e8) - 1;
      *(short *)(param_1 + 0x34e0e8) = (short)iVar8;
      FUN_03f4d1a0(param_1,0,iVar8,uVar4);
      *(short *)(param_1 + 0x34e0e8) = *(short *)(param_1 + 0x34e0e8) + -1;
      if (*(char *)(param_1 + 0x34e0d0) != '\0') {
        *(undefined1 *)(param_1 + 0x34e0e9) = 1;
      }
      if (*(char *)(param_1 + 0x34e0d1) == '\0') {
        uVar7 = (uint)*(byte *)(param_1 + 0x34e0d2);
      }
      else {
        *(undefined1 *)(param_1 + 0x34e0d1) = 0;
        uVar7 = (uint)*(byte *)(param_1 + 0x34e0cf) << 2;
        if (*(char *)(param_1 + 0x34e0ce) != '\0') {
          uVar7 = uVar7 | 0x40;
        }
        uVar7 = uVar7 | *(byte *)(param_1 + 0x34e0cb);
        if (*(char *)(param_1 + 0x34e0cd) != '\0') {
          uVar7 = uVar7 | 0x10;
        }
        if (*(char *)(param_1 + 0x34e0cc) != '\0') {
          uVar7 = uVar7 | 0x20;
        }
        if (*(char *)(param_1 + 0x34e0ca) != '\0') {
          uVar7 = uVar7 | 0xffffff80;
        }
        if (*(char *)(param_1 + 0x34e0c9) != '\0') {
          uVar7 = uVar7 | 2;
        }
        if (*(char *)(param_1 + 0x34e0c8) != '\0') {
          uVar7 = uVar7 | 8;
        }
        if (*(char *)(param_1 + 0x34e0d0) != '\0') {
          uVar7 = uVar7 | 0x30;
        }
        *(char *)(param_1 + 0x34e0d2) = (char)uVar7;
      }
      FUN_03f4d1a0(param_1,0,*(undefined2 *)(param_1 + 0x34e0e8),uVar7);
      *(short *)(param_1 + 0x34e0e8) = *(short *)(param_1 + 0x34e0e8) + -1;
      if (*(char *)(param_1 + 0x34e0d0) != '\0') {
        *(undefined1 *)(param_1 + 0x34e0e9) = 1;
      }
      uVar4 = *(ushort *)(param_1 + 0x36e182);
      *(undefined1 *)(param_1 + 0x34e0cf) = 1;
      *(undefined1 *)(param_1 + 0x34e0d1) = 1;
      iVar8 = 0xc00;
      *(undefined1 *)(param_1 + 0x34e0c8) = 0;
    }
    else {
      uVar4 = *(ushort *)puVar2;
      FUN_03f4d1a0(param_1,0,*(undefined2 *)(param_1 + 0x34e0e8),uVar4 >> 8);
      iVar8 = *(ushort *)(param_1 + 0x34e0e8) - 1;
      *(short *)(param_1 + 0x34e0e8) = (short)iVar8;
      FUN_03f4d1a0(param_1,0,iVar8,uVar4);
      *(short *)(param_1 + 0x34e0e8) = *(short *)(param_1 + 0x34e0e8) + -1;
      if (*(char *)(param_1 + 0x34e0d0) != '\0') {
        *(undefined1 *)(param_1 + 0x34e0e9) = 1;
      }
      if (*(char *)(param_1 + 0x34e0d1) == '\0') {
        uVar7 = (uint)*(byte *)(param_1 + 0x34e0d2);
      }
      else {
        *(undefined1 *)(param_1 + 0x34e0d1) = 0;
        uVar7 = (uint)*(byte *)(param_1 + 0x34e0cf) << 2;
        if (*(char *)(param_1 + 0x34e0ce) != '\0') {
          uVar7 = uVar7 | 0x40;
        }
        uVar7 = uVar7 | *(byte *)(param_1 + 0x34e0cb);
        if (*(char *)(param_1 + 0x34e0cd) != '\0') {
          uVar7 = uVar7 | 0x10;
        }
        if (*(char *)(param_1 + 0x34e0cc) != '\0') {
          uVar7 = uVar7 | 0x20;
        }
        if (*(char *)(param_1 + 0x34e0ca) != '\0') {
          uVar7 = uVar7 | 0xffffff80;
        }
        if (*(char *)(param_1 + 0x34e0c9) != '\0') {
          uVar7 = uVar7 | 2;
        }
        if (*(char *)(param_1 + 0x34e0c8) != '\0') {
          uVar7 = uVar7 | 8;
        }
        if (*(char *)(param_1 + 0x34e0d0) != '\0') {
          uVar7 = uVar7 | 0x30;
        }
        *(char *)(param_1 + 0x34e0d2) = (char)uVar7;
      }
      FUN_03f4d1a0(param_1,0,*(undefined2 *)(param_1 + 0x34e0e8),uVar7);
      *(short *)(param_1 + 0x34e0e8) = *(short *)(param_1 + 0x34e0e8) + -1;
      if (*(char *)(param_1 + 0x34e0d0) != '\0') {
        *(undefined1 *)(param_1 + 0x34e0e9) = 1;
      }
      uVar4 = *(ushort *)(param_1 + 0x36e186);
      *(undefined1 *)(param_1 + 0x34e0c8) = 0;
      *(undefined1 *)(param_1 + 0x34e0cf) = 1;
      *(undefined1 *)(param_1 + 0x34e0d1) = 1;
      iVar8 = 0x600;
    }
    iVar6 = *(short *)(param_1 + ((ulong)(uVar4 >> 0xb) & 0x1e) + 0x3861b8) * 2;
    iVar3 = iVar6 + 0xc00;
    if ((uVar4 & 0xfe00) != 0x4000) {
      iVar3 = iVar6;
    }
    *(int *)(param_1 + 0x34e0bc) = *(int *)(param_1 + 0x34e0bc) + iVar3;
    uVar7 = FUN_03f5914c(param_1);
    *(char *)(param_1 + 0x34e0b8) = (char)(uVar7 >> 8);
    *puVar2 = uVar7 & 0xffff;
    *(int *)(param_1 + 0x34e0bc) = *(int *)(param_1 + 0x34e0bc) + iVar8;
    bVar5 = *pbVar1;
  }
  if ((bVar5 >> 6 & 1) != 0) {
    if (*(int *)(&LAB_0038a454 + param_1) == 0) {
      if ((&LAB_0038a458)[param_1] != '\0') {
        uVar7 = *puVar2;
        (&LAB_0038a458)[param_1] = 0;
        *puVar2 = uVar7 + 1;
      }
      if ((&LAB_0038a44c)[param_1] == '\0') {
        *pbVar1 = bVar5 & 0xbf;
      }
      else if (*(char *)(param_1 + 0x34e0cf) == '\0') {
        if (*(char *)(param_1 + 0x34e0d0) == '\0') {
          FUN_03f4d1a0(param_1,0,*(undefined2 *)(param_1 + 0x34e0e8),
                       *(undefined1 *)(param_1 + 0x34e0b6));
          uVar7 = *(ushort *)(param_1 + 0x34e0e8) - 1;
          *(short *)(param_1 + 0x34e0e8) = (short)uVar7;
          if (*(char *)(param_1 + 0x34e0d0) != '\0') {
            *(undefined1 *)(param_1 + 0x34e0e9) = 1;
            uVar7 = (uint)*(ushort *)(param_1 + 0x34e0e8);
          }
          uVar4 = *(ushort *)puVar2;
          FUN_03f4d1a0(param_1,0,uVar7,uVar4 >> 8);
          iVar8 = *(ushort *)(param_1 + 0x34e0e8) - 1;
          *(short *)(param_1 + 0x34e0e8) = (short)iVar8;
          FUN_03f4d1a0(param_1,0,iVar8,uVar4);
          *(short *)(param_1 + 0x34e0e8) = *(short *)(param_1 + 0x34e0e8) + -1;
          if (*(char *)(param_1 + 0x34e0d0) != '\0') {
            *(undefined1 *)(param_1 + 0x34e0e9) = 1;
          }
          if (*(char *)(param_1 + 0x34e0d1) == '\0') {
            uVar7 = (uint)*(byte *)(param_1 + 0x34e0d2);
          }
          else {
            *(undefined1 *)(param_1 + 0x34e0d1) = 0;
            uVar7 = (uint)*(byte *)(param_1 + 0x34e0cf) << 2;
            if (*(char *)(param_1 + 0x34e0ce) != '\0') {
              uVar7 = uVar7 | 0x40;
            }
            uVar7 = uVar7 | *(byte *)(param_1 + 0x34e0cb);
            if (*(char *)(param_1 + 0x34e0cd) != '\0') {
              uVar7 = uVar7 | 0x10;
            }
            if (*(char *)(param_1 + 0x34e0cc) != '\0') {
              uVar7 = uVar7 | 0x20;
            }
            if (*(char *)(param_1 + 0x34e0ca) != '\0') {
              uVar7 = uVar7 | 0xffffff80;
            }
            if (*(char *)(param_1 + 0x34e0c9) != '\0') {
              uVar7 = uVar7 | 2;
            }
            if (*(char *)(param_1 + 0x34e0c8) != '\0') {
              uVar7 = uVar7 | 8;
            }
            if (*(char *)(param_1 + 0x34e0d0) != '\0') {
              uVar7 = uVar7 | 0x30;
            }
            *(char *)(param_1 + 0x34e0d2) = (char)uVar7;
          }
          FUN_03f4d1a0(param_1,0,*(undefined2 *)(param_1 + 0x34e0e8),uVar7);
          *(short *)(param_1 + 0x34e0e8) = *(short *)(param_1 + 0x34e0e8) + -1;
          if (*(char *)(param_1 + 0x34e0d0) != '\0') {
            *(undefined1 *)(param_1 + 0x34e0e9) = 1;
          }
          uVar4 = *(ushort *)(param_1 + 0x36e184);
          *(undefined1 *)(param_1 + 0x34e0cf) = 1;
          *(undefined1 *)(param_1 + 0x34e0d1) = 1;
          iVar8 = 0xc00;
          *(undefined1 *)(param_1 + 0x34e0c8) = 0;
        }
        else {
          uVar4 = *(ushort *)puVar2;
          FUN_03f4d1a0(param_1,0,*(undefined2 *)(param_1 + 0x34e0e8),uVar4 >> 8);
          iVar8 = *(ushort *)(param_1 + 0x34e0e8) - 1;
          *(short *)(param_1 + 0x34e0e8) = (short)iVar8;
          FUN_03f4d1a0(param_1,0,iVar8,uVar4);
          *(short *)(param_1 + 0x34e0e8) = *(short *)(param_1 + 0x34e0e8) + -1;
          if (*(char *)(param_1 + 0x34e0d0) != '\0') {
            *(undefined1 *)(param_1 + 0x34e0e9) = 1;
          }
          if (*(char *)(param_1 + 0x34e0d1) == '\0') {
            uVar7 = (uint)*(byte *)(param_1 + 0x34e0d2);
          }
          else {
            *(undefined1 *)(param_1 + 0x34e0d1) = 0;
            uVar7 = (uint)*(byte *)(param_1 + 0x34e0cf) << 2;
            if (*(char *)(param_1 + 0x34e0ce) != '\0') {
              uVar7 = uVar7 | 0x40;
            }
            uVar7 = uVar7 | *(byte *)(param_1 + 0x34e0cb);
            if (*(char *)(param_1 + 0x34e0cd) != '\0') {
              uVar7 = uVar7 | 0x10;
            }
            if (*(char *)(param_1 + 0x34e0cc) != '\0') {
              uVar7 = uVar7 | 0x20;
            }
            if (*(char *)(param_1 + 0x34e0ca) != '\0') {
              uVar7 = uVar7 | 0xffffff80;
            }
            if (*(char *)(param_1 + 0x34e0c9) != '\0') {
              uVar7 = uVar7 | 2;
            }
            if (*(char *)(param_1 + 0x34e0c8) != '\0') {
              uVar7 = uVar7 | 8;
            }
            if (*(char *)(param_1 + 0x34e0d0) != '\0') {
              uVar7 = uVar7 | 0x30;
            }
            *(char *)(param_1 + 0x34e0d2) = (char)uVar7;
          }
          FUN_03f4d1a0(param_1,0,*(undefined2 *)(param_1 + 0x34e0e8),uVar7);
          *(short *)(param_1 + 0x34e0e8) = *(short *)(param_1 + 0x34e0e8) + -1;
          if (*(char *)(param_1 + 0x34e0d0) != '\0') {
            *(undefined1 *)(param_1 + 0x34e0e9) = 1;
          }
          uVar4 = *(ushort *)(param_1 + 0x36e188);
          *(undefined1 *)(param_1 + 0x34e0c8) = 0;
          *(undefined1 *)(param_1 + 0x34e0cf) = 1;
          *(undefined1 *)(param_1 + 0x34e0d1) = 1;
          iVar8 = 0x600;
        }
        iVar6 = *(short *)(param_1 + ((ulong)(uVar4 >> 0xb) & 0x1e) + 0x3861b8) * 2;
        iVar3 = iVar6 + 0xc00;
        if ((uVar4 & 0xfe00) != 0x4000) {
          iVar3 = iVar6;
        }
        *(int *)(param_1 + 0x34e0bc) = *(int *)(param_1 + 0x34e0bc) + iVar3;
        uVar7 = FUN_03f5914c(param_1);
        *(char *)(param_1 + 0x34e0b8) = (char)(uVar7 >> 8);
        *puVar2 = uVar7 & 0xffff;
        *(int *)(param_1 + 0x34e0bc) = *(int *)(param_1 + 0x34e0bc) + iVar8;
        if ((*(char *)(param_1 + 0x34710) != '\0') &&
           (((byte)(&LAB_0038a44c)[param_1] >> 4 & 1) != 0)) {
          (&LAB_0038a44c)[param_1] = (&LAB_0038a44c)[param_1] & 0xef;
        }
      }
    }
    else {
      iVar8 = *(int *)(&LAB_0038a454 + param_1) + -1;
      *(int *)(&LAB_0038a454 + param_1) = iVar8;
      if ((iVar8 == 0) && (*(char *)(param_1 + 0x34e0cf) != '\0')) {
        *(undefined4 *)(&LAB_0038a454 + param_1) = 1;
      }
    }
  }
  return;
}

