
/* WARNING: Removing unreachable block (ram,0x016e2ae8) */
/* WARNING: Removing unreachable block (ram,0x016e2bd0) */

void FUN_016e2660(long param_1)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  undefined1 *__src;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  float *pfVar11;
  char *pcVar12;
  long lVar13;
  uint uVar14;
  undefined1 *__dest;
  undefined8 *puVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  int iVar21;
  undefined8 local_198;
  float local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  long local_178;
  long *local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  int local_24;
  
  *(undefined1 *)(param_1 + 0x2f9) = 0;
  bVar6 = FUN_016e3600();
  *(byte *)(param_1 + 0x2e1) = bVar6 & 1;
  if ((*(uint *)(param_1 + 0x248) >> 7 & 1) != 0) {
    uVar8 = FUN_016e3600(param_1);
    if ((uVar8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x2e4) = 0x3f800000;
    }
    if (*(char *)(param_1 + 0x2fa) != '\0') {
      *(undefined4 *)(param_1 + 0x2fc) = 0xbf800000;
    }
  }
  if (*(char *)(param_1 + 0x2ec) != '\0') {
    uVar20 = *(undefined4 *)(param_1 + 0x230);
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_052461c0), iVar7 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar9 = &DAT_05240280;
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    lVar10 = FUN_017067d4(puVar9,uVar20,0);
    if ((lVar10 != 0) && (*(long *)(param_1 + 0x2f0) != lVar10)) {
      FUN_017530c4();
      *(undefined1 *)(param_1 + 0x2ec) = 0;
      *(undefined8 *)(param_1 + 0x2f0) = 0;
    }
  }
  lVar10 = FUN_0251e98c(1);
  (**(code **)(*(long *)(lVar10 + 0x2a0) + 0xf0))(lVar10 + 0x2a0);
  local_168 = (undefined *)((ulong)local_168 & 0xffffffffffff0000);
  FUN_016e1780(param_1,&local_168);
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  if (puVar9[0x227] == 0) {
    puVar15 = *(undefined8 **)(param_1 + 0x60);
joined_r0x016e27a4:
    uStack_180 = 0;
    local_188 = 0;
    local_170 = (long *)0x0;
    local_178 = 0;
joined_r0x016e27a4:
    if (puVar15 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar15 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar15 = &DAT_05240280;
      }
    }
    local_198 = local_198 & 0xffffffff00000000;
    local_168 = (undefined *)CONCAT44(local_168._4_4_,6);
    if ((puVar15[0x227] == 0) ||
       (uVar8 = FUN_03850890(puVar15[0x227],6,&local_188,0), (uVar8 & 1) == 0)) goto LAB_016e2ee8;
  }
  else {
    local_168 = (undefined *)CONCAT44(local_168._4_4_,1);
    local_178 = 0;
    local_170 = (long *)0x0;
    puVar15 = *(undefined8 **)(param_1 + 0x60);
    uVar16 = *(uint *)(puVar9 + 0x2d3) >> 1;
    local_188 = 0;
    uStack_180 = 0;
    if ((uVar16 & 1) == 0) goto joined_r0x016e27a4;
    if (puVar15 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar15 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar15 = &DAT_05240280;
      }
    }
    local_198 = CONCAT44(local_198._4_4_,uVar16) & 0xffffffff00000001;
    local_168 = (undefined *)CONCAT44(local_168._4_4_,6);
    if ((puVar15[0x227] == 0) ||
       (uVar8 = FUN_03850890(puVar15[0x227],6,&local_188,uVar16 & 1), (uVar8 & 1) == 0)) {
      puVar15 = *(undefined8 **)(param_1 + 0x60);
      goto joined_r0x016e27a4;
    }
  }
  local_198 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  local_190 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
  if (local_170 != (long *)0x0) {
    if (*local_170 == 0) {
      local_55 = 0;
      local_158 = 0x100;
      local_160 = local_154;
      local_154[0] = 0;
      local_168 = PTR_DAT_04bb21f8 + 0x10;
      lVar10 = *(long *)(local_170[2] + 8);
      FUN_038d1270(&local_168,"%s.as",lVar10 + *(int *)(lVar10 + 0x24) + (long)*(int *)(lVar10 + 8))
      ;
    }
    else {
      iVar7 = *(int *)(*local_170 + 8);
      if (iVar7 < 0x60000000) {
        piVar1 = (int *)(*(long *)(local_170[2] + 8) + (long)iVar7);
        if (*piVar1 < 3) goto LAB_016e2984;
        iVar7 = *(int *)(((ulong)(uint)piVar1[3] & 0xfffffff) + *(long *)(local_170[2] + 8) + 4);
      }
      else {
        uVar16 = iVar7 + 0xa0000000;
        if (*(uint *)(local_178 + 0x80) <= uVar16) {
          uVar16 = 0;
        }
        lVar10 = *(long *)(local_178 + 0x88) + (ulong)uVar16 * 0x32;
        iVar7 = *(int *)(lVar10 + (ulong)*(byte *)(lVar10 + 0x22));
      }
      if (iVar7 != 0) {
        local_168 = PTR_DAT_04bb2010 + 0x10;
        local_160 = (undefined1 *)
                    CONCAT44((int)((float)(int)local_190 / 5.0) - (uint)(local_190 < 0.0),
                             (int)((float)(int)(float)local_198 / 5.0) -
                             (uint)((float)local_198 < 0.0));
        FUN_011e9780(&local_168);
      }
    }
LAB_016e2984:
    if (local_170 != (long *)0x0) {
      if (*local_170 == 0) {
        local_55 = 0;
        local_158 = 0x100;
        local_160 = local_154;
        local_154[0] = 0;
        local_168 = PTR_DAT_04bb21f8 + 0x10;
        lVar10 = *(long *)(local_170[2] + 8);
        FUN_038d1270(&local_168,"%s.as",
                     lVar10 + *(int *)(lVar10 + 0x24) + (long)*(int *)(lVar10 + 8));
      }
      else {
        iVar7 = *(int *)(*local_170 + 8);
        if (iVar7 < 0x60000000) {
          piVar1 = (int *)(*(long *)(local_170[2] + 8) + (long)iVar7);
          if (*piVar1 < 4) goto LAB_016e2a90;
          iVar7 = *(int *)(((ulong)(uint)piVar1[4] & 0xfffffff) + *(long *)(local_170[2] + 8) + 4);
        }
        else {
          uVar16 = iVar7 + 0xa0000000;
          if (*(uint *)(local_178 + 0x80) <= uVar16) {
            uVar16 = 0;
          }
          lVar10 = *(long *)(local_178 + 0x88) + (ulong)uVar16 * 0x32;
          iVar7 = *(int *)(lVar10 + (ulong)*(byte *)(lVar10 + 0x23));
        }
        if (iVar7 != 0) {
          FUN_01261e40(0x40200000,PTR_DAT_04bb5dc0,&local_198,0,0);
          FUN_01261e40(0x40200000,PTR_DAT_04bbcd38,&local_198,0,1);
        }
      }
    }
  }
LAB_016e2a90:
  local_190 = *(float *)(param_1 + 0x2b8);
  local_198 = *(ulong *)(param_1 + 0x2b0);
  fVar17 = (float)FUN_016e026c(0,&local_198,0,0);
  puVar3 = PTR_DAT_04bb2200;
  if ((*(long *)PTR_DAT_04bb2200 == 0) ||
     (lVar10 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar10 == 0)) {
LAB_016e2bf4:
    fVar18 = -100.0;
  }
  else {
    local_168 = (undefined *)((ulong)local_168 & 0xffffffff00000000);
    lVar10 = *(long *)(lVar10 + 0x118);
    if (lVar10 == 0) goto LAB_016e2bf4;
    local_24 = 0;
    fVar18 = (float)FUN_0093b024(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_198,&local_24);
    if (local_24 == 5) {
      lVar10 = *(long *)(lVar10 + 0x280);
      fVar18 = 0.0;
      if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 8), lVar10 != 0)) {
        pfVar11 = (float *)(**(code **)(*(long *)(lVar10 + 0x488) + 0xf0))(lVar10 + 0x488);
        fVar18 = *pfVar11;
      }
    }
    else {
      local_168 = (undefined *)CONCAT44(local_168._4_4_,local_24);
      lVar10 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_24);
      if ((((lVar10 == 0) ||
           (pcVar12 = (char *)FUN_009823a0(lVar10,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
           pcVar12 == (char *)0x0)) || (*pcVar12 == '\0')) && (local_24 != 0xc)) goto LAB_016e2bf4;
      fVar19 = 0.0;
      if ((*(long *)puVar3 != 0) && (lVar10 = *(long *)(*(long *)puVar3 + 0x50), lVar10 != 0)) {
        local_168 = (undefined *)((ulong)local_168 & 0xffffffff00000000);
        lVar10 = *(long *)(lVar10 + 0x118);
        if (lVar10 != 0) {
          fVar19 = (float)FUN_015bc77c(lVar10,&local_198,0,0);
        }
      }
      fVar18 = fVar18 + fVar19;
    }
  }
  if (fVar17 <= fVar18) {
    fVar17 = fVar18;
  }
  fVar17 = *(float *)(*(long *)(param_1 + 0x68) + 0x27c) - fVar17;
  fVar18 = -fVar17;
  if (0.0 <= fVar17) {
    fVar18 = fVar17;
  }
  if ((7.5 <= fVar18) || (local_170 == (long *)0x0)) goto LAB_016e2ee8;
  if (*local_170 == 0) {
    local_55 = 0;
    local_158 = 0x100;
    local_160 = local_154;
    local_154[0] = 0;
    local_168 = PTR_DAT_04bb21f8 + 0x10;
    lVar10 = *(long *)(local_170[2] + 8);
    FUN_038d1270(&local_168,"%s.as",lVar10 + *(int *)(lVar10 + 0x24) + (long)*(int *)(lVar10 + 8));
  }
  else {
    iVar7 = *(int *)(*local_170 + 8);
    if (iVar7 < 0x60000000) {
      piVar1 = (int *)(*(long *)(local_170[2] + 8) + (long)iVar7);
      if (*piVar1 < 1) goto LAB_016e2d5c;
      iVar7 = *(int *)(((ulong)(uint)piVar1[1] & 0xfffffff) + *(long *)(local_170[2] + 8) + 4);
    }
    else {
      uVar16 = iVar7 + 0xa0000000;
      if (*(uint *)(local_178 + 0x80) <= uVar16) {
        uVar16 = 0;
      }
      lVar10 = *(long *)(local_178 + 0x88) + (ulong)uVar16 * 0x32;
      iVar7 = *(int *)(lVar10 + (ulong)*(byte *)(lVar10 + 0x20));
    }
    if (iVar7 != 0) {
      local_168 = PTR_DAT_04bb2010 + 0x10;
      local_160 = (undefined1 *)
                  CONCAT44((int)((float)(int)local_190 / 5.0) - (uint)(local_190 < 0.0),
                           (int)((float)(int)(float)local_198 / 5.0) -
                           (uint)((float)local_198 < 0.0));
      FUN_011e9780(&local_168);
    }
  }
LAB_016e2d5c:
  if (local_170 != (long *)0x0) {
    if (*local_170 == 0) {
      local_55 = 0;
      local_158 = 0x100;
      local_160 = local_154;
      local_154[0] = 0;
      local_168 = PTR_DAT_04bb21f8 + 0x10;
      lVar10 = *(long *)(local_170[2] + 8);
      FUN_038d1270(&local_168,"%s.as",lVar10 + *(int *)(lVar10 + 0x24) + (long)*(int *)(lVar10 + 8))
      ;
    }
    else {
      iVar7 = *(int *)(*local_170 + 8);
      if (iVar7 < 0x60000000) {
        piVar1 = (int *)(*(long *)(local_170[2] + 8) + (long)iVar7);
        if (*piVar1 < 2) goto LAB_016e2ee8;
        iVar7 = *(int *)(((ulong)(uint)piVar1[2] & 0xfffffff) + *(long *)(local_170[2] + 8) + 4);
      }
      else {
        uVar16 = iVar7 + 0xa0000000;
        if (*(uint *)(local_178 + 0x80) <= uVar16) {
          uVar16 = 0;
        }
        lVar10 = *(long *)(local_178 + 0x88) + (ulong)uVar16 * 0x32;
        iVar7 = *(int *)(lVar10 + (ulong)*(byte *)(lVar10 + 0x21));
      }
      if (iVar7 != 0) {
        iVar7 = (int)(float)local_198;
        bVar4 = (float)local_198 < 0.0;
        bVar5 = local_190 < 0.0;
        iVar21 = (int)local_190;
        uVar20 = FUN_016e026c(0,&local_198,0,0);
        local_198 = CONCAT44(uVar20,(float)(int)((int)((float)iVar7 / 5.0) - (uint)bVar4 &
                                                0xfffffffe) * 5.0 + 5.0);
        local_190 = (float)(int)((int)((float)iVar21 / 5.0) - (uint)bVar5 & 0xfffffffe) * 5.0 + 5.0;
        FUN_01261e40(0x40980000,PTR_DAT_04bb5dc0,&local_198,0,0);
        FUN_01261e40(0x40980000,PTR_DAT_04bbcd38,&local_198,0,1);
      }
    }
  }
LAB_016e2ee8:
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  FUN_017345f8(puVar9 + 0xb8f);
  FUN_016e39dc(param_1,0);
  if ((*(int *)(param_1 + 0x328) != 0) &&
     (iVar7 = *(int *)(param_1 + 0x328) + -1, *(int *)(param_1 + 0x328) = iVar7, iVar7 == 0)) {
    FUN_016e905c(param_1);
  }
  if ((*(int *)(param_1 + 0x340) != 0) &&
     (iVar7 = *(int *)(param_1 + 0x340) + -1, *(int *)(param_1 + 0x340) = iVar7, iVar7 == 0)) {
    FUN_016e905c(param_1);
  }
  if ((*(int *)(param_1 + 0x358) == 0) ||
     (iVar7 = *(int *)(param_1 + 0x358) + -1, *(int *)(param_1 + 0x358) = iVar7, iVar7 != 0)) {
    iVar7 = *(int *)(param_1 + 0x370);
  }
  else {
    FUN_016e905c(param_1);
    iVar7 = *(int *)(param_1 + 0x370);
  }
  if ((iVar7 == 0) || (*(int *)(param_1 + 0x370) = iVar7 + -1, iVar7 + -1 != 0)) {
    puVar9 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    FUN_016e905c(param_1);
    puVar9 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  if (puVar9[0x227] == 0) {
    uVar16 = 0;
    puVar9 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    local_168 = (undefined *)CONCAT44(local_168._4_4_,1);
    uVar16 = *(uint *)(puVar9 + 0x2d3) >> 1 & 1;
    puVar9 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  local_168 = (undefined *)CONCAT44(local_168._4_4_,uVar16);
  lVar10 = puVar9[0x227];
  if (lVar10 == 0) {
    puVar9 = &DAT_04c931a0;
  }
  else {
    uVar14 = 0;
    if (*(long *)(lVar10 + 0x78) != 0) {
      uVar14 = *(uint *)(*(long *)(lVar10 + 0x78) + 0x18);
    }
    uVar2 = uVar16;
    if (uVar14 <= uVar16) {
      uVar2 = 0;
    }
    if (*(uint *)(lVar10 + 0x80) <= uVar2) {
      uVar2 = 0;
    }
    puVar9 = (undefined8 *)(*(long *)(lVar10 + 0x88) + (long)(int)uVar2 * 0xe8 + 0x60);
  }
  uVar8 = FUN_0171ef80(puVar9,0x16);
  if ((uVar8 & 1) != 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    local_168 = (undefined *)CONCAT44(local_168._4_4_,0xe);
    local_188 = CONCAT44(local_188._4_4_,5);
    if ((puVar9[0x227] == 0) || (uVar8 = FUN_03850890(puVar9[0x227],0xe,0,5), (uVar8 & 1) == 0)) {
      puVar9 = *(undefined8 **)(param_1 + 0x60);
      if (puVar9 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(&DAT_052461c0);
          puVar9 = &DAT_05240280;
          if (iVar7 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar9 = &DAT_05240280;
        }
      }
      local_168 = (undefined *)CONCAT44(local_168._4_4_,0xe);
      local_188 = CONCAT44(local_188._4_4_,7);
      if ((puVar9[0x227] == 0) || (uVar8 = FUN_03850890(puVar9[0x227],0xe,0,7), (uVar8 & 1) == 0)) {
        puVar9 = *(undefined8 **)(param_1 + 0x60);
        if (puVar9 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(&DAT_052461c0);
            puVar9 = &DAT_05240280;
            if (iVar7 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar9 = &DAT_05240280;
          }
        }
        local_188 = CONCAT44(local_188._4_4_,uVar16);
        local_168 = (undefined *)CONCAT44(local_168._4_4_,0xe);
        if (puVar9[0x227] == 0) {
          return;
        }
        uVar8 = FUN_03850890(puVar9[0x227],0xe,0,uVar16);
        if ((uVar8 & 1) == 0) {
          return;
        }
      }
    }
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    puVar3 = PTR_DAT_04bb2020;
    pcVar12 = (char *)(puVar9 + 0xb9e);
    local_168 = PTR_DAT_04bb2020 + 0x10;
    local_160 = &DAT_040df593;
    if (*pcVar12 == '\0') {
      lVar10 = 0;
    }
    else {
      pcVar12 = (char *)(puVar9 + 0xbae);
      if (*pcVar12 == '\0') {
        lVar10 = 1;
      }
      else if (*(char *)(puVar9 + 0xbbe) == '\0') {
        pcVar12 = (char *)(puVar9 + 0xbbe);
        lVar10 = 2;
      }
      else {
        if (*(char *)(puVar9 + 0xbce) != '\0') {
          return;
        }
        pcVar12 = (char *)(puVar9 + 0xbce);
        lVar10 = 3;
      }
    }
    *pcVar12 = '\x01';
    __dest = (undefined1 *)puVar9[lVar10 * 0x10 + 0xb90];
    *(int *)((long)puVar9 + lVar10 * 0x80 + 0x5cf4) =
         (int)*(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x508);
    (**(code **)(puVar3 + 0x28))(&local_168);
    __src = local_160;
    if (__dest != local_160) {
      (**(code **)(local_168 + 0x18))(&local_168);
      lVar13 = 0;
      do {
        if (local_160[lVar13] == '\0') goto LAB_016e329c;
        if (local_160[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_016e329c;
        }
        if (local_160[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_016e329c;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_016e329c:
      iVar7 = (int)lVar13;
      if (*(int *)(puVar9 + lVar10 * 0x10 + 0xb91) <= (int)lVar13) {
        iVar7 = *(int *)(puVar9 + lVar10 * 0x10 + 0xb91) + -1;
      }
      memcpy(__dest,__src,(long)iVar7);
      __dest[iVar7] = 0;
    }
    *(undefined4 *)(puVar9 + lVar10 * 0x10 + 0xb9d) = 0;
  }
  return;
}

