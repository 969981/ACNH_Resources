
void FUN_01ef9ea0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_04bc1e38;
  *param_1 = (long)&PTR_LAB_04a626f0;
  puVar3 = PTR_DAT_04bbc1a0;
  param_1[0x1d7e] = (long)(puVar2 + 0x10);
  puVar2 = puVar3 + 0x10;
  param_1[0x24ae] = (long)puVar2;
  param_1[0x24a5] = (long)puVar2;
  param_1[0x249c] = (long)puVar2;
  param_1[0x2493] = (long)puVar2;
  param_1[0x24e4] = (long)puVar2;
  param_1[0x24db] = (long)puVar2;
  param_1[0x24d2] = (long)puVar2;
  param_1[0x24c9] = (long)puVar2;
  param_1[0x24c0] = (long)puVar2;
  param_1[0x24b7] = (long)puVar2;
  plVar6 = param_1 + 0x240a;
  do {
    plVar6 = (long *)plVar6[1];
  } while (plVar6 != param_1 + 0x240a);
  param_1[0x1d7f] = (long)(PTR_DAT_04bc24a8 + 0x10);
  plVar6 = (long *)param_1[0x1d82];
  if (plVar6 != param_1 + 0x1d81) {
    do {
      plVar6[-10] = (long)(puVar3 + 0x10);
      plVar6 = (long *)plVar6[1];
    } while (plVar6 != param_1 + 0x1d81);
  }
  FUN_02063770(param_1 + 0x1cf7);
  puVar4 = PTR_DAT_04bc1e40;
  puVar2 = PTR_DAT_04bc1558;
  param_1[0x1cbb] = (long)(puVar3 + 0x10);
  *param_1 = (long)(puVar4 + 0x10);
  param_1[0x1cb7] = (long)(puVar2 + 0x10);
  if (0 < (int)param_1[0x194e]) {
    lVar5 = 0;
    do {
      lVar1 = lVar5 * 8;
      lVar5 = lVar5 + 1;
      *(undefined **)(*(long *)(param_1[0x194f] + lVar1) + 0x78) = puVar3 + 0x10;
    } while (lVar5 < (int)param_1[0x194e]);
  }
  if (0 < (int)param_1[0x15ea]) {
    lVar5 = 0;
    do {
      lVar1 = lVar5 * 8;
      lVar5 = lVar5 + 1;
      *(undefined **)(*(long *)(param_1[0x15eb] + lVar1) + 0x78) = puVar3 + 0x10;
    } while (lVar5 < (int)param_1[0x15ea]);
  }
  FUN_01e9fc50(param_1);
  return;
}

