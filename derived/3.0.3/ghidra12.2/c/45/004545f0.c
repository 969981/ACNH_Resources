
void FUN_004545f0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  *(uint *)(param_1 + 0x20) = -(uint)(*(int *)(param_1 + 0x40) < 1);
  iVar2 = *(int *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (0 < iVar2) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar3);
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
                (*(long **)(param_1 + 0x30),*puVar1,puVar1[1]);
      iVar2 = *(int *)(param_1 + 0x50);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < iVar2);
  }
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

