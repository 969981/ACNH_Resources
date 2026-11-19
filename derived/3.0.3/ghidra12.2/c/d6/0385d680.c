
undefined8 FUN_0385d680(long *param_1,long *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  
  pcVar3 = (char *)0x0;
  if (((param_2[3] == 0) || (pcVar3 = *(char **)(*param_2 + 0xb8), pcVar3 == (char *)0x0)) ||
     (pcVar3 != "UISysBounding")) {
    uVar5 = 0;
    bVar1 = true;
    do {
      if (pcVar3[uVar5] != "UISysBounding"[uVar5]) break;
      if (pcVar3[uVar5] == '\0') {
        if (bVar1) goto LAB_0385d6e4;
        break;
      }
      bVar1 = uVar5 < 0x80000;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x80001);
    if (pcVar3 == "UISysScrollBtnList") {
LAB_0385d734:
      lVar4 = 0x13;
    }
    else {
      uVar5 = 0;
      bVar1 = true;
      do {
        if (pcVar3[uVar5] != "UISysScrollBtnList"[uVar5]) break;
        if (pcVar3[uVar5] == '\0') {
          if (bVar1) goto LAB_0385d734;
          break;
        }
        bVar1 = uVar5 < 0x80000;
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x80001);
      if (pcVar3 != "UISysScrollSign") {
        uVar5 = 0;
        bVar1 = true;
        while( true ) {
          if (pcVar3[uVar5] != "UISysScrollSign"[uVar5]) {
            return 0;
          }
          if (pcVar3[uVar5] == '\0') break;
          bVar1 = uVar5 < 0x80000;
          uVar5 = uVar5 + 1;
          if (uVar5 == 0x80001) {
            return 0;
          }
        }
        if (!bVar1) {
          return 0;
        }
      }
      lVar4 = 0x14;
    }
  }
  else {
LAB_0385d6e4:
    lVar4 = 0x12;
  }
                    /* WARNING: Could not recover jumptable at 0x0385d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + lVar4 * 8))();
  return uVar2;
}

