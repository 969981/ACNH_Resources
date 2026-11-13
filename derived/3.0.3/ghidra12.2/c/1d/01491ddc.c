
ulong FUN_01491ddc(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,long param_4,
                  undefined4 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 local_bc;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  byte local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  local_88 = 0;
  local_98 = PTR_DAT_04bb2010 + 0x10;
  local_a0 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_9c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_90 = 0;
  local_80 = 0;
  local_78 = *PTR_DAT_04bb32e0;
  if (7 < local_78) {
    local_78 = 0xff;
  }
  uVar5 = FUN_0277e294(param_3);
  puVar2 = PTR_DAT_04bb43c0;
  if ((uVar5 & 1) == 0) {
    *param_2 = 0;
    uVar5 = (ulong)*(uint *)PTR_DAT_04bb3238;
  }
  else {
    local_a8 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    local_b0 = *param_3;
    uStack_ac = param_3[1];
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    local_b8 = puVar1;
    uVar3 = FUN_0277d6c4(&local_b0);
    if (*(long *)puVar2 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar6 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_3);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
           (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8), lVar6 != 0)) {
          local_a8 = lVar6;
        }
      }
    }
    uVar4 = FUN_01ae98d0(&local_b8);
    local_60 = *param_3;
    uStack_5c = param_3[1];
    lVar6 = *(long *)puVar2;
    local_58 = 0;
    local_bc = uVar4;
    local_68 = puVar1;
    uVar3 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar2 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar6 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_3);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
           (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8), lVar6 != 0)) {
          local_58 = lVar6;
        }
      }
    }
    FUN_01afbaa4(&local_70,param_3,&local_bc);
    local_88 = CONCAT44(local_88._4_4_,uVar4);
    local_a0 = local_70;
    uStack_9c = uStack_6c;
    local_90 = *(undefined8 *)(param_4 + 8);
    uVar4 = FUN_01afb8e8(&local_68);
    local_74 = 0;
    local_88 = CONCAT44(uVar4,(undefined4)local_88);
    local_80 = CONCAT44(*param_5,3);
    uVar5 = FUN_01491790(param_1,param_2,&local_a0);
  }
  return uVar5;
}

