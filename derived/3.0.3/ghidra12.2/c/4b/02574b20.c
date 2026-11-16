
void FUN_02574b20(long param_1,undefined8 param_2,long *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  void *pvVar15;
  uint uVar16;
  int *piVar17;
  ushort uVar18;
  undefined2 *puVar19;
  long *plVar20;
  long lVar21;
  ushort local_74 [2];
  undefined *local_70;
  char *pcStack_68;
  ushort local_5c [2];
  undefined *local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  long local_48;
  
  FUN_0173ac60();
  puVar5 = PTR_DAT_04bb43c0;
  uVar16 = *(uint *)(param_1 + 0x234);
  if (uVar16 == 0) {
    return;
  }
  puVar19 = *(undefined2 **)(param_1 + 0x228);
  if (puVar19 == (undefined2 *)0x0) {
    return;
  }
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *puVar19;
  local_4e = *(undefined1 *)(puVar19 + 1);
  local_4d = *(undefined1 *)((long)puVar19 + 3);
  local_4c = *(undefined4 *)(puVar19 + 2);
  local_48 = 0;
  lVar21 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar5 != 0) {
    lVar21 = *(long *)(lVar21 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar21 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar21 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(puVar19);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if (uVar7 < *(uint *)(lVar21 + 0x1d8)) {
        lVar21 = *(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8);
        if (lVar21 != 0) {
          local_48 = lVar21;
        }
      }
    }
  }
  iVar8 = FUN_01afcfa0(&local_58);
  if ((iVar8 == 0) || (puVar11 = (ushort *)FUN_01afd600(&local_58), puVar11 == (ushort *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar9 = *puVar11 >> 3 & 3;
    uVar7 = 0;
    if (uVar9 != 3) {
      uVar7 = uVar9;
    }
  }
  puVar5 = PTR_DAT_04bb27c0;
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar7);
  if (uVar7 != 2) {
    return;
  }
  lVar21 = *(long *)PTR_DAT_04bb27c0;
  if (lVar21 == 0) {
LAB_02574d54:
    uVar13 = 0;
  }
  else {
    plVar20 = *(long **)(*(long *)(*(long *)(lVar21 + 0x1c0) + 8) +
                        ((ulong)(uVar16 >> 0x11) & 0x7ff8));
    if (((plVar20 == (long *)0x0) || ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar20 + 0x46) != uVar16)) {
      plVar20 = (long *)0x0;
    }
    if ((*(int *)(lVar21 + 0x288) == 1) || (*(int *)(lVar21 + 0x288) == -1)) {
      plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar21 = *(long *)puVar5;
      iVar8 = (**(code **)(*plVar12 + 0x60))();
      if (iVar8 < 0x11) {
        uVar7 = 1;
      }
      else {
        if (4 < *(uint *)(lVar21 + 0x5e8)) goto LAB_02574cf4;
        uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar21 + 0x5e8) & 0x1f) & 1;
      }
      if (plVar20 != (long *)0x0) goto LAB_02574d08;
      goto LAB_02574d54;
    }
LAB_02574cf4:
    uVar7 = 0;
    if (plVar20 == (long *)0x0) goto LAB_02574d54;
LAB_02574d08:
    if (((*PTR_DAT_04bb3760 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3760);
    }
    uVar9 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb3758);
    if ((uVar7 & uVar9) != 1) goto LAB_02574d54;
    uVar13 = (**(code **)(*plVar20 + 0x168))(plVar20);
  }
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    local_70 = (undefined *)CONCAT44(local_70._4_4_,0x15);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) != 0) {
      if ((*(long *)PTR_DAT_04bb3968 == 0) ||
         (lVar21 = *(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0), lVar21 == 0)) {
        iVar8 = 0;
      }
      else {
        local_70 = (undefined *)CONCAT44(local_70._4_4_,*(undefined4 *)(param_1 + 0x234));
        iVar8 = FUN_02119c7c(lVar21,&local_70);
        if (iVar8 != -1) {
          if (iVar8 == -2) {
            piVar17 = (int *)(lVar21 + 0x1cc);
          }
          else {
            piVar17 = (int *)(*(long *)(*(long *)(lVar21 + 0x1f0) + (long)iVar8 * 8) + 0x1c4);
          }
          iVar8 = *piVar17;
        }
      }
      lVar21 = *(long *)PTR_DAT_04bb2698;
      if (lVar21 == 0) {
        pvVar15 = malloc(0x308);
      }
      else {
        if (param_3 == (long *)0x0) {
          lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          puVar2 = (undefined8 *)(lVar21 + 8);
          if (lVar14 != 0) {
            puVar2 = (undefined8 *)(lVar14 + 0xa8);
          }
          param_3 = (long *)*puVar2;
          pvVar15 = (void *)0x0;
          if (param_3 == (long *)0x0) goto LAB_0257505c;
        }
        pvVar15 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x308,8);
      }
LAB_0257505c:
      puVar5 = PTR_DAT_04bb3128;
      if (((*PTR_DAT_04bb3128 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      puVar6 = PTR_DAT_04bb3120;
      if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
        uVar13 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar13 * 4) == 0x17) goto LAB_025750ac;
          uVar13 = uVar13 + 1;
        } while (*(uint *)PTR_DAT_04bb3120 != uVar13);
      }
      uVar13 = 0;
LAB_025750ac:
      local_5c[0] = 0;
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      puVar11 = local_5c;
      uVar16 = (uint)uVar13;
      if (*(uint *)puVar6 <= uVar16) {
        uVar16 = 0;
      }
      local_5c[0] = (ushort)iVar8 & 0x7f |
                    (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar16 * 4) << 0xb);
      goto LAB_025750e8;
    }
  }
  if ((uVar13 & 1) == 0) {
    return;
  }
  lVar21 = *(long *)puVar5;
  if (lVar21 == 0) {
    return;
  }
  plVar20 = *(long **)(*(long *)(*(long *)(lVar21 + 0x1c0) + 8) + ((ulong)(uVar16 >> 0x11) & 0x7ff8)
                      );
  if (((plVar20 == (long *)0x0) || ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar20 + 0x46) != uVar16)) {
    plVar20 = (long *)0x0;
  }
  if ((*(int *)(lVar21 + 0x288) == 1) || (*(int *)(lVar21 + 0x288) == -1)) {
    plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar21 = *(long *)puVar5;
    iVar8 = (**(code **)(*plVar12 + 0x60))();
    if (iVar8 < 0x11) {
      uVar16 = 1;
    }
    else {
      if (4 < *(uint *)(lVar21 + 0x5e8)) goto LAB_02574e90;
      uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar21 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02574e90:
    uVar16 = 0;
  }
  if (plVar20 == (long *)0x0) {
    return;
  }
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar8 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar7 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb3770);
  if ((uVar16 & uVar7) != 1) {
    return;
  }
  bVar3 = *(byte *)(plVar20 + 0x3dd);
  lVar21 = *(long *)PTR_DAT_04bb2698;
  if (lVar21 == 0) {
    pvVar15 = malloc(0x308);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar2 = (undefined8 *)(lVar21 + 8);
      if (lVar14 != 0) {
        puVar2 = (undefined8 *)(lVar14 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      pvVar15 = (void *)0x0;
      if (param_3 == (long *)0x0) goto LAB_02574f50;
    }
    pvVar15 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x308,8);
  }
LAB_02574f50:
  puVar5 = PTR_DAT_04bb3128;
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0))
  {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  puVar6 = PTR_DAT_04bb3120;
  if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
    uVar13 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar13 * 4) == 0xc) goto LAB_02574f98;
      uVar13 = uVar13 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar13);
  }
  uVar13 = 0;
LAB_02574f98:
  local_74[0] = 0;
  uVar18 = bVar3 & 0x7f;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  puVar11 = local_74;
  uVar16 = (uint)uVar13;
  if (*(uint *)puVar6 <= uVar16) {
    uVar16 = 0;
  }
  if (7 < bVar3) {
    uVar18 = 0x7f;
  }
  local_74[0] = uVar18 | (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar16 * 4) << 0xb);
LAB_025750e8:
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "mReFabric_Alb";
  FUN_007596e0(pvVar15,puVar11,&local_70,1);
  FUN_006f9fc0(param_1,pvVar15,0xffffffff);
  return;
}

