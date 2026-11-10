
void FUN_00273da4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  int local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04bcd350;
  lVar2 = FUN_0026c8a4(*(undefined8 *)PTR_DAT_04bcd350);
  if ((lVar2 == 0) || (DAT_04c61168 == 0)) {
    local_34 = 0;
    local_44 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  }
  else {
    FUN_002296c4(&local_44,DAT_04c61168 + 0xd4);
    if (local_44 == 0) {
      uVar3 = FUN_0026c8a4(*(undefined8 *)puVar1);
      FUN_00262af0(param_1,uVar3,param_2,param_3,param_4);
      return;
    }
  }
  FUN_002296c4(param_1,&local_44);
  return;
}

