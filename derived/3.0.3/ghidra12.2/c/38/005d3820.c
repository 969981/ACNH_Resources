
void FUN_005d3820(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  
  FUN_0053d160();
  param_1[0x23] = param_2;
  *param_1 = &PTR_LAB_048df820;
  FUN_004435a0(param_2);
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  if (*(char *)(param_2 + 0x60) == '\0') {
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[3] = 0;
    cVar3 = *(char *)(param_2 + 0x61);
  }
  else {
    *(undefined1 *)((long)param_1 + 0x24) = 0x10;
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 5) = 1;
    param_1[3] = 0;
    cVar3 = *(char *)(param_2 + 0x61);
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(param_1 + 9) = 0;
    param_1[8] = 0;
    cVar3 = *(char *)(param_2 + 0x62);
  }
  else {
    *(undefined1 *)((long)param_1 + 0x4c) = 0x10;
    *(undefined4 *)(param_1 + 9) = uVar1;
    *(undefined4 *)(param_1 + 10) = 1;
    param_1[8] = 0;
    cVar3 = *(char *)(param_2 + 0x62);
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1[0xb] = 0;
    cVar3 = *(char *)(param_2 + 99);
  }
  else {
    *(undefined1 *)((long)param_1 + 100) = 0x10;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(undefined4 *)(param_1 + 0xd) = 1;
    param_1[0xb] = 0;
    cVar3 = *(char *)(param_2 + 99);
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(param_1 + 0xf) = 0;
    param_1[0xe] = 0;
    iVar2 = *(int *)(param_2 + 0x2c);
  }
  else {
    *(undefined4 *)(param_1 + 0xf) = uVar1;
    *(undefined1 *)((long)param_1 + 0x7c) = 0x10;
    *(undefined4 *)(param_1 + 0x10) = 1;
    param_1[0xe] = 0;
    iVar2 = *(int *)(param_2 + 0x2c);
  }
  if (iVar2 == 0) {
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

