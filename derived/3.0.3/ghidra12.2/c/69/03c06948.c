
/* WARNING: Removing unreachable block (ram,0x03c069e8) */

void FUN_03c06948(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)(param_1 + 0x390);
  puVar3 = *(undefined8 **)(param_1 + 0x398);
  lVar4 = *(long *)(param_1 + 0x390);
  if ((puVar3 != (undefined8 *)0x0 || lVar4 != 0) &&
     (lVar2 = *(long *)(param_1 + 0x3a8), lVar2 != 0)) {
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar3;
      puVar3 = *(undefined8 **)(param_1 + 0x398);
    }
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x398) = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar4 = *(long *)(param_1 + 0x3a8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    puVar3 = *(undefined8 **)(param_1 + 0x398);
    if (*(long *)(param_1 + 0x390) != 0) {
      *(undefined8 **)(*(long *)(param_1 + 0x390) + 8) = puVar3;
      puVar3 = *(undefined8 **)(param_1 + 0x398);
    }
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x398) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long *)(param_1 + 0x3a8) = param_2 + 0x1f0;
  lVar4 = *(long *)(param_2 + 0x1f0);
  *(undefined8 **)(param_2 + 0x1f0) = puVar1;
  *(long *)(param_1 + 0x398) = param_2 + 0x1f0;
  *(long *)(param_1 + 0x390) = lVar4;
  if (lVar4 != 0) {
    *(undefined8 **)(lVar4 + 8) = puVar1;
  }
  *(int *)(param_2 + 0x200) = *(int *)(param_2 + 0x200) + 1;
  return;
}

