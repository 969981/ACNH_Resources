
void FUN_017159b0(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar1 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar1;
  lVar1 = param_2[6];
  *param_1 = (long)&DAT_04b7e798;
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar1;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  param_1[0x505] = 0;
  *param_1 = (long)&PTR_LAB_049be548;
  plVar2 = param_1 + 0xb;
  *plVar2 = (long)(param_1 + 0x25);
  param_1[0x25] = (long)(param_1 + 0x3f);
  param_1[0x3f] = (long)(param_1 + 0x59);
  param_1[10] = (long)plVar2;
  param_1[0x59] = (long)(param_1 + 0x73);
  param_1[0x73] = (long)(param_1 + 0x8d);
  param_1[0x8d] = (long)(param_1 + 0xa7);
  param_1[0xa7] = (long)(param_1 + 0xc1);
  param_1[0xc1] = (long)(param_1 + 0xdb);
  param_1[0xdb] = (long)(param_1 + 0xf5);
  param_1[0xf5] = (long)(param_1 + 0x10f);
  param_1[0x10f] = (long)(param_1 + 0x129);
  param_1[0x129] = (long)(param_1 + 0x143);
  param_1[0x143] = (long)(param_1 + 0x15d);
  param_1[0x15d] = (long)(param_1 + 0x177);
  param_1[0x177] = (long)(param_1 + 0x191);
  param_1[0x191] = (long)(param_1 + 0x1ab);
  param_1[0x1ab] = (long)(param_1 + 0x1c5);
  param_1[0x1c5] = (long)(param_1 + 0x1df);
  param_1[0x1df] = (long)(param_1 + 0x1f9);
  param_1[0x1f9] = (long)(param_1 + 0x213);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x213] = (long)(param_1 + 0x22d);
  param_1[0x22d] = (long)(param_1 + 0x247);
  param_1[0x247] = (long)(param_1 + 0x261);
  param_1[8] = 0;
  param_1[9] = (long)plVar2;
  param_1[0x261] = (long)(param_1 + 0x27b);
  param_1[0x27b] = (long)(param_1 + 0x295);
  param_1[0x295] = (long)(param_1 + 0x2af);
  param_1[0x2af] = (long)(param_1 + 0x2c9);
  param_1[0x2c9] = (long)(param_1 + 0x2e3);
  param_1[0x2e3] = (long)(param_1 + 0x2fd);
  param_1[0x2fd] = (long)(param_1 + 0x317);
  param_1[0x317] = (long)(param_1 + 0x331);
  param_1[0x331] = (long)(param_1 + 0x34b);
  param_1[0x34b] = (long)(param_1 + 0x365);
  param_1[0x365] = (long)(param_1 + 0x37f);
  param_1[0x37f] = (long)(param_1 + 0x399);
  param_1[0x399] = (long)(param_1 + 0x3b3);
  param_1[0x3b3] = (long)(param_1 + 0x3cd);
  param_1[0x3cd] = (long)(param_1 + 999);
  param_1[999] = (long)(param_1 + 0x401);
  param_1[0x401] = (long)(param_1 + 0x41b);
  param_1[0x41b] = (long)(param_1 + 0x435);
  param_1[0x435] = (long)(param_1 + 0x44f);
  param_1[0x44f] = (long)(param_1 + 0x469);
  param_1[0x469] = (long)(param_1 + 0x483);
  param_1[0x483] = (long)(param_1 + 0x49d);
  param_1[0x49d] = (long)(param_1 + 0x4b7);
  param_1[0x4b7] = (long)(param_1 + 0x4d1);
  param_1[0x4d1] = (long)(param_1 + 0x4eb);
  param_1[0x4eb] = (long)(param_1 + 0x505);
  if (param_1 + 0x51f != (long *)0x0) {
    param_1[7] = 0x3200000000;
    param_1[8] = (long)(param_1 + 0x51f);
  }
  *param_1 = (long)&PTR_LAB_049bd8d8;
  iVar3 = 0;
  do {
    if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
      plVar2 = (long *)param_1[9];
      if (plVar2 != (long *)0x0) {
        param_1[9] = *plVar2;
      }
      FUN_017181a0(plVar2,param_2,0);
      *plVar2 = (long)&PTR_FUN_049bda58;
      if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
        *(long **)(param_1[8] + (long)(int)param_1[7] * 8) = plVar2;
        *(int *)(param_1 + 7) = (int)param_1[7] + 1;
      }
    }
    else {
      plVar2 = (long *)0x0;
    }
    (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
    iVar4 = 0x32;
    if (iVar3 < 0x32) {
      iVar4 = iVar3 + 1;
    }
    *(uint *)(plVar2 + 4) = *(uint *)(plVar2 + 4) & 0xfffffffc;
    iVar3 = iVar4;
  } while (iVar4 != 0x32);
  return;
}

