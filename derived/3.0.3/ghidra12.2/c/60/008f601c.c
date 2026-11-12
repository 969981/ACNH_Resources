
void FUN_008f601c(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long local_30;
  float local_28;
  
  if ((*(int *)(param_2 + 0xc) != 0) &&
     (*(int *)(*(long *)(param_1 + 8) + 0x10) < *(int *)(*(long *)(param_1 + 8) + 0x28))) {
    local_28 = 0.0;
    local_30 = 0;
    uVar2 = FUN_02a8e370(param_2);
    if ((((uVar2 & 1) != 0) ||
        ((uVar2 = FUN_02a8e598(param_2), (uVar2 & 1) != 0 ||
         (uVar2 = FUN_02a8ec10(param_2), (uVar2 & 1) != 0)))) &&
       (uVar2 = FUN_02a8f1dc(param_2,&local_30), (uVar2 & 1) != 0)) {
      plVar3 = *(long **)(param_1 + 8);
      if ((int)plVar3[2] < (int)plVar3[5]) {
        plVar4 = (long *)plVar3[3];
        if (plVar4 != (long *)0x0) {
          plVar3[3] = *plVar4;
        }
        *(float *)(plVar4 + 1) = local_28 + 5.0;
        *plVar4 = local_30;
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        plVar5 = plVar4 + 3;
        *plVar5 = 0;
        plVar4[4] = 0;
        *(undefined4 *)((long)plVar4 + 0x14) = uVar1;
        *(undefined8 *)((long)plVar4 + 0xc) = uVar7;
        lVar6 = *plVar3;
        *plVar3 = (long)plVar5;
        *plVar5 = lVar6;
        plVar4[4] = (long)plVar3;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 8) = plVar5;
        }
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
      }
    }
  }
  return;
}

