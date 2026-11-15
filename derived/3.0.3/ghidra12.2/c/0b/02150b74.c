
void FUN_02150b74(long param_1,undefined1 param_2,ulong param_3)

{
  int iVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  iVar1 = *(int *)(param_1 + 0x1e4);
  if ((iVar1 != 0) && (iVar1 != 0x22)) {
    *(undefined2 *)(param_1 + 0x1e8) = 0;
    *(undefined1 *)(param_1 + 0x1ea) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0x22001d0005;
    if ((param_3 & 1) != 0) {
      local_1a = 1;
      local_18 = 0;
      local_12 = 0;
      local_1b = (undefined1)iVar1;
      local_14 = 0xff00;
      if (-1 < DAT_053d0e00) {
        local_1c = param_2;
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e00,&local_18,&local_1c,3,0,in_x6,
                     in_x7,iVar1);
      }
    }
  }
  return;
}

