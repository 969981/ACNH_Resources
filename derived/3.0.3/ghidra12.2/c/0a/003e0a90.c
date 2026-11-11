
void FUN_003e0a90(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  for (lVar2 = *(long *)(param_1 + 0x30); lVar2 != param_1 + 0x28; lVar2 = *(long *)(lVar2 + 8)) {
    *(long *)(lVar2 + -0x48) = lVar1;
    *(long *)(lVar2 + -0x40) = param_3;
    lVar1 = lVar1 + param_3;
  }
  *param_2 = lVar1;
  return;
}

