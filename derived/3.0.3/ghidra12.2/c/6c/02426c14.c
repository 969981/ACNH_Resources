
undefined8 FUN_02426c14(long param_1,undefined4 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  byte bVar7;
  byte bVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar4 = PTR_DAT_04bb43c0;
  if ((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
    bVar8 = *(byte *)(param_1 + 0x1ee8);
    pbVar1 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar1 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    bVar7 = *pbVar1;
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    if (bVar7 != bVar8) {
      lVar11 = *(long *)PTR_DAT_04bb43c0;
      uVar5 = FUN_0277d6c4(param_2);
      lVar10 = *(long *)puVar4;
      if (lVar10 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          local_38 = 0;
          local_40 = *param_2;
          uStack_3c = param_2[1];
          uVar5 = FUN_0277d6c4(&local_40);
          if (*(long *)puVar4 != 0) {
            lVar10 = *(long *)(lVar10 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
              lVar10 = *(long *)PTR_DAT_04bc0428;
              uVar5 = FUN_0277d6c4(param_2);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
              if ((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
                 (((puVar6 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8),
                   puVar6 != (uint *)0x0 && (uVar5 = *puVar6, uVar5 != 0)) &&
                  (puVar6 != (uint *)(ulong)uVar5)))) {
                puVar9 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
                if (((*puVar9 != 0) && (uVar5 = puVar9[1], uVar5 != 0)) &&
                   ((ulong)(ushort)puVar9[2] != 0)) {
                  lVar10 = 0xc;
                  if (*(char *)((long)puVar9 + 10) != '\0') {
                    lVar10 = 0x1c;
                  }
                  lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
                  if (lVar10 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar5 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar6 - lVar10) / (ulong)uVar5);
                    }
                    if (*puVar9 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if (uVar2 < DAT_05326ec0) {
                      uVar3 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2);
                      if ((uVar3 < 0xbd) &&
                         ((uVar5 = uVar3 - 0x8f, uVar5 < 4 && uVar5 != 2 || (uVar3 == 0x93)))) {
                        return 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

