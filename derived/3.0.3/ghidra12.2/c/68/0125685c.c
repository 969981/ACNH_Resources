
void FUN_0125685c(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long *local_38;
  undefined1 local_2f;
  undefined4 local_24;
  
  if ((*(byte *)(param_1 + 0x68) >> 3 & 1) != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      local_24 = param_3;
      FUN_0071c8d0(&local_38,(int *)(param_1 + 8),&local_24,0);
      plVar1 = local_38;
      if (local_38 != (long *)0x0) {
        if ((*PTR_DAT_04bbbb00 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(PTR_DAT_04bbbb00);
          if (iVar2 != 0) {
            *(undefined **)PTR_DAT_04bbbaf8 = PTR_DAT_04bb2e50 + 0x10;
            __cxa_guard_release(PTR_DAT_04bbbb00);
          }
        }
        uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bbbaf8);
        if ((uVar3 & 1) == 0) {
          local_2f = 0;
        }
        if (local_38 != (long *)0x0) {
          *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
          *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
          (**(code **)(*local_38 + 0xf8))(local_38,param_2,*(undefined4 *)(param_1 + 0x58));
          *(ushort *)(param_1 + 0x68) = *(ushort *)(param_1 + 0x68) | 4;
        }
      }
    }
  }
  return;
}

