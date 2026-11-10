
void FUN_001a1e70(long *param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_04bcc270;
  *(undefined4 *)(param_1 + 4) = param_3;
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  if ((DAT_04c58cc0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04c58cc0);
    if (iVar2 != 0) {
      DAT_04c58cd0 = (long *)0x0;
      DAT_04c58cd8 = (long *)0x0;
      DAT_04c58ce0 = (long *)0x0;
      DAT_04c58ce8 = 0;
      DAT_04c58cc8 = PTR_DAT_04bcc260 + 0x10;
      FUN_001001d0(PTR_LAB_04bcc268,&DAT_04c58cc8,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_04c58cc0);
    }
  }
  if (DAT_04c58cd0 == DAT_04c58ce0) {
    DAT_04c58cd0 = param_1;
  }
  else {
    *(long **)((long)DAT_04c58cd8 + 8) = param_1;
    param_1[2] = (long)DAT_04c58cd8;
  }
  DAT_04c58cd8 = param_1;
  DAT_04c58ce8 = DAT_04c58ce8 + 1;
  return;
}

