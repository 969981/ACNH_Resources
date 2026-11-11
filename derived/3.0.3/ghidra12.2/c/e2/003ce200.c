
void FUN_003ce200(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  plVar2 = (long *)(param_1 + 0x10);
  plVar1 = (long *)(param_2 + 0x1f0);
  if (plVar1 != plVar2) {
    plVar3 = *(long **)(param_2 + 0x1f8);
    lVar6 = *plVar3;
    *(long **)(*(long *)(param_2 + 0x1f0) + 8) = plVar3;
    *plVar3 = *(long *)(param_2 + 0x1f0);
    *(long **)(lVar6 + 8) = plVar1;
    *(long *)(param_2 + 0x1f0) = lVar6;
  }
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 != plVar2) {
    uVar4 = *(int *)(param_2 + 0x7c) + (uint)*(byte *)(param_2 + 0xf8);
    uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
    if (0x7e < (int)uVar4) {
      uVar4 = 0x7f;
    }
    if (*(char *)(param_1 + 0x80) == '\0') {
      do {
        uVar5 = *(int *)((long)plVar3 + -0x174) + (uint)*(byte *)(plVar3 + -0x1f);
        uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
        if (0x7e < (int)uVar5) {
          uVar5 = 0x7f;
        }
        if (uVar4 < uVar5) goto LAB_003ce2c4;
        plVar3 = (long *)plVar3[1];
      } while (plVar3 != plVar2);
    }
    else {
      do {
        uVar5 = *(int *)((long)plVar3 + -0x174) + (uint)*(byte *)(plVar3 + -0x1f);
        uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
        if (0x7e < (int)uVar5) {
          uVar5 = 0x7f;
        }
        if (uVar4 <= uVar5) goto LAB_003ce2c4;
        plVar3 = (long *)plVar3[1];
      } while (plVar3 != plVar2);
    }
  }
LAB_003ce2c8:
  lVar6 = *plVar1;
  *plVar1 = *plVar2;
  *(long **)(lVar6 + 8) = plVar2;
  *(long **)(*plVar2 + 8) = plVar1;
  *plVar2 = lVar6;
  return;
LAB_003ce2c4:
  plVar2 = plVar3;
  goto LAB_003ce2c8;
}

