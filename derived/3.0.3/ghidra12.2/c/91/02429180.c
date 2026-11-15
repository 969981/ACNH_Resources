
void FUN_02429180(undefined2 *param_1)

{
  undefined2 uVar1;
  
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = DAT_05586008;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = DAT_0558600a;
  *(undefined1 *)((long)param_1 + 3) = DAT_0558600b;
  *(undefined4 *)(param_1 + 2) = DAT_0558600c;
  *(undefined8 *)(param_1 + 0x14) = 0xfffe;
  FUN_0277d4ac();
  return;
}

