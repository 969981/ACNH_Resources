
void FUN_03513730(long *param_1,long *param_2,undefined2 *param_3,long *param_4)

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
  param_1[299] = 0;
  param_1[0x1d] = (long)(param_1 + 0x23);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x17] = (long)(param_1 + 0x1d);
  *param_1 = (long)&PTR_LAB_04b34700;
  param_1[0x11] = (long)(param_1 + 0x17);
  plVar5 = param_1 + 0xb;
  *plVar5 = (long)(param_1 + 0x11);
  param_1[0x23] = (long)(param_1 + 0x29);
  param_1[0x29] = (long)(param_1 + 0x2f);
  param_1[0x2f] = (long)(param_1 + 0x35);
  param_1[0x35] = (long)(param_1 + 0x3b);
  param_1[0x3b] = (long)(param_1 + 0x41);
  param_1[0x41] = (long)(param_1 + 0x47);
  param_1[0x47] = (long)(param_1 + 0x4d);
  param_1[0x4d] = (long)(param_1 + 0x53);
  param_1[0x53] = (long)(param_1 + 0x59);
  param_1[0x59] = (long)(param_1 + 0x5f);
  param_1[0x5f] = (long)(param_1 + 0x65);
  param_1[10] = (long)plVar5;
  param_1[0x65] = (long)(param_1 + 0x6b);
  param_1[0x6b] = (long)(param_1 + 0x71);
  param_1[0x71] = (long)(param_1 + 0x77);
  param_1[0x77] = (long)(param_1 + 0x7d);
  param_1[0x7d] = (long)(param_1 + 0x83);
  param_1[0x83] = (long)(param_1 + 0x89);
  param_1[0x89] = (long)(param_1 + 0x8f);
  param_1[0x8f] = (long)(param_1 + 0x95);
  param_1[0x95] = (long)(param_1 + 0x9b);
  param_1[0x9b] = (long)(param_1 + 0xa1);
  param_1[0xa1] = (long)(param_1 + 0xa7);
  param_1[0xa7] = (long)(param_1 + 0xad);
  param_1[0xad] = (long)(param_1 + 0xb3);
  param_1[0xb3] = (long)(param_1 + 0xb9);
  param_1[0xb9] = (long)(param_1 + 0xbf);
  param_1[0xbf] = (long)(param_1 + 0xc5);
  param_1[0xc5] = (long)(param_1 + 0xcb);
  param_1[0xcb] = (long)(param_1 + 0xd1);
  param_1[0xd1] = (long)(param_1 + 0xd7);
  param_1[0xd7] = (long)(param_1 + 0xdd);
  param_1[0xdd] = (long)(param_1 + 0xe3);
  param_1[0xe3] = (long)(param_1 + 0xe9);
  param_1[0xe9] = (long)(param_1 + 0xef);
  param_1[0xef] = (long)(param_1 + 0xf5);
  param_1[0xf5] = (long)(param_1 + 0xfb);
  param_1[0xfb] = (long)(param_1 + 0x101);
  param_1[0x101] = (long)(param_1 + 0x107);
  param_1[0x107] = (long)(param_1 + 0x10d);
  param_1[0x10d] = (long)(param_1 + 0x113);
  param_1[0x113] = (long)(param_1 + 0x119);
  param_1[0x119] = (long)(param_1 + 0x11f);
  param_1[0x11f] = (long)(param_1 + 0x125);
  param_1[0x125] = (long)(param_1 + 299);
  param_1[8] = 0;
  param_1[9] = (long)plVar5;
  if (param_1 + 0x131 != (long *)0x0) {
    param_1[7] = 0x3100000000;
    param_1[8] = (long)(param_1 + 0x131);
  }
  *param_1 = (long)&PTR_LAB_04b34880;
  iVar6 = 0x31;
  puVar1 = PTR_DAT_04bb6048 + 0x10;
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
      *(undefined2 *)((long)plVar5 + 0x24) = *param_3;
      *(uint *)(plVar5 + 4) = uVar2 | 0x1000000;
      if ((uVar2 >> 7 & 1) == 0) {
        plVar5[5] = 0;
        *(undefined2 *)(plVar5 + 5) = *param_3;
      }
      *plVar5 = (long)&DAT_04b34a00;
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

