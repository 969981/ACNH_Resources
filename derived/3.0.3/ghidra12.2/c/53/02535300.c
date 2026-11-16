
undefined8 FUN_02535300(byte *param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  uint uStack_60;
  undefined4 uStack_5c;
  byte local_58 [4];
  uint local_54;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_3);
  lVar8 = *(long *)puVar1;
  if (lVar8 == 0) {
LAB_02535494:
    bVar2 = true;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_02535494;
    uStack_60 = 0;
    uStack_5c = 0;
    local_68 = *param_3;
    local_64 = param_3[1];
    local_70 = &PTR_FUN_04a36b50;
    uVar3 = FUN_0277d6c4(&local_68);
    if (*(long *)puVar1 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_3);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
           (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8), lVar8 != 0)) {
          uStack_60 = (uint)lVar8;
          uStack_5c = (undefined4)((ulong)lVar8 >> 0x20);
        }
      }
    }
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_01adab50(&local_70,local_58);
    uVar3 = 0;
    do {
      local_54 = uVar3;
      if ((local_54 != 0) && (local_54 < 0xe)) {
        uVar3 = local_54 + 7;
        if (-1 < (int)local_54) {
          uVar3 = local_54;
        }
        if (((uint)((int)uVar3 >> 3) < 2) &&
           (uVar5 = local_54, (local_58[(uint)((int)uVar3 >> 3)] >> (ulong)(local_54 & 7) & 1) != 0)
           ) goto LAB_025355b8;
      }
      uVar3 = local_54 + 1;
    } while (local_54 + 1 != 0xe);
    uVar5 = 0;
LAB_025355b8:
    bVar2 = uVar5 != 9;
  }
  bVar6 = *param_1;
  local_68 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  local_70 = (undefined **)CONCAT71(local_70._1_7_,bVar6);
  uStack_5c = param_2;
  if (bVar2) {
    local_70 = (undefined **)
               CONCAT17(PTR_DAT_04bb37e0[3],
                        CONCAT16(PTR_DAT_04bb37e0[2],
                                 CONCAT24(*(undefined2 *)PTR_DAT_04bb37e0,(undefined4)local_70)));
    local_64 = 0;
    uStack_60 = 0xffffffff;
    uVar4 = FUN_025355c4(&local_70);
    if ((uVar4 & 1) == 0) goto LAB_02535528;
LAB_02535588:
    uVar7 = 1;
  }
  else {
LAB_02535528:
    uStack_60 = param_4 - 0x14;
    if (param_4 < 0x14) {
      local_68 = param_3[1];
      local_64 = 0;
      local_70 = (undefined **)CONCAT44(*param_3,(undefined4)local_70);
      uStack_60 = param_4;
      uVar4 = FUN_025355c4(&local_70);
joined_r0x02535584:
      if ((uVar4 & 1) != 0) goto LAB_02535588;
    }
    else {
      local_68 = param_3[1];
      local_70 = (undefined **)CONCAT44(*param_3,(undefined4)local_70);
      if (0x13 < uStack_60) {
        local_64 = 0;
        uStack_60 = 0xffffffff;
        uVar4 = FUN_025355c4(&local_70);
        goto joined_r0x02535584;
      }
      local_64 = 1;
      uVar4 = FUN_025355c4(&local_70);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
    }
    uVar7 = 0;
  }
  return uVar7;
}

