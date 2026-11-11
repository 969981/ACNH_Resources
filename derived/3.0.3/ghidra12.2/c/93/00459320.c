
void FUN_00459320(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 4);
  puVar1 = param_1 + 0xb;
  param_1[10] = 0x8000000000000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  param_1[9] = 0;
  FUN_00461750(puVar1);
  FUN_00460560(puVar1);
  uVar2 = FUN_00438810(8);
  FUN_00460ee0();
  FUN_004619b0(puVar1,uVar2);
  uVar2 = FUN_00438810(8);
  FUN_004615b0();
  FUN_004619b0(puVar1,uVar2);
  uVar2 = FUN_00438810(8);
  FUN_00461330();
  FUN_004619b0(puVar1,uVar2);
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  return;
}

