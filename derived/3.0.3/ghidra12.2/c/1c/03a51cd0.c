
long FUN_03a51cd0(long param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_50;
  long local_48;
  undefined *local_40;
  undefined *puStack_38;
  
  if ((param_2 == 0) && (*(int *)(param_1 + 0x48) != 0)) {
    if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 3) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x10);
    }
    local_40 = PTR_s_ANALYSIS_MODE_04b6e260;
    puStack_38 = PTR_s_ANALYSIS_CALC_04b6e268;
    if (((DAT_05aea6a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05aea6a0), iVar3 != 0)) {
      DAT_05aea650 = PTR_DAT_04bb2020 + 0x10;
      DAT_05aea658 = &DAT_04069f21;
      DAT_05aea668 = &DAT_040d3199;
      DAT_05aea688 = &DAT_04074a4d;
      DAT_05aea678 = &DAT_040b3e5e;
      DAT_05aea698 = &DAT_040aa133;
      DAT_05aea660 = DAT_05aea650;
      DAT_05aea670 = DAT_05aea650;
      DAT_05aea680 = DAT_05aea650;
      DAT_05aea690 = DAT_05aea650;
      __cxa_guard_release(&DAT_05aea6a0);
    }
    puVar5 = &DAT_05aea6a8;
    if (((DAT_05aea6d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05aea6d8), iVar3 != 0)) {
      DAT_05aea6a8 = PTR_DAT_04bb2020 + 0x10;
      DAT_05aea6b0 = &DAT_040d3199;
      DAT_05aea6d0 = &DAT_04074a4d;
      DAT_05aea6c0 = &DAT_040b3e5e;
      DAT_05aea6b8 = DAT_05aea6a8;
      DAT_05aea6c8 = DAT_05aea6a8;
      __cxa_guard_release(&DAT_05aea6d8);
    }
    iVar3 = *(int *)(param_1 + 0x48);
    (**(code **)((long)(&DAT_05aea650)[(long)iVar3 * 2] + 0x18))(&DAT_05aea650 + (long)iVar3 * 2);
    local_50 = (&DAT_05aea658)[(long)iVar3 * 2];
    iVar3 = *(int *)(param_1 + 0x50);
  }
  else {
    if (*(int *)(param_1 + 0x98) == 0) {
      return 0;
    }
    if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 4) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x18);
    }
    local_40 = PTR_s_COLORIZATION_MODE_04b6e270;
    puStack_38 = PTR_s_COLOR_COMPARE_04b6e278;
    if (((DAT_05aea720 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05aea720), iVar3 != 0)) {
      DAT_05aea6e0 = PTR_DAT_04bb2020 + 0x10;
      DAT_05aea6e8 = &DAT_04069f21;
      DAT_05aea718 = &DAT_04074a4d;
      DAT_05aea6f8 = &DAT_040d3199;
      DAT_05aea708 = &DAT_040b3e5e;
      DAT_05aea6f0 = DAT_05aea6e0;
      DAT_05aea700 = DAT_05aea6e0;
      DAT_05aea710 = DAT_05aea6e0;
      __cxa_guard_release(&DAT_05aea720);
    }
    puVar5 = &DAT_05aea728;
    if (((DAT_05aea758 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05aea758), iVar3 != 0)) {
      DAT_05aea728 = PTR_DAT_04bb2020 + 0x10;
      DAT_05aea730 = &DAT_040d3199;
      DAT_05aea750 = &DAT_04074a4d;
      DAT_05aea740 = &DAT_040b3e5e;
      DAT_05aea738 = DAT_05aea728;
      DAT_05aea748 = DAT_05aea728;
      __cxa_guard_release(&DAT_05aea758);
    }
    iVar3 = *(int *)(param_1 + 0x98);
    (**(code **)((long)(&DAT_05aea6e0)[(long)iVar3 * 2] + 0x18))(&DAT_05aea6e0 + (long)iVar3 * 2);
    local_50 = (&DAT_05aea6e8)[(long)iVar3 * 2];
    iVar3 = *(int *)(param_1 + 0x94);
  }
  plVar1 = puVar5 + (long)iVar3 * 2;
  (**(code **)(*plVar1 + 0x18))(plVar1);
  local_48 = plVar1[1];
  iVar3 = FUN_03907ef0(*(long *)(lVar4 + 8) + 0x10,2,&local_40,&local_50,
                       *(undefined2 *)(lVar4 + 0x1e));
  lVar4 = *(long *)(lVar4 + 8);
  if (iVar3 < 1) {
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  else {
    uVar2 = iVar3 - 1;
    if (*(uint *)(lVar4 + 0x20) <= uVar2) {
      uVar2 = 0;
    }
    lVar4 = *(long *)(lVar4 + 0x28) + (ulong)uVar2 * 0x150;
  }
  return lVar4;
}

