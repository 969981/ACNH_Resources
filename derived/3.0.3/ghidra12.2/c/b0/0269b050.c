
void FUN_0269b050(long param_1,undefined4 *param_2,ulong param_3)

{
  undefined1 local_24;
  undefined1 local_23;
  undefined4 local_8;
  undefined2 local_4;
  undefined1 local_2;
  
  *(char *)(param_1 + 0x1315b) = (char)*param_2;
  if ((param_3 & 1) != 0) {
    local_24 = FUN_021d7d60();
    local_8 = 0;
    local_2 = 0;
    local_23 = (undefined1)*param_2;
    local_4 = 0xff00;
    if (-1 < DAT_053d0e30) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e30,&local_8,&local_24,2,0);
    }
  }
  return;
}

