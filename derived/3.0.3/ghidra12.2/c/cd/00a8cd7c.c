
float FUN_00a8cd7c(long param_1)

{
  int *piVar1;
  uint *puVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ushort uVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_70;
  long local_68;
  
  puVar5 = PTR_DAT_04bb6298;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    local_68 = CONCAT44(local_68._4_4_,0x17);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x17 & 1) != 0) {
      return 0.0;
    }
  }
  if (DAT_05aed670 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar7 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  iVar7 = *(int *)(puVar12 + 7);
  if ((((iVar7 == -0x7975b8e8) || (iVar7 == -0x17df00c3)) || (iVar7 == -0x3e092032)) &&
     (uVar8 = FUN_03784bd0(), (uVar8 & 1) != 0)) {
    return 0.0;
  }
  uVar11 = *(ushort *)puVar5;
  if ((long)(short)uVar11 == 0xffffffffffffffff) {
    fVar15 = 0.0;
    goto LAB_00a8d150;
  }
  local_68 = CONCAT44(local_68._4_4_,0x1e);
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar11 * 8);
  if (0xff < uVar11) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 >> 0x1e & 1) == 0) {
    local_68 = CONCAT44(local_68._4_4_,0x1f);
    piVar1 = (int *)(PTR_DAT_04bc39f8 + ((long)(short)uVar11 & 0xffffffffU) * 8);
    if (0xff < uVar11) {
      piVar1 = (int *)PTR_DAT_04bc39f8;
    }
    if (*piVar1 < 0) goto LAB_00a8cf3c;
    fVar15 = 0.0;
  }
  else {
LAB_00a8cf3c:
    local_68 = FUN_00a8c31c(param_1);
    uVar8 = FUN_00a8cc54(param_1,&local_68);
    uVar4 = *(int *)(param_1 + 0x6539c) - 3;
    if (uVar4 < 3) {
      iVar7 = (&DAT_04130ba0)[(int)uVar4];
    }
    else {
      if (DAT_05aed670 == 0) {
        puVar12 = &DAT_055c04a0;
      }
      else {
        puVar12 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar12 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar7 = FUN_006bd550(*puVar12,0);
          puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar7 != 0x758f7eaf) {
            puVar12 = &DAT_055c04a0;
          }
        }
      }
      iVar7 = *(int *)(puVar12 + 7);
      if ((((iVar7 == -0x7975b8e8) || (iVar7 == -0x17df00c3)) || (iVar7 == -0x3e092032)) &&
         (uVar9 = FUN_03784bd0(), (uVar9 & 1) != 0)) {
        iVar7 = 0;
      }
      else {
        local_70 = uVar8;
        if ((char)(uVar8 >> 0x20) < '\x05') {
          lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          local_68 = lVar10 + -0x15180;
          local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
        }
        uVar9 = local_70;
        uVar8 = local_70 >> 0x30;
        local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
        local_70 = CONCAT26((short)uVar8,(undefined6)local_70) & 0xff00ffffffffffff;
        cVar6 = FUN_00a8ae20(param_1,uVar9 >> 0x10,uVar9 >> 0x18,8);
        iVar7 = (uint)(cVar6 == '\x05') << 1;
        if (cVar6 == '\x04') {
          iVar7 = 1;
        }
      }
    }
    local_68 = CONCAT44(local_68._4_4_,iVar7);
    fVar13 = 1.0;
    if (iVar7 != 2) {
      fVar13 = 0.0;
    }
    uVar11 = *(ushort *)puVar5;
    fVar15 = 0.5;
    if (iVar7 != 1) {
      fVar15 = fVar13;
    }
    if (uVar11 == 0xffff) goto LAB_00a8d150;
  }
  local_68 = CONCAT44(local_68._4_4_,0x11);
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar11 & 0xffffffffU) * 8);
  if (0xff < uVar11) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 >> 0x11 & 1) != 0) {
    local_68 = CONCAT44(local_68._4_4_,0x1f);
    if ((((int)*puVar2 < 0) && (iVar7 = FUN_01c5c410(DAT_0534f200), iVar7 != 0)) &&
       (iVar7 = FUN_01c5c410(DAT_0534f200), iVar7 != 0)) {
      return fVar15;
    }
    return 0.0;
  }
LAB_00a8d150:
  uVar8 = FUN_00a8c31c(param_1);
  uVar4 = *(int *)(param_1 + 0x6539c) - 3;
  if (uVar4 < 3) {
    iVar7 = (&DAT_04130ba0)[(int)uVar4];
  }
  else {
    if (DAT_05aed670 == 0) {
      puVar12 = &DAT_055c04a0;
    }
    else {
      puVar12 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar12 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar7 = FUN_006bd550(*puVar12,0);
        puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar7 != 0x758f7eaf) {
          puVar12 = &DAT_055c04a0;
        }
      }
    }
    iVar7 = *(int *)(puVar12 + 7);
    if ((((iVar7 == -0x7975b8e8) || (iVar7 == -0x17df00c3)) || (iVar7 == -0x3e092032)) &&
       (uVar9 = FUN_03784bd0(), (uVar9 & 1) != 0)) {
      iVar7 = 0;
    }
    else {
      local_70 = uVar8;
      if ((char)(uVar8 >> 0x20) < '\x05') {
        lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        local_68 = lVar10 + -0x15180;
        local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
      }
      uVar9 = local_70;
      uVar8 = local_70 >> 0x30;
      local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
      local_70 = CONCAT26((short)uVar8,(undefined6)local_70) & 0xff00ffffffffffff;
      cVar6 = FUN_00a8ae20(param_1,uVar9 >> 0x10,uVar9 >> 0x18,8);
      iVar7 = (uint)(cVar6 == '\x05') << 1;
      if (cVar6 == '\x04') {
        iVar7 = 1;
      }
    }
  }
  fVar13 = 1.0;
  if (iVar7 != 2) {
    fVar13 = 0.0;
  }
  sVar3 = *(short *)puVar5;
  fVar14 = 0.5;
  if (iVar7 != 1) {
    fVar14 = fVar13;
  }
  if (sVar3 != -1) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 & 0x40000000) != 0) {
      fVar14 = fVar15 * *(float *)(param_1 + 0x65404);
    }
  }
  return fVar14;
}

