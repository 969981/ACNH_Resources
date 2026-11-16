
void FUN_027d2014(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  if (*(int *)(param_2 + 4) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 4);
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined8 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 4) = uVar1;
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 0xc) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
  *(undefined1 *)((long)param_1 + 0x2b) = *(undefined1 *)((long)param_2 + 0x2b);
  return;
}

