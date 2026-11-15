
void FUN_01fb9090(long param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 local_1d8 [25];
  undefined4 local_174;
  undefined2 local_170;
  undefined1 local_16e;
  
  piVar1 = (int *)(param_1 + 0xcbe8);
  piVar2 = (int *)(param_1 + 0xb0c8);
  *(undefined1 *)(param_1 + 0x7878) = 1;
  if (0 < *piVar2) {
    lVar3 = 0;
    do {
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0xb0d0) + lVar3 * 8);
      lVar3 = lVar3 + 1;
      puVar4[0xf] = &PTR_FUN_0498d548;
      *puVar4 = *(undefined8 *)(param_1 + 0xb0d8);
      *(undefined8 **)(param_1 + 0xb0d8) = puVar4;
    } while (lVar3 < *piVar2);
  }
  *piVar2 = 0;
  if (0 < *piVar1) {
    lVar3 = 0;
    do {
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0xcbf0) + lVar3 * 8);
      lVar3 = lVar3 + 1;
      puVar4[0xf] = &PTR_FUN_0498d548;
      *puVar4 = *(undefined8 *)(param_1 + 0xcbf8);
      *(undefined8 **)(param_1 + 0xcbf8) = puVar4;
    } while (lVar3 < *piVar1);
  }
  *piVar1 = 0;
  *(undefined1 *)(param_1 + 0xe724) = 0;
  *(undefined8 *)(param_1 + 0xe708) = 0;
  *(undefined8 *)(param_1 + 0xe710) = 0;
  *(undefined8 *)(param_1 + 0xe718) = 0;
  *(undefined4 *)(param_1 + 0x7d70) = *param_2;
  FUN_01e63f1c(local_1d8);
  local_170 = 0x101;
  local_16e = 1;
  local_1d8[0] = 0x40;
  local_174 = 1;
  FUN_01fb1020(param_1,local_1d8,0);
  if (0 < *piVar2) {
    FUN_02192850(param_1 + 0xb0b8,0,0);
  }
  return;
}

