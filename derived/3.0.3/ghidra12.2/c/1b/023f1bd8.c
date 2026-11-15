
void FUN_023f1bd8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined4 local_44;
  long *local_40;
  char local_38;
  char local_37;
  
  local_44 = *(undefined4 *)(param_1 + 0x230);
  FUN_0071c8d0(&local_40,PTR_DAT_04bb32f8,&local_44,0);
  plVar7 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3278);
    if ((uVar4 & 1) == 0) {
      local_37 = '\0';
    }
  }
  if (((local_40 == (long *)0x0) || (local_38 == '\0')) || (local_37 == '\0')) goto LAB_023f1d80;
  FUN_008fc6e4(local_40,0,0xffffffff);
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) goto LAB_023f1d80;
  uVar8 = *(uint *)(*(long *)PTR_DAT_04bb4c80 + 0x10);
  if (((uVar8 == 0) ||
      (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                          ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
     (((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar7 + 0x46) != uVar8)))) {
    plVar7 = (long *)0x0;
  }
  if ((*(int *)(lVar6 + 0x288) == 1) || (*(int *)(lVar6 + 0x288) == -1)) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_023f1d20;
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_023f1d20:
    uVar8 = 0;
  }
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7d58);
    }
    uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb7d50);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar8;
    }
    if (((uVar4 & 1) != 0) && (uVar1 != 0)) {
      FUN_014937a0(plVar7,0);
    }
  }
LAB_023f1d80:
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
  return;
}

