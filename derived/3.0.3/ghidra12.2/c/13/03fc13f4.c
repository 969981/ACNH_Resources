
void FUN_03fc13f4(long *param_1,uint param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  if (((param_2 & 1) == 0) && (-1 < *(char *)((long)param_1 + 0x34e12a))) {
    return;
  }
  lVar4 = *param_1;
  *(short *)((long)param_1 + 0x38a442) = *(short *)((long)param_1 + 0x34e122);
  uVar3 = *(uint *)(lVar4 + 0x28);
  iVar2 = *(int *)(lVar4 + 0x18) + *(int *)((long)param_1 + 0x34e0bc);
  if ((int)uVar3 < *(int *)((long)param_1 + 0x34e0bc)) {
    *(short *)((long)param_1 + 0x38a442) = *(short *)((long)param_1 + 0x34e122) + 1;
    uVar3 = *(uint *)(lVar4 + 0x28);
    iVar2 = iVar2 - uVar3;
  }
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = (undefined2)((uint)(iVar2 * 0x155) / uVar3);
  }
  *(undefined1 *)((long)param_1 + 0x38a446) = 1;
  *(undefined2 *)(param_1 + 0x71488) = uVar1;
  *(byte *)((long)param_1 + 0x34e12a) = *(byte *)((long)param_1 + 0x34e12a) | 0x40;
  return;
}

