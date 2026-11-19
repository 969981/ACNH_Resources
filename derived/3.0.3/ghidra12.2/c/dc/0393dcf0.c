
void FUN_0393dcf0(undefined4 param_1,long *param_2,uint param_3,long param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  uVar2 = (**(code **)*param_2)();
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_2 + 3) & param_3;
  lVar4 = param_2[5];
  if (*(uint *)(param_2 + 4) <= uVar1) {
    uVar1 = 0;
  }
  plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 0x30);
  uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3);
  if ((uVar2 & 1) != 0) {
    plVar5 = *(long **)(lVar4 + (long)(int)uVar1 * 0x30 + 8);
    for (lVar4 = *(long *)(param_4 + 8); (lVar4 != 0 && (*(int *)(lVar4 + 8) != (int)plVar5[1]));
        lVar4 = *(long *)(lVar4 + 0x10)) {
    }
    for (lVar6 = *(long *)(param_5 + 8); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
      if (*(int *)(lVar6 + 8) == (int)plVar5[1]) {
        if ((plVar5 != (long *)0x0) && (lVar4 != 0)) goto LAB_0393de20;
        break;
      }
    }
LAB_0393ddb4:
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0393ddf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_1,param_2,param_3,param_4,param_5);
  return;
LAB_0393de20:
  (**(code **)(*plVar5 + 0x20))(param_1,plVar5,lVar4,lVar6);
  lVar6 = *(long *)(lVar6 + 0x10);
  if (lVar6 == 0) goto LAB_0393ddb4;
  plVar5 = (long *)plVar5[2];
  if ((plVar5 == (long *)0x0) || (lVar4 = *(long *)(lVar4 + 0x10), lVar4 == 0)) goto LAB_0393ddb4;
  goto LAB_0393de20;
}

