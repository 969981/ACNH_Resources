
void FUN_00273ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  puVar1 = PTR_DAT_04bcd350;
  lVar2 = FUN_0026c8a4(*(undefined8 *)PTR_DAT_04bcd350);
  if ((lVar2 == 0) || (DAT_04c61168 == 0)) {
    local_24 = 0;
    local_40 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  }
  else {
    FUN_002296c4(&local_40,DAT_04c61168 + 0xd4);
    if (local_40 == 0) {
      uVar3 = FUN_0026c8a4(*(undefined8 *)puVar1);
      FUN_00262a10(param_1,uVar3,param_2,param_3);
      return;
    }
  }
  FUN_002296c4(param_1,&local_40);
  return;
}

