
void FUN_024786d4(long param_1)

{
  byte *pbVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined8 *puVar14;
  uint *puVar15;
  void *__src;
  void *pvVar16;
  long lVar17;
  ulong uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  long local_140;
  void *local_f0;
  int local_e8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_8c;
  undefined1 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined1 local_74;
  undefined8 local_70 [2];
  
  cVar5 = *(char *)(param_1 + 0x1901);
  local_70[0] = 0xfffe;
  FUN_0277d4ac(local_70);
  puVar6 = PTR_DAT_04bb43c0;
  local_70[0] = *(undefined8 *)(param_1 + 0x1902);
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(local_70);
  if (*(long *)puVar6 == 0) {
LAB_02478774:
    bVar7 = false;
  }
  else {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if (*(uint *)(lVar17 + 0x1d8) <= uVar8) goto LAB_02478774;
    bVar7 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) != 0;
  }
  if ((cVar5 != '\0') || (bVar7)) {
    puVar14 = *(undefined8 **)(param_1 + 0x60);
    if (puVar14 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar13 = __cxa_guard_acquire(&DAT_052461c0);
        puVar14 = &DAT_05240280;
        if (iVar13 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar14 = &DAT_05240280;
      }
    }
    FUN_017081d0(puVar14,&DAT_054cfcd8,6,0,0);
    *(undefined1 *)(param_1 + 0x991) = 1;
    FUN_0244d1b8(0,param_1);
    if (bVar7) {
      puVar14 = *(undefined8 **)(param_1 + 0x60);
      if (puVar14 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(&DAT_052461c0);
          puVar14 = &DAT_05240280;
          if (iVar13 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar14 = &DAT_05240280;
        }
      }
      local_158 = 0;
      local_150._0_4_ = 0x2b;
      if (puVar14[0x227] != 0) {
        FUN_03850a90(puVar14[0x227],0x2b,0,0);
      }
      local_150 = (undefined *)CONCAT44(local_150._4_4_,5);
      *(uint *)((long)puVar14 + 0x15f4) = *(uint *)((long)puVar14 + 0x15f4) | 0x20;
      *(undefined8 *)(param_1 + 0x9e0) = 0;
      *(undefined8 *)(param_1 + 0x9d8) = 0;
      FUN_0244cbcc(param_1,param_1 + 0x18e0);
      pbVar1 = (byte *)(param_1 + 0x1ee8);
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(&DAT_054f0960);
          puVar15 = (uint *)&DAT_054f0958;
          if (iVar13 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar15 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar15 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
        if ((ulong)*pbVar1 < 8) {
          puVar15 = puVar15 + (ulong)*pbVar1 * 2;
        }
      }
      local_150 = (undefined *)CONCAT44(local_150._4_4_,7);
      *puVar15 = *puVar15 | 0x80;
      if (*(int *)(param_1 + 0x178) == 0) {
        if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) {
          puVar14 = *(undefined8 **)(param_1 + 0x1dc0);
          *(undefined4 *)(param_1 + 0x1da8) = 0;
          *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffd;
          if (puVar14 != &DAT_0407ebb1) {
            iVar13 = 0;
            if (*(int *)(param_1 + 0x1dc8) < 1) {
              iVar13 = *(int *)(param_1 + 0x1dc8) + -1;
            }
            memset(puVar14,0,(long)iVar13);
            *(undefined1 *)((long)puVar14 + (long)iVar13) = 0;
          }
          puVar14 = *(undefined8 **)(param_1 + 0x1e18);
          if (puVar14 != &DAT_0407ebb1) {
            iVar13 = 0;
            if (*(int *)(param_1 + 0x1e20) < 1) {
              iVar13 = *(int *)(param_1 + 0x1e20) + -1;
            }
            memset(puVar14,0,(long)iVar13);
            *(undefined1 *)((long)puVar14 + (long)iVar13) = 0;
          }
          *(undefined8 *)(param_1 + 0x1e68) = 0;
          *(undefined2 *)(param_1 + 0x1e70) = 0xff;
          *(undefined8 *)(param_1 + 0x1e78) = 0;
        }
        *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffb;
      }
      *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xfffffffb;
      if (((((*pbVar1 < 8) && (uVar8 = FUN_02582d8c(pbVar1,1), puVar6 = PTR_DAT_04bb4fb8, uVar8 < 8)
            ) && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d4) != '\0')) &&
          ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d6) != '\0' &&
           (uVar8 = FUN_02582d8c(pbVar1,1), uVar8 < 8)))) &&
         (lVar17 = *(long *)puVar6, *(char *)(lVar17 + (ulong)uVar8 * 0x13f0 + 0x13d4) != '\0')) {
        uVar18 = (ulong)uVar8;
        lVar11 = lVar17 + uVar18 * 0x13f0;
        if ((**(char **)(lVar11 + 0x380) != '\0') &&
           (lVar12 = lVar17 + uVar18 * 0x13f0, **(char **)(lVar12 + 0x3d8) != '\0')) {
          plVar2 = (long *)(lVar11 + 0x378);
          plVar3 = (long *)(lVar12 + 0x3d8);
          FUN_02332b04(param_1,0,0);
          FUN_0230e2b0(&local_150);
          pvVar16 = (void *)CONCAT44(uStack_144,local_148);
          (**(code **)(*plVar2 + 0x18))(plVar2);
          lVar11 = lVar17 + uVar18 * 0x13f0;
          __src = *(void **)(lVar11 + 0x380);
          if (pvVar16 != __src) {
            (**(code **)(*plVar2 + 0x18))(plVar2);
            lVar12 = *(long *)(lVar11 + 0x380);
            lVar11 = 0;
            do {
              if (*(char *)(lVar12 + lVar11) == '\0') goto LAB_02478c94;
              lVar4 = lVar12 + lVar11;
              if (*(char *)(lVar4 + 1) == '\0') {
                lVar11 = lVar11 + 1;
                goto LAB_02478c94;
              }
              if (*(char *)(lVar4 + 2) == '\0') {
                lVar11 = lVar11 + 2;
                goto LAB_02478c94;
              }
              lVar11 = lVar11 + 3;
            } while (lVar11 != 0x80001);
            lVar11 = 0;
LAB_02478c94:
            iVar13 = (int)lVar11;
            if ((int)local_140 <= (int)lVar11) {
              iVar13 = (int)local_140 + -1;
            }
            memcpy(pvVar16,__src,(long)iVar13);
            *(undefined1 *)((long)pvVar16 + (long)iVar13) = 0;
          }
          lVar11 = lVar17 + uVar18 * 0x13f0;
          plVar2 = (long *)(lVar11 + 0x3d0);
          (**(code **)(*(long *)(lVar11 + 0x3d0) + 0x18))(plVar2);
          pvVar16 = (void *)*plVar3;
          if (local_f0 != pvVar16) {
            (**(code **)(*plVar2 + 0x18))(plVar2);
            lVar12 = *plVar3;
            lVar11 = 0;
            do {
              if (*(char *)(lVar12 + lVar11) == '\0') goto LAB_02478d3c;
              lVar4 = lVar12 + lVar11;
              if (*(char *)(lVar4 + 1) == '\0') {
                lVar11 = lVar11 + 1;
                goto LAB_02478d3c;
              }
              if (*(char *)(lVar4 + 2) == '\0') {
                lVar11 = lVar11 + 2;
                goto LAB_02478d3c;
              }
              lVar11 = lVar11 + 3;
            } while (lVar11 != 0x80001);
            lVar11 = 0;
LAB_02478d3c:
            iVar13 = (int)lVar11;
            if (local_e8 <= (int)lVar11) {
              iVar13 = local_e8 + -1;
            }
            memcpy(local_f0,pvVar16,(long)iVar13);
            *(undefined1 *)((long)local_f0 + (long)iVar13) = 0;
          }
          local_88 = *(undefined1 *)(param_1 + 0xaa0);
          lVar17 = lVar17 + uVar18 * 0x13f0;
          local_98 = *(undefined4 *)(lVar17 + 0x48c);
          local_8c = 0;
          local_a0 = *(undefined2 *)(lVar17 + 0x49c);
          local_9e = *(undefined1 *)(lVar17 + 0x49e);
          local_9d = *(undefined1 *)(lVar17 + 0x49f);
          local_9c = *(undefined4 *)(lVar17 + 0x4a0);
          local_84 = *(undefined4 *)(param_1 + 0xaa4);
          uStack_78 = *(undefined4 *)(param_1 + 0xab0);
          local_74 = *(undefined1 *)(param_1 + 0xab4);
          local_80 = local_a0;
          local_7e = local_9e;
          local_7d = local_9d;
          local_7c = local_9c;
          uVar18 = FUN_02328d9c(param_1,&local_150);
          if ((uVar18 & 1) != 0) {
            *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 4;
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x9e0) = 0;
      *(undefined8 *)(param_1 + 0x9d8) = 0;
    }
    goto LAB_02478de0;
  }
  lVar17 = param_1 + 0x1ee8;
  lVar11 = FUN_02547c90(lVar17);
  if (*(char *)(lVar11 + 9) == '\0') {
    FUN_0252d8f0(&local_158,lVar17);
  }
  else {
    puVar9 = (undefined4 *)FUN_02547c90(lVar17);
    local_158 = *puVar9;
    uStack_154 = puVar9[1];
  }
  lVar11 = *(long *)puVar6;
  uVar8 = FUN_0277d6c4(&local_158);
  lVar17 = *(long *)puVar6;
  if (lVar17 == 0) {
LAB_024789d4:
    puVar14 = *(undefined8 **)(param_1 + 0x60);
    if (puVar14 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar13 = __cxa_guard_acquire(&DAT_052461c0);
        puVar14 = &DAT_05240280;
        if (iVar13 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar14 = &DAT_05240280;
      }
    }
    FUN_017081d0(puVar14,&DAT_054cfc78,6,0,0);
    uVar10 = 1;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_024789d4;
    local_140 = 0;
    local_150 = PTR_DAT_04bc0510 + 0x10;
    local_148 = local_158;
    uStack_144 = uStack_154;
    uVar8 = FUN_0277d6c4(&local_148);
    if (*(long *)puVar6 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar17 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(&local_158);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
           (lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8), lVar17 != 0)) {
          local_140 = lVar17;
        }
      }
    }
    iVar13 = FUN_01ad78cc(&local_150);
    if (iVar13 != 0xc) goto LAB_024789d4;
    uVar10 = 0;
  }
  *(undefined1 *)(param_1 + 0x991) = uVar10;
  FUN_02472404(0,param_1);
LAB_02478de0:
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar8 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar17 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar17 + 0x278) * 999.99994);
    iVar13 = (int)(*(float *)(lVar17 + 0x27c) * 4.0);
    if (0x7ffe < iVar13) {
      iVar13 = 0x7fff;
    }
    if (iVar13 < -0x7fff) {
      iVar13 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar13;
    fVar19 = *(float *)(lVar17 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar19 * 999.99994);
    uVar8 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar8;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar14 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar14 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar20 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar14 + 0x2ec) = uVar20;
    *(undefined1 *)((long)puVar14 + 0x2e5) = 1;
  }
  return;
}

