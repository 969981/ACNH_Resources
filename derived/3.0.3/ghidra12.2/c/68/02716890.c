
void FUN_02716890(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_04bc35c8;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar2 != 0) {
      param_1[4] = lVar2;
    }
  }
  *param_1 = (long)&PTR_LAB_04a8d8e0;
  FUN_02716b20(param_1 + 7,param_1,param_1[2]);
  FUN_02717090(param_1 + 0xc4e,param_1,param_1[2] + 0xe00);
  FUN_027175d0(param_1 + 0x1895,param_1,param_1[2] + 0x1500);
  lVar2 = param_1[2];
  lVar3 = param_1[3];
  param_1[3] = (long)(param_1 + 0x24dc);
  param_1[0x24dd] = 0;
  param_1[0x24de] = lVar2 + 0x16d0;
  param_1[0x24e0] = 0;
  param_1[0x24e1] = 0;
  *(undefined1 *)(param_1 + 0x24e2) = 0;
  if (lVar3 != 0) {
    param_1[0x24e0] = lVar3;
  }
  param_1[0x24f2] = 0;
  param_1[0x24f3] = 0;
  param_1[0x24f4] = 0;
  param_1[0x24f5] = 0;
  param_1[0x24f1] = 0;
  param_1[0x24f6] = 0;
  param_1[0x24f7] = 0;
  param_1[0x24eb] = 0;
  param_1[0x24ec] = 0;
  param_1[0x24ed] = 0;
  param_1[0x24ee] = 0;
  puVar1 = PTR_DAT_04bc30e8 + 0x10;
  param_1[0x24e8] = 0;
  param_1[0x24eb] = 0;
  param_1[0x24e3] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x24f7) = 0;
  param_1[0x24f2] = 0;
  param_1[0x24df] = (long)(param_1 + 0x24e3);
  plVar4 = param_1 + 0x24f1;
  *plVar4 = (long)puVar1;
  param_1[0x24ef] = 0;
  param_1[0x24f0] = 0;
  *(undefined1 *)(param_1 + 0x24f0) = 0;
  param_1[0x24e9] = 0;
  param_1[0x24ea] = 0;
  *(undefined1 *)(param_1 + 0x24e9) = 0;
  plVar5 = param_1 + 0x24ea;
  *plVar5 = (long)puVar1;
  param_1[0x24e4] = 0;
  param_1[0x24e5] = 0;
  param_1[0x24e6] = 0;
  param_1[0x24e7] = 0;
  param_1[0x24e5] = lVar2 + 0x16d0;
  param_1[0x24ee] = 0;
  param_1[0x24ef] = 0;
  param_1[0x24ec] = 0;
  param_1[0x24ed] = 0;
  param_1[0x24f5] = 0;
  param_1[0x24f6] = 0;
  param_1[0x24f3] = 0;
  param_1[0x24f4] = 0;
  param_1[0x24dc] = (long)&PTR_LAB_04a8d7f0;
  FUN_026400e0();
  lVar3 = param_1[0x24df];
  param_1[0x24df] = (long)plVar5;
  if (lVar3 != 0) {
    param_1[0x24ee] = lVar3;
  }
  param_1[0x24ec] = param_1[0x24ec] + lVar2 + 0x16d8;
  FUN_026400e0(plVar5);
  lVar3 = param_1[0x24df];
  param_1[0x24df] = (long)plVar4;
  if (lVar3 != 0) {
    param_1[0x24f5] = lVar3;
  }
  param_1[0x24f3] = param_1[0x24f3] + lVar2 + 0x16e0;
  FUN_026400e0(plVar4);
  FUN_02717b08(param_1 + 0x24f8,param_1,param_1[2] + 0x16e8);
  FUN_02717b08(param_1 + 0x256f,param_1,param_1[2] + 0x1768);
  FUN_02717f9c(param_1 + 0x25e6,param_1,param_1[2] + 0x17e8);
  return;
}

