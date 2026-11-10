
void FUN_0019ce80(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_04bcc188 + 0x10);
  if (param_1[6] != 0) {
    lVar1 = param_1[4];
    plVar3 = (long *)param_1[5];
    param_1[6] = 0;
    lVar2 = *plVar3;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    while (plVar3 != param_1 + 4) {
      plVar3 = (long *)plVar3[1];
      FUN_00187e4c();
    }
  }
  if (param_1[3] != 0) {
    lVar1 = param_1[1];
    plVar3 = (long *)param_1[2];
    param_1[3] = 0;
    lVar2 = *plVar3;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    while (plVar3 != param_1 + 1) {
      plVar3 = (long *)plVar3[1];
      FUN_00187e4c();
    }
  }
  return;
}

