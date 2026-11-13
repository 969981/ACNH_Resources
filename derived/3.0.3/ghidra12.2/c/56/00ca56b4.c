
void FUN_00ca56b4(long *param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  param_1[1] = *param_2;
  lVar2 = param_2[1];
  *param_1 = (long)&PTR_LAB_04945b68;
  param_1[0x1f] = (long)(param_1 + 0x20);
  param_1[0x1e] = (long)(param_1 + 0x1f);
  param_1[0x1d] = (long)(param_1 + 0x1e);
  param_1[0x1c] = (long)(param_1 + 0x1d);
  param_1[5] = (long)(param_1 + 6);
  param_1[3] = 0;
  param_1[4] = 0x1000000000;
  plVar5 = param_1 + 0x1b;
  *plVar5 = (long)(param_1 + 0x1c);
  param_1[0x20] = (long)(param_1 + 0x21);
  param_1[0x21] = (long)(param_1 + 0x22);
  puVar3 = PTR_DAT_04bb3238;
  *(int *)(param_1 + 2) = (int)lVar2;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x2c] = 0;
  param_1[0x19] = (long)plVar5;
  param_1[0x1a] = (long)plVar5;
  uVar1 = *(undefined4 *)puVar3;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = uVar1;
  param_1[0x22] = (long)(param_1 + 0x23);
  param_1[0x23] = (long)(param_1 + 0x24);
  param_1[0x24] = (long)(param_1 + 0x25);
  param_1[0x25] = (long)(param_1 + 0x26);
  param_1[0x26] = (long)(param_1 + 0x27);
  param_1[0x27] = (long)(param_1 + 0x28);
  param_1[0x28] = (long)(param_1 + 0x29);
  param_1[0x29] = (long)(param_1 + 0x2a);
  param_1[0x2a] = (long)(param_1 + 0x2b);
  param_1[0x2b] = (long)(param_1 + 0x2c);
  if (param_1 + 0x2d != (long *)0x0) {
    param_1[0x17] = 0x1200000000;
    param_1[0x18] = (long)(param_1 + 0x2d);
  }
  *(undefined4 *)(param_1 + 0x43) = 0;
  puVar4 = PTR_DAT_04bb6570;
  param_1[0x44] = (long)param_1;
  param_1[0x42] = (long)"DelayMinFrame";
  puVar3 = PTR_DAT_04bb2020;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x49] = (long)param_1;
  param_1[0x45] = (long)(puVar4 + 0x10);
  param_1[0x3f] = (long)param_1;
  param_1[0x40] = (long)(puVar4 + 0x10);
  param_1[0x47] = (long)"DelayMaxFrame";
  param_1[0x41] = (long)(puVar3 + 0x10);
  param_1[0x46] = (long)(puVar3 + 0x10);
  *(undefined4 *)(param_1 + 4) = 2;
  param_1[6] = (long)(param_1 + 0x40);
  param_1[7] = (long)(param_1 + 0x45);
  return;
}

