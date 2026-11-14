
void FUN_01be2270(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (0 < *param_1) {
    lVar2 = 0;
    puVar1 = PTR_DAT_04bb2df8 + 0x10;
    do {
      puVar3 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar2 * 8);
      lVar2 = lVar2 + 1;
      puVar3[0x2e] = puVar1;
      puVar3[2] = puVar1;
      *puVar3 = *(undefined8 *)(param_1 + 4);
      *(undefined8 **)(param_1 + 4) = puVar3;
    } while (lVar2 < *param_1);
  }
  *param_1 = 0;
  FUN_01be2340(param_1);
  FUN_01be26e0(param_1,param_2);
  FUN_01be2dd0(param_1,param_3);
  if ((**(uint **)PTR_DAT_04bb3448 & 0xfffffffe) == 0xe) {
    FUN_01be2fc0();
    return;
  }
  FUN_01be3330(param_1);
  return;
}

