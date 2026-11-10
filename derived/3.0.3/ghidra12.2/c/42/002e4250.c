
void FUN_002e4250(long param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    do {
      plVar5 = *(long **)(param_1 + 0xf0);
      plVar2 = (long *)FUN_00187df4(0x18);
      uVar1 = *param_2;
      param_3 = param_3 + -1;
      *plVar2 = 0;
      plVar2[1] = (long)plVar5;
      lVar4 = plVar5[2];
      *(undefined4 *)(plVar2 + 2) = uVar1;
      lVar3 = *plVar5;
      *plVar2 = lVar3;
      *(long **)(lVar3 + 8) = plVar2;
      *plVar5 = (long)plVar2;
      plVar5[2] = lVar4 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}

