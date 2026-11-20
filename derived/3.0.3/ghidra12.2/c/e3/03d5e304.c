
void FUN_03d5e304(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  long lStack_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x260);
  local_40 = param_2;
  uStack_3c = param_3;
  local_38 = param_4;
  uStack_34 = param_5;
  local_30 = param_6;
  lStack_28 = param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,&local_40);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x268);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,&local_40);
  }
  return;
}

