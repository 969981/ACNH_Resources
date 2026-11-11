
void FUN_00422710(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = param_1 + 2;
  param_1[1] = 0x8000008000000001;
  local_40 = param_2;
  uStack_38 = param_3;
  local_30 = param_4;
  uStack_28 = param_5;
  local_20 = param_6;
  uStack_18 = param_7;
  FUN_004232d0(param_1,0,&local_40,(long)register0x00000008 + -0x10);
  return;
}

