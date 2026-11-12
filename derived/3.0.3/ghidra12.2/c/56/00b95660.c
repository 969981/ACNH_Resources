
undefined8 FUN_00b95660(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ushort uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = (uint *)0x0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
         (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar7 != (uint *)0x0)) {
        uVar3 = *puVar7;
        local_38 = puVar7;
        if (uVar3 != 0 && puVar7 != (uint *)(ulong)uVar3) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
          if (((*puVar8 != 0) && (uVar3 = puVar8[1], uVar3 != 0)) && ((ulong)(ushort)puVar8[2] != 0)
             ) {
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
              if ((uVar1 < DAT_05327180) &&
                 (uVar6 = *(ushort *)(DAT_05327188 + (long)(int)uVar1 * 2), uVar6 < 3))
              goto LAB_00b957bc;
            }
          }
        }
        uVar6 = 0;
        goto LAB_00b957bc;
      }
    }
  }
  uVar6 = 2;
LAB_00b957bc:
  if ((uVar6 == 2) &&
     ((uVar4 = FUN_01b160f0(&local_48), (uVar4 & 1) != 0 ||
      (uVar4 = FUN_01b164e0(&local_48), (uVar4 & 1) != 0)))) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

