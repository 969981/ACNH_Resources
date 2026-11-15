
undefined8
FUN_024e1f48(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  uint *puVar1;
  short sVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  float *pfVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  int local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined4 local_68;
  
  plVar15 = *(long **)(param_4 + 0x60);
  if (plVar15 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      plVar15 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar15 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar15 + 0x2d8))(&local_80,plVar15);
  iVar7 = FUN_0277d6c4(&local_80);
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = "TodayFortune";
  iVar8 = FUN_0274bce0(param_4 + 0x1ee8,&local_80);
  local_80 = (undefined *)CONCAT44(local_80._4_4_,iVar8);
  plVar15 = *(long **)(param_4 + 0x60);
  if (plVar15 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      plVar15 = &DAT_05240280;
    }
    else {
      plVar15 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar15 + 0x318))(&local_88);
  puVar4 = PTR_DAT_04bb43c0;
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(&local_88);
  lVar17 = *(long *)puVar4;
  if (lVar17 == 0) {
LAB_024e2110:
    bVar5 = false;
  }
  else {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((*(uint *)(lVar18 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_024e2110;
    local_70 = 0;
    local_80 = PTR_DAT_04bc0510 + 0x10;
    local_78 = (char *)CONCAT44(uStack_84,local_88);
    uVar9 = FUN_0277d6c4(&local_78);
    if (*(long *)puVar4 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        lVar17 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(&local_88);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (uVar9 < *(uint *)(lVar17 + 0x1d8)) {
          lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8);
          if (lVar17 != 0) {
            local_70 = lVar17;
          }
        }
      }
    }
    local_94 = FUN_01ad78cc(&local_80);
    bVar5 = local_94 == 0x3d;
  }
  fVar19 = (float)FUN_023294cc(param_4);
  fVar22 = *(float *)(*(long *)(param_4 + 0x68) + 0x2dc);
  if (fVar19 * 1.01 < fVar22) {
    if (bVar5) {
      uVar9 = *(int *)(param_4 + 0xcc4) + 1;
      *(uint *)(param_4 + 0xcc4) = uVar9;
      if (iVar7 != 0x15e7) {
        if (uVar9 < 0xf0) {
          uVar14 = 0x1e;
          fVar23 = 1.0;
          if (uVar9 < 0xb4) {
            fVar23 = 0.0;
          }
        }
        else {
          fVar23 = 3.0;
          uVar14 = 0x1e;
        }
        goto LAB_024e21e4;
      }
    }
    else if (iVar7 != 0x15e7) goto LAB_024e21b0;
    fVar23 = 16.0;
  }
  else {
    bVar6 = iVar7 == 0x15e7;
    if (bVar6) {
      bVar5 = true;
    }
    uVar14 = 8;
    if (!bVar6) {
      uVar14 = 0x1e;
    }
    *(undefined4 *)(param_4 + 0xcc4) = 0;
    fVar23 = 16.0;
    if (!bVar6) {
      fVar23 = 0.0;
    }
    if (bVar5) goto LAB_024e21e4;
LAB_024e21b0:
    if (iVar8 != 8) {
      return 0;
    }
    lVar17 = FUN_0251e98c(1);
    piVar11 = (int *)(**(code **)(*(long *)(lVar17 + 0x2ec0) + 0xf0))(lVar17 + 0x2ec0);
    fVar23 = (float)*piVar11;
  }
  uVar14 = 8;
LAB_024e21e4:
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 & 1) != 0) {
      return 0;
    }
  }
  if (*(char *)(param_4 + 0x2264) == '\0') {
    if (*(long *)PTR_DAT_04bb59d8 != 0) {
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
          iVar7 = FUN_006bd550(*puVar16,0);
          puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar7 != 0x758f7eaf) {
            puVar16 = &DAT_055c04a0;
          }
        }
      }
      if (*(int *)(puVar16 + 7) == -0x17df00c3) {
        return 0;
      }
    }
    if (fVar22 <= fVar19 * 1.01) {
      return 0;
    }
    uVar9 = *(uint *)(*(long *)PTR_DAT_04bb2118 + 0x508);
    if (uVar9 - *(int *)(param_4 + 0xcc0) < 0x1e) {
      return 0;
    }
    uVar3 = 0;
    if (uVar14 != 0) {
      uVar3 = uVar9 / uVar14;
    }
    if (uVar9 == uVar3 * uVar14) {
      uVar9 = *(uint *)(param_4 + 0x288);
      *(undefined4 *)(param_4 + 0x288) = *(undefined4 *)(param_4 + 0x28c);
      uVar9 = uVar9 ^ uVar9 << 0xb;
      *(undefined4 *)(param_4 + 0x28c) = *(undefined4 *)(param_4 + 0x290);
      uVar14 = *(uint *)(param_4 + 0x294);
      *(uint *)(param_4 + 0x290) = uVar14;
      uVar9 = uVar9 >> 8 ^ uVar14 >> 0x13 ^ uVar9 ^ uVar14;
      *(uint *)(param_4 + 0x294) = uVar9;
      if (((float)(uVar9 >> 9 | 0x3f800000) + -1.0) * 100.0 <= fVar23) {
        lVar17 = FUN_0251e98c(1);
        pfVar12 = (float *)(**(code **)(*(long *)(lVar17 + 0x2a0) + 0xf0))(lVar17 + 0x2a0);
        fVar19 = *pfVar12 * 0.9;
        lVar17 = *(long *)(param_4 + 0x68) + 0x278;
        uVar13 = FUN_016eaebc(fVar19,lVar17,0);
        if ((uVar13 & 1) != 0) {
          uVar13 = FUN_016e9c80(fVar19,lVar17,0,0,0);
          if ((uVar13 & 1) == 0) {
            return 0;
          }
          uStack_90 = 0;
          local_94 = FUN_016e46d8(0x40f00000,param_4);
          local_70 = 0x1013f800000;
          local_68 = 0;
          local_80 = (undefined *)CONCAT44(uStack_90,local_94);
          local_78 = (char *)CONCAT44(fVar19,param_3);
          local_8c = param_3;
          iVar7 = FUN_016ed290(&local_80,0,0,0);
          if (iVar7 == 0) {
            uVar13 = FUN_016e9c80(fVar19,&local_94,0,0,0);
            if ((uVar13 & 1) == 0) {
              return 0;
            }
            uVar20 = 0;
            iVar7 = FUN_016e46d8(0x41700000,param_4);
            uVar21 = param_3;
            local_94 = iVar7;
            uStack_90 = uVar20;
            local_8c = param_3;
            uVar13 = FUN_016eaebc(fVar19,&local_94,0);
            if ((uVar13 & 1) != 0) {
              local_70 = 0x1013f800000;
              local_68 = 0;
              local_80 = (undefined *)CONCAT44(uVar20,iVar7);
              local_78 = (char *)CONCAT44(fVar19,param_3);
              iVar7 = FUN_016ed290(&local_80,0,0,0);
              if ((iVar7 == 0) && (uVar13 = FUN_016e9c80(fVar19,&local_94,0,0,0), (uVar13 & 1) != 0)
                 ) {
                uStack_9c = 0;
                local_a0 = FUN_016e46d8(0x41c80000,param_4);
                local_70 = 0x1013f800000;
                local_68 = 0;
                local_80 = (undefined *)CONCAT44(uStack_9c,local_a0);
                local_78 = (char *)CONCAT44(fVar19,uVar21);
                local_98 = uVar21;
                iVar7 = FUN_016ed290(&local_80,0,0,0);
                if ((iVar7 == 0) &&
                   (uVar13 = FUN_016e9c80(fVar19,&local_a0,0,0,0), (uVar13 & 1) != 0)) {
                  local_68 = 0;
                  local_70 = 0x773f800000;
                  local_80 = (undefined *)CONCAT44(uStack_90,local_94);
                  local_78 = (char *)CONCAT44(fVar19,local_8c);
                  iVar7 = FUN_016ed290(&local_80,0,0,0);
                  if (iVar7 == 0) {
                    FUN_02372704(param_4,0x104,0,1);
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

