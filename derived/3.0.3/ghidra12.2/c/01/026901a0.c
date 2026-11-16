
void FUN_026901a0(long param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined *local_50;
  char *pcStack_48;
  
  lVar1 = param_1 + 0x1267c;
  FUN_02748ce0(lVar1);
  FUN_02746850(param_1 + 0x3c,param_2);
  FUN_02746850(param_1 + 0x62c,param_2);
  FUN_02746850(param_1 + 0xc1c,param_2);
  FUN_02746850(param_1 + 0x120c,param_2);
  FUN_02746850(param_1 + 0x17fc,param_2);
  FUN_02746850(param_1 + 0x1dec,param_2);
  FUN_02746850(param_1 + 0x23dc,param_2);
  FUN_02746850(param_1 + 0x29cc,param_2);
  lVar8 = 0xa0;
  lVar7 = param_1 + 0x2fbc;
  do {
    FUN_02746850(lVar7,param_2);
    lVar7 = lVar7 + 0x158;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if (*param_2 != 0) {
    *(undefined1 *)(param_1 + 0x13153) = 0;
    *(undefined2 *)(param_1 + 0x13151) = 0xffff;
  }
  puVar2 = PTR_DAT_04bb2020;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "WoreNewYearHat";
  iVar6 = FUN_02749340(lVar1,&local_50);
  if (iVar6 != 0) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    if ((*(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060) & 0xffff0000) == 0x1f0c0000) {
      iVar6 = (int)(char)(*(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060) >> 0x20);
      bVar5 = SBORROW4(iVar6,0x16);
      bVar3 = iVar6 + -0x16 < 0;
      bVar4 = iVar6 == 0x16;
    }
    if (bVar4 || bVar3 != bVar5) {
      local_50 = puVar2 + 0x10;
      pcStack_48 = "WoreNewYearHat";
      FUN_0274a060(lVar1,&local_50,0);
    }
  }
  return;
}

