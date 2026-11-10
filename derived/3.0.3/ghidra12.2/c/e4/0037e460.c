
void FUN_0037e460(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  uVar1 = (bVar2 & 0x10) >> 4;
  if (((bVar2 >> 6 & 1) == 0) && ((param_3 & 1) != 0 || uVar1 != 0)) {
    *(byte *)(param_1 + 0x58) = bVar2 & 0xef;
    FUN_0037d74c(param_1,param_2);
  }
  for (lVar3 = *(long *)(param_1 + 0x28); lVar3 != param_1 + 0x20; lVar3 = *(long *)(lVar3 + 8)) {
    FUN_0037e460(lVar3 + -8,param_2,param_3 & 1 | uVar1);
  }
  return;
}

