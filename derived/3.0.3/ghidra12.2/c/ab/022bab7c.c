
undefined8
FUN_022bab7c(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,byte *param_4,
            long param_5,undefined4 *param_6)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined **local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  undefined7 uStack_67;
  byte local_5c [4];
  byte local_58 [4];
  byte local_54 [4];
  undefined *local_50;
  undefined8 local_48;
  byte local_28 [4];
  byte local_24 [4];
  
  if (param_5 == 0) {
    return 0;
  }
  local_24[0] = *param_4;
  local_50 = PTR_DAT_04bb2010 + 0x10;
  local_48 = 0;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  uVar5 = FUN_022a62a8(0x40a00000,local_24,param_5,&local_50,1);
  if ((uVar5 & 1) == 0) {
    local_28[0] = *param_4;
    if (7 < local_28[0]) {
      local_28[0] = 0xff;
    }
    uVar5 = FUN_022a62a8(0,local_28,param_5,&local_50,1);
    if ((uVar5 & 1) != 0) goto LAB_022bac6c;
    local_54[0] = *param_4;
    if (7 < local_54[0]) {
      local_54[0] = 0xff;
    }
    uVar5 = FUN_022a62a8(0x40a00000,local_54,param_5,&local_50,0);
    if ((uVar5 & 1) != 0) goto LAB_022bac6c;
    local_58[0] = *param_4;
    if (7 < local_58[0]) {
      local_58[0] = 0xff;
    }
    uVar5 = FUN_022a62a8(0,local_58,param_5,&local_50,0);
    if ((uVar5 & 1) != 0) goto LAB_022bac6c;
    local_5c[0] = *param_4;
    if (7 < local_5c[0]) {
      local_5c[0] = 0xff;
    }
    uVar5 = FUN_022a62a8(0x40f00000,local_5c,param_5,&local_50,0);
    lVar6 = DAT_05150358;
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (DAT_05150358 == 0) {
      return 0;
    }
    if (*(long *)(DAT_05150358 + 0xb0) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0) {
      return 0;
    }
    if (*(long *)(DAT_05150358 + 0x488) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0) {
      return 0;
    }
    if (*(long *)(DAT_05150358 + 0x2b0) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0) {
      return 0;
    }
    uVar3 = FUN_0277d6c4(param_5);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if (*(uint *)(lVar6 + 0x1d8) <= uVar3) {
      return 0;
    }
    if (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
      return 0;
    }
    FUN_0124c030(&local_78,param_5);
    iVar4 = FUN_0123db50(&local_70,CONCAT71(uStack_67,local_68));
    FUN_0124c030(&local_78,param_5);
    iVar2 = FUN_0123db50(&local_70,CONCAT71(uStack_67,local_68));
    uVar5 = FUN_035a3310();
    if ((uVar5 & 1) == 0) {
      if (iVar4 != 0x21 && iVar2 != 0x22) {
        return 0;
      }
    }
    else {
      uVar3 = FUN_0123d710(param_5,3,0);
      if ((iVar4 != 0x21 && iVar2 != 0x22) && ((uVar3 ^ 0xffffffff) & 1) == 0) {
        return 0;
      }
    }
  }
  else {
LAB_022bac6c:
    if ((DAT_055cdb30 == -0x17df00c3) &&
       ((((int)local_48 < *(int *)(DAT_05abff60 + 0x28) ||
          *(int *)(DAT_05abff60 + 0x38) < (int)local_48 ||
         (local_48._4_4_ < *(int *)(DAT_05abff60 + 0x2c))) ||
        (*(int *)(DAT_05abff60 + 0x3c) < local_48._4_4_)))) {
      return 0;
    }
  }
  puVar1 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_5);
  if (*(long *)puVar1 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      uVar5 = FUN_0277e158(param_5);
      uVar5 = uVar5 & 0xffffffff;
      goto joined_r0x022bae5c;
    }
  }
  uVar5 = 1;
joined_r0x022bae5c:
  if ((param_6 != (undefined4 *)0x0) && ((uVar5 & 1) != 0)) {
    local_70 = 0;
    local_78 = &PTR_LAB_049ffa38;
    if (DAT_05aed670 == 0) {
      puVar7 = &DAT_055c04a0;
    }
    else {
      puVar7 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar7 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar4 = FUN_006bd550(*puVar7,0);
        puVar7 = &DAT_055cdaf8;
        if (iVar4 != 0x758f7eaf) {
          puVar7 = &DAT_055c04a0;
        }
      }
    }
    local_6c = *(undefined4 *)(puVar7 + 7);
    local_68 = FUN_017baf44();
    local_68 = local_68 & 1;
    uVar8 = FUN_01a50ed0(&local_78,param_5,&local_50,0);
    *param_6 = uVar8;
    param_6[1] = param_2;
    param_6[2] = param_3;
  }
  return 1;
}

