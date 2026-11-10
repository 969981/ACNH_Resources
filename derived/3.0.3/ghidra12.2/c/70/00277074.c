
void FUN_00277074(long *param_1,undefined4 param_2,undefined1 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined2 local_3a;
  undefined1 local_38;
  undefined4 local_34 [4];
  undefined1 local_24 [4];
  
  local_3c = 0;
  local_3a = 0x100;
  local_38 = 0;
  local_3b = param_3;
  plVar1 = (long *)FUN_002aaa54();
  local_34[0] = (**(code **)(*param_1 + 0x18))(param_1);
  lVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,local_34,param_2,1,&local_3c);
  if (lVar2 != 0) {
    local_24[0] = 3;
    FUN_002a9f34(local_34,plVar1,local_24);
  }
  return;
}

