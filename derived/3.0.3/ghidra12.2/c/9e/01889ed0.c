
undefined8 FUN_01889ed0(undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
  }
  uVar8 = *(uint *)PTR_DAT_04bbea10;
  if ((((uVar8 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar8)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x01889f94;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01889f94;
    }
  }
  uVar8 = 0;
joined_r0x01889f94:
  if (plVar9 != (long *)0x0) {
    if (((*PTR_DAT_04bbe9f0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbe9f0), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bbe9e8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe9f0);
    }
    uVar4 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bbe9e8);
    puVar2 = PTR_DAT_04bb4800;
    if ((uVar8 & uVar4) == 1) {
      iVar3 = *(int *)(param_2 + 0x1c);
      uVar8 = *(uint *)(param_2 + 0x24);
      if (iVar3 - 1U < 3) {
        if ((int)uVar8 < 0) {
          return 0;
        }
        lVar6 = FUN_019db1e0(*(undefined8 *)PTR_DAT_04bb4800);
        if (*(int *)(lVar6 + 0x78) <= (int)uVar8) {
          return 0;
        }
        lVar6 = FUN_019db1e0(*(undefined8 *)puVar2);
      }
      else {
        if (iVar3 == 0) {
          if ((int)uVar8 < 0) {
            return 0;
          }
        }
        else {
          if ((int)uVar8 < 0) {
            return 0;
          }
          if (iVar3 != 4) {
            return 0;
          }
        }
        lVar6 = FUN_019db0b8(*(undefined8 *)PTR_DAT_04bb4800);
        if (*(int *)(lVar6 + 0x78) <= (int)uVar8) {
          return 0;
        }
        lVar6 = FUN_019db0b8(*(undefined8 *)puVar2);
      }
      if ((int)uVar8 < *(int *)(lVar6 + 0x78)) {
        plVar9 = (long *)(*(long *)(lVar6 + 0x60) + (ulong)uVar8 * 8);
      }
      else {
        plVar9 = *(long **)(lVar6 + 0x60);
      }
      lVar6 = *plVar9;
      lVar7 = *(long *)PTR_DAT_04bb4800;
      if (lVar7 == 0) {
        if (*(int *)(lVar6 + 0xb8) != 0) {
          return **(undefined8 **)(lVar6 + 0xc0);
        }
      }
      else {
        if (*(char *)(lVar7 + 0x80c) == '\0') {
          bVar1 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
          *(undefined1 *)(lVar7 + 0x80c) = 1;
          uVar8 = (uint)(bVar1 - 0x12 < 0xfffffff4);
          *(uint *)(lVar7 + 0x808) = uVar8;
        }
        else {
          uVar8 = *(uint *)(lVar7 + 0x808);
        }
        if (uVar8 < *(uint *)(lVar6 + 0xb8)) {
          return *(undefined8 *)(*(long *)(lVar6 + 0xc0) + (long)(int)uVar8 * 8);
        }
      }
    }
  }
  return 0;
}

