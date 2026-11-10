
bool FUN_00271b04(long *param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_64 [4];
  undefined4 local_54;
  undefined1 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined4 local_38;
  undefined1 local_34;
  
  lVar2 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar2 = *(long *)(lVar2 + 0x98);
  if (lVar2 == 0) {
    return false;
  }
  uVar3 = FUN_002aaa54(param_1);
  local_38 = 0;
  local_34 = 0;
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  local_4c = CONCAT44(local_4c._4_4_,uVar1);
  lVar4 = FUN_002a9fb0(uVar3,&local_4c,param_2 + 2,2,&local_38);
  if (lVar4 == 0) {
    local_44 = 0;
    local_4c = 0x200000000000;
    (**(code **)(*param_2 + 0x28))(param_2,&local_4c);
    return false;
  }
  local_3c = 8;
  local_3b = *(undefined1 *)(lVar2 + 0x38);
  FUN_002a9f34(&local_4c,uVar3,&local_3c);
  if ((int)local_4c == 0) {
    local_50 = 0;
    local_54 = 0x100;
    local_64[0] = (**(code **)(*param_1 + 0x18))(param_1);
    lVar2 = FUN_002a9fb0(uVar3,local_64,param_2 + 2,2,&local_54);
    if (lVar2 != 0) {
      FUN_002a9f34(local_64,uVar3,&local_3c);
      FUN_00229780(&local_4c,local_64);
    }
  }
  return (int)local_4c == 0;
}

