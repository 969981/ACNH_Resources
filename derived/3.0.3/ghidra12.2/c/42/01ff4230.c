
undefined8 FUN_01ff4230(long param_1)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 local_1d8 [25];
  undefined4 local_174;
  undefined1 local_170;
  
  piVar1 = (int *)(param_1 + 0xaf80);
  piVar2 = (int *)(param_1 + 0xcaa0);
  if (0 < *piVar1) {
    lVar3 = 0;
    do {
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0xaf88) + lVar3 * 8);
      lVar3 = lVar3 + 1;
      puVar4[0xf] = &PTR_FUN_0498d548;
      *puVar4 = *(undefined8 *)(param_1 + 0xaf90);
      *(undefined8 **)(param_1 + 0xaf90) = puVar4;
    } while (lVar3 < *piVar1);
  }
  *piVar1 = 0;
  if (0 < *piVar2) {
    lVar3 = 0;
    do {
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0xcaa8) + lVar3 * 8);
      lVar3 = lVar3 + 1;
      puVar4[0xf] = &PTR_FUN_0498d548;
      *puVar4 = *(undefined8 *)(param_1 + 0xcab0);
      *(undefined8 **)(param_1 + 0xcab0) = puVar4;
    } while (lVar3 < *piVar2);
  }
  *piVar2 = 0;
  *(undefined8 *)(param_1 + 0xe5c0) = 0;
  *(undefined8 *)(param_1 + 0xe5c8) = 0;
  *(undefined8 *)(param_1 + 0xe5d0) = 0;
  FUN_01e63f1c(local_1d8);
  local_170 = 1;
  local_1d8[0] = 1;
  local_174 = 1;
  if (*piVar1 < *(int *)(param_1 + 0xaf84)) {
    FUN_021920b0(piVar1,local_1d8);
  }
  FUN_02192850(param_1 + 0xaf70,0,0);
  return 1;
}

