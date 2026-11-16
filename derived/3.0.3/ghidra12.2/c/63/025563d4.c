
undefined8 FUN_025563d4(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int local_70;
  undefined4 uStack_6c;
  char local_68;
  char local_67;
  undefined4 local_5c;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  
  local_34 = param_2;
  FUN_0253395c(&local_3c,param_1,param_2);
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_3c);
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    return 0;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar3) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 0;
  }
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = local_3c;
  uStack_4c = uStack_38;
  uVar3 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(&local_3c);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
         (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8), lVar9 != 0)) {
        local_48 = lVar9;
      }
    }
  }
  local_70 = FUN_01ad78cc(&local_58);
  if (local_70 != 0x3d) {
    return 0;
  }
  if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
    puVar7 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
  }
  else {
    puVar7 = (undefined4 *)PTR_DAT_04bb3238;
  }
  local_5c = *puVar7;
  FUN_0071c8d0(&local_70,&local_5c,&local_34,0);
  puVar2 = PTR_DAT_04bb3778;
  plVar8 = (long *)CONCAT44(uStack_6c,local_70);
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3770);
    if ((uVar5 & 1) == 0) {
      local_67 = '\0';
    }
  }
  plVar8 = (long *)CONCAT44(uStack_6c,local_70);
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  if (local_68 == '\0') {
    return 0;
  }
  if (local_67 == '\0') {
    return 0;
  }
  if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3770);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  FUN_02326130(param_1,PTR_DAT_04bb37e0,1);
  puVar2 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)(CONCAT44(uStack_6c,local_70) + 0x298);
  if (lVar9 == 0) {
    return 0;
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) goto LAB_025566f8;
  uVar3 = *(uint *)(*(long *)(lVar9 + 0x1480) +
                    ((ulong)*(uint *)(*(long *)(lVar9 + 0x1480) + 0x10) & 1) * 0x20 + 0x28);
  if ((((uVar3 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                           ((ulong)(uVar3 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar3)) {
    plVar8 = (long *)0x0;
  }
  if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar3 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_02556684;
      uVar3 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02556684:
    uVar3 = 0;
  }
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[0x2a];
    if (((*PTR_DAT_04bbe248 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbe248), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bbe240 = PTR_DAT_04bbe250 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe248);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbe240);
    uVar1 = 0;
    if ((int)lVar10 == 1) {
      uVar1 = uVar3;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      lVar10 = 0;
      if (plVar8[0xe] != 0) {
        lVar10 = plVar8[0xe] + 0x278;
      }
      if (*(int *)(lVar10 + 8) != 1) {
        FUN_03ebb160(lVar10,1);
      }
    }
  }
LAB_025566f8:
  (**(code **)(**(long **)(lVar9 + 0x1480) + 0x20))(*(long **)(lVar9 + 0x1480),&local_34);
  return 0;
}

