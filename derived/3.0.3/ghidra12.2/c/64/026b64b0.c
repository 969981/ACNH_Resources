
void FUN_026b64b0(long param_1,long *param_2,int *param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar2 = PTR_DAT_04bb43c0;
  if ((param_2 != (long *)0x0) && (*param_3 != 0)) {
    lVar4 = param_1 + 0x1094c;
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    if (param_4 == 0) {
      iVar5 = 0;
      iVar6 = 0x18;
      do {
        lVar8 = lVar4 + (long)iVar5 * 0x2c;
        uVar3 = FUN_0277d6c4(lVar8);
        lVar10 = *(long *)puVar2;
        if (lVar10 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
              (iVar1 = *(int *)(lVar4 + (long)iVar5 * 0x2c + 8), iVar1 != 0)) &&
             (((iVar1 != *param_3 ||
               (lVar9 = lVar4 + (long)iVar5 * 0x2c,
               (*(long *)(param_3 + 1) != *(long *)(lVar9 + 0xc) ||
               *(long *)(param_3 + 3) != *(long *)(lVar9 + 0x14)) ||
               param_3[5] != *(int *)(lVar9 + 0x1c))) &&
              (*(byte *)(lVar4 + (long)iVar5 * 0x2c + 0x28) < 0xb)))) {
            lVar9 = (**(code **)(*param_2 + 0x18))();
            uVar3 = FUN_0277d6c4(lVar8);
            lVar10 = *(long *)puVar2;
            if ((uVar3 >> 3 & 0x1fff) < 0x753) {
              lVar8 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
              *(uint *)(lVar9 + lVar8) =
                   *(uint *)(lVar9 + lVar8) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
            }
          }
        }
        lVar9 = lVar10;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    else {
      uVar7 = 0;
      iVar5 = 0;
      do {
        lVar8 = lVar4 + (long)iVar5 * 0x2c;
        uVar3 = FUN_0277d6c4(lVar8);
        lVar10 = *(long *)puVar2;
        if (lVar10 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if (((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
             ((iVar6 = *(int *)(lVar4 + (long)iVar5 * 0x2c + 8), iVar6 != 0 &&
              (((iVar6 != *param_3 ||
                (lVar9 = lVar4 + (long)iVar5 * 0x2c,
                (*(long *)(param_3 + 1) != *(long *)(lVar9 + 0xc) ||
                *(long *)(param_3 + 3) != *(long *)(lVar9 + 0x14)) ||
                param_3[5] != *(int *)(lVar9 + 0x1c))) &&
               (*(byte *)(lVar4 + (long)iVar5 * 0x2c + 0x28) < 0xb)))))) {
            lVar9 = (**(code **)(*param_2 + 0x18))();
            uVar3 = FUN_0277d6c4(lVar8);
            if ((uVar3 >> 3 & 0x1fff) < 0x753) {
              lVar10 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
              *(uint *)(lVar9 + lVar10) =
                   *(uint *)(lVar9 + lVar10) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
            }
            lVar9 = (uVar7 >> 5) * 4;
            *(uint *)(param_4 + lVar9) =
                 *(uint *)(param_4 + lVar9) & (1 << (ulong)((uint)uVar7 & 0x1f) ^ 0xffffffffU);
            lVar10 = *(long *)puVar2;
          }
        }
        lVar9 = lVar10;
        uVar3 = (uint)uVar7 + 1;
        uVar7 = (ulong)uVar3;
        iVar5 = iVar5 + 1;
      } while (uVar3 != 0x18);
    }
    param_1 = param_1 + 0x10d6c;
    if (param_4 == 0) {
      iVar5 = 0;
      do {
        lVar10 = param_1 + (long)iVar5 * 0x2c;
        uVar3 = FUN_0277d6c4(lVar10);
        lVar4 = *(long *)puVar2;
        if (lVar4 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if (((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
             (((iVar6 = *(int *)(param_1 + (long)iVar5 * 0x2c + 8), iVar6 != 0 &&
               ((iVar6 != *param_3 ||
                (lVar9 = param_1 + (long)iVar5 * 0x2c,
                (*(long *)(param_3 + 1) != *(long *)(lVar9 + 0xc) ||
                *(long *)(param_3 + 3) != *(long *)(lVar9 + 0x14)) ||
                param_3[5] != *(int *)(lVar9 + 0x1c))))) &&
              (*(byte *)(param_1 + (long)iVar5 * 0x2c + 0x28) < 0xb)))) {
            lVar9 = (**(code **)(*param_2 + 0x18))();
            uVar3 = FUN_0277d6c4(lVar10);
            lVar4 = *(long *)puVar2;
            if ((uVar3 >> 3 & 0x1fff) < 0x753) {
              lVar10 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
              *(uint *)(lVar9 + lVar10) =
                   *(uint *)(lVar9 + lVar10) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
            }
          }
        }
        iVar5 = iVar5 + 1;
        lVar9 = lVar4;
      } while (iVar5 != 0x20);
    }
    else {
      iVar5 = 0;
      uVar7 = 0x18;
      do {
        lVar10 = param_1 + (long)iVar5 * 0x2c;
        uVar3 = FUN_0277d6c4(lVar10);
        lVar4 = *(long *)puVar2;
        if (lVar4 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if (((((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (iVar6 = *(int *)(param_1 + (long)iVar5 * 0x2c + 8), iVar6 != 0)) &&
              ((iVar6 != *param_3 ||
               (lVar9 = param_1 + (long)iVar5 * 0x2c,
               (*(long *)(param_3 + 1) != *(long *)(lVar9 + 0xc) ||
               *(long *)(param_3 + 3) != *(long *)(lVar9 + 0x14)) ||
               param_3[5] != *(int *)(lVar9 + 0x1c))))) &&
             (*(byte *)(param_1 + (long)iVar5 * 0x2c + 0x28) < 0xb)) {
            lVar4 = (**(code **)(*param_2 + 0x18))();
            uVar3 = FUN_0277d6c4(lVar10);
            if ((uVar3 >> 3 & 0x1fff) < 0x753) {
              lVar9 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
              *(uint *)(lVar4 + lVar9) =
                   *(uint *)(lVar4 + lVar9) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
            }
            lVar4 = (uVar7 >> 5) * 4;
            *(uint *)(param_4 + lVar4) =
                 *(uint *)(param_4 + lVar4) & (1 << (ulong)((uint)uVar7 & 0x1f) ^ 0xffffffffU);
            lVar4 = *(long *)puVar2;
          }
        }
        uVar3 = (uint)uVar7 + 1;
        uVar7 = (ulong)uVar3;
        iVar5 = iVar5 + 1;
        lVar9 = lVar4;
      } while (uVar3 != 0x38);
    }
  }
  return;
}

