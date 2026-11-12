
undefined8 FUN_00a79390(byte *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  
  lVar2 = DAT_04da4ab8;
  if (DAT_04da4ab8 != 0) {
    uVar9 = *(uint *)(DAT_04da4ab8 + 0x410);
    if (0 < (int)uVar9) {
      iVar3 = -uVar9;
      uVar4 = (ulong)uVar9;
      do {
        uVar10 = uVar4 - 1;
        uVar9 = (uint)uVar10;
        if ((uVar9 < *(uint *)(lVar2 + 0x410)) &&
           (pbVar6 = *(byte **)(*(long *)(lVar2 + 0x418) + (uVar10 & 0xffffffff) * 8),
           *(int *)(pbVar6 + 0x10) == 9)) {
          bVar7 = *pbVar6;
          bVar8 = *param_1;
          if (7 < bVar7) {
            bVar7 = 0xff;
          }
          if (7 < bVar8) {
            bVar8 = 0xff;
          }
          if (((bVar7 == bVar8) &&
              (pbVar6[0x10] = 0x13, pbVar6[0x11] = 0, pbVar6[0x12] = 0, pbVar6[0x13] = 0,
              pbVar6[0x14] = 0, pbVar6[0x15] = 0, pbVar6[0x16] = 0, pbVar6[0x17] = 0,
              -1 < (int)uVar9)) && (iVar5 = *(int *)(lVar2 + 0x410), (int)uVar9 < iVar5)) {
            if ((int)uVar4 < iVar5) {
              memmove((void *)(*(long *)(lVar2 + 0x418) + (uVar10 & 0xffffffff) * 8),
                      (void *)(*(long *)(lVar2 + 0x418) + (uVar4 & 0xffffffff) * 8),
                      -(ulong)((uint)(iVar3 + iVar5) >> 0x1f) & 0xfffffff800000000 |
                      (ulong)(uint)(iVar3 + iVar5) << 3);
              iVar5 = *(int *)(lVar2 + 0x410);
            }
            *(int *)(lVar2 + 0x410) = iVar5 + -1;
          }
        }
        iVar3 = iVar3 + 1;
        bVar1 = 1 < uVar4;
        uVar4 = uVar10;
      } while (bVar1);
    }
    iVar3 = FUN_00a74b78(param_1);
    if ((iVar3 != 10) && (*DAT_055c10d8 == '\0')) {
      FUN_00a76460(DAT_04da4ab8,param_1,0xffffffffffffffff,9,0x13,5);
    }
  }
  return 1;
}

