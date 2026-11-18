
void FUN_0381fa20(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **local_30;
  undefined8 uStack_28;
  undefined **local_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x1e0) < *(int *)(param_1 + 0x1f8)) {
    puVar2 = *(undefined8 **)(param_1 + 0x1e8);
    plVar1 = (long *)(param_1 + 0x1d0);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x1e8) = *puVar2;
    }
    uVar4 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_3 + 8);
    *(undefined1 *)puVar2 = 1;
    plVar3 = puVar2 + 5;
    *plVar3 = 0;
    puVar2[6] = 0;
    puVar2[1] = &PTR_LAB_048f9770;
    puVar2[2] = uVar4;
    puVar2[3] = &PTR_LAB_048f9770;
    puVar2[4] = uVar6;
    lVar5 = *plVar1;
    *plVar1 = (long)plVar3;
    puVar2[6] = plVar1;
    *plVar3 = lVar5;
    if (lVar5 != 0) {
      *(long **)(lVar5 + 8) = plVar3;
    }
    *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
  }
  uStack_18 = *(undefined8 *)(param_2 + 8);
  local_20 = &PTR_LAB_048f9770;
  uStack_28 = *(undefined8 *)(param_3 + 8);
  local_30 = &PTR_LAB_048f9770;
  FUN_02a0cc40(*(long *)PTR_DAT_04bb26a8 + 0xa7660,&local_20,&local_30);
  return;
}

