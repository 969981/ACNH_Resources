
void FUN_027c9870(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  short *psVar10;
  short local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  undefined8 local_68;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar9 = 0;
  do {
    lVar4 = param_1 + lVar9;
    psVar10 = (short *)(lVar4 + 4);
    if (*psVar10 != -2) {
      lVar7 = *(long *)puVar2;
      uVar3 = FUN_0277d6c4(psVar10);
      lVar8 = *(long *)puVar2;
      if (lVar8 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          local_70 = *psVar10;
          local_6e = *(undefined2 *)(lVar4 + 6);
          local_68 = 0;
          local_6c = *(undefined4 *)(lVar4 + 8);
          uVar3 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar8 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
              lVar4 = *(long *)PTR_DAT_04bc0428;
              uVar3 = FUN_0277d6c4(psVar10);
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
              if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                 (((puVar5 = *(uint **)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8),
                   puVar5 != (uint *)0x0 && (uVar3 = *puVar5, uVar3 != 0)) &&
                  (puVar5 != (uint *)(ulong)uVar3)))) {
                puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
                if (((*puVar6 != 0) && (uVar3 = puVar6[1], uVar3 != 0)) &&
                   ((ulong)(ushort)puVar6[2] != 0)) {
                  lVar4 = 0xc;
                  if (*(char *)((long)puVar6 + 10) != '\0') {
                    lVar4 = 0x1c;
                  }
                  lVar4 = (long)puVar6 + lVar4 + (ulong)(ushort)puVar6[2] * 8;
                  if (lVar4 != 0) {
                    uVar1 = 0;
                    if ((ulong)uVar3 != 0) {
                      uVar1 = (uint)((ulong)((long)puVar5 - lVar4) / (ulong)uVar3);
                    }
                    if (*puVar6 <= uVar1) {
                      uVar1 = 0xffffffff;
                    }
                    if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                       (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) == 0x72))
                    {
                      FUN_0277dedc(psVar10);
                      lVar4 = (**(code **)(*param_2 + 0x18))();
                      uVar3 = FUN_0277d6c4(psVar10);
                      if ((uVar3 >> 3 & 0x1fff) < 0x753) {
                        lVar7 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
                        *(uint *)(lVar4 + lVar7) =
                             *(uint *)(lVar4 + lVar7) | 1 << (ulong)(uVar3 & 0x1f);
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
    lVar9 = lVar9 + 0xc;
  } while (lVar9 != 0xb10);
  return;
}

