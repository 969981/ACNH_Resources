
bool FUN_0136cb20(byte *param_1,undefined4 *param_2)

{
  ulong uVar1;
  short *psVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  
  bVar6 = *param_1;
  if ((bVar6 & 1) == 0) {
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    *param_1 = bVar6 & 0xfc | 1;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    param_1[99] = 0;
    param_1[100] = 0;
    uVar10 = *param_2;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *(undefined4 *)(param_1 + 4) = uVar10;
    *(undefined4 *)(param_1 + 0x28) = param_2[6];
    *(undefined4 *)(param_1 + 0x2c) = param_2[7];
    *(undefined4 *)(param_1 + 0x38) = param_2[10];
    *(undefined4 *)(param_1 + 0x3c) = param_2[0xb];
    cVar7 = *(char *)(param_2 + 0xc);
    bVar8 = bVar6 & 0xf8 | 1 | cVar7 << 2;
    *param_1 = bVar8;
    bVar4 = bVar8 & 0xf5 | *(char *)((long)param_2 + 0x31) << 3;
    *param_1 = bVar4;
    bVar4 = bVar4 & 0xed | *(char *)((long)param_2 + 0x32) << 4;
    *param_1 = bVar4;
    bVar4 = bVar4 & 0xdd | *(char *)((long)param_2 + 0x33) << 5;
    if (cVar7 != '\0') {
      bVar4 = bVar8 & 0xc5 | 0x20;
    }
    *param_1 = bVar4;
    param_1[0xa0] = 0xff;
    param_1[0xa1] = 0xff;
    param_1[0xa2] = 0xff;
    param_1[0xa3] = 0xff;
    param_1[0xa4] = 0xff;
    param_1[0xa5] = 0xff;
    param_1[0xa6] = 0xff;
    param_1[0xa7] = 0xff;
    param_1[0xa8] = 0xff;
    param_1[0xa9] = 0xff;
    param_1[0xaa] = 0xff;
    param_1[0xab] = 0xff;
    param_1[0xac] = 0xff;
    param_1[0xad] = 0xff;
    param_1[0xae] = 0xff;
    param_1[0xaf] = 0xff;
    param_1[0xb0] = 0xff;
    param_1[0xb1] = 0xff;
    param_1[0xb2] = 0xff;
    param_1[0xb3] = 0xff;
    param_1[0xb4] = 0xff;
    param_1[0xb5] = 0xff;
    param_1[0xb6] = 0xff;
    param_1[0xb7] = 0xff;
    param_1[0xb8] = 0xff;
    param_1[0xb9] = 0xff;
    param_1[0xba] = 0xff;
    param_1[0xbb] = 0xff;
    param_1[0xbc] = 0xff;
    param_1[0xbd] = 0xff;
    param_1[0xbe] = 0xff;
    param_1[0xbf] = 0xff;
    param_1[0xc0] = 0xff;
    param_1[0xc1] = 0xff;
    param_1[0xc2] = 0xff;
    param_1[0xc3] = 0xff;
    param_1[0xc4] = 0xff;
    param_1[0xc5] = 0xff;
    param_1[0xc6] = 0xff;
    param_1[199] = 0xff;
    param_1[200] = 0xff;
    param_1[0xc9] = 0xff;
    param_1[0xca] = 0xff;
    param_1[0xcb] = 0xff;
    param_1[0xcc] = 0xff;
    param_1[0xcd] = 0xff;
    param_1[0xce] = 0xff;
    param_1[0xcf] = 0xff;
    param_1[0xd0] = 0xff;
    param_1[0xd1] = 0xff;
    param_1[0xd2] = 0xff;
    param_1[0xd3] = 0xff;
    param_1[0xd4] = 0xff;
    param_1[0xd5] = 0xff;
    param_1[0xd6] = 0xff;
    param_1[0xd7] = 0xff;
    param_1[0xd8] = 0xff;
    param_1[0xd9] = 0xff;
    param_1[0xda] = 0xff;
    param_1[0xdb] = 0xff;
    param_1[0xdc] = 0;
    param_1[0xdd] = 0;
    param_1[0xde] = 0;
    param_1[0xdf] = 0;
    cVar7 = *(char *)(param_2 + 0xc);
    FUN_01375b10(param_1 + 0x80);
    *(byte **)(param_1 + 0x70) = param_1 + 0x80;
    puVar9 = PTR_DAT_04bb37e0;
    if (cVar7 == '\0') {
      uVar5 = *(uint *)(param_1 + 0x90);
      if (uVar5 != 0) {
        lVar11 = *(long *)(param_1 + 0x98);
        uVar12 = 0;
        do {
          psVar2 = (short *)(lVar11 + ((long)((ulong)uVar12 << 0x20) >> 0x1c));
          if (*psVar2 != -2) {
            lVar3 = lVar11 + (long)(int)uVar12 * 0x10;
            piVar14 = (int *)(lVar3 + 0xc);
            if (*piVar14 < 2) {
              *psVar2 = *(short *)puVar9;
              *(undefined *)(psVar2 + 1) = puVar9[2];
              *(undefined *)((long)psVar2 + 3) = puVar9[3];
              uVar10 = *(undefined4 *)(puVar9 + 4);
              *(undefined4 *)(lVar3 + 8) = 0;
              *piVar14 = 0;
              *(undefined4 *)(psVar2 + 2) = uVar10;
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar5 != uVar12);
        if (*(int *)(param_1 + 0x90) != 0) {
          uVar13 = 0;
          do {
            if ((*(short *)(*(long *)(param_1 + 0x98) +
                           (-(uVar13 >> 0x1f) & 0xfffffff000000000 | uVar13 << 4)) != -2) &&
               (0 < *(int *)(*(long *)(param_1 + 0x98) + (long)(int)uVar13 * 0x10 + 8))) {
              uVar10 = 1;
              goto LAB_0136ccf0;
            }
            uVar1 = uVar13 + 1;
            uVar13 = uVar1 & 0xffffffff;
          } while (*(int *)(param_1 + 0x90) != (int)uVar1);
        }
      }
      uVar10 = 4;
LAB_0136ccf0:
      *(undefined4 *)(param_1 + 0x40) = uVar10;
      if ((*(uint *)(param_1 + 4) & 0xfffffffe) != 2) {
        FUN_0136cd30(param_1);
      }
    }
  }
  return (bVar6 & 1) == 0;
}

