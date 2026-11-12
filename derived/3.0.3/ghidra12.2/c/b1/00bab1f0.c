
int FUN_00bab1f0(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x20))();
  lVar5 = 0;
  iVar4 = 0;
  do {
    puVar1 = (uint *)(lVar3 + lVar5);
    lVar5 = lVar5 + 4;
    uVar2 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    iVar4 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar4;
  } while (lVar5 != 0x754);
  return iVar4;
}

