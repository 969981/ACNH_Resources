
uint FUN_01952d7c(long param_1,int param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_58 = PTR_DAT_04bb7648 + 0x10;
  local_50 = CONCAT62(local_50._2_6_,**(undefined2 **)PTR_DAT_04bb27f8);
  lVar7 = FUN_03775a30(&local_58);
  uVar8 = 0;
  lVar12 = lVar7 + 0xe0;
  if (lVar7 == 0) {
    lVar12 = 0;
  }
  if (param_2 < 0) {
    return 0;
  }
  if (lVar7 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xe60) <= param_2) {
    return 0;
  }
  param_2 = *(int *)(param_1 + 0xe5c) + param_2;
  iVar5 = 0;
  if (*(int *)(param_1 + 0xe58) <= param_2) {
    iVar5 = *(int *)(param_1 + 0xe58);
  }
  param_2 = param_2 - iVar5;
  uVar14 = *(uint *)(*(long *)(param_1 + 0xe50) + (long)param_2 * 4);
  uVar16 = (ulong)uVar14;
  if (uVar14 == 0xffffffff) {
    return 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0xe50) + (long)param_2 * 4) = 0xffffffff;
  lVar7 = *(long *)(lVar12 + 0x28);
  if (lVar7 == 0) {
    uVar15 = 0;
  }
  else if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
    uVar15 = 0;
    plVar9 = *(long **)(lVar7 + 0x20);
    uVar8 = 0;
    if (plVar9 != (long *)0x0) {
LAB_01952e74:
      local_58 = *(undefined **)(lVar12 + 8);
      local_50 = *(undefined8 *)(lVar12 + 0x10);
      local_48 = 0x48a8;
      uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
    }
  }
  else {
    uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    uVar15 = uVar8 & 0xffffffff;
    if (*(long *)(lVar12 + 0x28) != 0) {
      plVar9 = *(long **)(*(long *)(lVar12 + 0x28) + 0x20);
      if (plVar9 != (long *)0x0) goto LAB_01952e74;
      uVar8 = 0;
    }
  }
  puVar4 = PTR_DAT_04bb37e0;
  puVar1 = (undefined2 *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + 0x4848);
  puVar3 = puVar1 + uVar16 * 4;
  if (0xb < uVar14) {
    puVar3 = puVar1;
  }
  *puVar3 = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)(puVar3 + 1) = puVar4[2];
  *(undefined *)((long)puVar3 + 3) = puVar4[3];
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar4 + 4);
  puVar1 = (undefined2 *)(param_1 + 0xe68) + uVar16 * 0x10;
  if (0xb < uVar14) {
    puVar1 = (undefined2 *)(param_1 + 0xe68);
  }
  *puVar1 = *(undefined2 *)puVar4;
  *(undefined *)(puVar1 + 1) = puVar4[2];
  *(undefined *)((long)puVar1 + 3) = puVar4[3];
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar4 + 4);
  *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(puVar1 + 10);
  FUN_018aa410(uVar8);
  if ((((uVar15 & 1) != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 0x18), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  puVar4 = PTR_DAT_04bb27c0;
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  uVar6 = 0;
  if (lVar12 != 0) {
    uVar6 = *(uint *)PTR_DAT_04bb4b88;
    if (((uVar6 == 0) ||
        (plVar9 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                            ((ulong)(uVar6 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
       (((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar9 + 0x46) != uVar6)))) {
      plVar9 = (long *)0x0;
    }
    if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
      plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar12 = *(long *)puVar4;
      iVar5 = (**(code **)(*plVar11 + 0x60))();
      if (iVar5 < 0x11) {
        uVar17 = 1;
      }
      else {
        if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_01952fe0;
        uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_01952fe0:
      uVar17 = 0;
    }
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0x2a];
      if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4b78);
      }
      uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb4b70);
      uVar6 = 0;
      uVar13 = 1;
      uVar2 = 0;
      if ((int)lVar12 == 1) {
        uVar2 = uVar17;
      }
      if (((uVar8 & 1) == 0) || (uVar2 == 0)) goto LAB_0195319c;
      lVar12 = plVar9[0x54];
      if ((lVar12 == 0) || (((int)uVar14 < 0 || (*(int *)(lVar12 + 0x288) < 1)))) {
        uVar14 = *(uint *)PTR_DAT_04bb3238;
      }
      else if ((int)uVar14 < *(int *)(*(long *)(lVar12 + 0x290) + 0x10)) {
        uVar14 = *(uint *)(*(long *)(*(long *)(lVar12 + 0x290) + 0x18) + uVar16 * 4);
      }
      else {
        uVar14 = *(uint *)PTR_DAT_04bb3238;
      }
      if (uVar14 == 0) {
        uVar13 = 0;
        uVar6 = 0;
        goto LAB_0195319c;
      }
      lVar12 = *(long *)puVar4;
      uVar6 = 0;
      if (lVar12 == 0) goto LAB_01953198;
      plVar9 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                         ((ulong)(uVar14 >> 0x11) & 0x7ff8));
      if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
         (*(uint *)(plVar9 + 0x46) != uVar14)) {
        plVar9 = (long *)0x0;
      }
      if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
        plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar12 = *(long *)puVar4;
        iVar5 = (**(code **)(*plVar11 + 0x60))();
        if (iVar5 < 0x11) {
          uVar14 = 1;
        }
        else {
          if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_01953128;
          uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_01953128:
        uVar14 = 0;
      }
      if (plVar9 != (long *)0x0) {
        if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3ff0);
        }
        uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3fe8);
        if ((uVar14 & uVar6) == 1) {
          FUN_01947f50(plVar9);
          uVar6 = 1;
          goto LAB_01953198;
        }
      }
    }
    uVar6 = 0;
  }
LAB_01953198:
  uVar13 = 1;
LAB_0195319c:
  return uVar6 | uVar13;
}

