
void FUN_006e4b4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  FUN_006e4570(param_1 + 0x528,*(undefined4 *)(param_1 + 0x58));
  FUN_006e4710(param_1 + 0x560,*(undefined4 *)(param_1 + 0x5c));
  uVar1 = nn::oe::GetDesiredLanguage();
  local_50 = *(undefined8 *)(param_1 + 0x5a0);
  *(undefined8 *)(param_1 + 0x598) = uVar1;
  uStack_48 = *(undefined8 *)(param_1 + 0x5a8);
  local_60 = *(undefined8 *)(param_1 + 0x5b8);
  uStack_58 = *(undefined8 *)(param_1 + 0x5c8);
  (**(code **)(*(long *)(param_1 + 0x528) + 0x18))(param_1 + 0x528);
  uVar1 = *(undefined8 *)(param_1 + 0x530);
  (**(code **)(*(long *)(param_1 + 0x560) + 0x18))(param_1 + 0x560);
  uVar2 = *(undefined8 *)(param_1 + 0x568);
  (**(code **)(*(long *)(param_1 + 0x60) + 0x18))((long *)(param_1 + 0x60));
  FUN_00698eb0(param_2,param_1 + 0x85d8,uVar1,uVar2,*(undefined8 *)(param_1 + 0x68),param_1 + 0x598,
               &local_50,param_1 + 0x50,&local_60,*(long *)(param_1 + 0x30) + 8,
               *(long *)(param_1 + 0x28) + 0x20);
  return;
}

