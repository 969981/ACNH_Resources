
void FUN_004d1be0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined *param_6)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_2;
  uStack_38 = param_3;
  FUN_00467bb0(param_1,&local_40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  puVar1 = PTR_DAT_048607b8;
  if (param_6 != (undefined *)0x0) {
    puVar1 = param_6;
  }
  *(undefined8 *)(param_1 + 0x30) = param_4;
  *(undefined **)(param_1 + 0x38) = puVar1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(long *)(param_1 + 0x58) = param_1 + 0x68;
  *(undefined8 *)(param_1 + 0x60) = 0x8000000500000000;
  if (param_5 != 0) {
    *(long *)(param_1 + 0x68) = param_5;
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  return;
}

