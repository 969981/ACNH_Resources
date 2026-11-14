
undefined8 FUN_01cf5a50(uint *param_1,char *param_2)

{
  int *piVar1;
  void *__dest;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  
  if ((*param_2 == '\x02') && (uVar5 = FUN_01cfed80(param_1 + 2), (uVar5 & 1) != 0)) {
    uVar3 = *(undefined4 *)(param_2 + 0x490);
    *(char *)(param_1 + 0x1e) = (char)((uint)uVar3 >> 0x18);
    *(char *)((long)param_1 + 0x79) = (char)((uint)uVar3 >> 0x10);
    *(char *)((long)param_1 + 0x7a) = (char)((uint)uVar3 >> 8);
    uVar3 = *(undefined4 *)(param_2 + 0x494);
    *(char *)((long)param_1 + 0x7b) = (char)((uint)uVar3 >> 0x18);
    *(char *)(param_1 + 0x1f) = (char)((uint)uVar3 >> 0x10);
    *(char *)((long)param_1 + 0x7d) = (char)((uint)uVar3 >> 8);
    uVar3 = *(undefined4 *)(param_2 + 0x498);
    *(char *)((long)param_1 + 0x7e) = (char)((uint)uVar3 >> 0x18);
    *(char *)((long)param_1 + 0x7f) = (char)((uint)uVar3 >> 0x10);
    *(char *)(param_1 + 0x20) = (char)((uint)uVar3 >> 8);
    uVar3 = *(undefined4 *)(param_2 + 0x49c);
    *(char *)((long)param_1 + 0x81) = (char)((uint)uVar3 >> 0x18);
    *(char *)((long)param_1 + 0x82) = (char)((uint)uVar3 >> 0x10);
    *(char *)((long)param_1 + 0x83) = (char)((uint)uVar3 >> 8);
    uVar3 = *(undefined4 *)(param_2 + 0x4a0);
    *(char *)(param_1 + 0x21) = (char)((uint)uVar3 >> 0x18);
    *(char *)((long)param_1 + 0x85) = (char)((uint)uVar3 >> 0x10);
    *(char *)((long)param_1 + 0x86) = (char)((uint)uVar3 >> 8);
    uVar3 = *(undefined4 *)(param_2 + 0x4a4);
    *(char *)((long)param_1 + 0x87) = (char)((uint)uVar3 >> 0x18);
    *(char *)(param_1 + 0x22) = (char)((uint)uVar3 >> 0x10);
    *(char *)((long)param_1 + 0x89) = (char)((uint)uVar3 >> 8);
    uVar3 = *(undefined4 *)(param_2 + 0x4a8);
    *(char *)((long)param_1 + 0x8a) = (char)((uint)uVar3 >> 0x18);
    *(char *)((long)param_1 + 0x8b) = (char)((uint)uVar3 >> 0x10);
    *(char *)(param_1 + 0x23) = (char)((uint)uVar3 >> 8);
    uVar3 = *(undefined4 *)(param_2 + 0x4ac);
    *(char *)((long)param_1 + 0x8d) = (char)((uint)uVar3 >> 0x18);
    *(char *)((long)param_1 + 0x8e) = (char)((uint)uVar3 >> 0x10);
    *(char *)((long)param_1 + 0x8f) = (char)((uint)uVar3 >> 8);
    uVar3 = *(undefined4 *)(param_2 + 0x4b0);
    *(char *)(param_1 + 0x24) = (char)((uint)uVar3 >> 0x18);
    *(char *)((long)param_1 + 0x91) = (char)((uint)uVar3 >> 0x10);
    *(char *)((long)param_1 + 0x92) = (char)((uint)uVar3 >> 8);
    uVar3 = *(undefined4 *)(param_2 + 0x4b4);
    *(char *)((long)param_1 + 0x93) = (char)((uint)uVar3 >> 0x18);
    *(char *)(param_1 + 0x25) = (char)((uint)uVar3 >> 0x10);
    *(char *)((long)param_1 + 0x95) = (char)((uint)uVar3 >> 8);
    uVar3 = *(undefined4 *)(param_2 + 0x4b8);
    *(char *)((long)param_1 + 0x96) = (char)((uint)uVar3 >> 0x18);
    *(char *)((long)param_1 + 0x97) = (char)((uint)uVar3 >> 0x10);
    *(char *)(param_1 + 0x26) = (char)((uint)uVar3 >> 8);
    uVar3 = *(undefined4 *)(param_2 + 0x4bc);
    *(char *)((long)param_1 + 0x99) = (char)((uint)uVar3 >> 0x18);
    *(char *)((long)param_1 + 0x9a) = (char)((uint)uVar3 >> 0x10);
    *(char *)((long)param_1 + 0x9b) = (char)((uint)uVar3 >> 8);
    uVar3 = *(undefined4 *)(param_2 + 0x4c0);
    *(char *)(param_1 + 0x27) = (char)((uint)uVar3 >> 0x18);
    *(char *)((long)param_1 + 0x9d) = (char)((uint)uVar3 >> 0x10);
    *(char *)((long)param_1 + 0x9e) = (char)((uint)uVar3 >> 8);
    uVar3 = *(undefined4 *)(param_2 + 0x4c4);
    *(char *)((long)param_1 + 0x9f) = (char)((uint)uVar3 >> 0x18);
    *(char *)(param_1 + 0x28) = (char)((uint)uVar3 >> 0x10);
    *(char *)((long)param_1 + 0xa1) = (char)((uint)uVar3 >> 8);
    uVar3 = *(undefined4 *)(param_2 + 0x4c8);
    *(char *)((long)param_1 + 0xa2) = (char)((uint)uVar3 >> 0x18);
    *(char *)((long)param_1 + 0xa3) = (char)((uint)uVar3 >> 0x10);
    *(char *)(param_1 + 0x29) = (char)((uint)uVar3 >> 8);
    if (0 < *(int *)(param_2 + 0xcf0)) {
      uVar9 = *(uint *)(param_2 + 0x4d0);
      __dest = (void *)((long)param_1 + 0xa5);
      if (0x1ff < uVar9) {
        uVar9 = 0x200;
      }
      memcpy(__dest,param_2 + 0x4d8,(ulong)uVar9);
      if (1 < *(int *)(param_2 + 0xcf0)) {
        uVar9 = *(uint *)(param_2 + 0x6d8);
        if (0x1ff < uVar9) {
          uVar9 = 0x200;
        }
        memcpy(__dest,param_2 + 0x6e0,(ulong)uVar9);
        if (2 < *(int *)(param_2 + 0xcf0)) {
          uVar9 = *(uint *)(param_2 + 0x8e0);
          if (0x1ff < uVar9) {
            uVar9 = 0x200;
          }
          memcpy(__dest,param_2 + 0x8e8,(ulong)uVar9);
          if (3 < *(int *)(param_2 + 0xcf0)) {
            uVar9 = *(uint *)(param_2 + 0xae8);
            if (0x1ff < uVar9) {
              uVar9 = 0x200;
            }
            memcpy(__dest,param_2 + 0xaf0,(ulong)uVar9);
            if (4 < *(int *)(param_2 + 0xcf0)) {
              lVar10 = 4;
              do {
                uVar9 = *(uint *)(param_2 + 0x4d0);
                if (0x1ff < uVar9) {
                  uVar9 = 0x200;
                }
                memcpy(__dest,param_2 + 0x4d8,(ulong)uVar9);
                lVar10 = lVar10 + 1;
              } while (lVar10 < *(int *)(param_2 + 0xcf0));
            }
          }
        }
      }
    }
    uVar5 = 0;
    uVar9 = 0;
    bVar4 = true;
    do {
      iVar7 = 0x20;
      uVar8 = uVar5;
      do {
        if ((((*(byte *)((long)param_1 + uVar8 + 0xa5) ^ 0xff) & 0xf) == 0) ||
           (0xef < *(byte *)((long)param_1 + uVar8 + 0xa5))) goto LAB_01cf5d6c;
        uVar8 = (ulong)((int)uVar8 + 1);
        iVar7 = iVar7 + -2;
      } while (iVar7 != 0);
      bVar4 = uVar9 < 0x1f;
      uVar9 = uVar9 + 1;
      uVar5 = (ulong)((int)uVar5 + 0x10);
    } while (uVar9 != 0x20);
LAB_01cf5d6c:
    *param_1 = 0;
    bVar2 = 2;
    if (!bVar4) {
      bVar2 = 0;
    }
    uVar5 = 0;
    *(byte *)(param_1 + 0x1c) = bVar2 | (byte)param_1[0x1c] & 0xfc;
    uVar9 = 0;
    do {
      piVar1 = (int *)((long)param_1 + uVar5);
      uVar5 = uVar5 + 4;
      uVar9 = (*piVar1 * 0x16a88000 | (uint)(*piVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar9;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
    } while (uVar5 < 0x2a5);
    uVar6 = 1;
    uVar9 = (uVar9 ^ uVar9 >> 0x10 ^ 0x2a8) * -0x7a143595;
    uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
    *param_1 = uVar9 ^ uVar9 >> 0x10;
  }
  else {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *(undefined1 *)(param_1 + 0x14) = 2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *(undefined8 *)((long)param_1 + 0x69) = 0;
    *(undefined1 *)((long)param_1 + 0x71) = 0xee;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    memset(param_1 + 0x1e,0,0x230);
    uVar6 = 0;
  }
  return uVar6;
}

