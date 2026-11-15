
void FUN_02000744(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar6 = *(long *)(param_1 + 8);
  uVar2 = FUN_02a8e370(param_2);
  if ((((uVar2 & 1) != 0) || (uVar2 = FUN_02a8e598(param_2), (uVar2 & 1) != 0)) ||
     (uVar2 = FUN_02a8ec10(param_2), (uVar2 & 1) != 0)) {
    local_28 = 0;
    local_30 = 0;
    uVar2 = FUN_02a8f1dc(param_2,&local_30);
    if (((uVar2 & 1) != 0) && (*(int *)(lVar6 + 0x3468) < *(int *)(lVar6 + 0x3480))) {
      puVar3 = *(undefined8 **)(lVar6 + 0x3470);
      plVar1 = (long *)(lVar6 + 0x3458);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar6 + 0x3470) = *puVar3;
      }
      puVar3[3] = 0;
      *(undefined4 *)(puVar3 + 1) = local_28;
      *puVar3 = local_30;
      plVar4 = puVar3 + 2;
      *plVar4 = 0;
      lVar5 = *plVar1;
      *plVar1 = (long)plVar4;
      puVar3[3] = plVar1;
      *plVar4 = lVar5;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar4;
      }
      *(int *)(lVar6 + 0x3468) = *(int *)(lVar6 + 0x3468) + 1;
    }
  }
  return;
}

