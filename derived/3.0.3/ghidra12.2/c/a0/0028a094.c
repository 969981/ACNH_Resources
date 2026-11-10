
void FUN_0028a094(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_20;
  char *pcStack_18;
  
  *(undefined8 **)PTR_DAT_04bcdd28 = param_1;
  puVar3 = PTR_DAT_04bcdd30;
  *(undefined8 *)(PTR_DAT_04bcdd30 + 8) = 0;
  local_20 = PTR_DAT_04bccec0 + 0x10;
  pcStack_18 = "RootHeap";
  uVar4 = FUN_002864b0(*param_1,param_1[1],&local_20,0);
  puVar2 = PTR_DAT_04bccf20;
  iVar1 = *(int *)PTR_DAT_04bccf20;
  if (iVar1 < *(int *)(PTR_DAT_04bccf20 + 4)) {
    *(undefined8 *)(*(long *)(PTR_DAT_04bccf20 + 8) + (long)iVar1 * 8) = uVar4;
    *(int *)puVar2 = iVar1 + 1;
  }
  *(undefined **)PTR_DAT_04bcdc50 = puVar3;
  return;
}

