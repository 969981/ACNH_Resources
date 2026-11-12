
undefined8 FUN_00b95178(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         (puVar6 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar6 != (uint *)0x0)) {
        uVar4 = *puVar6;
        if (uVar4 != 0 && puVar6 != (uint *)(ulong)uVar4) {
          puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
          if (((*puVar7 != 0) && (uVar4 = puVar7[1], uVar4 != 0)) && ((ulong)(ushort)puVar7[2] != 0)
             ) {
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar8 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar6 - lVar8) / (ulong)uVar4);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar4 = (uint)uVar2,
                 uVar2 < 0xbd)) goto LAB_00b952c4;
            }
          }
        }
        uVar4 = 0;
        goto LAB_00b952c4;
      }
    }
  }
  uVar4 = 0xbc;
LAB_00b952c4:
  if (((uVar4 < 0x13) && ((1 << (ulong)(uVar4 & 0x1f) & 0x50601U) != 0)) || (uVar4 == 0x49)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

