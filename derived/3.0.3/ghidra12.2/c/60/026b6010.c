
void FUN_026b6010(long param_1,long *param_2,int *param_3,long param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_04bb43c0;
  if ((param_2 != (long *)0x0) && (*param_3 != 0)) {
    lVar3 = param_1 + 0x1094c;
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    if (param_4 == 0) {
      iVar4 = 0;
      iVar5 = 0x18;
      do {
        lVar7 = lVar3 + (long)iVar4 * 0x2c;
        uVar2 = FUN_0277d6c4(lVar7);
        lVar9 = *(long *)puVar1;
        if (lVar9 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
              (*(int *)(lVar3 + (long)iVar4 * 0x2c + 8) == *param_3)) &&
             (lVar8 = lVar3 + (long)iVar4 * 0x2c,
             (*(long *)(param_3 + 1) == *(long *)(lVar8 + 0xc) &&
             *(long *)(param_3 + 3) == *(long *)(lVar8 + 0x14)) &&
             param_3[5] == *(int *)(lVar8 + 0x1c))) {
            lVar8 = (**(code **)(*param_2 + 0x18))();
            uVar2 = FUN_0277d6c4(lVar7);
            lVar9 = *(long *)puVar1;
            if ((uVar2 >> 3 & 0x1fff) < 0x753) {
              lVar7 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
              *(uint *)(lVar8 + lVar7) =
                   *(uint *)(lVar8 + lVar7) & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
            }
          }
        }
        lVar8 = lVar9;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    else {
      uVar6 = 0;
      iVar4 = 0;
      do {
        lVar7 = lVar3 + (long)iVar4 * 0x2c;
        uVar2 = FUN_0277d6c4(lVar7);
        lVar9 = *(long *)puVar1;
        if (lVar9 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
             ((*(int *)(lVar3 + (long)iVar4 * 0x2c + 8) == *param_3 &&
              (lVar8 = lVar3 + (long)iVar4 * 0x2c,
              (*(long *)(param_3 + 1) == *(long *)(lVar8 + 0xc) &&
              *(long *)(param_3 + 3) == *(long *)(lVar8 + 0x14)) &&
              param_3[5] == *(int *)(lVar8 + 0x1c))))) {
            lVar8 = (**(code **)(*param_2 + 0x18))();
            uVar2 = FUN_0277d6c4(lVar7);
            if ((uVar2 >> 3 & 0x1fff) < 0x753) {
              lVar9 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
              *(uint *)(lVar8 + lVar9) =
                   *(uint *)(lVar8 + lVar9) & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
            }
            lVar8 = (uVar6 >> 5) * 4;
            *(uint *)(param_4 + lVar8) =
                 *(uint *)(param_4 + lVar8) & (1 << (ulong)((uint)uVar6 & 0x1f) ^ 0xffffffffU);
            lVar9 = *(long *)puVar1;
          }
        }
        lVar8 = lVar9;
        uVar2 = (uint)uVar6 + 1;
        uVar6 = (ulong)uVar2;
        iVar4 = iVar4 + 1;
      } while (uVar2 != 0x18);
    }
    param_1 = param_1 + 0x10d6c;
    if (param_4 == 0) {
      iVar4 = 0;
      do {
        lVar9 = param_1 + (long)iVar4 * 0x2c;
        uVar2 = FUN_0277d6c4(lVar9);
        lVar3 = *(long *)puVar1;
        if (lVar3 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
             ((*(int *)(param_1 + (long)iVar4 * 0x2c + 8) == *param_3 &&
              (lVar8 = param_1 + (long)iVar4 * 0x2c,
              (*(long *)(param_3 + 1) == *(long *)(lVar8 + 0xc) &&
              *(long *)(param_3 + 3) == *(long *)(lVar8 + 0x14)) &&
              param_3[5] == *(int *)(lVar8 + 0x1c))))) {
            lVar8 = (**(code **)(*param_2 + 0x18))();
            uVar2 = FUN_0277d6c4(lVar9);
            lVar3 = *(long *)puVar1;
            if ((uVar2 >> 3 & 0x1fff) < 0x753) {
              lVar9 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
              *(uint *)(lVar8 + lVar9) =
                   *(uint *)(lVar8 + lVar9) & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
            }
          }
        }
        iVar4 = iVar4 + 1;
        lVar8 = lVar3;
      } while (iVar4 != 0x20);
    }
    else {
      iVar4 = 0;
      uVar6 = 0x18;
      do {
        lVar9 = param_1 + (long)iVar4 * 0x2c;
        uVar2 = FUN_0277d6c4(lVar9);
        lVar3 = *(long *)puVar1;
        if (lVar3 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
              (*(int *)(param_1 + (long)iVar4 * 0x2c + 8) == *param_3)) &&
             (lVar8 = param_1 + (long)iVar4 * 0x2c,
             (*(long *)(param_3 + 1) == *(long *)(lVar8 + 0xc) &&
             *(long *)(param_3 + 3) == *(long *)(lVar8 + 0x14)) &&
             param_3[5] == *(int *)(lVar8 + 0x1c))) {
            lVar3 = (**(code **)(*param_2 + 0x18))();
            uVar2 = FUN_0277d6c4(lVar9);
            if ((uVar2 >> 3 & 0x1fff) < 0x753) {
              lVar8 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
              *(uint *)(lVar3 + lVar8) =
                   *(uint *)(lVar3 + lVar8) & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
            }
            lVar3 = (uVar6 >> 5) * 4;
            *(uint *)(param_4 + lVar3) =
                 *(uint *)(param_4 + lVar3) & (1 << (ulong)((uint)uVar6 & 0x1f) ^ 0xffffffffU);
            lVar3 = *(long *)puVar1;
          }
        }
        uVar2 = (uint)uVar6 + 1;
        uVar6 = (ulong)uVar2;
        iVar4 = iVar4 + 1;
        lVar8 = lVar3;
      } while (uVar2 != 0x38);
    }
  }
  return;
}

