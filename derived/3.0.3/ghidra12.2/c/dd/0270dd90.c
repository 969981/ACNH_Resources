
void FUN_0270dd90(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  
  param_1[2] = param_3;
  plVar3 = param_1 + 3;
  *plVar3 = 0;
  puVar1 = PTR_DAT_04bc35c8;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar2 != 0) {
      param_1[4] = lVar2;
    }
  }
  plVar5 = param_1 + 0xe;
  *param_1 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(param_1 + 7,0,0x6900);
  lVar2 = 0xa0;
  do {
    *(undefined1 *)(plVar5 + -1) = 0;
    lVar2 = lVar2 + -1;
    plVar5[7] = (long)&DAT_04a8f090;
    plVar5[-3] = 0;
    plVar5[-2] = 0;
    *(undefined1 *)(plVar5 + 6) = 0;
    *(undefined1 *)(plVar5 + 0xd) = 0;
    plVar5[-5] = 0;
    plVar5[-4] = 0;
    plVar5[-4] = (long)(plVar5 + 7);
    plVar5[2] = 0x38;
    plVar5[3] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    *plVar5 = (long)&DAT_04a8c470;
    plVar5[1] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0x13c;
    plVar5[10] = 0;
    plVar5[0xb] = 0;
    plVar5[0xb] = (long)plVar5;
    plVar5[0xc] = 0;
    plVar5[-7] = (long)&PTR_LAB_04a8c590;
    plVar5[-6] = 0;
    plVar5 = plVar5 + 0x15;
  } while (lVar2 != 0);
  *param_1 = (long)&PTR_LAB_04a8c560;
  iVar4 = 0;
  do {
    lVar2 = *plVar3;
    plVar5 = param_1 + 7 + (long)iVar4 * 0x15;
    *plVar3 = (long)plVar5;
    if (lVar2 != 0) {
      plVar5[4] = lVar2;
    }
    plVar5[2] = param_3 + plVar5[2];
    FUN_026400e0(plVar5,param_3);
    iVar4 = iVar4 + 1;
    param_3 = param_3 + 0x158;
  } while (iVar4 != 0xa0);
  return;
}

