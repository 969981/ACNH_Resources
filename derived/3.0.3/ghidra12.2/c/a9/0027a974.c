
void FUN_0027a974(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04bccf10;
  PTR_DAT_04bccf10[0x2f3] = *(undefined1 *)(param_1 + 0x80);
  lVar4 = *(long *)(param_1 + 0x78);
  plVar3 = (long *)FUN_00228380();
  iVar1 = 0;
  if (*plVar3 != 0) {
    iVar1 = (int)(lVar4 / *plVar3);
  }
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  *(int *)(puVar2 + 0x2ec) = iVar1;
  puVar2[0x2f0] = *(undefined1 *)(param_1 + 0x81);
  *(undefined2 *)(puVar2 + 0x2f1) = *(undefined2 *)(param_1 + 0x82);
  return;
}

