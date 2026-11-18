
void FUN_0344d8e0(undefined8 param_1,undefined2 *param_2,char param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  long local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined8 local_60;
  undefined1 auStack_52 [2];
  undefined8 local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  local_68 = 0;
  local_70 = 0xfffe00000000;
  FUN_0277d4ac((ulong)&local_70 | 4);
  local_60 = 0;
  local_64 = DAT_04cb6038;
  if (param_3 == '\x03') {
    FUN_007ef010(&local_48,param_2);
    FUN_00805ba8(&local_50,&local_48);
    uVar3 = (undefined2)local_50;
    uVar4 = local_50._2_1_;
    uVar5 = local_50._3_1_;
    local_68 = local_50._4_4_;
  }
  else {
    if (param_3 == '\x02') {
      local_50 = 0x2573;
      FUN_0277d4ac(&local_50);
      puVar1 = PTR_DAT_04bb43c0;
      local_38 = 0;
      local_48 = PTR_DAT_04bc0510 + 0x10;
      local_40 = (undefined4)local_50;
      local_3c = local_50._4_4_;
      lVar6 = *(long *)PTR_DAT_04bb43c0;
      uVar2 = FUN_0277d6c4(&local_40);
      if (*(long *)puVar1 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar6 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(&local_50);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
             (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8), lVar6 != 0)) {
            local_38 = lVar6;
          }
        }
      }
      FUN_007ef010(auStack_52,param_2);
      FUN_01b08ab4(&local_48,auStack_52);
      local_50._0_3_ = (undefined3)local_40;
    }
    else {
      if (param_3 == '\x01') {
        local_50 = 0x3303;
      }
      else {
        local_50 = 0x1084;
      }
      FUN_0277d4ac(&local_50);
      puVar1 = PTR_DAT_04bb43c0;
      local_38 = 0;
      local_48 = PTR_DAT_04bc0510 + 0x10;
      local_40 = (undefined4)local_50;
      local_3c = local_50._4_4_;
      lVar6 = *(long *)PTR_DAT_04bb43c0;
      uVar2 = FUN_0277d6c4(&local_40);
      if (*(long *)puVar1 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar6 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(&local_50);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
             (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8), lVar6 != 0)) {
            local_38 = lVar6;
          }
        }
      }
      FUN_007ef010(auStack_52,param_2);
      FUN_01b08ab4(&local_48,auStack_52);
      local_50 = CONCAT62(local_50._2_6_,(undefined2)local_40);
    }
    uVar3 = (undefined2)local_40;
    uVar4 = local_40._2_1_;
    uVar5 = local_40._3_1_;
    local_68 = local_3c;
  }
  local_64 = *param_2;
  local_70 = (ulong)CONCAT13(uVar5,CONCAT12(uVar4,uVar3)) << 0x20;
  local_60 = param_1;
  FUN_033bd990(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),&local_70);
  return;
}

