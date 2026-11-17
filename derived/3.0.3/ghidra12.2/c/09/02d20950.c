
void FUN_02d20950(undefined4 *param_1,long param_2,int param_3)

{
  long *plVar1;
  undefined4 uVar2;
  int *piVar3;
  long lVar4;
  undefined4 *puVar5;
  
  plVar1 = (long *)(param_2 + 0x1c558);
  piVar3 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
  if (*piVar3 != 0) {
    piVar3 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
    if (param_3 - 1U <= *piVar3 - 1U) {
      lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
      puVar5 = *(undefined4 **)(*(long *)(lVar4 + 8) + (ulong)(param_3 - 1U) * 8);
      goto LAB_02d209d0;
    }
  }
  puVar5 = (undefined4 *)&DAT_05586008;
LAB_02d209d0:
  uVar2 = puVar5[1];
  *param_1 = *puVar5;
  param_1[1] = uVar2;
  return;
}

