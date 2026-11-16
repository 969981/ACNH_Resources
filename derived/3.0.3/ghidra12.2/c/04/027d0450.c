
void FUN_027d0450(long param_1,long *param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined2 local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  undefined8 local_68;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar9 = 0;
  do {
    lVar5 = param_1 + lVar9;
    lVar10 = *(long *)puVar3;
    puVar1 = (undefined2 *)(lVar5 + 0x14);
    uVar4 = FUN_0277d6c4(puVar1);
    lVar8 = *(long *)puVar3;
    if (lVar8 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_70 = *puVar1;
        local_6e = *(undefined2 *)(lVar5 + 0x16);
        local_68 = 0;
        local_6c = *(undefined4 *)(lVar5 + 0x18);
        uVar4 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar3 != 0) {
          lVar5 = *(long *)(lVar8 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar5 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(puVar1);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
               (((puVar6 = *(uint **)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8),
                 puVar6 != (uint *)0x0 && (uVar4 = *puVar6, uVar4 != 0)) &&
                (puVar6 != (uint *)(ulong)uVar4)))) {
              puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
              if (((*puVar7 != 0) && (uVar4 = puVar7[1], uVar4 != 0)) &&
                 ((ulong)(ushort)puVar7[2] != 0)) {
                lVar5 = 0xc;
                if (*(char *)((long)puVar7 + 10) != '\0') {
                  lVar5 = 0x1c;
                }
                lVar5 = (long)puVar7 + lVar5 + (ulong)(ushort)puVar7[2] * 8;
                if (lVar5 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar6 - lVar5) / (ulong)uVar4);
                  }
                  if (*puVar7 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                     (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 0x72)) {
                    FUN_0277dedc(puVar1);
                    lVar5 = (**(code **)(*param_2 + 0x18))();
                    uVar4 = FUN_0277d6c4(puVar1);
                    if ((uVar4 >> 3 & 0x1fff) < 0x753) {
                      lVar8 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
                      *(uint *)(lVar5 + lVar8) =
                           *(uint *)(lVar5 + lVar8) | 1 << (ulong)(uVar4 & 0x1f);
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
  } while (lVar9 != 0x1b0);
  return;
}

