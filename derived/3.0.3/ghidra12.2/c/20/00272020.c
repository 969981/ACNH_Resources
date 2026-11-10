
bool FUN_00272020(long *param_1,long *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_28;
  undefined1 local_24;
  
  lVar2 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  if (*(long *)(lVar2 + 0x98) == 0) {
    return false;
  }
  uVar3 = FUN_002aaa54(param_1);
  local_28 = 0;
  local_24 = 0;
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  local_48 = CONCAT44(local_48._4_4_,uVar1);
  lVar2 = FUN_002a9fb0(uVar3,&local_48,param_2,5,&local_28);
  if (lVar2 == 0) {
    local_40 = 0;
    local_48 = 0x200000000000;
    (**(code **)(*param_2 + 0x28))(param_2,&local_48);
    return false;
  }
  local_38 = 0xffff0002;
  local_34 = param_3;
  FUN_002a9f34(&local_48,uVar3,&local_38);
  if ((int)local_48 == 0) {
    local_4c = 0;
    local_50 = 0x100;
    local_60[0] = (**(code **)(*param_1 + 0x18))(param_1);
    lVar2 = FUN_002a9fb0(uVar3,local_60,param_2,5,&local_50);
    if (lVar2 != 0) {
      FUN_002a9f34(local_60,uVar3,&local_38);
      FUN_00229780(&local_48,local_60);
    }
  }
  return (int)local_48 == 0;
}

