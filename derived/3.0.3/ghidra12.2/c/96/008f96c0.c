
bool FUN_008f96c0(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *local_40;
  char local_36;
  undefined4 local_14;
  
  local_14 = *(undefined4 *)(param_1 + 0x230);
  FUN_0071cb58(&local_40,&DAT_04cee6b4,&local_14,0);
  plVar4 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3278);
    if ((uVar3 & 1) == 0) {
      local_36 = '\0';
    }
  }
  if (local_36 == '\0') {
    return false;
  }
  if (local_40 == (long *)0x0) {
    return false;
  }
  uVar1 = *(uint *)(local_40 + 0x4f);
  if ((uVar1 != 0) && (lVar5 = *(long *)PTR_DAT_04bb27c0, lVar5 != 0)) {
    lVar6 = *(long *)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) + ((ulong)(uVar1 >> 0x11) & 0x7ff8));
    if ((lVar6 == 0) ||
       (((*(uint *)(lVar6 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar6 + 0x230) != uVar1)))) {
      lVar6 = 0;
    }
    if ((*(int *)(lVar5 + 0x288) == 1) || (*(int *)(lVar5 + 0x288) == -1)) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar4 + 0x60))();
    }
    if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x248) >> 4 & 1) != 0)) {
      local_40 = local_40 + 0x4f;
      goto LAB_008f97cc;
    }
  }
  local_40 = (long *)((long)local_40 + 0x274);
LAB_008f97cc:
  return (int)*local_40 == *(int *)(param_1 + 0x230);
}

