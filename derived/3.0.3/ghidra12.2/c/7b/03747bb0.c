
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_03747bb0(long param_1,ulong param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  ushort uVar17;
  long *plVar18;
  long *plVar19;
  ushort *puVar20;
  undefined8 *puVar21;
  undefined *local_100;
  uint local_f8;
  int local_f4;
  undefined *local_f0;
  undefined8 local_e8;
  uint local_e0;
  int iStack_dc;
  undefined *local_d8;
  int local_d0;
  int iStack_cc;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  byte local_b8;
  int local_ac;
  undefined *local_a8;
  long lStack_a0;
  undefined **local_88;
  long lStack_80;
  
  plVar19 = (long *)PTR_DAT_04bb2720;
  local_88 = &PTR_FUN_04b46540;
  local_a8 = &DAT_04b46568;
  lVar13 = *(long *)PTR_DAT_04bb2720;
  lStack_a0 = param_1;
  lStack_80 = param_1;
  if (lVar13 == 0) {
    puVar21 = &DAT_055c04a0;
  }
  else {
    puVar21 = &DAT_055c04a0;
    if (*(long *)(lVar13 + 0x330) != 0) {
      puVar21 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar10 = FUN_006bd550(*puVar21,0);
      puVar21 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar10 != 0x758f7eaf) {
        puVar21 = &DAT_055c04a0;
      }
    }
  }
  iVar10 = *(int *)(puVar21 + 7);
  local_ac = 0;
  if (iVar10 == -0x7975b8e8) {
    local_ac = 0;
  }
  else if (iVar10 == -0x3e092032) {
    local_ac = 1;
  }
  uVar4 = *(uint *)(param_1 + 0x20);
  if (uVar4 != 0) {
    plVar18 = *(long **)(param_1 + 0x28);
    plVar16 = plVar18;
    if ((uVar4 & 1) != 0) {
      plVar16 = plVar18 + 1;
      *(byte *)(*plVar18 + 0x10) = *(byte *)(*plVar18 + 0x10) & 0xfc | 2;
    }
    if (((long)(int)uVar4 - 1U & 0x1fffffffffffffff) != 0) {
      do {
        *(byte *)(*plVar16 + 0x10) = *(byte *)(*plVar16 + 0x10) & 0xfc | 2;
        plVar1 = plVar16 + 1;
        plVar16 = plVar16 + 2;
        *(byte *)(*plVar1 + 0x10) = *(byte *)(*plVar1 + 0x10) & 0xfc | 2;
      } while (plVar16 != plVar18 + (int)uVar4);
    }
  }
  puVar7 = PTR_DAT_04bb5ce0;
  puVar5 = PTR_DAT_04bb2640;
  if (((*(long *)PTR_DAT_04bb5ce0 == 0) || (lVar13 = *plVar19, lVar13 == 0)) ||
     (*(long *)(lVar13 + 0x330) == 0)) {
LAB_03747d9c:
    if (iVar10 == -0x17df00c3) {
      local_c0 = 0;
      local_c8 = PTR_DAT_04bbfe68 + 0x10;
      lVar13 = *plVar19;
      if (lVar13 != 0) goto LAB_03747dc8;
      puVar21 = &DAT_055c04a0;
      goto LAB_03747e1c;
    }
LAB_03748128:
    FUN_037772c0(&local_a8);
  }
  else {
    puVar21 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
    iVar11 = FUN_006bd550(*puVar21,0);
    if (((iVar11 != 0x758f7eaf) || (lVar13 = *plVar19, lVar13 == 0)) ||
       (*(long *)(lVar13 + 0x330) == 0)) goto LAB_03747d9c;
    if ((iVar10 != -0x17df00c3) && (*(int *)(*(long *)(lVar13 + 0x330) + 0x244) == 0))
    goto LAB_03748128;
    if (iVar10 != -0x17df00c3) {
      local_e8 = (undefined *)((ulong)local_e8 & 0xffffffff00000000);
      local_f0 = PTR_DAT_04bbfe68 + 0x10;
      puVar21 = (undefined8 *)
                (**(code **)(**(long **)puVar5 + 0x18))
                          (*(long **)puVar5,*(undefined4 *)(lVar13 + 0x338));
      iVar10 = FUN_006bd550(*puVar21,0);
      puVar2 = (undefined4 *)(PTR_DAT_04bc3a80 + 0x38);
      if (iVar10 != 0x758f7eaf) {
        puVar2 = &DAT_055c04d8;
      }
      local_e8 = (undefined *)CONCAT44(*puVar2,(undefined4)local_e8);
      uVar9 = FUN_017baf44();
      local_e0 = CONCAT31(local_e0._1_3_,uVar9) & 0xffffff01;
      uVar12 = FUN_01a4fa00(&local_f0);
      FUN_01a51a0c(&local_f0,0,uVar12,&local_88);
      uVar12 = FUN_01a4fa00(&local_f0);
      FUN_01a51a0c(&local_f0,1,uVar12,&local_88);
      uVar12 = FUN_01a4fa00(&local_f0);
      FUN_01a51a0c(&local_f0,2,uVar12,&local_88);
      uVar12 = FUN_01a4fa00(&local_f0);
      FUN_01a51a0c(&local_f0,3,uVar12,&local_88);
      uVar12 = FUN_01a4fa00(&local_f0);
      FUN_01a51a0c(&local_f0,4,uVar12,&local_88);
      uVar12 = FUN_01a4fa00(&local_f0);
      FUN_01a51a0c(&local_f0,5,uVar12,&local_88);
      uVar12 = FUN_01a4fa00(&local_f0);
      FUN_01a51a0c(&local_f0,6,uVar12,&local_88);
      uVar12 = FUN_01a4fa00(&local_f0);
      FUN_01a51a0c(&local_f0,7,uVar12,&local_88);
      goto LAB_03748128;
    }
    local_c8 = PTR_DAT_04bbfe68 + 0x10;
LAB_03747dc8:
    local_c0 = 0;
    puVar21 = &DAT_055c04a0;
    if (*(long *)(lVar13 + 0x330) != 0) {
      puVar21 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar10 = FUN_006bd550(*puVar21,0);
      puVar21 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar10 != 0x758f7eaf) {
        puVar21 = &DAT_055c04a0;
      }
    }
LAB_03747e1c:
    local_bc = *(undefined4 *)(puVar21 + 7);
    local_b8 = FUN_017baf44();
    puVar8 = PTR_DAT_04bbc1a0;
    puVar6 = PTR_DAT_04bb59d8;
    puVar5 = PTR_DAT_04bb2010;
    local_b8 = local_b8 & 1;
    lVar13 = *(long *)PTR_DAT_04bb59d8;
    if (lVar13 != 0) {
      uVar4 = *(uint *)(lVar13 + 0x28);
      local_f4 = *(int *)(lVar13 + 0x2c);
      local_d0 = *(int *)(lVar13 + 0x38);
      iStack_cc = *(int *)(lVar13 + 0x3c);
      local_f0 = PTR_DAT_04bbc1a0 + 0x10;
      local_100 = PTR_DAT_04bb2010 + 0x10;
      iVar10 = iStack_cc + 1;
      local_f8 = uVar4;
      local_e8 = local_100;
      local_e0 = uVar4;
      iStack_dc = local_f4;
      local_d8 = local_100;
      if (iVar10 == local_f4) {
LAB_03747f30:
        local_f0 = puVar8 + 0x10;
        local_100 = puVar5 + 0x10;
        uVar4 = *(uint *)(lVar13 + 0x28);
        local_f4 = *(int *)(lVar13 + 0x2c);
        local_d0 = *(int *)(lVar13 + 0x38);
        iStack_cc = *(int *)(lVar13 + 0x3c);
        iVar10 = iStack_cc + 1;
        local_f8 = uVar4;
        local_e8 = local_100;
        local_e0 = uVar4;
        iStack_dc = local_f4;
        local_d8 = local_100;
        if (iVar10 != local_f4) {
          do {
            uVar12 = FUN_01a5190c(&local_c8,1,&local_100,0);
            (*(code *)*local_88)(&local_88,uVar12,&local_100);
            if ((int)local_f8 < local_d0) {
              local_f8 = local_f8 + 1;
            }
            else {
              local_f4 = local_f4 + 1;
              local_f8 = local_e0;
            }
          } while (uVar4 != local_f8 || iVar10 != local_f4);
        }
      }
      else {
        do {
          uVar12 = FUN_01a5190c(&local_c8,0,&local_100,0);
          (*(code *)*local_88)(&local_88,uVar12,&local_100);
          if ((int)local_f8 < local_d0) {
            local_f8 = local_f8 + 1;
          }
          else {
            local_f4 = local_f4 + 1;
            local_f8 = local_e0;
          }
        } while (uVar4 != local_f8 || iVar10 != local_f4);
        lVar13 = *(long *)puVar6;
        if (lVar13 != 0) goto LAB_03747f30;
      }
      plVar19 = (long *)PTR_DAT_04bb2720;
    }
  }
  local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
  uVar14 = 0;
  if (*(long *)puVar7 == 0) {
LAB_037481b0:
    FUN_03777470(&local_a8,uVar14);
  }
  else {
    lVar13 = *plVar19;
    uVar14 = 0;
    if (lVar13 == 0) goto LAB_037481b0;
    if (*(long *)(lVar13 + 0x330) == 0) {
      uVar14 = 0;
      goto LAB_037481b0;
    }
    puVar21 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
    iVar10 = FUN_006bd550(*puVar21,0);
    uVar14 = 0;
    if (iVar10 != 0x758f7eaf) goto LAB_037481b0;
    uVar14 = 0;
    if (*plVar19 == 0) goto LAB_037481b0;
    lVar13 = *(long *)(*plVar19 + 0x330);
    uVar14 = 0;
    if ((lVar13 == 0) || (uVar4 = *(uint *)(lVar13 + 0x244), uVar14 = (ulong)uVar4, uVar4 == 0))
    goto LAB_037481b0;
    uVar14 = (ulong)local_f0 & 0xffffffff;
    if (local_ac != (int)local_f0) goto LAB_037481b0;
  }
  local_f0 = (undefined *)CONCAT44(local_f0._4_4_,1);
  if (((*(long *)puVar7 == 0) || (lVar13 = *plVar19, lVar13 == 0)) ||
     (*(long *)(lVar13 + 0x330) == 0)) {
LAB_03748238:
LAB_0374823c:
    FUN_03777470(&local_a8,(int)local_f0);
  }
  else {
    puVar21 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
    iVar10 = FUN_006bd550(*puVar21,0);
    if (((iVar10 != 0x758f7eaf) || (*plVar19 == 0)) ||
       ((lVar13 = *(long *)(*plVar19 + 0x330), lVar13 == 0 || (*(int *)(lVar13 + 0x244) == 0))))
    goto LAB_03748238;
    if (local_ac != (int)local_f0) goto LAB_0374823c;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar17 = *(ushort *)(param_1 + 8) | 0x10;
    *(ushort *)(param_1 + 8) = uVar17;
    if ((param_2 & 1) != 0) goto LAB_0374830c;
  }
  else {
    plVar16 = *(long **)(param_1 + 0x28);
    lVar15 = (long)*(int *)(param_1 + 0x20) << 3;
    lVar13 = lVar15;
    plVar19 = plVar16;
    do {
      if ((*(short *)(*plVar19 + 8) != -2) && ((*(byte *)(*plVar19 + 0x10) & 1) == 0)) {
        uVar17 = 0;
        goto LAB_03748294;
      }
      plVar19 = plVar19 + 1;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
    uVar17 = 0x10;
LAB_03748294:
    puVar20 = (ushort *)(param_1 + 8);
    uVar17 = *puVar20 & 0xffef | uVar17;
    *puVar20 = uVar17;
    if ((param_2 & 1) != 0) {
      do {
        if ((*(short *)(*plVar16 + 8) != -2) && ((*(byte *)(*plVar16 + 0x10) >> 1 & 1) == 0))
        goto LAB_03748318;
        plVar16 = plVar16 + 1;
        lVar15 = lVar15 + -8;
      } while (lVar15 != 0);
LAB_0374830c:
      uVar17 = uVar17 | 0x20;
      goto LAB_0374831c;
    }
    do {
      bVar3 = *(byte *)(*plVar16 + 0x10);
      if ((bVar3 >> 2 & 1) == 0) {
        *(byte *)(*plVar16 + 0x10) = bVar3 & 0xfd;
      }
      plVar16 = plVar16 + 1;
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
    uVar17 = *puVar20;
  }
LAB_03748318:
  uVar17 = uVar17 & 0xffdf;
LAB_0374831c:
  *(ushort *)(param_1 + 8) = uVar17;
  return;
}

