
undefined4 FUN_01950840(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  CalendarTime CVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  long *plVar11;
  uint *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  undefined **local_88;
  char *pcStack_80;
  undefined8 local_68;
  undefined8 local_58;
  
  if ((*(long *)(param_1 + 0x38) == 0 || *(uint *)(param_1 + 0x30) < 7) ||
     (plVar7 = *(long **)(*(long *)(param_1 + 0x38) + 0x30), plVar7 == (long *)0x0)) {
LAB_019508c0:
    plVar7 = (long *)FUN_018c04f0(param_1);
  }
  else {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x160))();
    if (((*PTR_DAT_04bbef10 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbef10), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bbef08 = PTR_DAT_04bb2fb8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbef10);
    }
    if ((plVar7 == (long *)0x0) ||
       (uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bbef08), (uVar8 & 1) == 0))
    goto LAB_019508c0;
  }
  pfVar9 = (float *)(**(code **)(plVar7[0x42] + 0xf0))(plVar7 + 0x42);
  fVar18 = *pfVar9;
  puVar13 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar13 == 0) {
    local_58 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_58 >> 0x20) < '\x05') {
      lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_88 = (undefined **)(lVar10 + -0x15180);
      local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
    }
    uVar8 = local_58;
    puVar13 = &local_58;
    local_58._7_1_ = SUB81(uVar8,7);
    local_58._0_7_ = (uint7)CONCAT24(5,(undefined4)local_58);
  }
  local_68 = *puVar13;
  uVar15 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_88 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  pcStack_80 = "Carnival";
  if ((char)(local_68 >> 0x20) < '\x05') {
    lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    local_58 = lVar10 - 0x15180;
    local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
  }
  uVar8 = local_68;
  local_68._7_1_ = SUB81(uVar8,7);
  local_68._0_7_ = (uint7)CONCAT24(5,(undefined4)local_68);
  uVar8 = FUN_00879dd0(uVar15,&local_88,uVar8,uVar8 >> 0x10,uVar8 >> 0x18,0);
  puVar3 = PTR_DAT_04bb27c0;
  if ((uVar8 & 1) == 0) {
    return 0xfffe;
  }
  local_58 = local_58 & 0xffffffffffffff00;
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 != 0) {
    uVar16 = *(uint *)PTR_DAT_04bb4b88;
    if ((((uVar16 == 0) ||
         (plVar7 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                             ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
        ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar16)) {
      plVar7 = (long *)0x0;
    }
    if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
      plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar10 = *(long *)puVar3;
      iVar5 = (**(code **)(*plVar11 + 0x60))();
      if (iVar5 < 0x11) {
        uVar16 = 1;
      }
      else {
        if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_01950a74;
        uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_01950a74:
      uVar16 = 0;
    }
    if (plVar7 != (long *)0x0) {
      if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4b78);
      }
      uVar6 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb4b70);
      if ((uVar16 & uVar6) == 1) {
        pcStack_80 = (char *)&local_58;
        local_88 = &PTR_FUN_049e19d8;
        lVar10 = plVar7[0x54];
        if ((lVar10 != 0) && (iVar5 = *(int *)(lVar10 + 0x288), iVar5 != 0)) {
          lVar10 = *(long *)(lVar10 + 0x290);
          iVar17 = 0;
          do {
            lVar14 = lVar10 + (long)iVar17 * 0x30;
            uVar16 = *(uint *)(lVar14 + 0x10);
            if (uVar16 != 0) {
              lVar14 = *(long *)(lVar14 + 0x18);
              uVar6 = 0;
              do {
                (*(code *)*local_88)(&local_88,lVar14 + ((long)((ulong)uVar6 << 0x20) >> 0x1e));
                uVar6 = uVar6 + 1;
              } while (uVar16 != uVar6);
            }
            iVar17 = iVar17 + 1;
          } while (iVar5 != iVar17);
        }
      }
    }
  }
  if (((*(long *)(param_1 + 0x38) != 0) && (6 < *(uint *)(param_1 + 0x30))) &&
     (plVar7 = *(long **)(*(long *)(param_1 + 0x38) + 0x30), plVar7 != (long *)0x0)) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x160))();
    if (((*PTR_DAT_04bbef10 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbef10), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bbef08 = PTR_DAT_04bb2fb8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbef10);
    }
    if ((plVar7 != (long *)0x0) &&
       (uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bbef08), (uVar8 & 1) != 0))
    goto LAB_01950ba8;
  }
  plVar7 = (long *)FUN_018c04f0(param_1);
LAB_01950ba8:
  CVar4 = local_58._0_1_;
  puVar12 = (uint *)(**(code **)(plVar7[0x3c] + 0xf0))(plVar7 + 0x3c);
  if (*puVar12 <= (uint)(byte)CVar4) {
    return 0xfffe;
  }
  uVar16 = *(uint *)(param_1 + 0x63c) ^ *(uint *)(param_1 + 0x63c) << 0xb;
  uVar1 = *(uint *)(param_1 + 0x648);
  uVar6 = *(uint *)(param_1 + 0x640);
  uVar2 = *(undefined4 *)(param_1 + 0x644);
  *(undefined4 *)(param_1 + 0x640) = uVar2;
  *(uint *)(param_1 + 0x644) = uVar1;
  *(uint *)(param_1 + 0x63c) = uVar6;
  uVar16 = uVar16 >> 8 ^ uVar1 >> 0x13 ^ uVar16 ^ uVar1;
  *(uint *)(param_1 + 0x648) = uVar16;
  if (fVar18 <= ((float)(uVar16 >> 9 | 0x3f800000) + -1.0) * 100.0) {
    uVar6 = uVar6 ^ uVar6 << 0xb;
    *(undefined4 *)(param_1 + 0x63c) = uVar2;
    *(uint *)(param_1 + 0x640) = uVar1;
    uVar1 = uVar6 ^ uVar16;
    *(uint *)(param_1 + 0x644) = uVar16;
    *(uint *)(param_1 + 0x648) = uVar6 >> 8 ^ uVar16 >> 0x13 ^ uVar1;
    return *(undefined4 *)(&DAT_04101f10 + (ulong)(uVar1 >> 0x1e) * 4);
  }
  return 0xddc;
}

