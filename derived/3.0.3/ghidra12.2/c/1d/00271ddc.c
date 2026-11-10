
bool FUN_00271ddc(long *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined4 param_6)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  int local_6c [4];
  undefined1 local_5c;
  byte local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 auStack_57 [7];
  undefined4 local_48;
  undefined1 local_44;
  
  local_5b = FUN_0026bfe0(*(undefined8 *)PTR_DAT_04bcd350);
  if (local_5b < 0x20) {
    plVar2 = (long *)FUN_002aaa54(param_1);
    local_48 = 0;
    local_44 = 0;
    local_6c[0] = (**(code **)(*param_1 + 0x18))(param_1);
    lVar3 = (**(code **)(*plVar2 + 0x68))(plVar2,local_6c,param_2,9,&local_48);
    bVar1 = false;
    if (lVar3 != 0) {
      local_5c = 0x24;
      local_5a = param_3;
      local_59 = param_4;
      local_58 = param_5;
      FUN_00228480(auStack_57,param_6);
      FUN_002a9f34(local_6c,plVar2,&local_5c);
      bVar1 = local_6c[0] == 0;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

