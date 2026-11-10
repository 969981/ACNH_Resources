
void FUN_001676b0(undefined8 *param_1,undefined1 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)((long)param_1 + 0xd) = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 8;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 6;
  if (param_3 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  param_1[2] = uVar1;
  return;
}

