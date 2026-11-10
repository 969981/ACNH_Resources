
long * FUN_0035159c(long *param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[1];
  if (plVar2 != (long *)0x0) {
    param_1[1] = *plVar2;
    *plVar2 = (long)plVar2;
    plVar2[1] = (long)plVar2;
    plVar2[4] = 0;
    plVar2[5] = 0;
    *(undefined2 *)(plVar2 + 10) = 0;
    *(undefined4 *)(plVar2 + 6) = param_2;
    *(undefined2 *)((long)plVar2 + 0x36) = param_3;
    *(undefined2 *)((long)plVar2 + 0x34) = param_4;
    plVar2[8] = 0;
    plVar2[9] = 0;
    plVar2[2] = (long)(plVar2 + 2);
    plVar2[3] = (long)(plVar2 + 2);
    plVar2[7] = 0x100;
    lVar1 = FUN_0035160c(param_1,*param_1,plVar2);
    *param_1 = lVar1;
    *(undefined1 *)(lVar1 + 0x39) = 0;
  }
  return plVar2;
}

