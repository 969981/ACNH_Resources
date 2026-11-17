
void FUN_02b8e530(ushort *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  ushort uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 local_8;
  int local_4;
  
  local_8 = 5;
  local_4 = param_2;
  uVar2 = FUN_02b900e0(&local_8,param_2);
  if ((uVar2 & 1) == 0) {
LAB_02b8e664:
    FUN_007ef010(param_1,PTR_DAT_04bb3170);
  }
  else {
    uVar2 = FUN_037739d0(local_8);
    if ((uVar2 & 1) == 0) {
      if (local_4 == 0x23) {
        if (((DAT_04c8c100 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c8c100), iVar1 != 0)) {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
        }
        if (0 < (int)DAT_04c8c0f0) {
          uVar2 = 0;
          do {
            if (*(int *)(DAT_04c8c0f8 + uVar2 * 4) == 0x16) goto LAB_02b8e6c0;
            uVar2 = uVar2 + 1;
          } while (DAT_04c8c0f0 != uVar2);
        }
        uVar2 = 0;
LAB_02b8e6c0:
        *param_1 = 0;
        puVar4 = &DAT_04c8c0f0;
        if ((DAT_04c8c100 & 1) == 0) {
          iVar1 = __cxa_guard_acquire(&DAT_04c8c100);
          puVar4 = (uint *)PTR_DAT_04bb3120;
          if (iVar1 != 0) {
            FUN_00706e58(&DAT_04c8c0f0);
            __cxa_guard_release(&DAT_04c8c100);
            puVar4 = (uint *)PTR_DAT_04bb3120;
          }
        }
        uVar5 = (uint)uVar2;
        if (*puVar4 <= uVar5) {
          uVar5 = 0;
        }
        iVar1 = *(int *)(*(long *)(puVar4 + 2) + (long)(int)uVar5 * 4);
        uVar3 = 3;
      }
      else if (local_4 == 0x22) {
        if (((DAT_04c8c100 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c8c100), iVar1 != 0)) {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
        }
        if (0 < (int)DAT_04c8c0f0) {
          uVar2 = 0;
          do {
            if (*(int *)(DAT_04c8c0f8 + uVar2 * 4) == 0x16) goto LAB_02b8e730;
            uVar2 = uVar2 + 1;
          } while (DAT_04c8c0f0 != uVar2);
        }
        uVar2 = 0;
LAB_02b8e730:
        *param_1 = 0;
        puVar4 = &DAT_04c8c0f0;
        if ((DAT_04c8c100 & 1) == 0) {
          iVar1 = __cxa_guard_acquire(&DAT_04c8c100);
          puVar4 = (uint *)PTR_DAT_04bb3120;
          if (iVar1 != 0) {
            FUN_00706e58(&DAT_04c8c0f0);
            __cxa_guard_release(&DAT_04c8c100);
            puVar4 = (uint *)PTR_DAT_04bb3120;
          }
        }
        uVar5 = (uint)uVar2;
        if (*puVar4 <= uVar5) {
          uVar5 = 0;
        }
        iVar1 = *(int *)(*(long *)(puVar4 + 2) + (long)(int)uVar5 * 4);
        uVar3 = 2;
      }
      else {
        if (local_4 != 0x21) goto LAB_02b8e664;
        if (((DAT_04c8c100 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c8c100), iVar1 != 0)) {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
        }
        if (0 < (int)DAT_04c8c0f0) {
          uVar2 = 0;
          do {
            if (*(int *)(DAT_04c8c0f8 + uVar2 * 4) == 0x16) goto LAB_02b8e63c;
            uVar2 = uVar2 + 1;
          } while (DAT_04c8c0f0 != uVar2);
        }
        uVar2 = 0;
LAB_02b8e63c:
        *param_1 = 0;
        puVar4 = &DAT_04c8c0f0;
        if ((DAT_04c8c100 & 1) == 0) {
          iVar1 = __cxa_guard_acquire(&DAT_04c8c100);
          puVar4 = (uint *)PTR_DAT_04bb3120;
          if (iVar1 != 0) {
            FUN_00706e58(&DAT_04c8c0f0);
            __cxa_guard_release(&DAT_04c8c100);
            puVar4 = (uint *)PTR_DAT_04bb3120;
          }
        }
        uVar5 = (uint)uVar2;
        if (*puVar4 <= uVar5) {
          uVar5 = 0;
        }
        iVar1 = *(int *)(*(long *)(puVar4 + 2) + (long)(int)uVar5 * 4);
        uVar3 = 1;
      }
      uVar3 = uVar3 | (ushort)(iVar1 << 0xb);
    }
    else {
      if (((DAT_04c8c100 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c8c100), iVar1 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      if (0 < (int)DAT_04c8c0f0) {
        uVar2 = 0;
        do {
          if (*(int *)(DAT_04c8c0f8 + uVar2 * 4) == 0x16) goto LAB_02b8e5b0;
          uVar2 = uVar2 + 1;
        } while (DAT_04c8c0f0 != uVar2);
      }
      uVar2 = 0;
LAB_02b8e5b0:
      *param_1 = 0;
      puVar4 = &DAT_04c8c0f0;
      if ((DAT_04c8c100 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_04c8c100);
        puVar4 = (uint *)PTR_DAT_04bb3120;
        if (iVar1 != 0) {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
          puVar4 = (uint *)PTR_DAT_04bb3120;
        }
      }
      uVar5 = (uint)uVar2;
      if (*puVar4 <= uVar5) {
        uVar5 = 0;
      }
      uVar3 = (ushort)(*(int *)(*(long *)(puVar4 + 2) + (long)(int)uVar5 * 4) << 0xb);
    }
    *param_1 = uVar3;
  }
  return;
}

