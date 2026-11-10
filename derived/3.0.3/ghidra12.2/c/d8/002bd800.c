
void FUN_002bd800(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 auStack_30 [16];
  
  FUN_002931e4();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  memcpy((void *)(param_1 + 0x1c),(void *)(param_2 + 0x1c),0x18);
  memcpy((void *)(param_1 + 0x34),(void *)(param_2 + 0x34),0x200);
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_2 + 0x234);
  *(undefined2 *)(param_1 + 0x238) = *(undefined2 *)(param_2 + 0x238);
  *(undefined8 *)(param_1 + 0x23c) = *(undefined8 *)(param_2 + 0x23c);
  *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_2 + 0x244);
  *(undefined1 *)(param_1 + 0x248) = *(undefined1 *)(param_2 + 0x248);
  FUN_0021f54c(param_1 + 0x278,param_2 + 0x278);
  *(undefined2 *)(param_1 + 0x298) = *(undefined2 *)(param_2 + 0x298);
  *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(param_2 + 0x29c);
  FUN_00227af0(auStack_30,param_1 + 0x2a0,param_2 + 0x2a0);
  FUN_00227af0(auStack_30,param_1 + 0x598,param_2 + 0x598);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
  *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_2 + 0x638);
  (**(code **)(*(long *)(param_1 + 0x348) + 0x10))(auStack_30,param_1 + 0x348,param_2 + 0x348);
  uVar1 = *(undefined4 *)(param_2 + 0x410);
  *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(param_2 + 0x408);
  *(undefined4 *)(param_1 + 0x410) = uVar1;
  (**(code **)(*(long *)(param_1 + 0x388) + 0x10))(auStack_30,param_1 + 0x388,param_2 + 0x388);
  uVar1 = *(undefined4 *)(param_2 + 0x420);
  *(undefined8 *)(param_1 + 0x418) = *(undefined8 *)(param_2 + 0x418);
  *(undefined4 *)(param_1 + 0x420) = uVar1;
  (**(code **)(*(long *)(param_1 + 0x3c8) + 0x10))(auStack_30,param_1 + 0x3c8,param_2 + 0x3c8);
  uVar1 = *(undefined4 *)(param_2 + 0x430);
  *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(param_2 + 0x428);
  *(undefined4 *)(param_1 + 0x430) = uVar1;
  (**(code **)(*(long *)(param_1 + 0x438) + 0x10))(auStack_30,param_1 + 0x438,param_2 + 0x438);
  (**(code **)(*(long *)(param_1 + 0x478) + 0x10))(auStack_30,param_1 + 0x478,param_2 + 0x478);
  FUN_00227af0(auStack_30,param_1 + 0x250,param_2 + 0x250);
  return;
}

