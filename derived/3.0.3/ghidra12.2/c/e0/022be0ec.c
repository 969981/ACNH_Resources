
uint FUN_022be0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined *local_88;
  undefined *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 local_5c [4];
  undefined1 auStack_58 [16];
  undefined8 local_48;
  undefined8 local_38;
  
  uVar2 = FUN_022bdf4c(param_1,param_3,param_4);
  if ((uVar2 & 1) != 0) {
    local_48 = 0;
    local_38 = 0;
    uVar2 = FUN_022ba528(param_1,auStack_58,local_5c,param_3,param_4);
    if ((uVar2 & 1) != 0) {
      local_78 = (undefined4)local_48;
      uStack_74 = local_48._4_4_;
      local_88 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_80 = PTR_DAT_04bb2010 + 0x10;
      local_68 = (undefined4)local_38;
      uStack_64 = local_38._4_4_;
      local_70 = puStack_80;
      uVar1 = FUN_022bdd00(param_1,param_2,&local_88,local_5c[0]);
      goto LAB_022be190;
    }
  }
  uVar1 = 0;
LAB_022be190:
  return uVar1 & 1;
}

