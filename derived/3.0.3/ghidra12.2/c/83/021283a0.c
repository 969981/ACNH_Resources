
void FUN_021283a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined2 local_28;
  undefined4 local_24;
  
  if (param_1 != (undefined4 *)0x0) {
    local_28 = *(undefined2 *)(param_2 + 2);
    local_24 = 1;
    local_30 = *param_2;
    uStack_2c = param_2[1];
    local_40 = 0xfffe;
    local_38 = *param_1;
    uStack_34 = param_1[1];
    FUN_0277d4ac(&local_40);
    FUN_02127af0(&local_38,&local_40);
    local_24 = 2;
    uVar1 = (undefined4)local_40;
    uVar2 = local_40._4_4_;
    local_40 = 0xfffe;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    local_38 = param_1[6];
    uStack_34 = param_1[7];
    FUN_0277d4ac(&local_40);
    FUN_02127af0(&local_38,&local_40);
    param_1[6] = (undefined4)local_40;
    param_1[7] = local_40._4_4_;
  }
  return;
}

