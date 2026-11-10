
void FUN_0015a9bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0xf18);
  while (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    FUN_0015a950(param_1,uVar2);
    if (*(long *)(param_1 + 0xf08) != 0) {
      FUN_0015a87c(*(long *)(param_1 + 0xf08),uVar2,0);
    }
    lVar1 = *(long *)(param_1 + 0xf18);
  }
  if (*(long *)(param_1 + 0xf08) == 0) {
    return;
  }
  FUN_0015a950(*(long *)(param_1 + 0xf08),param_1);
  return;
}

