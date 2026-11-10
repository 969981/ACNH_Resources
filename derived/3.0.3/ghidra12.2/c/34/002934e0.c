
undefined8 FUN_002934e0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x90);
  lVar4 = *(long *)(*(long *)PTR_DAT_04bcb8c0 + 0x30);
  plVar3 = (long *)FUN_00228380();
  iVar1 = 0;
  if (*plVar3 != 0) {
    iVar1 = (int)((lVar4 - lVar5) / *plVar3);
  }
  if (-1 < iVar1) {
    *(int *)(PTR_DAT_04bccf10 + 0x2dc) = iVar1;
  }
  puVar2 = PTR_DAT_04bcd350;
  FUN_0026c25c(*(undefined8 *)PTR_DAT_04bcd350,0);
  FUN_0026c21c(*(undefined8 *)puVar2,1);
  puVar2 = PTR_LAB_04bcdea8;
  *(char **)(param_1 + 0x40) = "DestroySessionJob::CompleteProcess";
  *(undefined **)(param_1 + 0x30) = puVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0x320004;
}

