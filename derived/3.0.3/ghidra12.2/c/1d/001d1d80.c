
void FUN_001d1d80(long *param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ulong uVar5;
  long *plVar4;
  long lVar6;
  ulong uVar7;
  
  *param_1 = (long)(PTR_DAT_04bcc6c0 + 0x10);
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    lVar1 = param_1[1];
    uVar5 = 0;
    lVar6 = lVar3;
    uVar7 = 1;
    do {
      lVar3 = lVar1;
      plVar4 = *(long **)(lVar3 + uVar5 * 8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
        lVar3 = param_1[1];
        lVar6 = param_1[2];
      }
      bVar2 = uVar7 < (ulong)(lVar6 - lVar3 >> 3);
      lVar1 = lVar3;
      uVar5 = uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (bVar2);
  }
  plVar4 = (long *)param_1[4];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
    lVar3 = param_1[1];
  }
  if (lVar3 == 0) {
    return;
  }
  param_1[2] = lVar3;
  FUN_00187e4c();
  return;
}

