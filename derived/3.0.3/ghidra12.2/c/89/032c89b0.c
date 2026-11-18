
/* WARNING: Removing unreachable block (ram,0x032c89e8) */

void FUN_032c89b0(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar4 = *param_2;
    *param_1 = 0;
    if (lVar4 != 0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      uVar3 = *(undefined8 *)(lVar2 + 0xa8);
      *(long *)(lVar2 + 0xa8) = lVar4;
      goto LAB_032c8a1c;
    }
  }
  uVar3 = 1;
LAB_032c8a1c:
  *param_1 = uVar3;
  if (((DAT_0572e5c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0572e5c0), iVar1 != 0)) {
    nn::os::AllocateTlsSlot((TlsSlot *)&DAT_0572e5b8,(_func_void_ulong *)0x0);
    FUN_001001d0(&LAB_032c8ba8,&DAT_0572e5b8,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_0572e5c0);
  }
  uVar3 = nn::os::GetTlsValue(DAT_0572e5b8);
  param_1[1] = uVar3;
  if (((DAT_0572e5c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0572e5c0), iVar1 != 0)) {
    nn::os::AllocateTlsSlot((TlsSlot *)&DAT_0572e5b8,(_func_void_ulong *)0x0);
    FUN_001001d0(&LAB_032c8ba8,&DAT_0572e5b8,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_0572e5c0);
  }
  nn::os::SetTlsValue(DAT_0572e5b8,param_2);
  return;
}

