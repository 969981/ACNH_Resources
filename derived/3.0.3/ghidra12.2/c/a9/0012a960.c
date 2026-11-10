
undefined4 FUN_0012a960(long param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar8;
  undefined1 *puVar7;
  long lVar9;
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
  uVar5 = 0;
  if (*(uint *)(param_1 + 0x70) >> 1 == 0x20028000) {
    lVar9 = *(long *)(param_1 + 8);
    uVar5 = 0;
    uVar3 = (*(uint *)(lVar9 + 0x68) & 0xff00ff00) >> 8 | (*(uint *)(lVar9 + 0x68) & 0xff00ff) << 8;
    if (uVar3 >> 0x10 != 0 || (uVar3 & 0xffff) != 0) {
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar13 = *(ulong *)(param_1 + 0x40);
        if (uVar13 != 0) {
          uVar3 = (uint)*(byte *)(lVar9 + 0x40) << 0x18 | (uint)*(byte *)(lVar9 + 0x41) << 0x10 |
                  (uint)*(byte *)(lVar9 + 0x42) << 8 | (uint)*(byte *)(lVar9 + 0x43);
          bVar1 = *(byte *)(lVar9 + 0x6f);
          uVar6 = (uint)*(byte *)(lVar9 + 0x6c) << 0x18 | (uint)*(byte *)(lVar9 + 0x6d) << 0x10 |
                  (uint)*(byte *)(lVar9 + 0x6e) << 8 | (uint)bVar1;
          if (uVar3 != 0 && uVar6 != 0) {
            pbVar15 = (byte *)(uVar13 + uVar3 * (param_2 + -1));
            bVar2 = *pbVar15;
            uVar17 = (ulong)bVar2;
            uVar16 = (uint)bVar2;
            if (1 < uVar3) {
              uVar14 = uVar3;
              if ((*(byte *)(lVar9 + 0x43) & 1) == 0) {
                pbVar15 = pbVar15 + 1;
                uVar13 = (ulong)CONCAT11(bVar2,*pbVar15);
                uVar14 = uVar3 - 1;
                uVar17 = uVar13;
              }
              uVar16 = (uint)uVar13;
              if (uVar3 != 2) {
                do {
                  uVar14 = uVar14 - 2;
                  uVar16 = (uint)pbVar15[2] | ((uint)pbVar15[1] | ((uint)uVar17 & 0xffff) << 8) << 8
                  ;
                  uVar17 = (ulong)uVar16;
                  pbVar15 = pbVar15 + 2;
                } while (1 < uVar14);
              }
            }
            if (uVar16 == 0) {
              return 0;
            }
            puVar7 = (undefined1 *)(*(long *)(param_1 + 0x38) + (ulong)((uVar16 - 1) * uVar6));
            uVar3 = uVar6 - 1;
            if ((bVar1 & 3) == 0) {
              puVar11 = &local_4;
            }
            else {
              iVar12 = -(bVar1 & 3);
              puVar8 = puVar7;
              puVar10 = &local_4;
              do {
                puVar7 = puVar8 + 1;
                uVar6 = uVar6 - 1;
                bVar4 = iVar12 != -1;
                iVar12 = iVar12 + 1;
                puVar11 = (undefined4 *)((long)puVar10 + 1);
                *(undefined1 *)puVar10 = *puVar8;
                puVar8 = puVar7;
                puVar10 = puVar11;
              } while (bVar4);
            }
            if (2 < uVar3) {
              do {
                *(undefined1 *)puVar11 = *puVar7;
                *(undefined1 *)((long)puVar11 + 1) = puVar7[1];
                *(undefined1 *)((long)puVar11 + 2) = puVar7[2];
                *(undefined1 *)((long)puVar11 + 3) = puVar7[3];
                uVar6 = uVar6 - 4;
                puVar7 = puVar7 + 4;
                puVar11 = puVar11 + 1;
              } while (uVar6 != 0);
            }
            uVar5 = local_4;
          }
        }
      }
    }
  }
  return uVar5;
}

