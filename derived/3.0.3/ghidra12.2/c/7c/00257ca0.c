
void FUN_00257ca0(long *param_1)

{
  undefined8 *puVar1;
  
  FUN_0025829c();
  if (param_1[0x83] != 0) {
    (**(code **)(*param_1 + 0x230))(param_1);
    param_1[0x83] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x82];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00285dc0(puVar1);
    param_1[0x82] = 0;
  }
  puVar1 = (undefined8 *)param_1[0xa7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00285dc0(puVar1);
    param_1[0xa7] = 0;
  }
  if (param_1[0x81] != 0) {
    (**(code **)(*param_1 + 0x210))(param_1);
    param_1[0x81] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x80];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00285dc0(puVar1);
    param_1[0x80] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x7f];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00285dc0(puVar1);
    param_1[0x7f] = 0;
  }
  if (param_1[0x7e] != 0) {
    (**(code **)(*param_1 + 0x240))(param_1);
    param_1[0x7e] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x7d];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00285dc0(puVar1);
    param_1[0x7d] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x7c];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00285dc0(puVar1);
    param_1[0x7c] = 0;
  }
  if (param_1[0x7b] != 0) {
    (**(code **)(*param_1 + 0x200))(param_1);
    param_1[0x7b] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x7a];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00285dc0(puVar1);
    param_1[0x7a] = 0;
  }
  if (param_1[0x79] != 0) {
    (**(code **)(*param_1 + 0x1f0))(param_1);
    param_1[0x79] = 0;
  }
  return;
}

