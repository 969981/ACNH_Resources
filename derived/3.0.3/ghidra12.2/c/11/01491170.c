
void FUN_01491170(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                 undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  long local_60;
  undefined4 local_58;
  undefined4 local_54;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_68 = *param_3;
  local_58 = *param_3;
  local_64 = param_3[1];
  local_70 = PTR_DAT_04bc0510 + 0x10;
  lVar3 = *(long *)PTR_DAT_04bb43c0;
  local_60 = 0;
  local_54 = local_64;
  uVar2 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar1 != 0) {
    lVar3 = *(long *)(lVar3 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar3 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(&local_58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
         (lVar3 = *(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8), lVar3 != 0)) {
        local_60 = lVar3;
      }
    }
  }
  FUN_01afade0(&local_70,*param_5);
  local_58 = local_68;
  local_54 = local_64;
  FUN_014912c0(param_1,param_2,&local_58,param_4,param_7,param_8);
  return;
}

