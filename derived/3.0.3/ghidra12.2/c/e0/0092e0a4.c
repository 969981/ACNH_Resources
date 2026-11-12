
void FUN_0092e0a4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_28;
  char local_24;
  
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    iVar5 = 0;
  }
  else {
    FUN_02703058(&local_28);
    iVar5 = 0;
    if (local_24 != '\0') {
      iVar5 = local_28;
    }
  }
  if (iVar5 == 2) {
    puVar6 = &DAT_04cf4618;
  }
  else if (iVar5 == 1) {
    puVar6 = &DAT_04cf4538;
  }
  else {
    if (iVar5 != 0) {
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      *param_1 = (long)(PTR_DAT_04bbc1a0 + 0x10);
      param_1[1] = (long)puVar1;
      param_1[2] = 0;
      param_1[3] = (long)puVar1;
      param_1[4] = 0x4000000040;
      return;
    }
    puVar6 = &DAT_04cf4458;
  }
  uVar3 = puVar6[1];
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  *(undefined4 *)(param_1 + 2) = *puVar6;
  *(undefined4 *)((long)param_1 + 0x14) = uVar3;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  uVar3 = puVar6[4];
  uVar4 = puVar6[5];
  param_1[3] = (long)puVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((long)param_1 + 0x24) = uVar4;
  return;
}

