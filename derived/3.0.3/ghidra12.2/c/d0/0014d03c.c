
long FUN_0014d03c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  FUN_0014b7c4(param_1,2,2);
  if ((*(long *)(param_1 + 0xf90) == 0) || (*(long *)(*(long *)(param_1 + 0xf90) + 0x810) == 0)) {
LAB_0014d0f0:
    lVar3 = 0;
  }
  else {
    lVar5 = 0;
    lVar3 = 0;
    do {
      plVar4 = *(long **)(*(long *)(param_1 + 0xf90) + lVar5 * 8);
      if (plVar4 != (long *)0x0) {
        do {
          if (plVar4[5] != 0) {
            lVar1 = FUN_0014d334(plVar4);
            if (lVar1 != 0) {
              lVar2 = FUN_0014e000(lVar3,lVar1);
              if (lVar2 != 0) goto LAB_0014d0b8;
              FUN_00143300(lVar1);
            }
            FUN_0014e11c(lVar3);
            goto LAB_0014d0f0;
          }
          lVar2 = lVar3;
LAB_0014d0b8:
          lVar3 = lVar2;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x100);
  }
  FUN_0014b80c(param_1,2);
  return lVar3;
}

