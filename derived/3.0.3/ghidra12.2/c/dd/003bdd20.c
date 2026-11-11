
void FUN_003bdd20(long param_1)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x1e0); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x198)) {
    FUN_003bfbc0(lVar1);
  }
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  return;
}

