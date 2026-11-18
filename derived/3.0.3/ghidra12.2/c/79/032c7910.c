
void FUN_032c7910(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x48);
  uVar1 = param_3;
  if (*(uint *)(param_1 + 0x40) <= param_3) {
    uVar1 = 0;
  }
  lVar4 = (long)(int)uVar1;
  if ((*(byte *)(lVar3 + lVar4) & 1) == 0) {
    *(byte *)(lVar3 + lVar4) = *(byte *)(lVar3 + lVar4) & 0xfd;
    uVar1 = param_3;
    if (*(uint *)(param_1 + 0x30) <= param_3) {
      uVar1 = 0;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + (long)(int)uVar1 * 8);
    if (lVar3 != 0) {
      do {
        lVar4 = lVar3;
        plVar2 = *(long **)(lVar4 + 0x28);
        lVar3 = *(long *)(lVar4 + 0x18);
      } while (*(long *)(lVar4 + 0x18) != 0 && plVar2 == (long *)0x0);
      *(undefined4 *)(lVar4 + 0x6c) = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,0);
      }
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      param_2 = param_2 + 1;
      do {
        param_2 = param_2 + -1;
        if (param_2 == 0) break;
        lVar3 = *(long *)(lVar3 + 0x10);
      } while (lVar3 != 0);
    }
    uVar1 = param_3;
    if (*(uint *)(param_1 + 0x30) <= param_3) {
      uVar1 = 0;
    }
    *(long *)(*(long *)(param_1 + 0x38) + (long)(int)uVar1 * 8) = lVar3;
    if (*(uint *)(param_1 + 0x30) <= param_3) {
      param_3 = 0;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + (long)(int)param_3 * 8);
    do {
      lVar4 = lVar3;
      plVar2 = *(long **)(lVar4 + 0x28);
      lVar3 = *(long *)(lVar4 + 0x18);
    } while (*(long *)(lVar4 + 0x18) != 0 && plVar2 == (long *)0x0);
    *(undefined4 *)(lVar4 + 0x6c) = 0;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032c7a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x20))(plVar2,1);
      return;
    }
  }
  return;
}

