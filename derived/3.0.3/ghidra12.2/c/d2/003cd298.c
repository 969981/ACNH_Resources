
uint FUN_003cd298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_50 = param_2;
  uStack_48 = param_3;
  FUN_003cd30c(auStack_80,param_1,&local_50);
  uVar1 = FUN_003ccb98(0,param_1,auStack_80);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_03b38a74();
    FUN_003b56d0(uVar2,PTR_DAT_04bd0238,local_70,uStack_68,1);
  }
  return uVar1 & 1;
}

