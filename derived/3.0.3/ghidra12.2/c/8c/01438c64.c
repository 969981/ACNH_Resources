
undefined8 FUN_01438c64(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  ushort uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  uStack_3c = *(undefined4 *)(param_1 + 0x2cc);
  local_38 = 0;
  local_40 = *(undefined4 *)(param_1 + 0x2c8);
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  uVar5 = 0;
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_1 + 0x2c8);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
         ((puVar6 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8),
          puVar6 != (uint *)0x0 && (uVar3 = *puVar6, uVar3 != 0 && puVar6 != (uint *)(ulong)uVar3)))
         ) {
        puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
        if ((*puVar8 != 0) && ((uVar3 = puVar8[1], uVar3 != 0 && ((ulong)(ushort)puVar8[2] != 0))))
        {
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar3);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326d48) &&
               (uVar5 = *(ushort *)(DAT_05326d50 + (long)(int)uVar1 * 2), uVar5 < 0x52))
            goto LAB_01438dac;
          }
        }
      }
    }
    uVar5 = 0;
  }
LAB_01438dac:
  if ((uVar5 == 9) && ((*(uint *)(param_1 + 0x35c) & 1) == 0)) {
    lVar9 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x70);
    if (lVar9 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = *(int *)(lVar9 + 0x280);
    }
    if (iVar7 == 0) {
      if (*(int *)(*(long *)(param_1 + 0x2e8) + 0x900) != 0) {
        return 0;
      }
      iVar7 = *(int *)(param_1 + 0x280);
      uVar4 = FUN_01439810(param_1);
      if (iVar7 == 2) {
        if ((uVar4 & 1) == 0) {
          return 1;
        }
      }
      else if ((uVar4 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}

