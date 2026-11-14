
undefined8 FUN_0150bd50(short *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  long *plVar16;
  uint uVar17;
  undefined *puVar18;
  short sVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  short sVar23;
  ulong uVar24;
  long *plVar25;
  uint *puVar26;
  long lVar27;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  int local_80;
  int local_7c;
  byte local_78;
  uint local_6c;
  undefined *local_68;
  undefined4 local_60;
  uint local_5c;
  uint *local_58;
  
  puVar6 = PTR_DAT_04bb6298;
  sVar19 = *param_1;
  bVar7 = DAT_055c1b60 == &DAT_055c1b58;
  puVar21 = DAT_055c1b60 + -8;
  puVar22 = puVar21;
  bVar8 = bVar7;
  if (!bVar7 && sVar19 != 0) {
    puVar22 = DAT_055c1b60;
    sVar23 = sVar19;
    do {
      puVar22 = (undefined8 *)puVar22[1];
      sVar23 = sVar23 + -1;
      bVar8 = puVar22 == &DAT_055c1b58;
    } while (!bVar8 && sVar23 != 0);
    puVar22 = puVar22 + -8;
  }
  puVar2 = &DAT_055c04a0;
  if (!bVar8) {
    puVar2 = puVar22;
  }
  uVar24 = 0;
  do {
    uVar10 = (uint)uVar24;
    piVar3 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar24 * 4);
    if (0x38 < uVar10) {
      piVar3 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar3 == *(int *)(puVar2 + 7)) goto LAB_0150be2c;
    uVar11 = 0x39;
    if ((int)uVar10 < 0x39) {
      uVar11 = uVar10 + 1;
    }
    uVar24 = (ulong)uVar11;
  } while (uVar11 != 0x39);
  uVar10 = 0;
LAB_0150be2c:
  local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar10);
  if (uVar10 == 0) {
    if (*(short *)PTR_DAT_04bb6298 == sVar19) {
      local_60 = 0;
      local_68 = PTR_DAT_04bbfe68 + 0x10;
      lVar20 = *(long *)PTR_DAT_04bb2720;
      if (lVar20 == 0) {
        puVar22 = &DAT_055c04a0;
      }
      else {
        puVar22 = &DAT_055c04a0;
        if (*(long *)(lVar20 + 0x330) != 0) {
          puVar22 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
          iVar12 = FUN_006bd550(*puVar22,0);
          puVar22 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar12 != 0x758f7eaf) {
            puVar22 = &DAT_055c04a0;
          }
        }
      }
      local_5c = *(uint *)(puVar22 + 7);
      uVar9 = FUN_017baf44();
      puVar18 = PTR_DAT_04bb3140;
      goto LAB_0150bf80;
    }
  }
  else {
    puVar22 = DAT_055c1b60;
    if (!bVar7 && sVar19 != 0) {
      do {
        puVar22 = (undefined8 *)puVar22[1];
        sVar19 = sVar19 + -1;
        bVar7 = puVar22 == &DAT_055c1b58;
      } while (!bVar7 && sVar19 != 0);
      puVar21 = puVar22 + -8;
    }
    lVar20 = 0;
    puVar22 = &DAT_055c04a0;
    if (!bVar7) {
      puVar22 = puVar21;
    }
    while (*(int *)(PTR_DAT_04bbbf90 + lVar20 * 4 + 8) != *(int *)(puVar22 + 7)) {
      if (0x37 < (uint)lVar20) {
        lVar20 = 0;
        puVar18 = PTR_DAT_04bbbf90;
        goto LAB_0150bf3c;
      }
      if (*(int *)(PTR_DAT_04bbbf90 + lVar20 * 4 + 0xc) == *(int *)(puVar22 + 7)) {
        lVar20 = lVar20 + 1;
        break;
      }
      lVar20 = lVar20 + 2;
    }
    puVar18 = PTR_DAT_04bbbf90 + lVar20 * 4;
LAB_0150bf3c:
    local_68 = PTR_DAT_04bbfe68 + 0x10;
    local_5c = *(uint *)(puVar18 + 8);
    local_60 = (undefined4)lVar20;
    uVar9 = FUN_017baf44();
    puVar18 = PTR_DAT_04bb5438;
LAB_0150bf80:
    bVar5 = *(byte *)(param_1 + 1);
    local_68 = puVar18 + 0x10;
    local_58 = (uint *)(CONCAT71(local_58._1_7_,uVar9) & 0xffffffffffffff01);
    puVar18 = PTR_DAT_04bb2010 + 0x10;
    local_80 = (int)param_1[2];
    local_7c = (int)param_1[3];
    if (7 < bVar5) {
      bVar5 = 0;
    }
    local_88 = puVar18;
    puVar14 = (undefined4 *)FUN_014fbd50(&local_68,bVar5,&local_88);
    local_80 = (int)param_1[2];
    local_7c = (int)param_1[3];
    bVar5 = *(byte *)(param_1 + 1);
    local_98 = (undefined *)CONCAT44(local_98._4_4_,*puVar14);
    if (7 < bVar5) {
      bVar5 = 0;
    }
    local_88 = puVar18;
    FUN_01a50cb0(&local_68,bVar5,&local_88);
    bVar5 = *(byte *)(param_1 + 1);
    local_80 = (int)param_1[2];
    local_7c = (int)param_1[3];
    if (7 < bVar5) {
      bVar5 = 0;
    }
    local_88 = puVar18;
    FUN_014fb148(&local_68,bVar5,param_1 + 4,&local_88,&local_98);
    uVar24 = FUN_0154df90(param_1 + 4);
    if ((uVar24 & 1) != 0) {
      local_80 = (int)param_1[2];
      local_7c = (int)param_1[3];
      bVar5 = *(byte *)(param_1 + 1);
      if (7 < bVar5) {
        bVar5 = 0;
      }
      local_88 = puVar18;
      FUN_014fd424(&local_68,(char)param_1[8],&local_88,bVar5);
    }
  }
  puVar18 = PTR_DAT_04bb43c0;
  if (*(int *)(param_1 + 10) == 0) {
    return 1;
  }
  if (*(short *)puVar6 != *param_1) {
    return 1;
  }
  lVar20 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(param_1 + 4);
  lVar27 = *(long *)puVar18;
  if (lVar27 == 0) {
    return 1;
  }
  lVar20 = *(long *)(lVar20 + 0x57e58);
  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
  if (*(uint *)(lVar20 + 0x1d8) <= uVar10) {
    return 1;
  }
  if (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8) == 0) {
    return 1;
  }
  local_58 = (uint *)0x0;
  local_60 = *(undefined4 *)(param_1 + 4);
  uVar10 = *(uint *)(param_1 + 6);
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_5c = uVar10;
  uVar11 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar18 == 0) {
LAB_0150c168:
    puVar26 = (uint *)0x0;
  }
  else {
    lVar20 = *(long *)(lVar27 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((*(uint *)(lVar20 + 0x1d8) <= uVar11) ||
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_0150c168;
    lVar20 = *(long *)PTR_DAT_04bc0428;
    uVar11 = FUN_0277d6c4(param_1 + 4);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if (*(uint *)(lVar20 + 0x1d8) <= uVar11) goto LAB_0150c168;
    puVar26 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar11 * 8);
    if (puVar26 != (uint *)0x0) {
      local_58 = puVar26;
    }
  }
  local_80 = 0;
  lVar20 = *(long *)PTR_DAT_04bb2720;
  if (lVar20 == 0) {
    puVar22 = &DAT_055c04a0;
  }
  else {
    puVar22 = &DAT_055c04a0;
    if (*(long *)(lVar20 + 0x330) != 0) {
      puVar22 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
      iVar12 = FUN_006bd550(*puVar22,0);
      puVar22 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar12 != 0x758f7eaf) {
        puVar22 = &DAT_055c04a0;
      }
    }
  }
  local_7c = *(int *)(puVar22 + 7);
  local_78 = FUN_017baf44();
  local_78 = local_78 & 1;
  bVar5 = *(byte *)(param_1 + 1);
  local_88 = PTR_DAT_04bb3140 + 0x10;
  if (7 < bVar5) {
    bVar5 = 0;
  }
  local_90 = (int)param_1[2];
  iStack_8c = (int)param_1[3];
  local_98 = PTR_DAT_04bb2010 + 0x10;
  puVar15 = (uint *)FUN_014fbd50(&local_88,bVar5,&local_98);
  uVar11 = *puVar15;
  local_6c = uVar11;
  switch(*(undefined4 *)(param_1 + 10)) {
  case 1:
    uVar13 = FUN_01aea890(&local_68);
    FUN_0150c5c0(&local_6c,uVar13,0);
    break;
  case 2:
    uVar10 = FUN_01aeaed0(&local_68);
    FUN_0150c7b0(&local_6c,uVar10 & 1,0);
    break;
  case 3:
    uVar13 = FUN_01aeb510(&local_68);
    FUN_0150c9a0(&local_6c,uVar13,0);
    break;
  case 4:
    local_88 = (undefined *)CONCAT44(local_88._4_4_,0x2c);
    if (puVar26 == (uint *)0x0) {
      uVar17 = 0xbc;
    }
    else {
      uVar4 = *puVar26;
      uVar17 = 0;
      if ((uVar4 != 0) && (puVar26 != (uint *)(ulong)uVar4)) {
        puVar15 = (uint *)((long)puVar26 - (long)(ulong)uVar4);
        uVar17 = 0;
        if (*puVar15 != 0) {
          uVar17 = puVar15[1];
          if ((uVar17 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
            lVar20 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              lVar20 = 0x1c;
            }
            lVar20 = (long)puVar15 + lVar20 + (ulong)(ushort)puVar15[2] * 8;
            if (lVar20 != 0) {
              uVar4 = 0;
              if ((ulong)uVar17 != 0) {
                uVar4 = (uint)((ulong)((long)puVar26 - lVar20) / (ulong)uVar17);
              }
              if (*puVar15 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar17 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2)
                 , uVar17 < 0xbd)) goto LAB_0150c358;
            }
          }
          uVar17 = 0;
        }
      }
    }
LAB_0150c358:
    local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar17);
    uVar10 = uVar10 & 0xf;
    if (uVar17 != 0x2c) {
      uVar10 = 0;
    }
    uVar24 = FUN_01503c40(&local_6c);
    if ((uVar24 & 1) != 0) {
      if ((((uVar11 == 0) ||
           (plVar25 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                                ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar25 == (long *)0x0)) ||
          ((*(uint *)(plVar25 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar25 + 0x46) != uVar11)) {
        plVar25 = (long *)0x0;
      }
      iVar12 = *(int *)(*(long *)PTR_DAT_04bb27c0 + 0x288);
      if ((iVar12 == 1) || (iVar12 == -1)) {
        plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        (**(code **)(*plVar16 + 0x60))();
      }
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar12 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      (**(code **)(*plVar25 + 0x20))(plVar25,PTR_DAT_04bb5920);
      puVar18 = PTR_DAT_04bbcc60;
      puVar6 = PTR_DAT_04bbcc58;
      if ((long *)plVar25[0x16] != plVar25 + 0x15) {
        lVar20 = (long)*(int *)((long)plVar25 + 0xbc);
        plVar16 = (long *)(plVar25[0x16] - lVar20);
        puVar1 = PTR_DAT_04bb6608 + 0x10;
        do {
          if (((*puVar18 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar18), iVar12 != 0)) {
            *(undefined **)puVar6 = puVar1;
            __cxa_guard_release(puVar18);
          }
          if ((plVar16 != (long *)0x0) &&
             (uVar24 = (**(code **)(*plVar16 + 0x10))(plVar16,puVar6), (uVar24 & 1) != 0)) {
            *(uint *)((long)plVar16 + 0x35c) = uVar10;
            return 1;
          }
          plVar16 = (long *)(*(long *)((long)plVar16 + lVar20 + 8) - lVar20);
        } while (plVar16 != (long *)((long)(plVar25 + 0x15) - lVar20));
      }
    }
  }
  return 1;
}

