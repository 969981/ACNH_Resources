
void FUN_001fadd0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = param_1 + 0x12;
  *param_1 = (long)(PTR_DAT_04bcc9d8 + 0x10);
  FUN_00202218(param_1 + 0x11,*plVar4);
  param_1[0x13] = 0;
  param_1[0x11] = (long)plVar4;
  *plVar4 = 0;
  if (param_1[0x17] != 0) {
    lVar1 = param_1[0x15];
    plVar3 = (long *)param_1[0x16];
    param_1[0x17] = 0;
    lVar2 = *plVar3;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    if (plVar3 != param_1 + 0x15) {
      do {
        plVar5 = (long *)plVar3[1];
        (**(code **)plVar3[2])();
        FUN_00187e4c(plVar3);
        plVar3 = plVar5;
      } while (plVar5 != param_1 + 0x15);
      lVar1 = *plVar4;
      goto LAB_001fae78;
    }
  }
  lVar1 = 0;
LAB_001fae78:
  FUN_00202218(param_1 + 0x11,lVar1);
  thunk_FUN_00199388(param_1);
  return;
}

