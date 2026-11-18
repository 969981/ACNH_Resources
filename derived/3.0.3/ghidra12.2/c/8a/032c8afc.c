
void FUN_032c8afc(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (((DAT_0572e5c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0572e5c0), iVar1 != 0)) {
    nn::os::AllocateTlsSlot((TlsSlot *)&DAT_0572e5b8,(_func_void_ulong *)0x0);
    FUN_001001d0(&LAB_032c8ba8,&DAT_0572e5b8,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_0572e5c0);
  }
  nn::os::SetTlsValue(DAT_0572e5b8,param_1[1]);
  lVar3 = *param_1;
  if (lVar3 != 1) {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    *(long *)(lVar2 + 0xa8) = lVar3;
  }
  return;
}

