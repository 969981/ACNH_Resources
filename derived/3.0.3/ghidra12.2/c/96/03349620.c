
float FUN_03349620(long param_1,undefined8 param_2,short param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  short *psVar5;
  float fVar6;
  
  if (param_3 == 10) {
    plVar1 = (long *)(param_1 + 0x4e8) + (ulong)*(uint *)(param_1 + 0x20f4) * 0xcb;
    if (2 < *(uint *)(param_1 + 0x20f4)) {
      plVar1 = (long *)(param_1 + 0x4e8);
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar2 = plVar1[1];
    lVar4 = 0;
    psVar5 = (short *)(lVar2 + 2);
    do {
      if (psVar5[-1] == 0) goto LAB_0334974c;
      if (*psVar5 == 0) {
        lVar4 = lVar4 + 1;
        goto LAB_0334974c;
      }
      if (psVar5[1] == 0) {
        lVar4 = lVar4 + 2;
        goto LAB_0334974c;
      }
      lVar4 = lVar4 + 3;
      psVar5 = psVar5 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0334974c:
    fVar6 = 0.0;
    iVar3 = (int)lVar4;
    if ((int)plVar1[2] + -1 <= iVar3) {
      return 0.0;
    }
    param_3 = 10;
  }
  else {
    fVar6 = (float)FUN_03361770(param_1 + 0x17f8);
    fVar6 = fVar6 + *(float *)(param_1 + 0x2018);
    if (fVar6 <= 0.0) {
      return 0.0;
    }
    plVar1 = (long *)(param_1 + 0x4e8) + (ulong)*(uint *)(param_1 + 0x20f4) * 0xcb;
    if (2 < *(uint *)(param_1 + 0x20f4)) {
      plVar1 = (long *)(param_1 + 0x4e8);
    }
    (**(code **)(*plVar1 + 0x18))(0,plVar1);
    lVar2 = plVar1[1];
    lVar4 = 0;
    psVar5 = (short *)(lVar2 + 2);
    do {
      if (psVar5[-1] == 0) goto LAB_0334977c;
      if (*psVar5 == 0) {
        lVar4 = lVar4 + 1;
        goto LAB_0334977c;
      }
      if (psVar5[1] == 0) {
        lVar4 = lVar4 + 2;
        goto LAB_0334977c;
      }
      lVar4 = lVar4 + 3;
      psVar5 = psVar5 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0334977c:
    iVar3 = (int)lVar4;
    if ((int)plVar1[2] + -1 <= iVar3) {
      return fVar6;
    }
  }
  psVar5 = (short *)(lVar2 + (long)iVar3 * 2);
  *psVar5 = param_3;
  psVar5[1] = 0;
  return fVar6;
}

