
void FUN_0026a4a4(undefined8 param_1,undefined8 param_2,long param_3,byte param_4)

{
  undefined8 uVar1;
  long lVar2;
  int local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if (((param_3 == 0) || (param_4 == 0)) || (4 < param_4)) {
    local_44 = 0x10c07;
    goto LAB_0026a4e8;
  }
  uVar1 = FUN_0026a5c4(&local_44);
  if (local_44 == 0) {
    if (param_4 != 1) {
      lVar2 = param_3 + 0x88;
      uVar1 = FUN_0026a5c4(&local_44,uVar1,lVar2);
      if (local_44 != 0) goto LAB_0026a530;
      if (param_4 != 2) {
        lVar2 = param_3 + 0x110;
        uVar1 = FUN_0026a5c4(&local_44,uVar1,lVar2);
        if (local_44 != 0) goto LAB_0026a530;
        if (param_4 != 3) {
          lVar2 = param_3 + 0x198;
          uVar1 = FUN_0026a5c4(&local_44,uVar1,lVar2);
          if (local_44 != 0) goto LAB_0026a530;
        }
      }
    }
    local_44 = 0;
  }
  else {
    lVar2 = param_3;
LAB_0026a530:
    FUN_0026c78c(uVar1,lVar2);
    local_44 = 0x10c07;
  }
LAB_0026a4e8:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

