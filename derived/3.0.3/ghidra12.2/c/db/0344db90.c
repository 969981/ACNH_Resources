
void FUN_0344db90(undefined2 *param_1,char param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 auStack_4a [2];
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  undefined8 local_18;
  
  local_58 = 0xfffe;
  FUN_0277d4ac(&local_58);
  local_50 = DAT_04cb6038;
  if (param_2 == '\x03') {
    FUN_007ef010(&local_48,param_1);
    FUN_00805ba8(&local_18,&local_48);
    uVar3 = (undefined2)local_18;
    uVar4 = local_18._2_1_;
    uVar5 = local_18._3_1_;
    uVar6 = local_18._4_4_;
  }
  else {
    if (param_2 == '\x02') {
      local_18 = 0x2573;
      FUN_0277d4ac(&local_18);
      puVar1 = PTR_DAT_04bb43c0;
      local_38 = 0;
      local_48 = PTR_DAT_04bc0510 + 0x10;
      local_40 = (undefined4)local_18;
      local_3c = local_18._4_4_;
      lVar7 = *(long *)PTR_DAT_04bb43c0;
      uVar2 = FUN_0277d6c4(&local_40);
      if (*(long *)puVar1 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(&local_18);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
             (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8), lVar7 != 0)) {
            local_38 = lVar7;
          }
        }
      }
      FUN_007ef010(auStack_4a,param_1);
      FUN_01b08ab4(&local_48,auStack_4a);
      local_18._0_3_ = (undefined3)local_40;
    }
    else {
      if (param_2 == '\x01') {
        local_18 = 0x3303;
      }
      else {
        local_18 = 0x1084;
      }
      FUN_0277d4ac(&local_18);
      puVar1 = PTR_DAT_04bb43c0;
      local_38 = 0;
      local_48 = PTR_DAT_04bc0510 + 0x10;
      local_40 = (undefined4)local_18;
      local_3c = local_18._4_4_;
      lVar7 = *(long *)PTR_DAT_04bb43c0;
      uVar2 = FUN_0277d6c4(&local_40);
      if (*(long *)puVar1 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(&local_18);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
             (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8), lVar7 != 0)) {
            local_38 = lVar7;
          }
        }
      }
      FUN_007ef010(auStack_4a,param_1);
      FUN_01b08ab4(&local_48,auStack_4a);
      local_18 = CONCAT62(local_18._2_6_,(undefined2)local_40);
    }
    uVar3 = (undefined2)local_40;
    uVar4 = local_40._2_1_;
    uVar5 = local_40._3_1_;
    uVar6 = local_3c;
  }
  local_50 = *param_1;
  local_58 = CONCAT44(uVar6,CONCAT13(uVar5,CONCAT12(uVar4,uVar3)));
  FUN_033ba168(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),&local_58);
  return;
}

