
void FUN_03753ff8(undefined8 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ushort *puVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar10 = *(long *)puVar2;
  if (lVar10 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_48 = (uint *)0x0;
      local_50 = *param_2;
      uStack_4c = param_2[1];
      local_58 = &PTR_FUN_04a36b50;
      uVar3 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar2 != 0) {
        lVar9 = *(long *)(lVar10 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(param_2);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
             (((puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8),
               puVar7 != (uint *)0x0 && (uVar3 = *puVar7, local_48 = puVar7, uVar3 != 0)) &&
              (puVar7 != (uint *)(ulong)uVar3)))) {
            puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
            if (*puVar8 != 0) {
              uVar3 = puVar8[1];
              if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                lVar9 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar9 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar3 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
                  }
                  if (*puVar8 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < DAT_05326ec0) &&
                     (*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) == 0xad)) {
                    return;
                  }
                }
              }
              if (((*puVar8 != 0) && (uVar3 = puVar8[1], uVar3 != 0)) &&
                 ((ulong)(ushort)puVar8[2] != 0)) {
                lVar9 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar9 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar3 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
                  }
                  if (*puVar8 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                     (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) == 0xaf)) {
                    return;
                  }
                }
              }
            }
          }
        }
      }
      uVar5 = FUN_01ae8b58(&local_58);
      if ((((((uVar5 & 1) == 0) && (uVar5 = FUN_01ae89e0(&local_58), (uVar5 & 1) == 0)) &&
           ((iVar4 = FUN_01afcfa0(&local_58), iVar4 == 0 ||
            ((puVar6 = (ushort *)FUN_01afd600(&local_58), puVar6 == (ushort *)0x0 ||
             ((*puVar6 & 0x18) != 0x10)))))) && (uVar5 = FUN_01b08a10(&local_58), (uVar5 & 1) == 0))
         && ((uVar5 = FUN_01ae887c(&local_58), (uVar5 & 1) == 0 &&
             (iVar4 = FUN_0277d6c4(&local_50), iVar4 != 0x1c2a)))) {
        FUN_01a45058(*param_1,param_2);
      }
    }
  }
  return;
}

