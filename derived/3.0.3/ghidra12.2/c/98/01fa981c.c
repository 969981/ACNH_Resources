
uint FUN_01fa981c(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_68 = 0;
  local_78 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_70 = PTR_DAT_04bb2010 + 0x10;
  local_58 = 0;
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  local_60 = puStack_70;
  uVar2 = FUN_0277d6c4(param_2);
  lVar3 = *(long *)puVar1;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_80 = 0;
      local_88 = *param_2;
      uStack_84 = param_2[1];
      local_90 = PTR_DAT_04bc0510 + 0x10;
      uVar2 = FUN_0277d6c4(&local_88);
      if (*(long *)puVar1 != 0) {
        lVar3 = *(long *)(lVar3 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar3 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_2);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
             (lVar3 = *(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8), lVar3 != 0)) {
            local_80 = lVar3;
          }
        }
      }
      FUN_01afb480(&local_90,&local_78);
      local_68 = CONCAT44(local_68._4_4_ + *(int *)(param_3 + 0xc),
                          (int)local_68 + *(int *)(param_3 + 8));
      local_58._0_4_ = (int)local_58 + *(int *)(param_3 + 8);
      local_58._4_4_ = local_58._4_4_ + *(int *)(param_3 + 0xc);
      goto LAB_01fa9994;
    }
  }
  local_68 = *(undefined8 *)(param_3 + 8);
  local_58._0_4_ = *(int *)(param_3 + 8) + 1;
  local_58._4_4_ = *(int *)(param_3 + 0xc) + 1;
LAB_01fa9994:
  uVar2 = FUN_01fbc6d8(param_1,param_2,&local_78,param_4);
  return uVar2 & 1;
}

