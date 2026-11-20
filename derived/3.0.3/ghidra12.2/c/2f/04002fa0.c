
void FUN_04002fa0(undefined4 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  plVar2 = (long *)nn::os::GetTlsValue(*param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
  lVar4 = plVar2[1];
  if (lVar4 != *plVar2) {
    uVar6 = 0;
    lVar1 = *plVar2;
    lVar5 = lVar4;
    do {
      lVar4 = lVar1;
      plVar3 = *(long **)(lVar4 + uVar6 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
        lVar4 = *plVar2;
        lVar5 = plVar2[1];
      }
      uVar6 = uVar6 + 1;
      lVar1 = lVar4;
    } while (uVar6 < (ulong)(lVar5 - lVar4 >> 3));
  }
  plVar3 = DAT_05b059a0;
  if (lVar4 != 0) {
    plVar2[1] = lVar4;
    (**(code **)(*plVar3 + 0x18))();
  }
  (**(code **)(*DAT_05b059a0 + 0x18))(DAT_05b059a0,plVar2);
  nn::os::SetTlsValue(*param_1,0);
  return;
}

