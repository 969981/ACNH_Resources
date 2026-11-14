
undefined8 FUN_01c29e68(undefined8 param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  
  local_68 = 0;
  if (*(long *)PTR_DAT_04bb4808 == 0) {
    return 0;
  }
  FUN_01943768(*(long *)PTR_DAT_04bb4808,&local_68);
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb27c0;
  if (((uint)local_68 == 0) || (local_68._4_4_ == 0)) {
    return 0;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    uVar14 = 0;
    bVar4 = false;
    plVar12 = (long *)0x0;
    uVar15 = 0;
  }
  else {
    plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                        ((ulong)((uint)local_68 >> 0x11) & 0x7ff8));
    if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar12 + 0x46) != (uint)local_68)) {
      plVar12 = (long *)0x0;
    }
    if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar11 = *(long *)puVar1;
      iVar6 = (**(code **)(*plVar7 + 0x60))();
      if (iVar6 < 0x11) {
        uVar14 = 1;
      }
      else {
        if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_01c29f94;
        uVar14 = 0x101000100 >> (((ulong)*(uint *)(lVar11 + 0x5e8) & 7) << 3);
      }
    }
    else {
LAB_01c29f94:
      uVar14 = 0;
    }
    puVar3 = PTR_DAT_04bb3fc8;
    if (plVar12 == (long *)0x0) {
      uVar15 = 0;
      bVar4 = false;
      lVar11 = *(long *)puVar1;
    }
    else {
      bVar4 = (int)plVar12[0x2a] == 1;
      uVar15 = *(uint *)(plVar12 + 0x49) >> 4 & 1;
      if (((*PTR_DAT_04bb3fc8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3fc8), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb3fc0 = PTR_DAT_04bb3fd0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3fc8);
      }
      uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3fc0);
      uVar13 = (uint)uVar14;
      if ((uVar8 & 1) == 0) {
        uVar13 = 0;
      }
      uVar14 = (ulong)uVar13;
      lVar11 = *(long *)puVar1;
    }
    if (lVar11 != 0) {
      local_68._4_4_ = (uint)((ulong)local_68 >> 0x20);
      if ((((local_68._4_4_ == 0) ||
           (plVar7 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                               ((ulong)(local_68._4_4_ >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0))
          || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
         (*(uint *)(plVar7 + 0x46) != local_68._4_4_)) {
        plVar7 = (long *)0x0;
      }
      if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
        plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
        lVar11 = *(long *)puVar1;
        iVar6 = (**(code **)(*plVar9 + 0x60))();
        if (iVar6 < 0x11) {
          uVar8 = 1;
          uVar13 = 1;
        }
        else {
          if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_01c2a0ac;
          uVar8 = 0x101000100 >> (((ulong)*(uint *)(lVar11 + 0x5e8) & 7) << 3);
          uVar13 = (uint)uVar8;
        }
      }
      else {
LAB_01c2a0ac:
        uVar8 = 0;
        uVar13 = 0;
      }
      if (plVar7 == (long *)0x0) {
        bVar5 = false;
        uVar16 = 0;
      }
      else {
        bVar5 = (int)plVar7[0x2a] == 1;
        uVar16 = *(uint *)(plVar7 + 0x49) >> 4 & 1;
        if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3fc8), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb3fc0 = PTR_DAT_04bb3fd0 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3fc8);
        }
        uVar8 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3fc0);
        if ((uVar8 & 1) == 0) {
          uVar13 = 0;
        }
        uVar8 = (ulong)uVar13;
      }
      goto LAB_01c2a104;
    }
  }
  plVar7 = (long *)0x0;
  bVar5 = false;
  uVar16 = 0;
  uVar8 = 0;
LAB_01c2a104:
  uVar10 = 0;
  if (((((uVar14 & 0xff) != 0) && (plVar12 != (long *)0x0)) && (bVar4)) &&
     (((uVar15 != 0 && (uVar10 = 0, plVar7 != (long *)0x0)) &&
      ((bVar5 && (((uVar8 & 0xff) != 0 && (uVar16 != 0)))))))) {
    local_6c = 0;
    param_2[4] = (uint)local_68;
    param_2[5] = local_68._4_4_;
    local_70 = *(uint *)(plVar12 + 0x57) & 0xffff;
    FUN_0277d4ac(&local_70);
    uVar15 = local_6c;
    local_6c = 0;
    *param_2 = local_70;
    param_2[1] = uVar15;
    local_70 = *(uint *)(plVar7 + 0x57) & 0xffff;
    FUN_0277d4ac(&local_70);
    uVar10 = 1;
    param_2[2] = local_70;
    param_2[3] = local_6c;
  }
  return uVar10;
}

