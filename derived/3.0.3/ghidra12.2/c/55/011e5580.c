
void FUN_011e5580(long param_1,ulong param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long *local_38;
  char local_30;
  char local_2f;
  int local_28;
  undefined4 local_24;
  
  if (**(char **)(PTR_DAT_04bc3a88 + 8) == '\0') {
    local_28 = DAT_050dfb28;
    if (DAT_050dfb28 != 0) {
      local_24 = param_3;
      FUN_0071c8d0(&local_38,&local_28,&local_24,0);
      plVar3 = local_38;
      if (local_38 != (long *)0x0) {
        if ((*PTR_DAT_04bbbb10 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(PTR_DAT_04bbbb10);
          if (iVar4 != 0) {
            *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
            __cxa_guard_release(PTR_DAT_04bbbb10);
          }
        }
        uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bbbb08);
        if ((uVar5 & 1) == 0) {
          local_2f = '\0';
        }
      }
      if ((((local_38 != (long *)0x0) && (local_30 != '\0')) && (local_2f != '\0')) &&
         (((uVar6 = *(uint *)(param_1 + 8), uVar6 < 0x120 && (*(uint *)(param_1 + 0xc) < 0x100)) &&
          ((uVar1 = uVar6 + *(uint *)(param_1 + 0xc) * 0x120, uVar1 != 0xffffffff &&
           (uVar1 >> 0xd < 9)))))) {
        uVar6 = 1 << (ulong)(uVar6 & 0x1f);
        lVar2 = (ulong)(uVar1 >> 5) * 4;
        if ((param_2 & 1) == 0) {
          uVar6 = *(uint *)((long)local_38 + lVar2 + 0x22b68) & (uVar6 ^ 0xffffffff);
        }
        else {
          uVar6 = *(uint *)((long)local_38 + lVar2 + 0x22b68) | uVar6;
        }
        *(uint *)((long)local_38 + lVar2 + 0x22b68) = uVar6;
      }
    }
  }
  return;
}

