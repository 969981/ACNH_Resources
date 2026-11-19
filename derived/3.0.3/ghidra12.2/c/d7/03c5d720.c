
void FUN_03c5d720(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x90;
  if (*(long *)(param_1 + 0x158) != param_1 + 0x150) {
    lVar2 = (long)*(int *)(param_1 + 0x164);
    lVar4 = *(long *)(param_1 + 0x158) - lVar2;
    do {
      *(long *)(lVar4 + 0x30) = lVar1;
      *(undefined1 *)(lVar4 + 0x40) = 1;
      lVar4 = *(long *)(lVar4 + lVar2 + 8) - lVar2;
    } while (lVar4 != (param_1 + 0x150) - lVar2);
  }
  lVar4 = *(long *)(param_1 + 0x168);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 8) != lVar4)) {
    lVar3 = (long)*(int *)(lVar4 + 0x14);
    lVar2 = *(long *)(lVar4 + 8) - lVar3;
    do {
      *(long *)(lVar2 + 0x30) = lVar1;
      *(undefined1 *)(lVar2 + 0x40) = 1;
      lVar2 = *(long *)(lVar2 + lVar3 + 8) - lVar3;
    } while (lVar2 != lVar4 - lVar3);
  }
  lVar4 = *(long *)(param_1 + 0x170);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 8) != lVar4)) {
    lVar3 = (long)*(int *)(lVar4 + 0x14);
    lVar2 = *(long *)(lVar4 + 8) - lVar3;
    do {
      *(long *)(lVar2 + 0x30) = lVar1;
      *(undefined1 *)(lVar2 + 0x40) = 1;
      lVar2 = *(long *)(lVar2 + lVar3 + 8) - lVar3;
    } while (lVar2 != lVar4 - lVar3);
  }
  if (*(long *)(param_1 + 0x180) != param_1 + 0x178) {
    lVar2 = (long)*(int *)(param_1 + 0x18c);
    lVar4 = *(long *)(param_1 + 0x180) - lVar2;
    do {
      *(long *)(lVar4 + 0x30) = lVar1;
      *(undefined1 *)(lVar4 + 0x40) = 1;
      lVar4 = *(long *)(lVar4 + lVar2 + 8) - lVar2;
    } while (lVar4 != (param_1 + 0x178) - lVar2);
  }
  *(undefined1 *)(param_1 + 0x1a8) = 1;
  return;
}

