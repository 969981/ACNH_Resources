
void FUN_02ceda6c(long param_1,undefined4 *param_2,uint param_3)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined4 *puVar6;
  
  if (*(uint *)(param_1 + 0x753c0) == param_3) {
    puVar6 = (undefined4 *)(param_1 + 0x75378) + (ulong)param_3 * 2;
    if (2 < param_3) {
      puVar6 = (undefined4 *)(param_1 + 0x75378);
    }
    if (*(int *)(param_1 + 0x75390) <= (int)param_3 || 0x7fffffff < param_3) {
      puVar6 = (undefined4 *)&DAT_05586008;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x753c4);
    plVar1 = (long *)(param_1 + 0x3a9b0);
    piVar4 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
    if (*piVar4 != 0) {
      param_3 = param_3 - iVar3;
      piVar4 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
      if (param_3 <= *piVar4 - 1U) {
        lVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
        puVar6 = *(undefined4 **)(*(long *)(lVar5 + 8) + (long)(int)param_3 * 8);
        goto LAB_02cedb30;
      }
    }
    puVar6 = (undefined4 *)&DAT_05586008;
  }
LAB_02cedb30:
  uVar2 = puVar6[1];
  *param_2 = *puVar6;
  param_2[1] = uVar2;
  return;
}

