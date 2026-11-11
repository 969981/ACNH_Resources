
void FUN_004c4eb0(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  iVar2 = *(int *)(param_1 + 0x60);
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x58) + lVar4 * 8);
      if (puVar3 != (undefined8 *)0x0) {
        iVar2 = *(int *)(puVar3 + 2);
        plVar1 = (long *)FUN_00426d40(*puVar3,0x10);
        *plVar1 = (long)iVar2;
        iVar2 = *(int *)(param_1 + 0x60);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  return;
}

