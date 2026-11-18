
undefined8 FUN_0341b1b8(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
         (puVar6 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar6 != (uint *)0x0)) {
        uVar3 = *puVar6;
        if (uVar3 != 0 && puVar6 != (uint *)(ulong)uVar3) {
          puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
          if (((*puVar7 != 0) && (uVar3 = puVar7[1], uVar3 != 0)) && ((ulong)(ushort)puVar7[2] != 0)
             ) {
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar8 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar6 - lVar8) / (ulong)uVar3);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
              goto LAB_0341b304;
            }
          }
        }
        uVar5 = 0;
        goto LAB_0341b304;
      }
    }
  }
  uVar5 = 0xbc;
LAB_0341b304:
  if (((uVar5 == 0x4c) || (uVar5 == 0x4e)) || ((uVar5 == 0x50 || (uVar5 == 0x55)))) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

