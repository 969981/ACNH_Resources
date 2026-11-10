
undefined4 FUN_0013be30(long param_1,int param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar9;
  undefined1 *puVar8;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  ulong uVar17;
  undefined4 local_4;
  
  local_4 = 0;
  uVar6 = 0;
  if (((uint)*(byte *)(param_1 + 8) << 0x18 | (uint)*(byte *)(param_1 + 9) << 0x10 |
       (uint)*(byte *)(param_1 + 10) << 8 | *(byte *)(param_1 + 0xb) & 0xfe) == 0x50000) {
    uVar6 = 0;
    uVar4 = (*(uint *)(param_1 + 0x68) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x68) & 0xff00ff) << 8;
    if (uVar4 >> 0x10 != 0 || (uVar4 & 0xffff) != 0) {
      uVar13 = param_1 + ((ulong)*(byte *)(param_1 + 0x3c) << 0x18 |
                          (ulong)*(byte *)(param_1 + 0x3d) << 0x10 |
                          (ulong)*(byte *)(param_1 + 0x3e) << 8 | (ulong)*(byte *)(param_1 + 0x3f));
      if (uVar13 != 0) {
        uVar4 = (uint)*(byte *)(param_1 + 0x40) << 0x18 | (uint)*(byte *)(param_1 + 0x41) << 0x10 |
                (uint)*(byte *)(param_1 + 0x42) << 8 | (uint)*(byte *)(param_1 + 0x43);
        if (uVar4 != 0) {
          lVar1 = param_1 + ((ulong)*(byte *)(param_1 + 100) << 0x18 |
                             (ulong)*(byte *)(param_1 + 0x65) << 0x10 |
                             (ulong)*(byte *)(param_1 + 0x66) << 8 |
                            (ulong)*(byte *)(param_1 + 0x67));
          if (lVar1 != 0) {
            bVar2 = *(byte *)(param_1 + 0x6f);
            uVar7 = (uint)*(byte *)(param_1 + 0x6c) << 0x18 |
                    (uint)*(byte *)(param_1 + 0x6d) << 0x10 | (uint)*(byte *)(param_1 + 0x6e) << 8 |
                    (uint)bVar2;
            if (uVar7 != 0) {
              pbVar15 = (byte *)(uVar13 + uVar4 * (param_2 + -1));
              bVar3 = *pbVar15;
              uVar17 = (ulong)bVar3;
              uVar16 = (uint)bVar3;
              if (1 < uVar4) {
                uVar14 = uVar4;
                if ((*(byte *)(param_1 + 0x43) & 1) == 0) {
                  pbVar15 = pbVar15 + 1;
                  uVar13 = (ulong)CONCAT11(bVar3,*pbVar15);
                  uVar14 = uVar4 - 1;
                  uVar17 = uVar13;
                }
                uVar16 = (uint)uVar13;
                if (uVar4 != 2) {
                  do {
                    uVar14 = uVar14 - 2;
                    uVar16 = (uint)pbVar15[2] |
                             ((uint)pbVar15[1] | ((uint)uVar17 & 0xffff) << 8) << 8;
                    uVar17 = (ulong)uVar16;
                    pbVar15 = pbVar15 + 2;
                  } while (1 < uVar14);
                }
              }
              if (uVar16 != 0) {
                puVar8 = (undefined1 *)(lVar1 + (ulong)((uVar16 - 1) * uVar7));
                uVar4 = uVar7 - 1;
                if ((bVar2 & 3) == 0) {
                  puVar11 = &local_4;
                }
                else {
                  iVar12 = -(bVar2 & 3);
                  puVar9 = puVar8;
                  puVar10 = &local_4;
                  do {
                    puVar8 = puVar9 + 1;
                    uVar7 = uVar7 - 1;
                    bVar5 = iVar12 != -1;
                    iVar12 = iVar12 + 1;
                    puVar11 = (undefined4 *)((long)puVar10 + 1);
                    *(undefined1 *)puVar10 = *puVar9;
                    puVar9 = puVar8;
                    puVar10 = puVar11;
                  } while (bVar5);
                }
                if (2 < uVar4) {
                  do {
                    *(undefined1 *)puVar11 = *puVar8;
                    *(undefined1 *)((long)puVar11 + 1) = puVar8[1];
                    *(undefined1 *)((long)puVar11 + 2) = puVar8[2];
                    *(undefined1 *)((long)puVar11 + 3) = puVar8[3];
                    uVar7 = uVar7 - 4;
                    puVar8 = puVar8 + 4;
                    puVar11 = puVar11 + 1;
                  } while (uVar7 != 0);
                }
              }
              uVar6 = local_4;
            }
          }
        }
      }
    }
  }
  return uVar6;
}

