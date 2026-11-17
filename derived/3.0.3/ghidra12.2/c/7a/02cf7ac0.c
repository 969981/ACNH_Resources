
void FUN_02cf7ac0(long param_1)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = (long *)(param_1 + 0x57d40);
  piVar2 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
  if (0 < *piVar2) {
    lVar3 = 0;
    puVar4 = *(undefined8 **)(piVar2 + 4);
    do {
      puVar5 = *(undefined8 **)(*(long *)(piVar2 + 2) + lVar3 * 8);
      lVar3 = lVar3 + 1;
      *puVar5 = puVar4;
      *(undefined8 **)(piVar2 + 4) = puVar5;
      puVar4 = puVar5;
    } while (lVar3 < *piVar2);
  }
  *piVar2 = 0;
  *plVar1 = (long)(PTR_DAT_04bc5db8 + 0x10);
  FUN_02cc84b4(param_1);
  return;
}

