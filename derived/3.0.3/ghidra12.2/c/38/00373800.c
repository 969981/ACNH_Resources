
void FUN_00373800(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    FUN_0035d98c(lVar1,0);
    *(undefined4 *)(lVar1 + 0x3c) = 0;
  }
  if ((param_2 & 1) != 0) {
    for (lVar1 = *(long *)(param_1 + 0x50); lVar1 != param_1 + 0x48; lVar1 = *(long *)(lVar1 + 8)) {
      FUN_00373800(*(undefined8 *)(lVar1 + 0x10),1);
    }
  }
  return;
}

