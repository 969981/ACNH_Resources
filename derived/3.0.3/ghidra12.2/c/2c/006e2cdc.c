
void FUN_006e2cdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  FUN_006e4570(param_1 + 0x520,*(undefined4 *)(param_1 + 0x50));
  FUN_006e4710(param_1 + 0x558,*(undefined4 *)(param_1 + 0x54));
  local_50 = *(undefined8 *)(param_1 + 0x598);
  uStack_48 = *(undefined8 *)(param_1 + 0x5a0);
  local_60 = *(undefined8 *)(param_1 + 0x5b0);
  uStack_58 = *(undefined8 *)(param_1 + 0x5c0);
  local_70 = *(undefined8 *)(param_1 + 0x9d8);
  uStack_68 = *(undefined8 *)(param_1 + 0x9e8);
  (**(code **)(*(long *)(param_1 + 0x520) + 0x18))(param_1 + 0x520);
  uVar1 = *(undefined8 *)(param_1 + 0x528);
  (**(code **)(*(long *)(param_1 + 0x558) + 0x18))(param_1 + 0x558);
  uVar2 = *(undefined8 *)(param_1 + 0x560);
  (**(code **)(*(long *)(param_1 + 0x58) + 0x18))((long *)(param_1 + 0x58));
  FUN_00698fb0(param_2,param_1 + 0x89f8,uVar1,uVar2,*(undefined8 *)(param_1 + 0x60),param_1 + 0x590,
               &local_50,&local_60,&local_70,*(long *)(param_1 + 0x30) + 8,
               *(long *)(param_1 + 0x28) + 0x20);
  return;
}

