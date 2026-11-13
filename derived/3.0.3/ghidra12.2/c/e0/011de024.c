
void FUN_011de024(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x1e180);
  iVar6 = *(int *)(param_1 + 0x1e178);
  if (iVar5 < iVar6) {
    uVar3 = *(uint *)(param_2 + 8);
    uVar4 = *(uint *)(param_2 + 0xc);
    *(int *)(param_1 + 0x1e180) = iVar5 + 1;
    iVar5 = *(int *)(param_1 + 0x1e17c) + iVar5;
    iVar2 = 0;
    if (iVar6 <= iVar5) {
      iVar2 = iVar6;
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x1e170) + (long)(iVar5 - iVar2) * 0x10);
    *puVar1 = &DAT_048f9750;
    *(uint *)(puVar1 + 1) = uVar3 & 0xfffffffe;
    *(uint *)((long)puVar1 + 0xc) = uVar4 & 0xfffffffe;
  }
  return;
}

