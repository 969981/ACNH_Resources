
void FUN_03611480(long param_1)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  
  uVar1 = *(uint *)(param_1 + 0x40c);
  bVar2 = *(byte *)(param_1 + 0x414);
  uVar4 = (uint)bVar2;
  if ((bVar2 & 1) == 0) {
    uVar5 = (uint)bVar2;
    if ((bVar2 >> 1 & 1) != 0) goto LAB_0361153c;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x42c);
    if (uVar5 <= uVar1) {
      do {
        *(uint *)(param_1 + 0x42c) = uVar5 + *(int *)(param_1 + 0x430) * -4 + 0x2000;
        uVar4 = *(byte *)(param_1 + 0x444) + 1 & 7;
        *(char *)(param_1 + 0x444) = (char)uVar4;
        if (*(char *)(param_1 + 0x44c) != '\0') {
          *(undefined1 *)(param_1 + 0x44c) = 0;
        }
        bVar2 = *(byte *)(param_1 + 0x446) >> (ulong)uVar4;
        *(byte *)(param_1 + 0x447) = bVar2 & 1;
        sVar8 = 0;
        if (*(char *)(param_1 + 0x419) != '\0') {
          if (*(char *)(param_1 + 0x418) == '\0') {
            sVar8 = 0x17f;
          }
          else {
            sVar8 = 0x17f;
            if (*(char *)(param_1 + 0x43a) == '\0') {
              sVar8 = 0x17f;
              if ((bVar2 & 1) != 0) {
                sVar8 = *(short *)(param_1 + 0x44a) + 0x17f;
              }
            }
          }
        }
        uVar5 = *(uint *)(param_1 + 0x42c);
        *(short *)(param_1 + 0x4fc) = sVar8;
      } while (uVar5 <= uVar1);
      uVar4 = (uint)*(byte *)(param_1 + 0x414);
    }
    *(uint *)(param_1 + 0x42c) = uVar5 - uVar1;
    uVar5 = uVar4;
    if ((uVar4 >> 1 & 1) != 0) {
LAB_0361153c:
      uVar5 = *(uint *)(param_1 + 0x464);
      if (uVar5 <= uVar1) {
        do {
          *(uint *)(param_1 + 0x464) = uVar5 + *(int *)(param_1 + 0x468) * -4 + 0x2000;
          uVar4 = *(byte *)(param_1 + 0x47c) + 1 & 7;
          *(char *)(param_1 + 0x47c) = (char)uVar4;
          if (*(char *)(param_1 + 0x484) != '\0') {
            *(undefined1 *)(param_1 + 0x484) = 0;
          }
          bVar2 = *(byte *)(param_1 + 0x47e) >> (ulong)uVar4;
          *(byte *)(param_1 + 0x47f) = bVar2 & 1;
          sVar8 = 0;
          if (*(char *)(param_1 + 0x451) != '\0') {
            if (*(char *)(param_1 + 0x450) == '\0') {
              sVar8 = 0x17f;
            }
            else {
              sVar8 = 0x17f;
              if (*(char *)(param_1 + 0x472) == '\0') {
                sVar8 = 0x17f;
                if ((bVar2 & 1) != 0) {
                  sVar8 = *(short *)(param_1 + 0x482) + 0x17f;
                }
              }
            }
          }
          uVar5 = *(uint *)(param_1 + 0x464);
          *(short *)(param_1 + 0x4fe) = sVar8;
        } while (uVar5 <= uVar1);
        uVar4 = (uint)*(byte *)(param_1 + 0x414);
      }
      *(uint *)(param_1 + 0x464) = uVar5 - uVar1;
      uVar5 = uVar4;
    }
  }
  if ((uVar5 >> 2 & 1) != 0) {
    uVar4 = *(uint *)(param_1 + 0x49c);
    while (uVar4 <= uVar1) {
      *(undefined1 *)(param_1 + 0x4c1) = 0;
      *(uint *)(param_1 + 0x49c) = uVar4 + *(int *)(param_1 + 0x4a0) * -2 + 0x1000;
      uVar4 = *(byte *)(param_1 + 0x4ac) + 1;
      uVar5 = uVar4 & 0x1f;
      *(char *)(param_1 + 0x4ac) = (char)uVar5;
      bVar2 = *(byte *)(param_1 + (ulong)(uVar4 >> 1 & 0xf) + 0x4ad);
      *(byte *)(param_1 + 0x4ab) = bVar2;
      if (*(char *)(param_1 + 0x4bf) != '\0') {
        *(undefined1 *)(param_1 + 0x4bf) = 0;
      }
      if (*(char *)(param_1 + 0x489) == '\0') {
        *(undefined2 *)(param_1 + 0x500) = 0;
LAB_03611668:
        *(undefined1 *)(param_1 + 0x4bd) = 0;
      }
      else {
        if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
          *(undefined2 *)(param_1 + 0x500) = 0x186;
          goto LAB_03611668;
        }
        uVar4 = bVar2 >> (ulong)((uVar5 << 2 ^ 0xffffffff) & 4) & 0xf;
        *(char *)(param_1 + 0x4bd) = (char)uVar4;
        if (*(byte *)(param_1 + 0x4be) == 0) {
          sVar8 = 0x186;
        }
        else {
          sVar8 = (short)(uVar4 >> (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2)
                                          & 7)) * -0x34 + 0x186;
        }
        *(short *)(param_1 + 0x500) = sVar8;
      }
      uVar4 = *(uint *)(param_1 + 0x49c);
    }
    *(uint *)(param_1 + 0x49c) = uVar4 - uVar1;
    if ((*(char *)(param_1 + 0x4c0) != '\0') && (*(char *)(param_1 + 0x4c1) == '\0')) {
      *(bool *)(param_1 + 0x4c1) = uVar4 - uVar1 != *(int *)(param_1 + 0x4a0) * -2 + 0x1000;
      bVar2 = *(byte *)(param_1 + 0x414);
      goto joined_r0x03611730;
    }
  }
  bVar2 = *(byte *)(param_1 + 0x414);
joined_r0x03611730:
  if ((bVar2 >> 3 & 1) != 0) {
    uVar4 = *(uint *)(param_1 + 0x4dc);
    if (uVar4 <= uVar1) {
      bVar2 = *(byte *)(param_1 + 0x4f2);
      if (bVar2 < 0xe) {
        while( true ) {
          uVar4 = *(int *)(param_1 + 0x4e0) + uVar4;
          *(uint *)(param_1 + 0x4dc) = uVar4;
          if (bVar2 < 0xe) {
            uVar7 = *(ushort *)(param_1 + 0x4f0);
            uVar3 = ((uVar7 >> 1 ^ uVar7 ^ 0xffff) & 1) << 0xe;
            uVar6 = uVar7 >> 1 & 0x3fff | uVar3;
            *(ushort *)(param_1 + 0x4f0) = uVar6;
            if (*(char *)(param_1 + 0x4f3) != '\0') {
              uVar6 = uVar7 >> 1 & 0x3fbf | uVar3 | ((uVar7 >> 1 ^ uVar7 ^ 0xffff) & 1) << 6;
              *(ushort *)(param_1 + 0x4f0) = uVar6;
            }
            uVar7 = (ushort)*(byte *)(param_1 + 0x4c9);
            if (*(byte *)(param_1 + 0x4c9) != 0) {
              if (*(char *)(param_1 + 0x4c8) == '\0') {
                uVar7 = 0x17d;
              }
              else {
                uVar7 = 0x17d;
                if (*(char *)(param_1 + 0x4ea) == '\0') {
                  sVar8 = *(short *)(&DAT_040579c0 + (ulong)*(byte *)(param_1 + 0x4ee) * 2);
                  *(short *)(param_1 + 0x4f6) = sVar8;
                  uVar7 = 0x17d;
                  if ((uVar6 & 1) != 0) {
                    uVar7 = sVar8 + 0x17d;
                  }
                }
              }
            }
            uVar4 = *(uint *)(param_1 + 0x4dc);
            *(ushort *)(param_1 + 0x502) = uVar7;
          }
          if (uVar1 < uVar4) break;
          bVar2 = *(byte *)(param_1 + 0x4f2);
        }
      }
      else {
        do {
          uVar4 = uVar4 + *(int *)(param_1 + 0x4e0);
        } while (uVar4 <= uVar1);
      }
    }
    *(uint *)(param_1 + 0x4dc) = uVar4 - uVar1;
  }
  *(undefined4 *)(param_1 + 0x40c) = 0;
  return;
}

