
void FUN_023bf410(long param_1)

{
  uint *puVar1;
  short sVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  ulong uVar10;
  float *pfVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_a0;
  int iStack_9c;
  undefined *local_98;
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  local_98 = PTR_DAT_04bb2020 + 0x10;
  local_90 = "CommonDoorOutWait";
  FUN_017029bc(puVar13,&local_98,6,0,0);
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  FUN_039a9c80(puVar13[0x22a],7);
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  *(undefined4 *)((long)puVar13 + 0x5e84) = 1;
  puVar13 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar18 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar13 + 0x27c) = uVar18;
  puVar4 = PTR_DAT_04bb43c0;
  if (*(int *)(param_1 + 0x178) != 0) goto LAB_023bf808;
  sVar2 = *(short *)PTR_DAT_04bbdeb0;
  if (sVar2 != -1) {
    local_98 = (undefined *)CONCAT44(local_98._4_4_,6);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 6 & 1) == 0) {
      local_98 = (undefined *)CONCAT44(local_98._4_4_,7);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 7 & 1) == 0) goto LAB_023bf628;
    }
    if (*(long *)(param_1 + 0x298) == 0) {
LAB_023bf61c:
      puVar13 = (undefined8 *)PTR_DAT_04bb37e0;
    }
    else {
      lVar15 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
      if (*(char *)(lVar15 + 0x1d5) != '\0') {
        lVar16 = *(long *)PTR_DAT_04bb43c0;
        puVar13 = (undefined8 *)(lVar15 + 0xcc);
        uVar6 = FUN_0277d6c4(puVar13);
        if (*(long *)puVar4 != 0) {
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_023bf608;
          goto LAB_023bf994;
        }
LAB_023bf608:
        iVar7 = FUN_0277d6c4(puVar13);
        if (iVar7 == 0xfffd) goto LAB_023bf61c;
      }
      puVar13 = (undefined8 *)(lVar15 + 0xd4);
    }
LAB_023bf994:
    local_80 = *(undefined4 *)puVar13;
    local_7c = *(undefined4 *)((long)puVar13 + 4);
    pcVar3 = (char *)*puVar13;
    lVar16 = *(long *)puVar4;
    uVar6 = FUN_0277d6c4(&local_80);
    lVar15 = *(long *)puVar4;
    if (lVar15 == 0) goto LAB_023bf808;
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_023bf808;
    local_98 = PTR_DAT_04bc0510 + 0x10;
    local_88 = 0;
    local_90 = pcVar3;
    uVar6 = FUN_0277d6c4(&local_90);
    if (*(long *)puVar4 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(&local_80);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if (uVar6 < *(uint *)(lVar15 + 0x1d8)) {
          lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8);
          if (lVar15 != 0) {
            local_88 = lVar15;
          }
        }
      }
    }
    puVar5 = PTR_DAT_04bb2720;
    puVar4 = PTR_DAT_04bb2640;
    if ((*(long *)PTR_DAT_04bb27f8 == 0) ||
       ((*(byte *)(*(long *)PTR_DAT_04bb27f8 + 0x1a71) >> 1 & 1) == 0)) goto LAB_023bf808;
    puVar13 = &DAT_055c04a0;
    lVar15 = *(long *)PTR_DAT_04bb2720;
    iVar7 = DAT_055c04d8;
    if (lVar15 != 0) {
      if (*(long *)(lVar15 + 0x330) != 0) {
        puVar12 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
        iVar7 = FUN_006bd550(*puVar12,0);
        lVar15 = *(long *)puVar5;
        piVar9 = (int *)(PTR_DAT_04bc3a78 + 0x38);
        if (iVar7 != 0x758f7eaf) {
          piVar9 = &DAT_055c04d8;
        }
        iVar7 = *piVar9;
        if (lVar15 == 0) goto LAB_023bfb78;
      }
      if (*(long *)(lVar15 + 0x330) != 0) {
        puVar13 = (undefined8 *)
                  (**(code **)(**(long **)puVar4 + 0x18))
                            (*(long **)puVar4,*(undefined4 *)(lVar15 + 0x338));
        iVar8 = FUN_006bd550(*puVar13,0);
        puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar8 != 0x758f7eaf) {
          puVar13 = &DAT_055c04a0;
        }
      }
    }
LAB_023bfb78:
    if ((*(int *)(puVar13 + 7) == -0x17df00c3) &&
       (((iVar7 == -0x3e092032 || (iVar7 == -0x7975b8e8)) &&
        (local_a0 = FUN_01ad78cc(&local_98), local_a0 == 0x4c)))) {
      FUN_023bfdfc(param_1 + 0x18fa);
    }
    goto LAB_023bf808;
  }
LAB_023bf628:
  lVar15 = param_1 + 0x1ee8;
  lVar16 = FUN_02547c90(lVar15);
  if (*(char *)(lVar16 + 9) == '\0') {
    FUN_0252d8f0(&local_a0,lVar15);
  }
  else {
    piVar9 = (int *)FUN_02547c90(lVar15);
    local_a0 = *piVar9;
    iStack_9c = piVar9[1];
  }
  lVar17 = *(long *)puVar4;
  uVar6 = FUN_0277d6c4(&local_a0);
  lVar16 = *(long *)puVar4;
  if (lVar16 == 0) {
code_r0x023bf7b8:
    local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
LAB_023bf7c4:
    local_80 = 0;
    *(byte *)(param_1 + 0x18fa) = *(byte *)(param_1 + 0x18fa) | 1;
  }
  else {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((*(uint *)(lVar17 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto code_r0x023bf7b8;
    local_88 = 0;
    local_98 = PTR_DAT_04bc0510 + 0x10;
    local_90 = (char *)CONCAT44(iStack_9c,local_a0);
    uVar6 = FUN_0277d6c4(&local_90);
    if (*(long *)puVar4 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar16 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(&local_a0);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (uVar6 < *(uint *)(lVar16 + 0x1d8)) {
          lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8);
          if (lVar16 != 0) {
            local_88 = lVar16;
          }
        }
      }
    }
    local_78 = 0;
    local_80 = CONCAT13(local_80._3_1_,0x10000);
    local_80 = CONCAT22(local_80._2_2_,1);
    uVar10 = FUN_01adce10(&local_98,&local_80);
    if ((uVar10 & 1) == 0) goto LAB_023bf7c4;
  }
  local_98 = (undefined *)CONCAT35(local_98._5_3_,0x101010001);
  FUN_02558ce0(lVar15,param_1 + 0x18e0,&local_98);
LAB_023bf808:
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  puVar4 = PTR_DAT_04bb3760;
  plVar14 = (long *)puVar13[9];
  if (((*PTR_DAT_04bb3760 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3760);
  }
  if (((plVar14 != (long *)0x0) &&
      (uVar10 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3758), (uVar10 & 1) != 0)) &&
     (plVar14[0x5b] != 0)) {
    *(undefined4 *)(plVar14[0x5b] + 0x54) = 0x3f800000;
  }
  FUN_016e39dc(param_1,0);
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  plVar14 = (long *)puVar13[9];
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar7 != 0)) {
    *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3760);
  }
  fVar21 = 0.0;
  if (plVar14 != (long *)0x0) {
    uVar10 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3758);
    if ((uVar10 & 1) != 0) {
      if (plVar14[0x5b] != 0) {
        fVar19 = *(float *)(plVar14[0x5b] + 0x54);
        fVar20 = 1.0;
        if (fVar19 <= 1.0) {
          fVar20 = fVar19;
        }
        fVar21 = 0.0;
        if (0.0 <= fVar19) {
          fVar21 = fVar20;
        }
      }
    }
  }
  lVar15 = FUN_0251e98c(1);
  pfVar11 = (float *)(**(code **)(*(long *)(lVar15 + 0x27d0) + 0xf0))(lVar15 + 0x27d0);
  fVar19 = *pfVar11;
  lVar15 = FUN_0251e98c(1);
  pfVar11 = (float *)(**(code **)(*(long *)(lVar15 + 0x27d0) + 0xf0))(lVar15 + 0x27d0);
  fVar20 = *pfVar11;
  plVar14 = *(long **)(param_1 + 0x60);
  if (plVar14 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      plVar14 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar14 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar14 + 0x4e0))(fVar19 + (1.0 - fVar21) * (1.0 - fVar20),plVar14);
  return;
}

