
void FUN_003517e0(long *param_1,ulong param_2,long param_3,uint param_4)

{
  long lVar1;
  
  lVar1 = FUN_00351830(param_1,*param_1,
                       param_3 << 0x30 | (ulong)(param_4 & 0xffff) << 0x20 | param_2 & 0xffffffff);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x39) = 0;
  }
  return;
}

