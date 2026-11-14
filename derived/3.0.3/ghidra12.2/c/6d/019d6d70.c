
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_019d6d70(uint *param_1,uint *param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  if ((((DAT_052d0188 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                            ((ulong)(DAT_052d0188 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != DAT_052d0188)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_019d6e40;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_019d6e40:
    uVar9 = 0;
  }
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  lVar7 = plVar10[0x2a];
  if (((*PTR_DAT_04bbe9f0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbe9f0), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bbe9e8 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbe9f0);
  }
  uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bbe9e8);
  puVar3 = PTR_DAT_04bb4800;
  uVar1 = 0;
  if ((int)lVar7 == 1) {
    uVar1 = uVar9;
  }
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  if (uVar1 == 0) {
    return 0;
  }
  uVar9 = *param_1;
  if (uVar9 == 0xffffffff) {
    if (*param_2 == 0xffffffff) {
      return 0;
    }
    lVar7 = FUN_019db0b8(*(undefined8 *)PTR_DAT_04bb4800);
    uVar9 = *param_2;
    if (((int)uVar9 < 0) || (*(int *)(lVar7 + 0x78) <= (int)uVar9)) {
      plVar10 = *(long **)(lVar7 + 0x60);
    }
    else {
      plVar10 = (long *)(*(long *)(lVar7 + 0x60) + (ulong)uVar9 * 8);
    }
    lVar7 = *plVar10;
    lVar8 = *(long *)puVar3;
    if (lVar8 == 0) {
      lVar7 = **(long **)(lVar7 + 0xc0);
    }
    else {
      if (*(char *)(lVar8 + 0x80c) == '\0') {
        bVar2 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
        *(undefined1 *)(lVar8 + 0x80c) = 1;
        uVar9 = (uint)(bVar2 - 0x12 < 0xfffffff4);
        *(uint *)(lVar8 + 0x808) = uVar9;
      }
      else {
        uVar9 = *(uint *)(lVar8 + 0x808);
      }
      if (uVar9 < *(uint *)(lVar7 + 0xb8)) {
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + (long)(int)uVar9 * 8);
      }
      else {
        lVar7 = 0;
      }
    }
  }
  else if (((int)uVar9 < 0) || ((int)plVar10[0x5f] <= (int)uVar9)) {
    lVar7 = *(long *)plVar10[0x5c];
  }
  else {
    lVar7 = *(long *)(plVar10[0x5c] + (ulong)uVar9 * 8);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x40);
  if (*(uint *)(lVar7 + 0x78) <= param_3) {
    return 0;
  }
  if (((int)param_3 < 0) || ((int)*(uint *)(lVar7 + 0x78) <= (int)param_3)) {
    if (*(uint *)(lVar7 + 0x58) != 0) {
      plVar10 = *(long **)(lVar7 + 0x60);
      goto LAB_019d6fcc;
    }
  }
  else if (param_3 < *(uint *)(lVar7 + 0x58)) {
    plVar10 = (long *)(*(long *)(lVar7 + 0x60) + (ulong)param_3 * 8);
LAB_019d6fcc:
    lVar7 = *plVar10;
    iVar4 = *(int *)(lVar7 + 200);
    goto joined_r0x019d6ffc;
  }
  lVar7 = 0;
  iVar4 = _DAT_000000c8;
joined_r0x019d6ffc:
  if (iVar4 == 0) {
    *(undefined4 *)(lVar7 + 200) = *param_4;
    return 1;
  }
  return 0;
}

