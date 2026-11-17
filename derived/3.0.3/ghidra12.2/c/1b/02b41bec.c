
void FUN_02b41bec(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  undefined2 local_40;
  undefined4 uStack_3e;
  undefined2 uStack_3a;
  undefined2 auStack_38 [4];
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar9 = *param_1;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x02b41cac;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02b41cac;
    }
  }
  uVar9 = 0;
joined_r0x02b41cac:
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0x2a];
    if (((*PTR_DAT_04bc4a20 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4a20), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc4a18 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4a20);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bc4a18);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar9;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      uVar7 = *param_2;
      local_40 = (undefined2)uVar7;
      uStack_3e = (undefined4)((ulong)uVar7 >> 0x10);
      uStack_3a = (undefined2)((ulong)uVar7 >> 0x30);
      FUN_007ef010(auStack_38,param_2 + 1);
      if (*(int *)((long)plVar8 + 0x174) == 3) {
        *(undefined2 *)(plVar8 + 0x89) = local_40;
        *(undefined4 *)((long)plVar8 + 0x44a) = uStack_3e;
        *(uint *)((long)plVar8 + 0x44e) = CONCAT22(auStack_38[0],uStack_3a);
      }
    }
  }
  return;
}

