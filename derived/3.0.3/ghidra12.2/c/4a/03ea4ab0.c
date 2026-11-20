
void FUN_03ea4ab0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_03ea7bd0(*param_1,param_2,param_1[2],param_1[3]);
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0x30) != lVar1 + 0x28) {
    lVar6 = (long)*(int *)(lVar1 + 0x3c);
    lVar5 = *(long *)(lVar1 + 0x30) - lVar6;
    do {
      FUN_03ea75d0(lVar5);
      lVar5 = *(long *)(lVar5 + lVar6 + 8) - lVar6;
    } while (lVar5 != (lVar1 + 0x28) - lVar6);
    lVar1 = *param_1;
  }
  iVar3 = *(int *)(lVar1 + 0x24);
  lVar4 = (long)iVar3;
  lVar6 = -lVar4;
  lVar5 = *(long *)(lVar1 + 0x18) - lVar4;
  if (*(long *)(lVar1 + 0x18) != lVar1 + 0x10) {
    lVar2 = param_1[4];
    do {
      *(long *)(*(long *)(lVar5 + 0x30) + 0xf8) = lVar2;
      lVar5 = *(long *)(lVar5 + lVar4 + 8) + lVar6;
    } while (lVar5 != (lVar1 + 0x10) - lVar4);
    lVar1 = *param_1;
    iVar3 = *(int *)(lVar1 + 0x24);
    lVar6 = -(long)iVar3;
    lVar5 = *(long *)(lVar1 + 0x18) - (long)iVar3;
  }
  lVar1 = lVar1 + lVar6 + 0x10;
  if (lVar5 != lVar1) {
    lVar4 = param_1[5];
    do {
      *(long *)(*(long *)(lVar5 + 0x38) + 0x118) = lVar4;
      lVar5 = lVar6 + *(long *)(lVar5 + iVar3 + 8);
    } while (lVar5 != lVar1);
  }
  return;
}

