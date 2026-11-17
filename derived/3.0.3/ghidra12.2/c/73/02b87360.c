
/* WARNING: Removing unreachable block (ram,0x02b87410) */

void FUN_02b87360(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long *local_30;
  char local_28;
  char local_26;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_2 != 0) {
    local_4 = *(undefined4 *)(param_1 + 0x234);
    local_8 = *(undefined4 *)(param_1 + 0x230);
    FUN_0071cb58(&local_30,&local_4,&local_8,0);
    plVar1 = local_30;
    if (local_30 != (long *)0x0) {
      if (((*PTR_DAT_04bb59a0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb59a0), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb5998 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb59a0);
      }
      uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb5998);
      if ((uVar3 & 1) == 0) {
        local_26 = '\0';
      }
    }
    if (((local_30 != (long *)0x0) && (local_28 != '\0')) && (local_26 != '\0')) {
      if ((*(byte *)(local_30 + 0xac) >> 1 & 1) == 0) {
        local_30 = local_30 + 0xae;
      }
      else {
        local_30 = local_30 + 0x115;
      }
      *(int *)(param_2 + 0x10) = (int)local_30[2];
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)((long)local_30 + 0x14);
      *(int *)(param_2 + 0x20) = (int)local_30[4];
      *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)((long)local_30 + 0x24);
    }
  }
  return;
}

