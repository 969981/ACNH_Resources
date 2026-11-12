
undefined8 FUN_00a77900(long param_1,byte *param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte *pbVar10;
  
  uVar2 = *(uint *)(param_1 + 0x410);
  if ((int)uVar2 < 1) {
    return 0;
  }
  bVar8 = *param_2;
  lVar3 = (ulong)uVar2 << 0x20;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  uVar5 = (ulong)uVar2;
  do {
    uVar7 = uVar5 - 1;
    if (((uint)uVar7 < uVar2) &&
       (pbVar10 = *(byte **)(*(long *)(param_1 + 0x418) + (uVar7 & 0xffffffff) * 8),
       *(int *)(pbVar10 + 0x10) == 3)) {
      bVar9 = *pbVar10;
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      if (((bVar9 == bVar8) && (pbVar10[0x18] == 3)) && (*(long *)(pbVar10 + 8) == param_3)) {
        iVar4 = (int)uVar5;
        pbVar10[0x10] = 0x13;
        pbVar10[0x11] = 0;
        pbVar10[0x12] = 0;
        pbVar10[0x13] = 0;
        pbVar10[0x14] = 0;
        pbVar10[0x15] = 0;
        pbVar10[0x16] = 0;
        pbVar10[0x17] = 0;
        if ((iVar4 < 1) || (iVar6 = *(int *)(param_1 + 0x410), iVar6 < iVar4)) {
          return 1;
        }
        if (iVar4 < iVar6) {
          memmove((void *)(*(long *)(param_1 + 0x418) + (uVar7 & 0xffffffff) * 8),
                  (void *)(*(long *)(param_1 + 0x418) + (lVar3 >> 0x1d)),
                  -(ulong)((uint)(iVar6 - iVar4) >> 0x1f) & 0xfffffff800000000 |
                  (ulong)(uint)(iVar6 - iVar4) << 3);
          iVar6 = *(int *)(param_1 + 0x410);
        }
        *(int *)(param_1 + 0x410) = iVar6 + -1;
        return 1;
      }
    }
    lVar3 = lVar3 + -0x100000000;
    bVar1 = uVar5 < 2;
    uVar5 = uVar7;
    if (bVar1) {
      return 0;
    }
  } while( true );
}

