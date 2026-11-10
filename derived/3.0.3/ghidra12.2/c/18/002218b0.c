
void FUN_002218b0(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  uint local_40 [4];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 auStack_20 [16];
  
  uVar3 = FUN_0021f6f8();
  if (((uVar3 & 1) != 0) && (uVar3 = FUN_00220038(param_1), (uVar3 & 1) == 0)) {
    FUN_0028d4cc(auStack_20);
    uVar3 = FUN_0021f720(param_1);
    if ((uVar3 & 1) == 0) {
      local_40[0] = 0;
      FUN_0021f618(&local_30,param_1,local_40);
      local_40[0] = local_40[0] & 0xffffff00;
      uVar2 = FUN_0028d5ac(auStack_20);
      local_40[0] = local_40[0] | uVar2 & 0xff;
      FUN_0021f5a0(param_1);
      return;
    }
    local_30 = 0;
    local_28 = 0;
    FUN_0021f764(local_40,param_1,&local_30);
    bVar1 = FUN_0028d5ac(auStack_20);
    local_28 = CONCAT71(local_28._1_7_,(byte)local_28 & bVar1);
    bVar1 = FUN_0028d5ac(auStack_20);
    local_28._0_2_ = CONCAT11(local_28._1_1_ & bVar1,(byte)local_28);
    bVar1 = FUN_0028d5ac(auStack_20);
    local_28._0_3_ = CONCAT12(local_28._2_1_ & bVar1,(undefined2)local_28);
    bVar1 = FUN_0028d5ac(auStack_20);
    local_28._0_4_ = CONCAT13(local_28._3_1_ & bVar1,(undefined3)local_28);
    bVar1 = FUN_0028d5ac(auStack_20);
    local_28._0_5_ = CONCAT14(local_28._4_1_ & bVar1,(undefined4)local_28);
    bVar1 = FUN_0028d5ac(auStack_20);
    local_28._0_6_ = CONCAT15(local_28._5_1_ & bVar1,(undefined5)local_28);
    bVar1 = FUN_0028d5ac(auStack_20);
    local_28._0_7_ = CONCAT16(local_28._6_1_ & bVar1,(undefined6)local_28);
    bVar1 = FUN_0028d5ac(auStack_20);
    local_28 = CONCAT17(local_28._7_1_ & bVar1,(undefined7)local_28);
    FUN_0021f5dc(param_1,local_30,local_28);
  }
  return;
}

