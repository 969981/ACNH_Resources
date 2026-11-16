
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289beb0(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_64a [2];
  ushort local_648 [2];
  undefined8 local_644 [192];
  uint local_44;
  
  if (param_3 != (undefined8 *)0x0) {
    local_44 = 0;
    FUN_0291e130(local_644,&local_44,1);
    if (param_4 < local_44) {
      local_44 = 0;
      uVar3 = FUN_0291e130(local_644,&local_44,1);
      if ((uVar3 & 1) != 0) {
        puVar1 = (undefined8 *)((long)local_644 + (ulong)param_4 * 0xc);
        if (0x7f < param_4) {
          puVar1 = local_644;
        }
        uVar5 = *(undefined4 *)(puVar1 + 1);
        *param_3 = *puVar1;
        *(undefined4 *)(param_3 + 1) = uVar5;
        if (((DAT_04c8c100 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c8c100), iVar2 != 0)) {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
        }
        if (0 < (int)DAT_04c8c0f0) {
          uVar3 = 0;
          do {
            if (*(int *)(DAT_04c8c0f8 + uVar3 * 4) == 3) goto LAB_0289bf80;
            uVar3 = uVar3 + 1;
          } while (DAT_04c8c0f0 != uVar3);
        }
        uVar3 = 0;
LAB_0289bf80:
        uVar4 = (uint)uVar3;
        local_648[0] = 0;
        if (((DAT_04c8c100 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar2 != 0)
           ) {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
        }
        if (DAT_04c8c0f0 <= uVar4) {
          uVar4 = 0;
        }
        local_648[0] = (ushort)param_4 & 0x7f |
                       (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar4 * 4) << 0xb);
        FUN_007ef010(auStack_64a,local_648);
        FUN_00805ba8(param_1,auStack_64a);
        return;
      }
    }
  }
  uVar5 = DAT_0558600c;
  *param_1 = _DAT_05586008;
  param_1[1] = uVar5;
  return;
}

