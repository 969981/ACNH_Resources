
void FUN_03513a80(long *param_1,long *param_2,undefined4 *param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  undefined4 uVar7;
  
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
  param_1[0x15b] = 0;
  param_1[0x19] = (long)(param_1 + 0x20);
  param_1[0x12] = (long)(param_1 + 0x19);
  *param_1 = (long)&PTR_LAB_04b34580;
  param_1[0x20] = (long)(param_1 + 0x27);
  param_1[0x27] = (long)(param_1 + 0x2e);
  param_1[0x2e] = (long)(param_1 + 0x35);
  param_1[0x35] = (long)(param_1 + 0x3c);
  param_1[0x3c] = (long)(param_1 + 0x43);
  param_1[0x43] = (long)(param_1 + 0x4a);
  param_1[0x4a] = (long)(param_1 + 0x51);
  plVar5 = param_1 + 0xb;
  *plVar5 = (long)(param_1 + 0x12);
  param_1[0x51] = (long)(param_1 + 0x58);
  param_1[10] = (long)plVar5;
  param_1[0x58] = (long)(param_1 + 0x5f);
  param_1[0x5f] = (long)(param_1 + 0x66);
  param_1[0x66] = (long)(param_1 + 0x6d);
  param_1[0x6d] = (long)(param_1 + 0x74);
  param_1[0x74] = (long)(param_1 + 0x7b);
  param_1[0x7b] = (long)(param_1 + 0x82);
  param_1[0x82] = (long)(param_1 + 0x89);
  param_1[0x89] = (long)(param_1 + 0x90);
  param_1[0x90] = (long)(param_1 + 0x97);
  param_1[0x97] = (long)(param_1 + 0x9e);
  param_1[0x9e] = (long)(param_1 + 0xa5);
  param_1[0xa5] = (long)(param_1 + 0xac);
  param_1[0xac] = (long)(param_1 + 0xb3);
  param_1[0xb3] = (long)(param_1 + 0xba);
  param_1[0xba] = (long)(param_1 + 0xc1);
  param_1[0xc1] = (long)(param_1 + 200);
  param_1[200] = (long)(param_1 + 0xcf);
  param_1[0xcf] = (long)(param_1 + 0xd6);
  param_1[0xd6] = (long)(param_1 + 0xdd);
  param_1[0xdd] = (long)(param_1 + 0xe4);
  param_1[0xe4] = (long)(param_1 + 0xeb);
  param_1[0xeb] = (long)(param_1 + 0xf2);
  param_1[0xf2] = (long)(param_1 + 0xf9);
  param_1[0xf9] = (long)(param_1 + 0x100);
  param_1[0x100] = (long)(param_1 + 0x107);
  param_1[0x107] = (long)(param_1 + 0x10e);
  param_1[0x10e] = (long)(param_1 + 0x115);
  param_1[0x115] = (long)(param_1 + 0x11c);
  param_1[0x11c] = (long)(param_1 + 0x123);
  param_1[0x123] = (long)(param_1 + 0x12a);
  param_1[0x12a] = (long)(param_1 + 0x131);
  param_1[0x131] = (long)(param_1 + 0x138);
  param_1[0x138] = (long)(param_1 + 0x13f);
  param_1[0x13f] = (long)(param_1 + 0x146);
  param_1[0x146] = (long)(param_1 + 0x14d);
  param_1[0x14d] = (long)(param_1 + 0x154);
  param_1[0x154] = (long)(param_1 + 0x15b);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = (long)plVar5;
  if (param_1 + 0x162 != (long *)0x0) {
    param_1[7] = 0x3100000000;
    param_1[8] = (long)(param_1 + 0x162);
  }
  *param_1 = (long)&PTR_LAB_04b34b58;
  iVar6 = 0x31;
  puVar1 = PTR_DAT_04bbd520 + 0x10;
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
      plVar5[6] = 0;
      *(uint *)(plVar5 + 4) = uVar2;
      *(undefined4 *)((long)plVar5 + 0x24) = *param_3;
      uVar7 = param_3[1];
      *(uint *)(plVar5 + 4) = uVar2 | 0x1000000;
      *(undefined4 *)(plVar5 + 5) = uVar7;
      if ((uVar2 >> 7 & 1) == 0) {
        plVar5[6] = 0;
        *(undefined4 *)(plVar5 + 6) = *param_3;
        *(undefined4 *)((long)plVar5 + 0x34) = param_3[1];
      }
      *plVar5 = (long)&DAT_04b34cd8;
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

