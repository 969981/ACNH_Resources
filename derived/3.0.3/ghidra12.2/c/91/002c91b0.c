
void FUN_002c91b0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,byte param_6,char param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_68;
  ErrorResultVariant aEStack_64 [12];
  undefined1 local_58;
  byte local_57;
  undefined2 local_56;
  undefined1 local_54;
  undefined4 local_44;
  
  uVar1 = FUN_002aaa54();
  local_58 = 0;
  local_56 = 0x100;
  local_54 = 0;
  local_57 = param_6;
  local_68 = (**(code **)(*param_2 + 0x18))(param_2);
  lVar2 = FUN_002a9fb0(uVar1,&local_68,param_3,param_5,&local_58);
  if (lVar2 != 0) {
    if ((param_7 != '\0') && ((param_6 & 1) != 0)) {
      *(char *)(lVar2 + 0x8fc) = param_7;
    }
    FUN_002a9f34(&local_68,uVar1,param_4);
  }
  local_68 = 0;
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_44);
  FUN_002296c4(param_1,&local_68);
  return;
}

