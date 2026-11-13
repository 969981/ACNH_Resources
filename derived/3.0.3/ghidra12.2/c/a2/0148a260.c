
undefined8 FUN_0148a260(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  byte local_38 [4];
  byte local_34 [4];
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return 0;
  }
  uVar11 = *(uint *)(*(long *)PTR_DAT_04bb4c80 + 0x10);
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar11 = 1;
      goto joined_r0x0148a3f8;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0148a3f8;
    }
  }
  uVar11 = 0;
joined_r0x0148a3f8:
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  lVar9 = plVar10[0x2a];
  uVar2 = *(uint *)(plVar10 + 0x49);
  if (((*PTR_DAT_04bb7d58 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb7d58);
  }
  uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb7d50);
  if ((int)lVar9 != 1) {
    return 0;
  }
  if ((uVar5 & uVar11) == 0) {
    return 0;
  }
  if ((uVar2 >> 4 & 1) == 0) {
    return 0;
  }
  local_34[0] = *param_3;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  puVar7 = (undefined8 *)FUN_0251b3b0(local_34,0);
  local_38[0] = *param_3;
  puVar1 = (undefined8 *)PTR_DAT_04bb2150;
  if (puVar7 != (undefined8 *)0x0) {
    puVar1 = puVar7;
  }
  local_54 = *(undefined4 *)(puVar1 + 1);
  local_5c = *puVar1;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  lVar9 = FUN_0251bdc4(local_38,0);
  if (lVar9 == 0) {
    local_60 = 0;
  }
  else {
    local_60 = *(undefined4 *)(lVar9 + 4);
  }
  uVar8 = FUN_0148deb0(plVar10,param_1,param_2,&local_5c,&local_60,0);
  return uVar8;
}

