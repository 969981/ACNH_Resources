
void FUN_0236af00(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  float *pfVar12;
  uint uVar13;
  long lVar14;
  byte bVar15;
  undefined8 *puVar16;
  uint *puVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined2 local_94;
  undefined2 local_92;
  undefined4 local_90;
  byte local_8c [4];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  undefined8 local_68;
  
  puVar5 = PTR_DAT_04bb4718;
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar17 = &DAT_054f08c0;
      if (iVar8 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar17 = &DAT_054f08c0;
    }
  }
  else {
    puVar17 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x1fc);
  }
  local_74 = 2;
  if (((*puVar17 >> 2 & 1) != 0) && (uVar9 = FUN_0253da50(param_1 + 0x1ee8), (uVar9 & 1) != 0)) {
    FUN_02472404(0,param_1);
    puVar16 = *(undefined8 **)(param_1 + 0x60);
    if (puVar16 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar16 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar16 = &DAT_05240280;
      }
    }
    FUN_01711960(puVar16,0,0);
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar16 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar16 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar9 = FUN_016ec07c(0,puVar16 + 0x4f,1);
    if ((uVar9 & 1) == 0) goto LAB_0236b14c;
    if ((*(int *)(param_1 + 0x178) == 0) && (*(int *)(param_1 + 0x1810) == 1)) {
      plVar10 = *(long **)(param_1 + 0x68);
      (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x4f,1);
      *(undefined8 *)(param_1 + 0x1820) = 0;
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfff7ffff;
      *(undefined8 *)(param_1 + 0x1844) = 0;
    }
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined2 *)(param_1 + 0x1980) = 0x601;
    local_74 = 0xf6;
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
    lVar11 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar11 = *(long *)(param_1 + 0x70) + 0x278;
    }
LAB_0236b140:
    FUN_03ebb160(lVar11,local_74);
  }
  else {
LAB_0236b14c:
    puVar16 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar16 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar18 = FUN_0231eef4(param_1,puVar16 + 0x4f,0);
    puVar16 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar16 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(undefined4 *)((long)puVar16 + 0x27c) = uVar18;
    uVar7 = *(uint *)(param_1 + 0x17cc);
    *(uint *)(param_1 + 0x17cc) = uVar7 & 0xfffffffe;
    if ((uVar7 & 1) == 0) {
      if ((*(uint *)(param_1 + 0x17d0) >> 0x18 & 1) != 0) {
        *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfeffffff;
        FUN_0231ade8(param_1,6);
        return;
      }
    }
    else {
      FUN_0231ade8(param_1,6);
    }
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    uVar7 = FUN_0231fa2c(param_1);
    pfVar12 = (float *)PTR_DAT_04bc3038;
    if (*(char *)(param_1 + 0x12f8) != '\0') {
      pfVar12 = (float *)(param_1 + 0xeec);
    }
    fVar21 = SQRT(pfVar12[1] * pfVar12[1] + *pfVar12 * *pfVar12);
    lVar11 = FUN_0251e98c(1);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
    puVar4 = PTR_DAT_04bb39b0;
    if (*pfVar12 <= fVar21) {
      lVar11 = FUN_0251e98c(1);
      pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
      fVar19 = *pfVar12;
      lVar11 = FUN_0251e98c(1);
      pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
      fVar19 = (fVar21 - *pfVar12) / (1.0 - fVar19);
      fVar21 = 0.9999;
      if (fVar19 <= 0.9999) {
        fVar21 = fVar19;
      }
      fVar20 = 0.0;
      if (0.0 <= fVar19) {
        fVar20 = fVar21;
      }
      if (0.0 < fVar20 && *(int *)(param_1 + 0x2244) == 0) {
        lVar11 = *(long *)puVar4;
        if ((lVar11 == 0) || (*(int *)(lVar11 + 0x15c) == 0)) {
LAB_0236b63c:
          local_74 = *(undefined4 *)(param_1 + 0x230);
          bVar6 = FUN_016f75d8(&local_74);
          if (((bVar6 & PTR_DAT_04bbde78[0xb] != '\0') != 0) || (((uVar7 ^ 1) & 1) != 0))
          goto LAB_0236b2bc;
        }
        else {
          pbVar2 = PTR_DAT_04bb32e0;
          if (*(int *)(lVar11 + 0x15c) != 0) {
            pbVar2 = (byte *)(lVar11 + 0x158);
          }
          bVar15 = *pbVar1;
          bVar6 = *pbVar2;
          if (7 < bVar6) {
            bVar6 = 0xff;
          }
          if (7 < bVar15) {
            bVar15 = 0xff;
          }
          if (bVar6 == bVar15) goto LAB_0236b63c;
          if ((uVar7 & 1) == 0) goto LAB_0236b2bc;
        }
        local_88 = CONCAT44(local_88._4_4_,0xc);
        lVar14 = *(long *)(param_1 + 0x70);
        uVar7 = 0;
        lVar11 = 0;
        if (lVar14 != 0) {
          uVar7 = 0;
          if (*(uint *)(lVar14 + 0x280) < 0x149) {
            uVar7 = *(uint *)(lVar14 + 0x280);
          }
          lVar11 = lVar14 + 0x278;
        }
        if (uVar7 == 0xc) {
          return;
        }
        local_74 = 0xc;
        *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
        *(undefined8 *)(param_1 + 0x18c0) = 0;
        *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
        *(undefined8 *)(param_1 + 0x18c8) = 0;
        *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
        *(undefined8 *)(param_1 + 0x18d0) = 0;
        *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
        *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
        *(undefined8 *)(param_1 + 0x18a0) = 0;
        *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
        *(undefined8 *)(param_1 + 0x18a8) = 0;
        *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
        *(undefined8 *)(param_1 + 0x18b0) = 0;
        *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
        *(undefined8 *)(param_1 + 0x18b8) = 0;
        *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
        *(undefined8 *)(param_1 + 0x1880) = 0;
        *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
        *(undefined8 *)(param_1 + 0x1888) = 0;
        *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
        *(undefined8 *)(param_1 + 0x1890) = 0;
        *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
        *(undefined8 *)(param_1 + 0x1898) = 0;
        *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
        *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
        goto LAB_0236b140;
      }
    }
LAB_0236b2bc:
    if ((((*(long *)puVar5 == 0) || (7 < (ulong)*pbVar1)) ||
        (*(int *)(*(long *)puVar5 + (ulong)*pbVar1 * 8 + 0xf04) == 0)) &&
       (4 < *(uint *)(param_1 + 0x1c04) && ((uVar7 ^ 0xffffffff) & 1) == 0)) {
      puVar16 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar16 = *(undefined8 **)(param_1 + 0x4c8);
      }
      if (((*(int *)(param_1 + 0x1e94) != *(int *)((long)puVar16 + 0x2b4)) ||
          ((*pbVar1 < 8 &&
           ((*(uint *)(*(long *)PTR_DAT_04bb2118 + 0x508) & 7) == (int)(char)*pbVar1)))) ||
         (fVar21 = *(float *)(param_1 + 0x1e88) - *(float *)(puVar16 + 0x4f),
         fVar19 = *(float *)(param_1 + 0x1e90) - *(float *)(puVar16 + 0x50),
         0.01 < SQRT(fVar19 * fVar19 + fVar21 * fVar21))) {
        *(undefined4 *)(param_1 + 0x1e88) = *(undefined4 *)(puVar16 + 0x4f);
        *(undefined4 *)(param_1 + 0x1e8c) = *(undefined4 *)((long)puVar16 + 0x27c);
        *(undefined4 *)(param_1 + 0x1e90) = *(undefined4 *)(puVar16 + 0x50);
        *(undefined4 *)(param_1 + 0x1e94) = *(undefined4 *)((long)puVar16 + 0x2b4);
        local_68 = 0xfffe;
        FUN_0277d4ac(&local_68);
        if (((*(char *)(param_1 + 0x2264) == '\0') || (uVar7 = FUN_02677c70(pbVar1), uVar7 < 0x28))
           && ((uVar9 = FUN_02426e2c(param_1,1,&local_68,&local_74,1), (uVar9 & 1) != 0 &&
               (uVar9 = FUN_0277e158(&local_68), (uVar9 & 1) != 0)))) {
          local_70 = local_70 + 3.75;
          *(undefined2 *)(param_1 + 0x1e98) = (undefined2)local_68;
          *(undefined4 *)(param_1 + 0x1ea8) = local_74;
          *(undefined2 *)(param_1 + 0x1e9a) = local_68._2_2_;
          *(float *)(param_1 + 0x1eac) = local_70;
          *(undefined4 *)(param_1 + 0x1e9c) = local_68._4_4_;
          *(undefined1 *)(param_1 + 0x1eb4) = 1;
          *(undefined4 *)(param_1 + 0x1eb0) = local_6c;
        }
        local_7c = 0xfffe;
        FUN_0277d4ac(&local_7c);
        local_80 = 0;
        local_88 = 0;
        if ((*(char *)(param_1 + 0x2264) == '\0') &&
           (uVar9 = FUN_02433418(param_1,&local_7c,&local_88), (uVar9 & 1) != 0)) {
          *(undefined2 *)(param_1 + 0x1ea0) = (undefined2)local_7c;
          *(undefined2 *)(param_1 + 0x1ea2) = local_7c._2_2_;
          *(undefined4 *)(param_1 + 0x1ea4) = local_7c._4_4_;
          *(undefined4 *)(param_1 + 0x1eb0) = local_80;
          *(undefined8 *)(param_1 + 0x1ea8) = local_88;
          *(undefined1 *)(param_1 + 0x1eb4) = 1;
        }
      }
    }
    if ((*(short *)(param_1 + 0x1e98) == -2) && (*(short *)(param_1 + 0x1ea0) == -2)) {
      if (*(long *)(param_1 + 0x60) == 0) {
        return;
      }
      FUN_0172fad0(*(long *)(param_1 + 0x60) + 0x12c0,param_1,PTR_DAT_04bbe070,PTR_DAT_04bbe078,
                   PTR_DAT_04bb6928);
      lVar11 = *(long *)(param_1 + 0x60);
    }
    else {
      local_8c[0] = *pbVar1;
      if (7 < local_8c[0]) {
        local_8c[0] = 0xff;
      }
      uVar7 = FUN_02426c14(param_1,param_1 + 0x1e98);
      if (*(char *)(param_1 + 0x17ac) == '\0') {
        local_74 = 3;
        uVar13 = *(uint *)(param_1 + 0xed0) >> 3 & 1;
      }
      else {
        uVar13 = 0;
      }
      local_94 = *(undefined2 *)(param_1 + 0x1ea0);
      local_92 = *(undefined2 *)(param_1 + 0x1ea2);
      local_90 = *(undefined4 *)(param_1 + 0x1ea4);
      FUN_02f06bf4(param_1 + 0x1e98,local_8c,uVar7 & 1,uVar13,&local_94);
      cVar3 = *(char *)(param_1 + 0x1eb4);
      if (*(long *)(param_1 + 0x60) != 0) {
        FUN_0172fad0(*(long *)(param_1 + 0x60) + 0x12c0,param_1,PTR_DAT_04bbe070,PTR_DAT_04bbe078,
                     PTR_DAT_04bb6928);
      }
      lVar11 = *(long *)(param_1 + 0x60);
      if (cVar3 != '\0') {
        if (lVar11 == 0) {
          return;
        }
        FUN_01730cb4(lVar11 + 0x12c0,param_1 + 0x1ea8);
        return;
      }
    }
    if (lVar11 != 0) {
      *(undefined4 *)(lVar11 + 0x12d0) = 0;
      *(undefined1 *)(lVar11 + 0x142d) = 0;
      **(undefined1 **)(lVar11 + 0x12e0) = 0;
      *(undefined4 *)(lVar11 + 0x1330) = 0xffffffff;
      *(undefined4 *)(lVar11 + 0x1428) = 0;
      *(undefined8 *)(lVar11 + 0x1334) = 0;
      *(undefined8 *)(lVar11 + 0x133c) = 0;
      *(undefined4 *)(lVar11 + 0x1344) = 0;
    }
  }
  return;
}

