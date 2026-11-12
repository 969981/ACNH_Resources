
byte FUN_00b96378(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  byte local_50 [4];
  uint local_4c;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_38 = (uint *)0x0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar3 == 0) {
LAB_00b96440:
    puVar7 = (uint *)0x0;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_00b96440;
    lVar8 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (*(uint *)(lVar8 + 0x1d8) <= uVar4) goto LAB_00b96440;
    puVar7 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8);
    if (puVar7 != (uint *)0x0) {
      local_38 = puVar7;
    }
  }
  iVar5 = FUN_01ad78cc(&local_48);
  if (iVar5 == 0) {
    return 1;
  }
  local_4c = 0;
  if (((puVar7 != (uint *)0x0) && (uVar4 = *puVar7, uVar4 != 0)) && (puVar7 != (uint *)(ulong)uVar4)
     ) {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
    local_4c = 0;
    if (*puVar6 != 0) {
      uVar4 = puVar6[1];
      if ((uVar4 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar8 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar8 != 0) {
          uVar1 = 0;
          if ((ulong)uVar4 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar8) / (ulong)uVar4);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_053271b0) &&
             (uVar2 = *(ushort *)(DAT_053271b8 + (long)(int)uVar1 * 2), local_4c = (uint)uVar2,
             uVar2 < 5)) goto LAB_00b964e0;
        }
      }
      local_4c = 0;
    }
  }
LAB_00b964e0:
  local_50[0] = 0;
  FUN_01b02920(local_50,0,0);
  return local_4c < 5 & local_50[0] >> (ulong)(local_4c & 0x1f);
}

