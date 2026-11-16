
void FUN_026400e0(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + param_2;
    FUN_026400e0(lVar1,param_2);
  }
  return;
}

