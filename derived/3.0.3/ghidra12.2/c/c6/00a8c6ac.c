
float FUN_00a8c6ac(long param_1)

{
  int *piVar1;
  uint *puVar2;
  short sVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ushort uVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_70;
  long local_68;
  
  puVar4 = PTR_DAT_04bb6298;
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
    puVar11 = &DAT_055c04a0;
  }
  else {
    puVar11 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar11 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar6 = FUN_006bd550(*puVar11,0);
      puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar11 = &DAT_055c04a0;
      }
    }
  }
  iVar6 = *(int *)(puVar11 + 7);
  if ((((iVar6 == -0x7975b8e8) || (iVar6 == -0x17df00c3)) || (iVar6 == -0x3e092032)) &&
     (uVar7 = FUN_03784bd0(), (uVar7 & 1) != 0)) {
    return 0.0;
  }
  uVar10 = *(ushort *)puVar4;
  if ((long)(short)uVar10 == 0xffffffffffffffff) {
    fVar14 = 0.0;
  }
  else {
    local_68 = CONCAT44(local_68._4_4_,0x1e);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar10 * 8);
    if (0xff < uVar10) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x1e & 1) == 0) {
      local_68 = CONCAT44(local_68._4_4_,0x1f);
      piVar1 = (int *)(PTR_DAT_04bc39f8 + ((long)(short)uVar10 & 0xffffffffU) * 8);
      if (0xff < uVar10) {
        piVar1 = (int *)PTR_DAT_04bc39f8;
      }
      if (*piVar1 < 0) goto LAB_00a8c86c;
      fVar14 = 0.0;
    }
    else {
LAB_00a8c86c:
      local_68 = FUN_00a8c31c(param_1);
      uVar7 = FUN_00a8cc54(param_1,&local_68);
      iVar6 = *(int *)(param_1 + 0x6539c);
      if (iVar6 == 5) {
LAB_00a8c94c:
        iVar6 = 0;
      }
      else if ((iVar6 != 2) && (iVar6 != 1)) {
        if (DAT_05aed670 == 0) {
          puVar11 = &DAT_055c04a0;
        }
        else {
          puVar11 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar11 = (undefined8 *)
                      (**(code **)(*DAT_05aed668 + 0x18))
                                (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar6 = FUN_006bd550(*puVar11,0);
            puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar6 != 0x758f7eaf) {
              puVar11 = &DAT_055c04a0;
            }
          }
        }
        iVar6 = *(int *)(puVar11 + 7);
        if ((((iVar6 == -0x7975b8e8) || (iVar6 == -0x17df00c3)) || (iVar6 == -0x3e092032)) &&
           (uVar8 = FUN_03784bd0(), (uVar8 & 1) != 0)) goto LAB_00a8c94c;
        local_70 = uVar7;
        if ((char)(uVar7 >> 0x20) < '\x05') {
          lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          local_68 = lVar9 + -0x15180;
          local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
        }
        uVar8 = local_70;
        uVar7 = local_70 >> 0x30;
        local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
        local_70 = CONCAT26((short)uVar7,(undefined6)local_70) & 0xff00ffffffffffff;
        cVar5 = FUN_00a8ae20(param_1,uVar8 >> 0x10,uVar8 >> 0x18,8);
        iVar6 = (uint)(cVar5 == '\x03') << 1;
        if (cVar5 == '\x02') {
          iVar6 = 1;
        }
      }
      local_68 = CONCAT44(local_68._4_4_,iVar6);
      fVar12 = 1.0;
      if (iVar6 != 2) {
        fVar12 = 0.0;
      }
      uVar10 = *(ushort *)puVar4;
      fVar14 = 0.5;
      if (iVar6 != 1) {
        fVar14 = fVar12;
      }
      if (uVar10 == 0xffff) goto LAB_00a8ca7c;
    }
    local_68 = CONCAT44(local_68._4_4_,0x11);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar10 & 0xffffffffU) * 8);
    if (0xff < uVar10) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x11 & 1) != 0) {
      local_68 = CONCAT44(local_68._4_4_,0x1f);
      if ((((int)*puVar2 < 0) && (iVar6 = FUN_01c5c410(DAT_0534f200), iVar6 != 0)) &&
         (iVar6 = FUN_01c5c410(DAT_0534f200), iVar6 != 0)) {
        return fVar14;
      }
      return 0.0;
    }
  }
LAB_00a8ca7c:
  uVar7 = FUN_00a8c31c(param_1);
  iVar6 = *(int *)(param_1 + 0x6539c);
  if (iVar6 != 5) {
    if ((iVar6 == 2) || (iVar6 == 1)) goto LAB_00a8cbb0;
    if (DAT_05aed670 == 0) {
      puVar11 = &DAT_055c04a0;
    }
    else {
      puVar11 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar11 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar6 = FUN_006bd550(*puVar11,0);
        puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar6 != 0x758f7eaf) {
          puVar11 = &DAT_055c04a0;
        }
      }
    }
    iVar6 = *(int *)(puVar11 + 7);
    if ((((iVar6 != -0x7975b8e8) && (iVar6 != -0x17df00c3)) && (iVar6 != -0x3e092032)) ||
       (uVar8 = FUN_03784bd0(), (uVar8 & 1) == 0)) {
      local_70 = uVar7;
      if ((char)(uVar7 >> 0x20) < '\x05') {
        lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        local_68 = lVar9 + -0x15180;
        local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
      }
      uVar8 = local_70;
      uVar7 = local_70 >> 0x30;
      local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
      local_70 = CONCAT26((short)uVar7,(undefined6)local_70) & 0xff00ffffffffffff;
      cVar5 = FUN_00a8ae20(param_1,uVar8 >> 0x10,uVar8 >> 0x18,8);
      iVar6 = (uint)(cVar5 == '\x03') << 1;
      if (cVar5 == '\x02') {
        iVar6 = 1;
      }
      goto LAB_00a8cbb0;
    }
  }
  iVar6 = 0;
LAB_00a8cbb0:
  fVar12 = 1.0;
  if (iVar6 != 2) {
    fVar12 = 0.0;
  }
  sVar3 = *(short *)puVar4;
  fVar13 = 0.5;
  if (iVar6 != 1) {
    fVar13 = fVar12;
  }
  if (sVar3 != -1) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 & 0x40000000) != 0) {
      fVar13 = fVar14 * *(float *)(param_1 + 0x65404);
    }
  }
  return fVar13;
}

