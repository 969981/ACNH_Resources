
undefined8 FUN_03ec7ee0(long param_1,long param_2,long param_3,ushort *param_4)

{
  int *piVar1;
  ushort *puVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  ushort *puVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  long lVar12;
  
  uVar6 = 1;
  if ((param_2 != param_3) && (param_3 != 0)) {
    piVar1 = (int *)(*(long *)(param_1 + 8) + (long)*(int *)(*(long *)(param_1 + 8) + 0x2c));
    iVar7 = *piVar1;
    if (0 < iVar7) {
      lVar12 = 0;
      do {
        uVar3 = *(uint *)(param_4 + 0x40);
        uVar9 = (ulong)uVar3;
        puVar8 = (ushort *)((long)piVar1 + lVar12 * 100 + 6);
        uVar4 = *puVar8;
        if ((int)uVar3 < 1) {
LAB_03ec7f40:
          if ((*(char *)((long)piVar1 + lVar12 * 100 + 0x11) == '\0') &&
             (uVar4 = *(ushort *)(piVar1 + lVar12 * 0x19 + 1), uVar4 == *(ushort *)(param_2 + 10)))
          {
            *(uint *)(param_4 + 0x40) = uVar3 + 1;
            if (0x3f < uVar3) {
              uVar9 = 0;
            }
            param_4[uVar9] = uVar4;
            if ((char)piVar1[lVar12 * 0x19 + 4] != '\0') {
              return 1;
            }
            uVar4 = *puVar8;
            if ((uint)uVar4 == (uint)*(ushort *)(param_3 + 10)) {
              return 1;
            }
            if (*(uint *)(param_1 + 0x38) < (uint)uVar4 || *(uint *)(param_1 + 0x38) == (uint)uVar4)
            {
              uVar6 = 0;
            }
            else {
              uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + (ulong)(uint)uVar4 * 8);
            }
            uVar9 = FUN_03ec7ee0(param_1,uVar6,param_3,param_4);
            if ((uVar9 & 1) != 0) {
              return 1;
            }
            iVar7 = *piVar1;
          }
        }
        else if (*param_4 != uVar4) {
          uVar10 = 0;
          puVar11 = param_4;
          do {
            puVar11 = puVar11 + 1;
            if (uVar9 - 1 == uVar10) goto LAB_03ec7f40;
            bVar5 = 0x3e < uVar10;
            uVar10 = uVar10 + 1;
            puVar2 = puVar11;
            if (bVar5) {
              puVar2 = param_4;
            }
          } while (*puVar2 != uVar4);
          if (uVar9 <= uVar10) goto LAB_03ec7f40;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar7);
    }
    uVar6 = 0;
  }
  return uVar6;
}

