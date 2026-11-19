
void FUN_0388e130(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long local_50;
  undefined8 uStack_48;
  
  plVar5 = param_2 + 2;
  local_50 = *plVar5;
  uStack_48 = param_2[3];
  plVar1 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68);
  uVar6 = *(undefined8 *)(*(long *)PTR_DAT_04bcb7d8 + 0x90);
  (**(code **)(*plVar1 + 0x1f0))(plVar1,&local_50);
  if ((*(char *)(param_2 + 3) == '\0') && (iVar3 = *(int *)(param_1 + 8), iVar3 != 0)) {
    plVar4 = *(long **)(param_1 + 0x10);
    plVar1 = plVar4;
    do {
      puVar2 = (undefined8 *)*plVar1;
      if ((local_50 == puVar2[2] && uStack_48._1_1_ == *(char *)((long)puVar2 + 0x19)) &&
         (*(char *)(puVar2 + 3) != '\0')) {
        if (local_50 != 0) {
          FUN_038987c0(uVar6,puVar2 + 2,1);
          puVar2 = (undefined8 *)*plVar1;
        }
        (**(code **)*puVar2)();
        plVar4 = *(long **)(param_1 + 0x10);
        iVar3 = *(int *)(param_1 + 8);
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 != plVar4 + iVar3);
  }
  if (*plVar5 != 0) {
    FUN_038987c0(uVar6,plVar5,1);
  }
  (**(code **)*param_2)(param_2);
  return;
}

