
void FUN_0043ae00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  long *plVar2;
  undefined1 auStack_27c0 [8];
  undefined8 local_27b8;
  undefined8 uStack_27b0;
  undefined8 local_27a8;
  undefined8 uStack_27a0;
  undefined8 local_2798;
  undefined8 uStack_2790;
  undefined1 auStack_2768 [10024];
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined8 uStack_28;
  
  local_30 = auStack_27c0;
  puStack_38 = auStack_2768 + -0x20;
  uStack_28 = 0xffffff80ffffffd0;
  local_27b8 = param_3;
  uStack_27b0 = param_4;
  local_27a8 = param_5;
  uStack_27a0 = param_6;
  local_2798 = param_7;
  uStack_2790 = param_8;
  local_40 = (undefined1 *)register0x00000008;
  FUN_0043a0e0(auStack_2768,0x2728,0x2728,param_2,&local_40);
  plVar2 = *(long **)(param_1 + 8);
  uVar1 = FUN_0043a2d0(auStack_2768);
  (**(code **)(*plVar2 + 0x28))(plVar2,auStack_2768,uVar1);
  return;
}

