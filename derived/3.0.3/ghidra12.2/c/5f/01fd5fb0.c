
uint FUN_01fd5fb0(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  undefined *local_68;
  char *local_60;
  undefined8 local_58;
  
  uVar5 = *(uint *)(*(long *)PTR_DAT_04bb4e28 + 0xe0);
  if (uVar5 != 0) {
    lVar7 = 0;
    lVar10 = (long)(int)uVar5 << 3;
    lVar8 = *(long *)(*(long *)PTR_DAT_04bb4e28 + 0xe8);
    do {
      if (*(int *)(*(long *)(param_1 + 8) + 0x230) == *(int *)(*(long *)(lVar8 + lVar7 * 8) + 8)) {
        if ((uint)lVar7 < uVar5) {
          lVar7 = *(long *)(lVar8 + lVar7 * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar4 = DAT_05abbc50;
        if (DAT_05abbc50 != *(int *)(lVar7 + 0xe4)) {
          local_68 = PTR_DAT_04bb2020 + 0x10;
          local_60 = "GetCookingRecipeToday";
          iVar4 = FUN_02758850(&local_68);
          if ((iVar4 == 0) && (*(int *)(lVar7 + 0xd8) - 0xdU < 2)) break;
          iVar4 = *(int *)(lVar7 + 0xe4);
        }
        puVar3 = PTR_DAT_04bb43c0;
        if ((iVar4 == 0x16) || (iVar4 == 0x10)) {
          lVar10 = *(long *)PTR_DAT_04bb43c0;
          uVar5 = FUN_0277d6c4(param_2);
          lVar7 = *(long *)puVar3;
          if (lVar7 != 0) {
            lVar10 = *(long *)(lVar10 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
              local_58 = 0;
              local_60 = (char *)*param_2;
              local_68 = PTR_DAT_04bc0510 + 0x10;
              uVar5 = FUN_0277d6c4(&local_60);
              if (*(long *)puVar3 != 0) {
                lVar7 = *(long *)(lVar7 + 0x57e58);
                uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
                if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
                  lVar7 = *(long *)PTR_DAT_04bc0428;
                  uVar5 = FUN_0277d6c4(param_2);
                  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
                  if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
                     (((puVar6 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8),
                       puVar6 != (uint *)0x0 && (uVar5 = *puVar6, uVar5 != 0)) &&
                      (puVar6 != (uint *)(ulong)uVar5)))) {
                    puVar9 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
                    if (((*puVar9 != 0) && (uVar5 = puVar9[1], uVar5 != 0)) &&
                       ((ulong)(ushort)puVar9[2] != 0)) {
                      lVar7 = 0xc;
                      if (*(char *)((long)puVar9 + 10) != '\0') {
                        lVar7 = 0x1c;
                      }
                      lVar7 = (long)puVar9 + lVar7 + (ulong)(ushort)puVar9[2] * 8;
                      if (lVar7 != 0) {
                        uVar1 = 0;
                        if ((ulong)uVar5 != 0) {
                          uVar1 = (uint)((ulong)((long)puVar6 - lVar7) / (ulong)uVar5);
                        }
                        if (*puVar9 <= uVar1) {
                          uVar1 = 0xffffffff;
                        }
                        if (((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                            (uVar2 = *(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                            uVar2 < 0xbd)) && (uVar2 == 1)) {
                          uVar5 = 1;
                          goto LAB_01fd6220;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
      }
      lVar7 = lVar7 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  uVar5 = FUN_01fb7870(param_1,param_2,param_3,param_4);
LAB_01fd6220:
  return uVar5 & 1;
}

