
void FUN_001a1f60(long *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  
  *param_1 = (long)(PTR_DAT_04bcc270 + 0x10);
  if (((DAT_04c58cc0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04c58cc0), iVar3 != 0)) {
    DAT_04c58cd0 = (long *)0x0;
    DAT_04c58cd8 = (long *)0x0;
    DAT_04c58ce0 = (long *)0x0;
    DAT_04c58ce8 = 0;
    DAT_04c58cc8 = PTR_DAT_04bcc260 + 0x10;
    FUN_001001d0(PTR_LAB_04bcc268,&DAT_04c58cc8,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_04c58cc0);
  }
  plVar4 = DAT_04c58cd0;
  if (((DAT_04c58cc0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04c58cc0), iVar3 != 0)) {
    DAT_04c58cd0 = (long *)0x0;
    DAT_04c58cd8 = (long *)0x0;
    DAT_04c58ce0 = (long *)0x0;
    DAT_04c58ce8 = 0;
    DAT_04c58cc8 = PTR_DAT_04bcc260 + 0x10;
    FUN_001001d0(PTR_LAB_04bcc268,&DAT_04c58cc8,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_04c58cc0);
  }
  if ((plVar4 != param_1) && (plVar4 != DAT_04c58ce0)) {
    do {
      plVar4 = (long *)plVar4[1];
    } while (plVar4 != DAT_04c58ce0 && plVar4 != param_1);
  }
  if (((DAT_04c58cc0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04c58cc0), iVar3 != 0)) {
    DAT_04c58cd0 = (long *)0x0;
    DAT_04c58cd8 = (long *)0x0;
    DAT_04c58ce0 = (long *)0x0;
    DAT_04c58ce8 = 0;
    DAT_04c58cc8 = PTR_DAT_04bcc260 + 0x10;
    FUN_001001d0(PTR_LAB_04bcc268,&DAT_04c58cc8,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_04c58cc0);
  }
  plVar1 = (long *)plVar4[1];
  plVar2 = (long *)plVar4[2];
  if (plVar2 != (long *)0x0) {
    plVar2[1] = (long)plVar1;
  }
  plVar4[2] = 0;
  if (plVar1 != (long *)0x0) {
    plVar1[2] = (long)plVar2;
  }
  plVar4[1] = 0;
  if (DAT_04c58cd0 != plVar4) {
    plVar1 = DAT_04c58cd0;
  }
  if (DAT_04c58cd8 == plVar4) {
    DAT_04c58cd8 = plVar2;
  }
  DAT_04c58ce8 = DAT_04c58ce8 + -1;
  DAT_04c58cd0 = plVar1;
  return;
}

