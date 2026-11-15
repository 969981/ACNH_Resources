
/* WARNING: Removing unreachable block (ram,0x02476280) */
/* WARNING: Removing unreachable block (ram,0x02476334) */
/* WARNING: Removing unreachable block (ram,0x02476434) */

void FUN_02475ed0(long param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  float *pfVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  void *__dest;
  undefined8 *puVar15;
  long *plVar16;
  void *__src;
  float fVar17;
  uint local_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined8 uStack_188;
  long local_180;
  long *local_178;
  undefined8 local_170;
  undefined *local_168;
  undefined8 local_160;
  uint local_158;
  uint local_154;
  undefined4 uStack_150;
  undefined2 local_14c;
  undefined1 local_14a;
  undefined1 local_55;
  
  puVar8 = PTR_DAT_04bb37e0;
  *(undefined4 *)(param_1 + 0x21d4) = 0;
  *(undefined2 *)(param_1 + 0x21cc) = *(undefined2 *)puVar8;
  *(undefined *)(param_1 + 0x21ce) = puVar8[2];
  *(undefined *)(param_1 + 0x21cf) = puVar8[3];
  *(undefined4 *)(param_1 + 0x21d0) = *(undefined4 *)(puVar8 + 4);
  puVar7 = PTR_PTR_04bb2238;
  __dest = *(void **)(param_1 + 0x21e0);
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  __src = *(void **)(puVar7 + 8);
  if (__dest != __src) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7);
    lVar13 = 0;
    do {
      if (*(char *)(*(long *)(puVar7 + 8) + lVar13) == '\0') goto LAB_02475fbc;
      lVar1 = *(long *)(puVar7 + 8) + lVar13;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_02475fbc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_02475fbc;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_02475fbc:
    iVar9 = (int)lVar13;
    if (*(int *)(param_1 + 0x21e8) <= (int)lVar13) {
      iVar9 = *(int *)(param_1 + 0x21e8) + -1;
    }
    memcpy(__dest,__src,(long)iVar9);
    *(undefined1 *)((long)__dest + (long)iVar9) = 0;
  }
  local_170 = 0xfffe;
  FUN_0277d4ac(&local_170);
  local_170 = *(undefined8 *)(param_1 + 0x1900);
  uVar5 = *(ushort *)(param_1 + 0x190c);
  if (((*(long *)(param_1 + 0x60) == 0) && ((DAT_052461c0 & 1) == 0)) &&
     (iVar9 = __cxa_guard_acquire(&DAT_052461c0), iVar9 != 0)) {
    FUN_016fcf10(&DAT_05240280);
    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052461c0);
  }
  if (*(char *)(param_1 + 0x190e) == '\0') {
    local_168 = (undefined *)((ulong)local_168 & 0xffffff0000000000);
    local_160._6_2_ = (ushort)((ulong)local_160 >> 0x30) & 0xff00;
    local_160 = (uint *)CONCAT26(local_160._6_2_,6);
    FUN_02321e44(&local_190,param_1,&local_168);
    FUN_023203ac(param_1,0,0);
    if (*(int *)(param_1 + 0x1810) != 4) {
      FUN_02472404(0x3f800000,param_1);
    }
    local_14c = 0x101;
    local_154 = *(uint *)puVar8;
    uStack_150 = *(undefined4 *)(puVar8 + 4);
    plVar16 = *(long **)(param_1 + 0x60);
    local_14a = 0;
    local_168 = (undefined *)CONCAT35(local_168._5_3_,6);
    local_158 = local_158 & 0xffffff00;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
    local_160 = (uint *)local_170;
    if (plVar16 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        plVar16 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar16 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar16 + 0x270))(&local_190,plVar16);
    local_154 = (uint)local_190;
    uStack_150 = local_190._4_4_;
    puVar15 = *(undefined8 **)(param_1 + 0x60);
    local_14c = CONCAT11(local_14c._1_1_,1);
    if (puVar15 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        puVar15 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar15 = &DAT_05240280;
      }
    }
    FUN_0170f380(puVar15,&local_168);
    goto LAB_02476510;
  }
  lVar13 = FUN_0251e98c(1);
  pfVar10 = (float *)(**(code **)(*(long *)(lVar13 + 0x13b0) + 0xf0))(lVar13 + 0x13b0);
  fVar17 = *pfVar10;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_190 = CONCAT44(local_190._4_4_,10);
    local_168 = (undefined *)CONCAT44(local_168._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_024760a0;
  }
  else {
LAB_024760a0:
    iVar9 = (uint)uVar5 * 0x10000;
    plVar16 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar16 = *(long **)(param_1 + 0x4c8);
    }
    lVar13 = (**(code **)(*plVar16 + 0x148))();
    iVar14 = iVar9 - *(int *)(lVar13 + 4);
    if (0xb60b5e < iVar14 + 0x5b05afU) {
      iVar6 = 0x15555560;
      iVar9 = -0x15555560;
      iVar14 = (int)(fVar17 * (float)iVar14);
      if (iVar14 < 1) {
        iVar6 = -0x5b05b0;
      }
      else {
        iVar9 = 0x5b05b0;
      }
      iVar3 = iVar14;
      if (iVar6 <= iVar14) {
        iVar3 = iVar6;
      }
      if (iVar9 <= iVar14) {
        iVar9 = iVar3;
      }
      iVar9 = iVar9 + *(int *)(lVar13 + 4);
    }
    *(int *)(lVar13 + 4) = iVar9;
  }
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  if (puVar15[0x227] == 0) {
    local_190._0_4_ = 0;
  }
  else {
    local_190._0_4_ = *(uint *)(puVar15 + 0x2d3) >> 1 & 1;
    local_168 = (undefined *)CONCAT44(local_168._4_4_,0x35);
    uVar11 = FUN_03850890(puVar15[0x227],0x35,0,(uint)local_190);
    if ((uVar11 & 1) != 0) {
      local_190._0_4_ = 10;
      local_168 = (undefined *)CONCAT44(local_168._4_4_,10);
      *(uint *)(*(long *)(param_1 + 0x298) + 0xc1f4) =
           *(uint *)(*(long *)(param_1 + 0x298) + 0xc1f4) & 0xfffffbff;
    }
  }
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  if (puVar15[0x227] != 0) {
    local_190 = CONCAT44(local_190._4_4_,*(uint *)(puVar15 + 0x2d3) >> 1) & 0xffffffff00000001;
    local_168 = (undefined *)CONCAT44(local_168._4_4_,0x36);
    uVar11 = FUN_03850890(puVar15[0x227],0x36,0,*(uint *)(puVar15 + 0x2d3) >> 1 & 1);
    if ((uVar11 & 1) != 0) {
      local_168 = (undefined *)((ulong)local_168 & 0xffffff0000000000);
      local_160 = (uint *)CONCAT17(local_160._7_1_,6);
      local_160 = (uint *)CONCAT26(local_160._6_2_,6);
      FUN_02321e44(&local_190,param_1,&local_168);
      FUN_023203ac(param_1,0,0);
      FUN_02472404(0x3f800000,param_1);
      local_168 = (undefined *)CONCAT44(local_168._4_4_,10);
      *(uint *)(*(long *)(param_1 + 0x298) + 0xc1f4) =
           *(uint *)(*(long *)(param_1 + 0x298) + 0xc1f4) | 0x400;
    }
  }
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  local_180 = 0;
  local_178 = (long *)0x0;
  local_190 = 0;
  uStack_188 = 0;
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  if (puVar15[0x227] == 0) {
    local_198 = 0;
  }
  else {
    local_198 = *(uint *)(puVar15 + 0x2d3) >> 1 & 1;
    local_168 = (undefined *)CONCAT44(local_168._4_4_,0x37);
    uVar11 = FUN_03850890(puVar15[0x227],0x37,&local_190,local_198);
    if ((uVar11 & 1) != 0) {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
      if (local_178 == (long *)0x0) {
        uVar12 = 1;
        goto LAB_024765f4;
      }
      if (*local_178 == 0) {
        local_55 = 0;
        local_158 = 0x100;
        local_160 = &local_154;
        local_154 = local_154 & 0xffffff00;
        local_168 = PTR_DAT_04bb21f8 + 0x10;
        lVar13 = *(long *)(local_178[2] + 8);
        FUN_038d1270(&local_168,"%s.as",
                     lVar13 + *(int *)(lVar13 + 0x24) + (long)*(int *)(lVar13 + 8));
LAB_024765ec:
        fVar17 = 0.0;
      }
      else {
        iVar9 = *(int *)(*local_178 + 8);
        if (iVar9 < 0x60000000) {
          piVar2 = (int *)(*(long *)(local_178[2] + 8) + (long)iVar9);
          if (*piVar2 < 1) goto LAB_024765ec;
          fVar17 = *(float *)(((ulong)(uint)piVar2[1] & 0xfffffff) + *(long *)(local_178[2] + 8) + 4
                             );
        }
        else {
          uVar12 = iVar9 + 0xa0000000;
          if (*(uint *)(local_180 + 0x80) <= uVar12) {
            uVar12 = 0;
          }
          lVar13 = *(long *)(local_180 + 0x88) + (ulong)uVar12 * 0x32;
          fVar17 = *(float *)(lVar13 + (ulong)*(byte *)(lVar13 + 0x20));
        }
      }
      uVar12 = (uint)fVar17;
LAB_024765f4:
      local_154 = *(uint *)puVar8;
      uStack_150 = *(undefined4 *)(puVar8 + 4);
      plVar16 = *(long **)(param_1 + 0x60);
      local_14a = 0;
      local_14c = 0x101;
      local_168._0_5_ = (uint5)uVar12;
      local_158 = local_158 & 0xffffff00;
      local_160 = (uint *)local_170;
      if (plVar16 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(&DAT_052461c0);
          plVar16 = &DAT_05240280;
          if (iVar9 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar16 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar16 + 0x270))(&local_198,plVar16);
      local_154 = local_198;
      uStack_150 = uStack_194;
      puVar15 = *(undefined8 **)(param_1 + 0x60);
      local_14c = CONCAT11(local_14c._1_1_,1);
      if (puVar15 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(&DAT_052461c0);
          puVar15 = &DAT_05240280;
          if (iVar9 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar15 = &DAT_05240280;
        }
      }
      FUN_0170f380(puVar15,&local_168);
      return;
    }
  }
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  if (puVar15[0x227] == 0) {
    uVar12 = 0;
  }
  else {
    local_168 = (undefined *)CONCAT44(local_168._4_4_,1);
    uVar12 = *(uint *)(puVar15 + 0x2d3) >> 1 & 1;
  }
  uVar11 = FUN_0170a6d0(puVar15,uVar12);
  if ((uVar11 & 1) == 0) {
    return;
  }
LAB_02476510:
  bVar4 = *(byte *)(param_1 + 0x190b);
  if (7 < bVar4) {
    bVar4 = 0;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    FUN_023752f4(param_1,bVar4,6);
  }
  else {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
    if (bVar4 == 1) {
      FUN_0231b68c(param_1,6);
    }
    else {
      FUN_023164ec(param_1,6);
    }
  }
  return;
}

