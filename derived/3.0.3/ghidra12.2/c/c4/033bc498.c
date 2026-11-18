
undefined8 FUN_033bc498(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  puVar2 = PTR_DAT_04bb27c0;
  if (*(long *)puVar3 == 0) {
    return 0;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar4) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return 0;
  }
  if (1 < *(int *)(param_1 + 0x70) - 1U) {
    return 0;
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return 0;
  }
  uVar4 = *(uint *)(param_1 + 0x6c);
  if ((((uVar4 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                           ((ulong)(uVar4 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar4)) {
    plVar9 = (long *)0x0;
  }
  if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar2;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar4 = 1;
      goto joined_r0x033bc5b4;
    }
    if (*(uint *)(lVar10 + 0x5e8) < 5) {
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x033bc5b4;
    }
  }
  uVar4 = 0;
joined_r0x033bc5b4:
  if (plVar9 == (long *)0x0) {
    return 0;
  }
  lVar10 = plVar9[0x2a];
  if (((*PTR_DAT_04bb3748 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb3740 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3748);
  }
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3740);
  uVar1 = 0;
  if ((int)lVar10 == 1) {
    uVar1 = uVar4;
  }
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  if (uVar1 == 0) {
    return 0;
  }
  local_50 = *param_2;
  uStack_4c = param_2[1];
  lVar10 = *(long *)puVar3;
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8), lVar10 != 0)) {
        local_48 = lVar10;
      }
    }
  }
  uVar6 = FUN_01ad78cc(&local_58);
  switch(uVar6) {
  case 1:
    FUN_0075bbbc(plVar9,param_2,1);
    return 1;
  case 2:
    FUN_0075c1e4(plVar9,param_2,1);
    return 1;
  case 3:
    FUN_0075c420(plVar9,param_2,1,0);
    return 1;
  case 4:
    FUN_0075ca70(plVar9,param_2,1,0);
    return 1;
  case 5:
    FUN_0075ce94(plVar9,param_2,1);
    return 1;
  case 6:
    FUN_0075cf6c(plVar9,param_2,1);
    return 1;
  case 7:
    FUN_0075d11c(plVar9,param_2,1);
    return 1;
  default:
    return 0;
  case 0xf:
    FUN_0075d044(plVar9,param_2,1);
    return 1;
  case 0x18:
    FUN_0075c344(plVar9,param_2,1);
    return 1;
  }
}

