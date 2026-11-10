
undefined4 FUN_0013e820(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 *puVar8;
  undefined1 *puVar7;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  byte *pbVar14;
  byte *pbVar13;
  long lVar15;
  undefined4 local_4;
  
  local_4 = 0;
  lVar15 = param_1 + ((ulong)*(byte *)(param_1 + 0x38) << 0x18 |
                      (ulong)*(byte *)(param_1 + 0x39) << 0x10 |
                      (ulong)*(byte *)(param_1 + 0x3a) << 8 | (ulong)*(byte *)(param_1 + 0x3b));
  uVar4 = (*(uint *)(param_1 + 0x3c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x3c) & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  lVar1 = param_1 + ((ulong)*(byte *)(param_1 + 0x4c) << 0x18 |
                     (ulong)*(byte *)(param_1 + 0x4d) << 0x10 |
                     (ulong)*(byte *)(param_1 + 0x4e) << 8 | (ulong)*(byte *)(param_1 + 0x4f));
  uVar9 = (*(uint *)(param_1 + 0x50) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x50) & 0xff00ff) << 8;
  bVar3 = *(byte *)(param_1 + 0x57);
  uVar6 = (ulong)*(byte *)(param_1 + 0x54) << 0x18 | (ulong)*(byte *)(param_1 + 0x55) << 0x10 |
          (ulong)*(byte *)(param_1 + 0x56) << 8 | (ulong)bVar3;
  if ((((lVar15 != 0 && uVar4 != 0) && lVar1 != 0) && (uVar9 >> 0x10 != 0 || (uVar9 & 0xffff) != 0))
      && (int)uVar6 != 0) {
    pbVar13 = (byte *)(lVar15 + (ulong)(uVar4 * (param_2 + -1)));
    uVar9 = (uint)*pbVar13;
    if (1 < uVar4) {
      uVar2 = uVar4 - 1 & 1;
      if (uVar4 != 2) {
        iVar12 = (uVar2 + 1) - uVar4;
        pbVar14 = pbVar13;
        do {
          pbVar13 = pbVar14 + 2;
          uVar9 = (uint)*pbVar13 | ((uint)pbVar14[1] | (uVar9 & 0xffff) << 8) << 8;
          iVar12 = iVar12 + 2;
          pbVar14 = pbVar13;
        } while (iVar12 != 0);
      }
      if (uVar2 != 0) {
        uVar9 = (uint)pbVar13[1] | uVar9 << 8;
      }
    }
    if (uVar9 != 0) {
      puVar7 = (undefined1 *)(lVar1 + (ulong)((uVar9 - 1) * (int)uVar6));
      puVar11 = &local_4;
      if ((bVar3 & 3) != 0) {
        lVar15 = -((ulong)bVar3 & 3);
        puVar8 = puVar7;
        puVar10 = puVar11;
        do {
          puVar7 = puVar8 + 1;
          bVar5 = lVar15 != -1;
          lVar15 = lVar15 + 1;
          puVar11 = (undefined4 *)((long)puVar10 + 1);
          *(undefined1 *)puVar10 = *puVar8;
          puVar8 = puVar7;
          puVar10 = puVar11;
        } while (bVar5);
      }
      if (2 < uVar6 - 1) {
        do {
          *(undefined1 *)puVar11 = *puVar7;
          *(undefined1 *)((long)puVar11 + 1) = puVar7[1];
          *(undefined1 *)((long)puVar11 + 2) = puVar7[2];
          *(undefined1 *)((long)puVar11 + 3) = puVar7[3];
          puVar11 = puVar11 + 1;
          puVar7 = puVar7 + 4;
        } while (puVar11 != (undefined4 *)((long)&local_4 + uVar6));
      }
    }
  }
  return local_4;
}

