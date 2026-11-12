
bool FUN_00a77550(byte *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  int iVar8;
  byte bVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  undefined1 uVar13;
  undefined1 auStack_26 [6];
  
  lVar12 = DAT_04da4ab8;
  bVar7 = *param_1;
  iVar2 = DAT_04c9a0c8;
  if ((bVar7 < 8) && (DAT_054f5738 != 0)) {
    iVar2 = *(int *)(DAT_054f5738 + (ulong)bVar7 * 4 + 0xde8);
  }
  if (iVar2 == 0) {
    iVar2 = FUN_00a74b78(auStack_26 + -0xe);
    if (iVar2 == 7) {
      FUN_00a77ec0();
    }
    lVar12 = DAT_04da4ab8;
    if ((param_3 & 1) == 0) {
      uVar13 = 6;
    }
    else {
      uVar3 = *(uint *)(DAT_04da4ab8 + 0x410);
      if (0 < (int)uVar3) {
        uVar4 = (ulong)uVar3;
        do {
          uVar6 = uVar4 - 1;
          uVar5 = (uint)uVar6;
          if ((((uVar5 < uVar3) &&
               (lVar10 = *(long *)(*(long *)(DAT_04da4ab8 + 0x418) + (uVar6 & 0xffffffff) * 8),
               *(int *)(lVar10 + 0x10) == 0x10)) && (*(char *)(lVar10 + 0x18) == '\x03')) &&
             (*(long *)(lVar10 + 8) == param_2)) {
            *(undefined8 *)(lVar10 + 0x10) = 0x13;
            if ((-1 < (int)uVar5) && (iVar2 = *(int *)(lVar12 + 0x410), (int)uVar5 < iVar2)) {
              if ((int)uVar4 < iVar2) {
                uVar3 = iVar2 - (int)uVar4;
                memmove((void *)(*(long *)(lVar12 + 0x418) + (uVar6 & 0xffffffff) * 8),
                        (void *)(*(long *)(lVar12 + 0x418) + (uVar4 & 0xffffffff) * 8),
                        -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
                iVar2 = *(int *)(lVar12 + 0x410);
                lVar10 = DAT_04da4ab8;
              }
              else {
                lVar10 = lVar12;
              }
              uVar13 = 3;
              *(int *)(lVar12 + 0x410) = iVar2 + -1;
              lVar12 = lVar10;
              goto LAB_00a77868;
            }
            break;
          }
          bVar1 = 1 < uVar4;
          uVar4 = uVar6;
        } while (bVar1);
      }
      uVar13 = 3;
    }
LAB_00a77868:
    uVar3 = FUN_00a76844(lVar12,0x13);
    if (uVar3 != 0xffffffff) {
      iVar2 = *(int *)(lVar12 + 0x414);
      lVar10 = lVar12 + (ulong)uVar3 * 0x20;
      *(undefined1 *)(lVar10 + 0x10) = 0xff;
      *(long *)(lVar10 + 0x18) = param_2;
      *(undefined8 *)(lVar10 + 0x20) = 0x10;
      iVar8 = *(int *)(lVar12 + 0x410);
      *(undefined1 *)(lVar10 + 0x28) = uVar13;
      *(undefined4 *)(lVar10 + 0x2c) = 0;
      if (iVar8 < iVar2) {
        *(undefined1 **)(*(long *)(lVar12 + 0x418) + (long)iVar8 * 8) =
             (undefined1 *)(lVar10 + 0x10);
        *(int *)(lVar12 + 0x410) = *(int *)(lVar12 + 0x410) + 1;
      }
    }
    return uVar3 != 0xffffffff;
  }
  if (DAT_04da4ab8 != 0) {
    if ((param_3 & 1) == 0) {
      uVar4 = FUN_00a738a0(param_1,0);
      if ((uVar4 & 1) != 0) {
        return false;
      }
      uVar13 = 5;
    }
    else {
      uVar3 = *(uint *)(DAT_04da4ab8 + 0x410);
      if (0 < (int)uVar3) {
        if (7 < bVar7) {
          bVar7 = 0xff;
        }
        lVar10 = (ulong)uVar3 << 0x20;
        uVar4 = (ulong)uVar3;
        do {
          uVar6 = uVar4 - 1;
          if (((uint)uVar6 < uVar3) &&
             (pbVar11 = *(byte **)(*(long *)(DAT_04da4ab8 + 0x418) + (uVar6 & 0xffffffff) * 8),
             *(int *)(pbVar11 + 0x10) == 3)) {
            bVar9 = *pbVar11;
            if (7 < bVar9) {
              bVar9 = 0xff;
            }
            if (((bVar9 == bVar7) && (pbVar11[0x18] == 3)) && (*(long *)(pbVar11 + 8) == param_2)) {
              iVar2 = (int)uVar4;
              pbVar11[0x10] = 0x13;
              pbVar11[0x11] = 0;
              pbVar11[0x12] = 0;
              pbVar11[0x13] = 0;
              pbVar11[0x14] = 0;
              pbVar11[0x15] = 0;
              pbVar11[0x16] = 0;
              pbVar11[0x17] = 0;
              if ((0 < iVar2) && (iVar8 = *(int *)(lVar12 + 0x410), iVar2 <= iVar8)) {
                if (iVar2 < iVar8) {
                  memmove((void *)(*(long *)(lVar12 + 0x418) + (uVar6 & 0xffffffff) * 8),
                          (void *)(*(long *)(lVar12 + 0x418) + (lVar10 >> 0x1d)),
                          -(ulong)((uint)(iVar8 - iVar2) >> 0x1f) & 0xfffffff800000000 |
                          (ulong)(uint)(iVar8 - iVar2) << 3);
                  iVar8 = *(int *)(lVar12 + 0x410);
                  lVar10 = DAT_04da4ab8;
                }
                else {
                  lVar10 = lVar12;
                }
                uVar13 = 3;
                *(int *)(lVar12 + 0x410) = iVar8 + -1;
                lVar12 = lVar10;
                goto LAB_00a776a0;
              }
              break;
            }
          }
          lVar10 = lVar10 + -0x100000000;
          bVar1 = 1 < uVar4;
          uVar4 = uVar6;
        } while (bVar1);
      }
      uVar13 = 3;
    }
LAB_00a776a0:
    uVar3 = FUN_00a76844(lVar12,0x13);
    if (uVar3 != 0xffffffff) {
      bVar7 = *param_1;
      lVar10 = lVar12 + (ulong)uVar3 * 0x20;
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      iVar2 = *(int *)(lVar12 + 0x414);
      *(byte *)(lVar10 + 0x10) = bVar7;
      *(undefined4 *)(lVar10 + 0x20) = 3;
      *(undefined4 *)(lVar10 + 0x24) = param_4;
      iVar8 = *(int *)(lVar12 + 0x410);
      *(long *)(lVar10 + 0x18) = param_2;
      *(undefined1 *)(lVar10 + 0x28) = uVar13;
      *(undefined4 *)(lVar10 + 0x2c) = 0;
      if (iVar8 < iVar2) {
        *(byte **)(*(long *)(lVar12 + 0x418) + (long)iVar8 * 8) = (byte *)(lVar10 + 0x10);
        *(int *)(lVar12 + 0x410) = *(int *)(lVar12 + 0x410) + 1;
      }
      return true;
    }
  }
  return false;
}

