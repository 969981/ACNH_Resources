
void FUN_0036614c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [3];
  undefined2 local_65;
  undefined3 uStack_63;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  _local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  FUN_0034fcbc(&local_80);
  local_80 = local_80 & 0xfffffff8ffffffff | 0x400000000;
  FUN_0034fcac(&local_78);
  local_78._0_4_ = (uint)(uint3)local_78;
  local_78 = CONCAT71(local_78._1_7_,6);
  FUN_0034fcac(local_68);
  _local_68 = (uint)(uint3)local_68;
  _local_68 = CONCAT71(stack0xffffffffffffff99,6);
  FUN_0034ee0c(param_1 + 0x360,param_2,&local_80);
  FUN_0034fcbc(&local_80);
  uVar1 = local_80 & 0xfffffff8ffffffff;
  local_80._0_2_ = CONCAT11(1,(char)uVar1);
  local_80 = CONCAT62((int6)(uVar1 >> 0x10),(undefined2)local_80) | 0x400000000;
  FUN_0034fcac(&local_78);
  local_78._0_5_ = CONCAT23(0x102,(uint3)local_78);
  FUN_0034fcac(local_68);
  _local_68 = CONCAT23(0x102,local_68);
  FUN_0034ee0c(param_1 + 0x37c,param_2,&local_80);
  FUN_0034fcbc(&local_80);
  local_80 = local_80 & 0xfffffff8ffffffff | 0x400000000;
  FUN_0034fcac(&local_78);
  uVar1 = local_78 >> 0x20;
  local_78._0_4_ = CONCAT22(0x203,(undefined2)local_78);
  local_78 = CONCAT44((int)uVar1,(uint)local_78) & 0xffffff00ffffffff;
  FUN_0034fcac(local_68);
  uVar2 = _local_68;
  _local_68 = CONCAT22(0x203,local_68._0_2_);
  uStack_63 = SUB83(uVar2,5);
  _local_68 = (uint5)_local_68;
  FUN_0034ee0c(param_1 + 0x398,param_2,&local_80);
  return;
}

