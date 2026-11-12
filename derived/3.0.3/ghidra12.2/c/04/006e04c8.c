
void FUN_006e04c8(long param_1,undefined8 param_2)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *(undefined8 *)(param_1 + 0x50);
  uStack_18 = *(undefined8 *)(param_1 + 0x58);
  local_30 = *(undefined8 *)(param_1 + 0x60);
  uStack_28 = *(undefined8 *)(param_1 + 0x68);
  local_40 = *(undefined8 *)(param_1 + 0x70);
  uStack_38 = *(undefined8 *)(param_1 + 0x78);
  local_50 = *(undefined8 *)(param_1 + 0x80);
  uStack_48 = *(undefined8 *)(param_1 + 0x88);
  FUN_006984a0(param_2,param_1 + 0x90,&local_20,&local_30,&local_40,&local_50,
               *(long *)(param_1 + 0x30) + 8,*(long *)(param_1 + 0x28) + 0x20);
  return;
}

