
void FUN_0270ce54(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = param_1;
    if (lVar3 != 0) {
      param_1[4] = lVar3;
    }
  }
  *param_1 = &PTR_LAB_04a8c320;
  FUN_0270d0e4(param_1 + 7,param_1,param_1[2]);
  FUN_0270d47c(param_1 + 0x1498c,param_1,param_1[2] + 0xbf670);
  FUN_0270ff9c(param_1 + 0x1cd5f,param_1,param_1[2] + 0x1cb510);
  param_1[0x1cd5f] = &PTR_LAB_04a8c830;
  lVar3 = param_1[2];
  param_1[0x1cdde] = 0;
  param_1[0x1cddf] = lVar3 + 0x1cb6b8;
  param_1[0x1cde2] = 0;
  param_1[0x1cde0] = 0;
  param_1[0x1cde1] = 0;
  *(undefined1 *)(param_1 + 0x1cde3) = 0;
  if (param_1[3] != 0) {
    param_1[0x1cde1] = param_1[3];
  }
  param_1[0x1cde8] = param_1 + 0x1cddd;
  param_1[0x1cddd] = &DAT_04a8f0c0;
  lVar4 = lVar3 + 0x1e3368;
  param_1[0x1cde6] = lVar4;
  param_1[0x1cde9] = 0;
  *(undefined1 *)(param_1 + 0x1cdea) = 0;
  param_1[3] = param_1 + 0x1cde4;
  param_1[0x1cdf2] = 0;
  param_1[0x1cdf3] = 0;
  param_1[0x1cdf8] = 0;
  param_1[0x1cdf4] = 0;
  param_1[0x1cdf5] = 0;
  param_1[0x1cdf6] = 0;
  param_1[0x1cdf7] = 0;
  puVar2 = PTR_DAT_04bc30e8;
  puVar1 = PTR_DAT_04bc30e8 + 0x10;
  param_1[0x1cdf7] = 0;
  *(undefined1 *)(param_1 + 0x1cdf8) = 0;
  plVar6 = param_1 + 0x1cdeb;
  *plVar6 = (long)puVar1;
  param_1[0x1cde7] = plVar6;
  plVar5 = param_1 + 0x1cdf2;
  *plVar5 = (long)puVar1;
  param_1[0x1cdec] = 0;
  param_1[0x1cded] = 0;
  param_1[0x1cdee] = 0;
  param_1[0x1cdef] = 0;
  param_1[0x1cdf0] = 0;
  param_1[0x1cdf1] = 0;
  *(undefined1 *)(param_1 + 0x1cdf1) = 0;
  param_1[0x1cded] = lVar4;
  param_1[0x1cdf3] = 0;
  param_1[0x1cdf4] = 0;
  param_1[0x1cdf5] = 0;
  param_1[0x1cdf6] = 0;
  param_1[0x1cde4] = &PTR_LAB_04a8ca40;
  param_1[0x1cde5] = 0;
  FUN_026400e0(plVar6,lVar4);
  lVar4 = param_1[0x1cde7];
  param_1[0x1cde7] = plVar5;
  if (lVar4 != 0) {
    param_1[0x1cdf6] = lVar4;
  }
  param_1[0x1cdf4] = param_1[0x1cdf4] + lVar3 + 0x1e3370;
  FUN_026400e0(plVar5);
  param_1[0x1cdfa] = 0;
  param_1[0x1cdfb] = param_1[2] + 0x1e3378;
  param_1[0x1cdfe] = 0;
  param_1[0x1cdfc] = 0;
  param_1[0x1cdfd] = 0;
  *(undefined1 *)(param_1 + 0x1cdff) = 0;
  if (param_1[3] != 0) {
    param_1[0x1cdfd] = param_1[3];
  }
  *(undefined1 *)(param_1 + 0x1ce06) = 0;
  param_1[0x1cdf9] = puVar2 + 0x10;
  param_1[0x1ce04] = 0;
  param_1[0x1ce05] = 0;
  param_1[3] = param_1 + 0x1ce00;
  param_1[0x1ce04] = param_1 + 0x1cdf9;
  param_1[0x1ce02] = param_1[2] + 0x1e3380;
  param_1[0x1ce03] = 0;
  param_1[0x1ce00] = puVar2 + 0x10;
  param_1[0x1ce01] = 0;
  return;
}

