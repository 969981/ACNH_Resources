
void FUN_002ba934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 local_88;
  ErrorResultVariant aEStack_84 [12];
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  ErrorResultVariant aEStack_6c [12];
  undefined **local_60;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  
  uVar1 = FUN_002aaa54();
  FUN_00227258(&local_60);
  FUN_00227440(&local_70,&local_60,param_3);
  local_78 = 0x1010101;
  local_74 = 1;
  local_70 = 0xa4000000;
  lVar2 = FUN_002a9fb0(uVar1,&local_70,&local_60,param_5,&local_78);
  if (lVar2 == 0) {
    local_88 = 0;
    local_70 = 0x4c0d;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_88);
    puVar3 = &local_70;
  }
  else {
    FUN_002a9f34(&local_70,uVar1,param_4);
    local_88 = 0;
    local_34 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_34);
    puVar3 = &local_88;
  }
  FUN_002296c4(param_1,puVar3);
  local_60 = &PTR_LAB_04840580;
  FUN_0021f584(auStack_58);
  return;
}

