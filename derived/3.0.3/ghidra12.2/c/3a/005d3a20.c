
void FUN_005d3a20(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  
  FUN_0053d160();
  param_1[0x23] = param_2;
  *param_1 = &PTR_LAB_048df898;
  FUN_004435a0(param_2);
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined1 *)((long)param_1 + 0x24) = 0x10;
  if (*(char *)(param_2 + 0x60) != '\0') {
    *(undefined4 *)(param_1 + 9) = uVar1;
    param_1[8] = 0;
    *(undefined1 *)((long)param_1 + 0x4c) = 0x10;
    *(undefined4 *)(param_1 + 10) = 1;
  }
  if (*(char *)(param_2 + 0x61) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    param_1[0xb] = 0;
    *(undefined1 *)((long)param_1 + 100) = 0x10;
    *(undefined4 *)(param_1 + 0xd) = 1;
    *(undefined4 *)(param_1 + 0xf) = uVar1;
    param_1[0xe] = 0;
    *(undefined1 *)((long)param_1 + 0x7c) = 0x10;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  if (*(int *)(param_2 + 0x2c) == 0) {
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    return;
  }
  param_1[6] = *(undefined8 *)(param_2 + 0x50);
  *(undefined1 *)((long)param_1 + 0x3c) = 6;
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined1 *)((long)param_1 + 0x3d) = 1;
  *(undefined4 *)(param_1 + 7) = uVar1;
  return;
}

