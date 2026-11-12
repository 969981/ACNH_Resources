
void FUN_0085e480(long *param_1,long *param_2,undefined1 *param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  
  puVar3 = PTR_DAT_04bb3050;
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar4 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar4;
  lVar4 = param_2[6];
  *param_1 = (long)&DAT_04b7e798;
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar4;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
  }
  param_1[0x1d] = (long)(param_1 + 0x23);
  param_1[0x17] = (long)(param_1 + 0x1d);
  param_1[0x11] = (long)(param_1 + 0x17);
  param_1[0x23] = (long)(param_1 + 0x29);
  param_1[0x29] = (long)(param_1 + 0x2f);
  param_1[0x2f] = (long)(param_1 + 0x35);
  param_1[0x41] = 0;
  param_1[0x35] = (long)(param_1 + 0x3b);
  param_1[0x3b] = (long)(param_1 + 0x41);
  param_1[6] = 0;
  param_1[7] = 0;
  plVar5 = param_1 + 0xb;
  *plVar5 = (long)(param_1 + 0x11);
  param_1[10] = (long)plVar5;
  param_1[8] = 0;
  param_1[9] = (long)plVar5;
  if (param_1 + 0x47 != (long *)0x0) {
    param_1[8] = (long)(param_1 + 0x47);
    *(undefined4 *)((long)param_1 + 0x3c) = 10;
  }
  *param_1 = (long)&PTR_LAB_0491d228;
  iVar6 = 10;
  puVar1 = PTR_DAT_04bb33a8 + 0x10;
  do {
    if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
      plVar5 = (long *)param_1[9];
      if (plVar5 != (long *)0x0) {
        param_1[9] = *plVar5;
      }
      *plVar5 = (long)(puVar3 + 0x10);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar4 = param_2[1];
      plVar5[3] = 0;
      plVar5[1] = lVar4;
      plVar5[2] = 0;
      uVar2 = *(uint *)(param_2 + 6);
      *plVar5 = (long)puVar1;
      plVar5[5] = 0;
      *(uint *)(plVar5 + 4) = uVar2;
      *(undefined1 *)((long)plVar5 + 0x24) = *param_3;
      *(uint *)(plVar5 + 4) = uVar2 | 0x1000000;
      if ((uVar2 >> 7 & 1) == 0) {
        plVar5[5] = 0;
        *(undefined1 *)(plVar5 + 5) = *param_3;
      }
      *plVar5 = (long)&PTR_LAB_0491d3a8;
      *(uint *)(plVar5 + 4) = uVar2 & 0xfeffffff;
      if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
        *(long **)(param_1[8] + (long)(int)param_1[7] * 8) = plVar5;
        *(int *)(param_1 + 7) = (int)param_1[7] + 1;
      }
    }
    else {
      plVar5 = (long *)0x0;
    }
    (**(code **)(*plVar5 + 0x38))(plVar5,param_1);
    iVar6 = iVar6 + -1;
    *(uint *)(plVar5 + 4) = *(uint *)(plVar5 + 4) & 0xfffffffc;
  } while (iVar6 != 0);
  return;
}

