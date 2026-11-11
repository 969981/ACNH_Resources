
void FUN_003adae0(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ushort *puVar12;
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  ulong uStack_38;
  
  lVar6 = *param_1;
  bVar5 = *(byte *)(lVar6 + 0x5b);
  if (bVar5 == 0) {
    lVar7 = 0;
  }
  else {
    if (bVar5 == 1) {
      uVar11 = 0;
      uVar9 = 0;
    }
    else {
      uVar11 = 0;
      uVar9 = 0;
      puVar12 = (ushort *)(*(long *)(lVar6 + 0x18) + 0x6c);
      do {
        uVar11 = uVar11 + 2;
        uVar9 = (ulong)((int)uVar9 + (uint)puVar12[-0x1c] + (uint)*puVar12);
        puVar12 = puVar12 + 0x38;
      } while (((ulong)bVar5 & 0xfe) != uVar11);
    }
    if ((bVar5 & 1) != 0) {
      uVar9 = (ulong)((int)uVar9 + (uint)*(ushort *)(*(long *)(lVar6 + 0x18) + uVar11 * 0x38 + 0x34)
                     );
    }
    lVar7 = uVar9 << 5;
  }
  iVar3 = *(int *)((long)param_1 + 0xc);
  lVar8 = 0;
  if (*(char *)((long)param_1 + 0x11) != '\0') {
    lVar8 = lVar7;
  }
  bVar5 = *(byte *)(lVar6 + 0x5c);
  param_1[0xc] = 0;
  param_1[0xd] = -1;
  if ((char)param_1[2] == '\0') {
    iVar3 = 1;
  }
  uVar11 = param_1[3] + 7U & 0xfffffffffffffff8;
  param_1[6] = lVar8;
  param_1[7] = 0x10;
  param_1[0x1a] = 0;
  param_1[0x1b] = 8;
  param_1[0x1c] = 0;
  param_1[0x1d] = -1;
  param_1[0x1e] = 0;
  param_1[0x1f] = 8;
  param_1[0x20] = 0;
  param_1[0x21] = -1;
  param_1[0x22] = 0;
  param_1[0x23] = 8;
  param_1[0x24] = 0;
  param_1[0x25] = -1;
  param_1[10] = ((long)(int)param_1[1] * (long)iVar3 * 8 + (long)(int)param_1[1] * (long)iVar3) * 8;
  param_1[0xb] = 8;
  param_1[8] = 0;
  param_1[9] = -1;
  param_1[0x10] = 0;
  param_1[0x11] = -1;
  param_1[0xe] = (ulong)bVar5 << 2;
  param_1[0xf] = 4;
  param_1[0x14] = 0;
  param_1[0x15] = -1;
  param_1[0x12] = (ulong)(bVar5 + 0x1f >> 3) & 0x3c;
  param_1[0x13] = 4;
  param_1[0x16] = 0;
  param_1[0x17] = 0x10;
  param_1[0x18] = 0;
  param_1[0x19] = -1;
  if (*(char *)((long)param_1 + 0x11) == '\0') {
    lVar7 = 0;
  }
  else {
    lVar7 = (ulong)*(byte *)(lVar6 + 0x5b) << 6;
  }
  param_1[0x16] = lVar7;
  lVar6 = *(long *)(lVar6 + 0x10);
  FUN_003a0d90(lVar6,&local_50);
  if ((((local_50 == 0) && (uStack_48 == 0)) && (local_40 == 0)) && (uStack_38 == 0)) {
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    local_50 = local_50 - (local_50 >> 1 & 0x5555555555555555);
    uStack_48 = uStack_48 - (uStack_48 >> 1 & 0x5555555555555555);
    local_40 = local_40 - (local_40 >> 1 & 0x5555555555555555);
    uVar9 = (local_50 & 0x3333333333333333) + (local_50 >> 2 & 0x3333333333333333);
    uVar4 = (uStack_48 & 0x3333333333333333) + (uStack_48 >> 2 & 0x3333333333333333);
    uVar1 = (local_40 & 0x3333333333333333) + (local_40 >> 2 & 0x3333333333333333);
    uStack_38 = uStack_38 - (uStack_38 >> 1 & 0x5555555555555555);
    uVar2 = (uStack_38 & 0x3333333333333333) + (uStack_38 >> 2 & 0x3333333333333333);
    lVar7 = (ulong)*(byte *)(lVar6 + 0x4d) << 3;
    param_1[0x1b] = 8;
    param_1[0x1c] = 0;
    param_1[0x1f] = 8;
    param_1[0x20] = 0;
    lVar6 = (long)(int)param_1[1] *
            (long)(int)((uint)(byte)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                    >> 0x38) +
                        (uint)(byte)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                    >> 0x38) +
                       (uint)(byte)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38) +
                       (uint)(byte)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38)) * 0x48;
  }
  lVar8 = param_1[6];
  uVar9 = 8;
  param_1[0x1a] = lVar7;
  param_1[0x1e] = lVar6;
  param_1[0x22] = uVar11;
  param_1[4] = 0;
  param_1[5] = 8;
  if (lVar8 != 0) {
    uVar9 = param_1[7];
    lVar10 = ((uVar9 + param_1[8]) - 1 & -uVar9) - param_1[8];
    if (uVar9 < 9) {
      uVar9 = 8;
    }
    lVar8 = lVar10 + lVar8;
    param_1[9] = lVar10;
    param_1[4] = lVar8;
    param_1[5] = uVar9;
  }
  if (param_1[10] != 0) {
    uVar4 = param_1[0xb];
    if (uVar9 <= uVar4) {
      uVar9 = uVar4;
    }
    lVar8 = ((uVar4 + param_1[0xc] + lVar8) - 1 & -uVar4) - param_1[0xc];
    param_1[0xd] = lVar8;
    lVar8 = lVar8 + param_1[10];
    param_1[4] = lVar8;
    param_1[5] = uVar9;
  }
  if (param_1[0xe] != 0) {
    uVar4 = param_1[0xf];
    if (uVar9 <= uVar4) {
      uVar9 = uVar4;
    }
    lVar8 = ((uVar4 + param_1[0x10] + lVar8) - 1 & -uVar4) - param_1[0x10];
    param_1[0x11] = lVar8;
    lVar8 = lVar8 + param_1[0xe];
    param_1[4] = lVar8;
    param_1[5] = uVar9;
  }
  if (param_1[0x12] != 0) {
    uVar4 = param_1[0x13];
    if (uVar9 <= uVar4) {
      uVar9 = uVar4;
    }
    lVar8 = ((uVar4 + param_1[0x14] + lVar8) - 1 & -uVar4) - param_1[0x14];
    param_1[0x15] = lVar8;
    lVar8 = lVar8 + param_1[0x12];
    param_1[4] = lVar8;
    param_1[5] = uVar9;
  }
  if (param_1[0x16] != 0) {
    uVar4 = param_1[0x17];
    if (uVar9 <= uVar4) {
      uVar9 = uVar4;
    }
    lVar8 = ((uVar4 + param_1[0x18] + lVar8) - 1 & -uVar4) - param_1[0x18];
    param_1[0x19] = lVar8;
    lVar8 = lVar8 + param_1[0x16];
    param_1[4] = lVar8;
    param_1[5] = uVar9;
  }
  if (lVar7 != 0) {
    uVar4 = param_1[0x1b];
    if (uVar9 <= uVar4) {
      uVar9 = uVar4;
    }
    lVar8 = ((uVar4 + param_1[0x1c] + lVar8) - 1 & -uVar4) - param_1[0x1c];
    param_1[0x1d] = lVar8;
    lVar8 = lVar8 + lVar7;
    param_1[4] = lVar8;
    param_1[5] = uVar9;
  }
  if (lVar6 != 0) {
    uVar4 = param_1[0x1f];
    if (uVar9 <= uVar4) {
      uVar9 = uVar4;
    }
    lVar8 = ((uVar4 + param_1[0x20] + lVar8) - 1 & -uVar4) - param_1[0x20];
    param_1[0x21] = lVar8;
    lVar8 = lVar8 + lVar6;
    param_1[4] = lVar8;
    param_1[5] = uVar9;
  }
  if (uVar11 != 0) {
    uVar4 = param_1[0x23];
    if (uVar9 <= uVar4) {
      uVar9 = uVar4;
    }
    lVar6 = ((uVar4 + param_1[0x24] + lVar8) - 1 & -uVar4) - param_1[0x24];
    param_1[0x25] = lVar6;
    param_1[4] = lVar6 + uVar11;
    param_1[5] = uVar9;
  }
  return;
}

