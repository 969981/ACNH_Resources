
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0150b144(undefined4 *param_1,long param_2,undefined4 *param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 local_50;
  undefined4 local_44;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) {
    return 0;
  }
  uVar7 = *(uint *)(DAT_0520f098 + 0x10);
  if ((((uVar7 == 0) ||
       (plVar6 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                           ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar6 == (long *)0x0)) ||
      ((*(uint *)(plVar6 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar6 + 0x46) != uVar7)) {
    plVar6 = (long *)0x0;
  }
  if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
    plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar3 + 0x60))();
    if (iVar2 < 0x11) {
      uVar7 = 1;
      goto joined_r0x0150b21c;
    }
    if (*(uint *)(lVar5 + 0x5e8) < 5) {
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0150b21c;
    }
  }
  uVar7 = 0;
joined_r0x0150b21c:
  if (plVar6 != (long *)0x0) {
    if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7d58);
    }
    uVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb7d50);
    if ((uVar4 & 1) != 0) {
      local_44 = 0;
      if (uVar7 == 0) {
        return 0;
      }
      local_50 = 0xe;
      local_68 = PTR_DAT_04bb2010 + 0x10;
      local_70 = *param_1;
      uStack_6c = param_1[1];
      local_60 = *(undefined4 *)(param_2 + 8);
      uStack_5c = *(undefined4 *)(param_2 + 0xc);
      local_58 = *param_3;
      uStack_54 = 3;
      if (param_4 == 1) {
        local_50 = 0xf;
      }
      FUN_01492028(plVar6,&local_44,&local_70);
      return local_44;
    }
  }
  return 0;
}

