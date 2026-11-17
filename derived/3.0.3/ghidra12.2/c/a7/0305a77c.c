
void FUN_0305a77c(long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  
  *(long **)(param_1 + 0x238) = param_2;
  if (param_2 == (long *)0x0) {
    bVar1 = 0;
    lVar2 = *(long *)(param_1 + 0x210);
  }
  else {
    bVar1 = (**(code **)(*param_2 + 0x30))(param_2);
    lVar2 = *(long *)(param_1 + 0x210);
  }
  if (lVar2 != 0) {
    *(byte *)(*(long *)(lVar2 + 0xa0) + 0xbc) = bVar1 & 1;
    *(byte *)(*(long *)(lVar2 + 0xa0) + 0xbd) = bVar1 & 1;
  }
  bVar1 = 0;
  if (*(long **)(param_1 + 0x238) != (long *)0x0) {
    bVar1 = (**(code **)(**(long **)(param_1 + 0x238) + 0x38))();
  }
  lVar2 = *(long *)(param_1 + 0x218);
  if (lVar2 != 0) {
    *(byte *)(*(long *)(lVar2 + 0xa0) + 0xbc) = bVar1 & 1;
    *(byte *)(*(long *)(lVar2 + 0xa0) + 0xbd) = bVar1 & 1;
  }
  bVar1 = 0;
  if (*(long **)(param_1 + 0x238) != (long *)0x0) {
    bVar1 = (**(code **)(**(long **)(param_1 + 0x238) + 0x40))();
  }
  lVar2 = *(long *)(param_1 + 0x220);
  if (lVar2 != 0) {
    *(byte *)(*(long *)(lVar2 + 0xa0) + 0xbc) = bVar1 & 1;
    *(byte *)(*(long *)(lVar2 + 0xa0) + 0xbd) = bVar1 & 1;
  }
  bVar1 = 0;
  if (*(long **)(param_1 + 0x238) != (long *)0x0) {
    bVar1 = (**(code **)(**(long **)(param_1 + 0x238) + 0x48))();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x228) + 0x570);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x40) = bVar1 & 1;
    *(byte *)(lVar2 + 0x41) = bVar1 & 1;
  }
  return;
}

