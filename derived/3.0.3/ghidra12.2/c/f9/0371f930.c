
void FUN_0371f930(long param_1)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  ulong uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  short sVar18;
  undefined4 uVar19;
  long lVar20;
  int local_8c;
  undefined8 local_88;
  char *pcStack_80;
  undefined *local_78;
  char *pcStack_70;
  int local_68;
  int local_64;
  
  uVar14 = (ulong)*(int *)(param_1 + 0xe0);
  if (*(int *)(param_1 + 0xe0) != 0) {
    plVar15 = *(long **)(param_1 + 0xe8);
    uVar19 = *(undefined4 *)PTR_DAT_04bb3238;
    plVar13 = plVar15;
    for (uVar4 = uVar14 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)(*plVar13 + 8) = uVar19;
      plVar13 = plVar13 + 1;
    }
    if (2 < (uVar14 - 1 & 0x1fffffffffffffff)) {
      do {
        *(undefined4 *)(*plVar13 + 8) = uVar19;
        *(undefined4 *)(plVar13[1] + 8) = uVar19;
        *(undefined4 *)(plVar13[2] + 8) = uVar19;
        plVar1 = plVar13 + 3;
        plVar13 = plVar13 + 4;
        *(undefined4 *)(*plVar1 + 8) = uVar19;
      } while (plVar13 != plVar15 + uVar14);
    }
  }
  uVar14 = FUN_0290d828();
  puVar6 = (undefined8 *)PTR_DAT_04bc3a88;
  if ((uVar14 & 1) == 0) {
    piVar2 = (int *)(param_1 + 0x123d0);
    if (0 < *piVar2) {
      lVar17 = 0;
      do {
        puVar16 = *(undefined8 **)(*(long *)(param_1 + 0x123d8) + lVar17 * 8);
        (**(code **)*puVar16)(puVar16);
        lVar17 = lVar17 + 1;
        *puVar16 = *(undefined8 *)(param_1 + 0x123e0);
        *(undefined8 **)(param_1 + 0x123e0) = puVar16;
      } while (lVar17 < *piVar2);
    }
    *piVar2 = 0;
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x74938232) {
      puVar3 = PTR_DAT_04bb2020 + 0x10;
      pcStack_70 = "DoctorEventStart";
      local_78 = puVar3;
      iVar9 = FUN_02758850(&local_78);
      if (iVar9 != 0) {
        pcStack_80 = "GetMedicalEquipToday";
        local_88 = puVar3;
        iVar9 = FUN_02758850(&local_88);
        if (iVar9 != 0) {
          uVar12 = *(uint *)(param_1 + 0xe0);
          if (uVar12 != 0) {
            plVar15 = *(long **)(param_1 + 0xe8);
            plVar13 = plVar15;
            if ((uVar12 & 1) != 0) {
              plVar13 = plVar15 + 1;
              *(ushort *)(*plVar15 + 0x114) = *(ushort *)(*plVar15 + 0x114) | 0x10;
            }
            if (((long)(int)uVar12 - 1U & 0x1fffffffffffffff) != 0) {
              do {
                *(ushort *)(*plVar13 + 0x114) = *(ushort *)(*plVar13 + 0x114) | 0x10;
                plVar1 = plVar13 + 1;
                plVar13 = plVar13 + 2;
                *(ushort *)(*plVar1 + 0x114) = *(ushort *)(*plVar1 + 0x114) | 0x10;
              } while (plVar13 != plVar15 + (int)uVar12);
            }
          }
        }
      }
    }
    if (*(int *)((long)puVar6 + 0x38) == -0x17df00c3) {
      *(uint *)(&DAT_00001230 + param_1) = *(uint *)(&DAT_00001230 + param_1) & 0xffff7fff;
    }
  }
  puVar3 = PTR_DAT_04bb27f8;
  lVar17 = *(long *)PTR_DAT_04bb27f8;
  if ((((lVar17 != 0) && (*(int *)((long)puVar6 + 0x38) != -0x68a9a319)) &&
      (*(int *)((long)puVar6 + 0x38) != -0x21ba1d3a)) &&
     (((*(int *)(lVar17 + 0x14) != 0 &&
       ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)
        ))) && (*(int *)(lVar17 + 0x10) == 2)))) {
    if (((byte)(&DAT_00001230)[param_1] >> 6 & 1) == 0) {
      FUN_0372025c(param_1);
      return;
    }
    return;
  }
  local_8c = 0;
  *(uint *)(&DAT_00001230 + param_1) = *(uint *)(&DAT_00001230 + param_1) & 0xfffffec3;
  puVar8 = PTR_DAT_04bb2720;
  lVar17 = *(long *)PTR_DAT_04bb2720;
  if (lVar17 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar17 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
      iVar9 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  iVar9 = *(int *)(puVar16 + 7);
  if (((iVar9 == -0x7975b8e8) || (iVar9 == -0x17df00c3)) || (iVar9 == -0x3e092032)) {
    local_88 = (undefined *)((ulong)local_88._4_4_ << 0x20);
    uVar19 = 0;
    uVar10 = *(ushort *)PTR_DAT_04bb6298;
LAB_0371fc44:
    if (uVar10 != 0xffff) goto LAB_0371fc50;
LAB_0371fc8c:
    uVar14 = FUN_0290d828();
    if ((uVar14 & 1) != 0) {
      iVar9 = 0;
      *(undefined4 *)(param_1 + 0x1160) = uVar19;
      goto LAB_03720080;
    }
    uVar10 = *(ushort *)PTR_DAT_04bb6298;
    if (uVar10 != 0xffff) goto LAB_0371fcb8;
LAB_0371fd14:
    *(undefined4 *)(param_1 + 0x1160) = uVar19;
  }
  else {
    uVar10 = *(ushort *)PTR_DAT_04bb6298;
    if ((long)(short)uVar10 == 0xffffffffffffffff) {
LAB_0371fed4:
      uVar19 = 3;
      local_88 = (undefined *)CONCAT44(local_88._4_4_,3);
      goto LAB_0371fc44;
    }
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x1a);
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar10 * 8);
    if (0xff < uVar10) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar5 >> 0x1a & 1) == 0) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x19);
      puVar5 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar10 & 0xffffffffU) * 8);
      if (0xff < uVar10) {
        puVar5 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar5 >> 0x19 & 1) == 0) goto LAB_0371fed4;
      uVar19 = 2;
      local_88 = (undefined *)CONCAT44(local_88._4_4_,2);
    }
    else {
      uVar19 = 1;
      local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
    }
LAB_0371fc50:
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x1d);
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar10 & 0xffffffffU) * 8);
    if (0xff < uVar10) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar5 >> 0x1d & 1) == 0) goto LAB_0371fc8c;
LAB_0371fcb8:
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x1d);
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar10 & 0xffffffffU) * 8);
    if (0xff < uVar10) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar5 >> 0x1d & 1) == 0) goto LAB_0371fd14;
    local_88 = (undefined *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0x1160));
  }
  iVar11 = *(int *)((long)puVar6 + 0x38);
  if (((iVar11 == -0x7975b8e8) || (iVar11 == -0x17df00c3)) || (iVar11 == -0x3e092032)) {
    local_64 = 0;
    lVar17 = *(long *)puVar3;
    if (lVar17 != 0) goto LAB_0371fd4c;
LAB_0371ff34:
    sVar18 = 0;
    local_8c = local_64;
  }
  else {
    sVar18 = *(short *)PTR_DAT_04bc39f0;
    if (sVar18 == -1) {
LAB_0371ff24:
      local_64 = 3;
    }
    else {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x1a);
      puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar18 * 8);
      if (0xff < (uint)(int)sVar18) {
        puVar5 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar5 >> 0x1a & 1) == 0) {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0x19);
        puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar18 * 8);
        if (0xff < (uint)(int)sVar18) {
          puVar5 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar5 >> 0x19 & 1) == 0) goto LAB_0371ff24;
        local_64 = 2;
      }
      else {
        local_64 = 1;
      }
    }
    lVar17 = *(long *)puVar3;
    if (lVar17 == 0) goto LAB_0371ff34;
LAB_0371fd4c:
    local_8c = local_64;
    if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
        ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) ||
       ((*(long *)PTR_DAT_04bc1530 == 0 ||
        (lVar20 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar20 == 0)))) {
      sVar18 = *(short *)(lVar17 + 0x2a);
    }
    else if ((*(long **)(lVar20 + 0x60) == (long *)0x0) ||
            (puVar16 = (undefined8 *)**(long **)(lVar20 + 0x60), puVar16 == (undefined8 *)0x0)) {
      sVar18 = *(short *)(*(long *)(lVar20 + 0x48) + *(long *)(lVar20 + 0x40) + 2);
    }
    else {
      uVar14 = (**(code **)*puVar16)();
      sVar18 = *(short *)(*(long *)(lVar20 + 0x48) + *(long *)(lVar20 + 0x40) + 2);
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar20 + 0x60) != 0)) &&
         (puVar16 = *(undefined8 **)(*(long *)(lVar20 + 0x60) + 8), puVar16 != (undefined8 *)0x0)) {
        (**(code **)*puVar16)();
      }
    }
    iVar11 = *(int *)((long)puVar6 + 0x38);
  }
  iVar9 = 3;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,*(int *)(param_1 + 0x116c));
  if (iVar11 < -0xea9e7e3) {
    if (iVar11 < -0x5c2fda8c) {
      if (iVar11 != -0x7ad2e1aa) {
        if (iVar11 == -0x74938232) goto LAB_03720014;
        goto LAB_03720024;
      }
    }
    else if (iVar11 == -0x5c2fda8c) {
      iVar9 = 0;
    }
    else {
      if (iVar11 != -0x2c3fb610) goto LAB_03720024;
LAB_03720014:
      iVar9 = 1;
    }
  }
  else {
    if (iVar11 < 0x483e4538) {
      if (iVar11 == -0xea9e7e3) goto LAB_03720014;
      if (iVar11 == 0xc672fa7) goto LAB_0371ffec;
    }
    else {
      if ((iVar11 == 0x483e4538) || (iVar11 == 0x5fbb6b26)) {
LAB_0371ffec:
        iVar9 = 2;
        goto LAB_03720038;
      }
      if (iVar11 == 0x7fff3f46) goto LAB_03720038;
    }
LAB_03720024:
    iVar9 = 4;
    if (iVar11 != 0x756daeec) {
      iVar9 = 5;
    }
  }
LAB_03720038:
  local_68 = iVar9;
  if ((int)local_88 == 0) {
    local_8c = local_64;
    if ((local_64 == 0) && (sVar18 == *(short *)(param_1 + 0x1168))) goto LAB_03720080;
  }
  else if (((int)local_88 == 1) &&
          ((local_8c = local_64, local_64 == 1 &&
           (local_8c = (int)local_88, *(int *)(param_1 + 0x116c) == iVar9)))) goto LAB_03720080;
  FUN_037203a0(param_1);
LAB_03720080:
  if (local_8c == 1) {
    *(int *)(param_1 + 0x116c) = iVar9;
  }
  FUN_0372025c(param_1);
  lVar17 = *(long *)puVar8;
  if (lVar17 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar17 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
      iVar9 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  iVar9 = *(int *)(puVar16 + 7);
  if (((iVar9 == -0x7975b8e8) || (iVar9 == -0x17df00c3)) || (iVar9 == -0x3e092032)) {
    lVar17 = *(long *)puVar8;
    if (lVar17 == 0) {
      puVar16 = &DAT_055c04a0;
    }
    else {
      puVar16 = &DAT_055c04a0;
      if (*(long *)(lVar17 + 0x330) != 0) {
        puVar16 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
        iVar9 = FUN_006bd550(*puVar16,0);
        if (iVar9 != 0x758f7eaf) {
          puVar6 = &DAT_055c04a0;
        }
        puVar16 = puVar6;
      }
    }
    iVar9 = *(int *)(puVar16 + 7);
    if ((((iVar9 == -0x7975b8e8) || (iVar9 == -0x17df00c3)) || (iVar9 == -0x3e092032)) &&
       (uVar12 = *(uint *)(&DAT_00001230 + param_1), (uVar12 >> 0xd & 1) == 0)) {
      uVar7 = *(uint *)(param_1 + 0xe0);
      if (uVar7 != 0) {
        plVar15 = *(long **)(param_1 + 0xe8);
        plVar13 = plVar15;
        if ((uVar7 & 1) != 0) {
          plVar13 = plVar15 + 1;
          *(ushort *)(*plVar15 + 0x114) = *(ushort *)(*plVar15 + 0x114) & 0xfff7;
        }
        if (((long)(int)uVar7 - 1U & 0x1fffffffffffffff) != 0) {
          do {
            *(ushort *)(*plVar13 + 0x114) = *(ushort *)(*plVar13 + 0x114) & 0xfff7;
            plVar1 = plVar13 + 1;
            plVar13 = plVar13 + 2;
            *(ushort *)(*plVar1 + 0x114) = *(ushort *)(*plVar1 + 0x114) & 0xfff7;
          } while (plVar13 != plVar15 + (int)uVar7);
        }
        uVar12 = *(uint *)(&DAT_00001230 + param_1);
      }
      *(uint *)(&DAT_00001230 + param_1) = uVar12 & 0xffffbfff;
    }
  }
  return;
}

