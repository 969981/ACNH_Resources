
undefined8 FUN_00112950(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  
  bVar5 = *(byte *)(param_1 + 0x67) >> 4;
  if (bVar5 == 3) {
    lVar8 = *(long *)(param_1 + 0x10);
    uVar12 = *(uint *)(lVar8 + ((ulong)*(byte *)(lVar8 + 0x52) << 0x18 |
                                (ulong)*(byte *)(lVar8 + 0x53) << 0x10 |
                                (ulong)*(byte *)(lVar8 + 0x54) << 8 | (ulong)*(byte *)(lVar8 + 0x55)
                               ) + (ulong)*(uint *)(param_1 + 0x40));
    uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
    lVar13 = lVar8 + ((ulong)*(byte *)(lVar8 + 0x2b) << 0x18 |
                      (ulong)*(byte *)(lVar8 + 0x2c) << 0x10 | (ulong)*(byte *)(lVar8 + 0x2d) << 8 |
                     (ulong)*(byte *)(lVar8 + 0x2e));
    uVar12 = (uVar12 >> 0x10 | uVar12 << 0x10) >> (ulong)((uint)*(byte *)(lVar8 + 0x59) * -8 & 0x1f)
    ;
  }
  else {
    if (bVar5 != 1) {
      return 0x9b61;
    }
    if ((*(byte *)(param_1 + 0x70) & 0x7f) == 0) {
      return 0x9b61;
    }
    lVar8 = *(long *)(param_1 + 0x10);
    lVar13 = lVar8 + ((ulong)*(byte *)(lVar8 + 0x2b) << 0x18 |
                      (ulong)*(byte *)(lVar8 + 0x2c) << 0x10 | (ulong)*(byte *)(lVar8 + 0x2d) << 8 |
                     (ulong)*(byte *)(lVar8 + 0x2e));
    uVar12 = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44);
  }
  pcVar10 = (char *)(lVar13 + (ulong)uVar12);
  bVar3 = *(byte *)(lVar8 + 0x33);
  bVar4 = *(byte *)(lVar8 + 0x32);
  bVar5 = *(byte *)(lVar8 + 0x1c) & 3;
  uVar14 = (uint)bVar3;
  uVar12 = (uint)*(byte *)(lVar8 + 0x2f);
  if (*pcVar10 < '\0') {
    uVar7 = 0x10 - uVar12;
    uVar6 = 0xffff >> (ulong)(uVar7 & 0x1f);
    iVar2 = uVar14 + bVar4;
    if (bVar5 != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  else {
    if (bVar5 != 0) {
      bVar3 = bVar3 + 1;
    }
    uVar1 = (ulong)bVar4 + (ulong)*(byte *)(lVar8 + 0x30) + (ulong)*(byte *)(lVar8 + 0x31) +
            (ulong)bVar3 + 1;
    uVar11 = (uint)uVar1;
    uVar7 = 0x10 - uVar12;
    uVar6 = 0xffff >> (ulong)(uVar7 & 0x1f);
    do {
      pcVar10 = pcVar10 + (short)((CONCAT11(pcVar10[uVar1 >> 3],(pcVar10 + (uVar1 >> 3))[1]) >>
                                   (ulong)(uVar7 - (uVar11 & 7) & 0x1f) & (ushort)uVar6) +
                                 ((ushort)(uVar11 + uVar12 + 7 >> 3) & 0xff));
    } while (-1 < *pcVar10);
    iVar2 = uVar14 + bVar4;
    if (bVar5 != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  if (-1 < (char)*(byte *)(lVar8 + 0x1c)) {
    return 0x9b61;
  }
  uVar14 = iVar2 + (uint)*(byte *)(lVar8 + 0x30) + (uint)*(byte *)(lVar8 + 0x31) + 1;
  uVar12 = uVar14 + uVar12;
  bVar5 = *(byte *)(lVar8 + 0x35);
  uVar11 = (uint)(ushort)(CONCAT11(pcVar10[uVar12 >> 3],(pcVar10 + (uVar12 >> 3))[1]) >>
                         (ulong)((0x10 - (uVar12 & 7)) - (uint)bVar5 & 0x1f)) &
           0xffffU >> (ulong)(0x10 - bVar5 & 0x1f);
  if (uVar11 == 0) {
    return 0x9b61;
  }
  uVar9 = FUN_00112820(lVar8,pcVar10,param_2,
                       ((ushort)(CONCAT11(pcVar10[uVar14 >> 3],(pcVar10 + (uVar14 >> 3))[1]) >>
                                (ulong)(uVar7 - (uVar14 & 7) & 0x1f)) & uVar6) +
                       (uVar12 + bVar5 + 7 >> 3 & 0xff),uVar11,param_3);
  if ((param_3 & 0xffff) < ((int)uVar9 * 2 + 2U & 0xfffe)) {
    return 0x9461;
  }
  *(undefined2 *)(param_2 + (long)(short)uVar9 * 2) = 0;
  return uVar9;
}

