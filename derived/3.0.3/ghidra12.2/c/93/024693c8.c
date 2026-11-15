
/* WARNING: Removing unreachable block (ram,0x024699a0) */

void FUN_024693c8(long param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  float *pfVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  byte bVar14;
  long lVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_9c;
  float fStack_98;
  float local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  float local_6c;
  float fStack_68;
  float local_64;
  
  cVar3 = *(char *)(param_1 + 0x190c);
  cVar4 = *(char *)(param_1 + 0x190d);
  fVar19 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  fVar21 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fVar20 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  local_6c = fVar21;
  fStack_68 = fVar19;
  local_64 = fVar20;
  if (*(char *)(param_1 + 0x3a5) == '\0') {
    cVar11 = '\0';
  }
  else {
    uVar6 = (**(code **)(*(long *)(param_1 + 0x390) + (ulong)*(byte *)(param_1 + 0x3a4) * 8))
                      (param_1 + 0x390);
    cVar11 = *(char *)(param_1 + 0x3a5);
    *(undefined4 *)(param_1 + 0x398) = uVar6;
  }
  bVar14 = *(byte *)(param_1 + 0x1ee8);
  local_90 = CONCAT44(fVar21,(float)local_90);
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  local_90 = CONCAT71(local_90._1_7_,bVar14);
  iVar7 = *(int *)(param_1 + 0x3a0);
  if (cVar11 == '\0') {
    fVar21 = 0.0;
  }
  else {
    fVar21 = 1.0;
    if (iVar7 != 0) {
      fVar21 = 1.0;
      if (*(int *)(param_1 + 0x398) < iVar7) {
        fVar17 = (float)*(int *)(param_1 + 0x398) / (float)iVar7;
        fVar18 = 1.0;
        if (fVar17 <= 1.0) {
          fVar18 = fVar17;
        }
        fVar21 = 0.0;
        if (0.0 <= fVar17) {
          fVar21 = fVar18;
        }
      }
    }
  }
  local_80 = CONCAT35(local_80._5_3_,0x100000000);
  local_80 = CONCAT44(local_80._4_4_,(1.0 - fVar21) * 0.5 + 0.5);
  local_88._0_4_ = fVar19;
  local_88._4_4_ = fVar20;
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_90,*(undefined4 *)(param_1 + 0x230),1);
  fVar19 = *(float *)(param_1 + 0x1820);
  *(undefined8 *)(param_1 + 0x1844) = 0x3d4ccccd00000000;
  uVar2 = *(uint *)(param_1 + 0x17cc);
  uVar12 = uVar2 | 0x80000;
  *(uint *)(param_1 + 0x17cc) = uVar12;
  if (fVar19 == 0.0) {
    uVar12 = uVar2 & 0xfff7ffff;
    *(uint *)(param_1 + 0x17cc) = uVar12;
  }
  if (((*(uint *)(param_1 + 0x17d8) & 1) == 0) &&
     (*(uint *)(param_1 + 0x17d8) = *(uint *)(param_1 + 0x17d8) | 1, (uVar12 >> 0x13 & 1) != 0)) {
    if (0.0 <= fVar19) {
      if (0.0 < fVar19) {
        fVar21 = fVar19 + -0.05;
        fVar20 = 0.0;
        if (fVar21 <= fVar19 && 0.0 < fVar21) {
          fVar20 = fVar21;
        }
        *(float *)(param_1 + 0x1820) = fVar20;
        if (fVar21 <= fVar19 && 0.0 < fVar21) goto LAB_02469540;
      }
    }
    else {
      fVar21 = fVar19 + 0.05;
      fVar20 = 0.0;
      if (fVar19 <= fVar21 && fVar21 < 0.0) {
        fVar20 = fVar21;
      }
      *(float *)(param_1 + 0x1820) = fVar20;
      if (fVar19 <= fVar21 && fVar21 < 0.0) goto LAB_02469540;
    }
    uVar12 = uVar12 & 0xfff7ffff;
    *(uint *)(param_1 + 0x17cc) = uVar12;
    cVar11 = *(char *)(param_1 + 0x64d);
    if (cVar11 != '\0') goto LAB_02469548;
    cVar11 = '\0';
  }
  else {
LAB_02469540:
    cVar11 = *(char *)(param_1 + 0x64d);
    if (cVar11 != '\0') {
LAB_02469548:
      if (*(int *)(param_1 + 0x648) <= *(int *)(param_1 + 0x640)) {
        if (*(int *)(param_1 + 0x178) != 0) {
          *(uint *)(param_1 + 0x17cc) = uVar12 | 8;
          FUN_023164ec(param_1,6);
          return;
        }
        if (cVar3 != '\0') {
          local_88 = (ulong)local_88._5_3_ << 0x28;
          local_90 = 0x1000000000006;
          FUN_02374564(param_1,&local_90);
          return;
        }
        if (*(int *)(param_1 + 0x1810) == 1) {
          plVar9 = *(long **)(param_1 + 0x68);
          (**(code **)(*plVar9 + 0x140))(plVar9,plVar9 + 0x4f,1);
          *(undefined8 *)(param_1 + 0x1820) = 0;
          *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfff7ffff;
          *(undefined8 *)(param_1 + 0x1844) = 0;
        }
        *(undefined8 *)(param_1 + 0x1980) = 0;
        *(undefined8 *)(param_1 + 0x1988) = 0;
        *(undefined8 *)(param_1 + 0x1990) = 0;
        *(undefined8 *)(param_1 + 0x1998) = 0;
        *(undefined8 *)(param_1 + 0x19a0) = 0;
        *(undefined8 *)(param_1 + 0x19a8) = 0;
        *(undefined8 *)(param_1 + 0x19b0) = 0;
        *(undefined8 *)(param_1 + 0x19b8) = 0;
        *(undefined8 *)(param_1 + 0x19c0) = 0;
        *(undefined8 *)(param_1 + 0x19c8) = 0;
        *(undefined8 *)(param_1 + 0x19d0) = 0;
        *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
        *(undefined2 *)(param_1 + 0x19d8) = 0;
        *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
        *(undefined2 *)(param_1 + 0x1980) = 0x601;
        local_90 = CONCAT44(local_90._4_4_,0xf6);
        *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
        *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
        *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
        *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
        *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
        *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
        *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
        *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
        *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
        *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
        *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
        *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
        *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
        *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
        *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
        *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
        lVar15 = 0;
        if (*(long *)(param_1 + 0x70) != 0) {
          lVar15 = *(long *)(param_1 + 0x70) + 0x278;
        }
        FUN_03ebb160(lVar15,0xf6);
        return;
      }
    }
  }
  if (*(int *)(param_1 + 0x620) == 0) {
    puVar16 = *(undefined8 **)(param_1 + 0x60);
    local_80 = 0;
    local_78 = (long *)0x0;
    local_90 = 0;
    local_88._0_4_ = 0.0;
    local_88._4_4_ = 0.0;
    if (puVar16 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar16 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar16 = &DAT_05240280;
      }
    }
    local_9c = 0.0;
    if ((puVar16[0x227] != 0) &&
       (uVar8 = FUN_03850a90(puVar16[0x227],0,&local_90,0), (uVar8 & 1) != 0)) {
      if ((local_78 == (long *)0x0) || (lVar15 = *local_78, lVar15 == 0)) {
        uVar12 = 1;
      }
      else {
        fVar19 = *(float *)(lVar15 + 0x18);
        if (fVar19 < 0.0) {
          fVar19 = *(float *)(local_78[1] + 0xc);
        }
        uVar12 = (uint)(fVar19 - *(float *)(lVar15 + 0x14));
        if (uVar12 < 2) {
          uVar12 = 1;
        }
      }
      *(uint *)(param_1 + 0x620) = uVar12;
      *(byte *)(param_1 + 0x64c) = (byte)(uVar12 >> 0x1f);
      *(uint *)(param_1 + 0x648) = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
      *(uint *)(param_1 + 0x644) = uVar12 & (int)uVar12 >> 0x1f;
      *(undefined4 *)(param_1 + 0x640) = 0;
      *(undefined1 *)(param_1 + 0x64d) = 1;
    }
    cVar11 = *(char *)(param_1 + 0x64d);
  }
  if (cVar11 == '\0') {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x648);
  iVar13 = *(int *)(param_1 + 0x640);
  if ((iVar7 == 0) || (iVar7 - iVar13 == 0 || iVar7 < iVar13)) {
LAB_02469760:
    local_90 = CONCAT44(fStack_68,local_6c);
    local_88 = CONCAT44(local_88._4_4_,local_64);
    if (cVar3 == '\0') {
      fVar19 = -20.0;
      if ((*(long *)PTR_DAT_04bb2200 != 0) &&
         (lVar15 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar15 != 0)) {
        local_9c = 0.0;
        lVar15 = *(long *)(lVar15 + 0x118);
        if (lVar15 != 0) {
          lVar15 = *(long *)(lVar15 + 0x280);
          fVar19 = 0.0;
          if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 8), lVar15 != 0)) {
            pfVar10 = (float *)(**(code **)(*(long *)(lVar15 + 0x488) + 0xf0))(lVar15 + 0x488);
            fVar19 = *pfVar10;
          }
          lVar15 = FUN_0251e98c(1);
          pfVar10 = (float *)(**(code **)(*(long *)(lVar15 + 0x1560) + 0xf0))(lVar15 + 0x1560);
          fVar19 = fVar19 + *pfVar10;
        }
      }
      goto LAB_02469788;
    }
  }
  else {
    fVar20 = (float)iVar13 / (float)iVar7;
    fVar19 = 1.0;
    if (fVar20 <= 1.0) {
      fVar19 = fVar20;
    }
    fVar21 = 0.0;
    if (0.0 <= fVar20) {
      fVar21 = fVar19;
    }
    if ((cVar3 == '\0') || (0.7 <= fVar21)) goto LAB_02469760;
    *(undefined1 *)(param_1 + 0x2fa) = 1;
  }
  local_88 = CONCAT44(local_88._4_4_,local_64);
  local_90 = CONCAT44(fStack_68,local_6c);
  fVar19 = (float)FUN_016e026c(0,&local_90,0,0);
LAB_02469788:
  plVar9 = *(long **)(param_1 + 0x68);
  local_90 = CONCAT44(fVar19,(float)local_90);
  if (iVar7 == iVar13) {
    (**(code **)(*plVar9 + 0x100))(plVar9,&local_6c);
  }
  else {
    fVar19 = fVar19 - *(float *)((long)plVar9 + 0x27c);
    fVar20 = 1.0 / (float)(uint)(iVar7 - iVar13);
    if (cVar4 != '\0') {
      fVar19 = 0.0;
    }
    local_9c = *(float *)(plVar9 + 0x4f) + fVar20 * ((float)local_90 - *(float *)(plVar9 + 0x4f));
    fStack_98 = *(float *)((long)plVar9 + 0x27c) + fVar20 * fVar19;
    local_94 = *(float *)(plVar9 + 0x50) + fVar20 * ((float)local_88 - *(float *)(plVar9 + 0x50));
    (**(code **)(*plVar9 + 0x100))(plVar9,&local_9c);
    lVar15 = *(long *)(param_1 + 0x68);
    iVar7 = FUN_006f0400(*(float *)(lVar15 + 0x278) - *(float *)(lVar15 + 0x284),
                         *(float *)(lVar15 + 0x280) - *(float *)(lVar15 + 0x28c));
    if ((*(int *)(param_1 + 0x178) != 0) ||
       (local_9c = 1.4013e-44, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
      plVar9 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar9 = *(long **)(param_1 + 0x4c8);
      }
      lVar15 = (**(code **)(*plVar9 + 0x148))();
      iVar13 = iVar7 - *(int *)(lVar15 + 4);
      if (0xb60b5e < iVar13 + 0x5b05afU) {
        iVar5 = 0x15555560;
        iVar7 = -0x15555560;
        iVar13 = (int)((float)iVar13 * 0.35);
        if (iVar13 < 1) {
          iVar5 = -0x5b05b0;
        }
        else {
          iVar7 = 0x5b05b0;
        }
        iVar1 = iVar13;
        if (iVar5 <= iVar13) {
          iVar1 = iVar5;
        }
        if (iVar7 <= iVar13) {
          iVar7 = iVar1;
        }
        iVar7 = iVar7 + *(int *)(lVar15 + 4);
      }
      *(int *)(lVar15 + 4) = iVar7;
    }
  }
  if (*(char *)(param_1 + 0x64d) != '\0') {
    uVar6 = (**(code **)(*(long *)(param_1 + 0x638) + (ulong)*(byte *)(param_1 + 0x64c) * 8))
                      (param_1 + 0x638);
    *(undefined4 *)(param_1 + 0x640) = uVar6;
  }
  return;
}

