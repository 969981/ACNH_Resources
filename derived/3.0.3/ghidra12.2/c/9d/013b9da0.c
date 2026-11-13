
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013b9da0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  short *psVar13;
  long *plVar14;
  uint uVar15;
  byte *pbVar16;
  long lVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  byte local_80 [4];
  undefined4 local_7c [3];
  char local_68 [4];
  char local_64 [4];
  
  puVar5 = PTR_DAT_04bb27d0;
  puVar4 = PTR_DAT_04bb27c0;
  if (((1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) &&
      (uVar15 = *(uint *)(*(long *)(param_1 + 0x48) + 0x230), uVar15 != 0)) &&
     (lVar12 = *(long *)PTR_DAT_04bb27c0, lVar12 != 0)) {
    plVar14 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                        ((ulong)(uVar15 >> 0x11) & 0x7ff8));
    if (((plVar14 == (long *)0x0) || ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar14 + 0x46) != uVar15)) {
      plVar14 = (long *)0x0;
    }
    if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
      plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar12 = *(long *)puVar4;
      iVar7 = (**(code **)(*plVar8 + 0x60))();
      if (iVar7 < 0x11) {
        uVar15 = 1;
      }
      else {
        if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_013b9e8c;
        uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_013b9e8c:
      uVar15 = 0;
    }
    if (plVar14 != (long *)0x0) {
      lVar12 = plVar14[0x2a];
      if (((*PTR_DAT_04bbc7b8 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbc7b8), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bbc7b0 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbc7b8);
      }
      uVar9 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bbc7b0);
      uVar2 = 0;
      if ((int)lVar12 == 1) {
        uVar2 = uVar15;
      }
      if (((((uVar9 & 1) != 0) && (uVar2 != 0)) && (1 < *(byte *)(**(long **)puVar5 + 0x476))) &&
         (local_7c[0] = 6, (*(byte *)((long)plVar14 + 0x274) & 0x40) != 0)) {
        return;
      }
    }
  }
  uVar9 = FUN_013b77f4(param_1);
  if ((((uVar9 & 1) != 0) && (*(uint *)(param_1 + 0x280) < 0xb)) &&
     ((1 << (ulong)(*(uint *)(param_1 + 0x280) & 0x1f) & 0x640U) != 0)) {
    uVar18 = 0x420e0000;
    if (*(int *)(param_1 + 0x460) != 1) {
      uVar18 = 0x41cc0000;
    }
    uVar9 = FUN_0098d8b0(uVar18,param_1 + 0x38c);
    if ((uVar9 & 1) != 0) {
      local_64[0] = '\0';
      FUN_013b7618(param_1,local_7c,local_64);
      if (local_64[0] != '\0') {
        uVar9 = FUN_013b77f4(param_1);
        if ((uVar9 & 1) == 0) {
          return;
        }
        FUN_013b795c(param_1);
      }
      if (*(int *)(param_1 + 0x280) == 5) {
        return;
      }
      FUN_03ebb160(param_1 + 0x278,5);
      return;
    }
  }
  puVar5 = PTR_DAT_04bb5db8;
  puVar4 = PTR_DAT_04bb5db0;
  lVar12 = *(long *)(param_1 + 0x470);
  if (lVar12 == 0) {
    lVar12 = *(long *)(param_1 + 0x48);
    if (*(long *)(lVar12 + 0xb0) != lVar12 + 0xa8) {
      lVar17 = (long)*(int *)(lVar12 + 0xbc);
      plVar14 = (long *)(*(long *)(lVar12 + 0xb0) - lVar17);
      puVar1 = PTR_DAT_04bb2e38 + 0x10;
      do {
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          *(undefined **)puVar4 = puVar1;
          __cxa_guard_release(puVar5);
        }
        if ((plVar14 != (long *)0x0) &&
           (uVar9 = (**(code **)(*plVar14 + 0x10))(plVar14,puVar4), (uVar9 & 1) != 0))
        goto LAB_013ba3ec;
        plVar14 = (long *)(*(long *)((long)plVar14 + lVar17 + 8) - lVar17);
      } while (plVar14 != (long *)((lVar12 + 0xa8) - lVar17));
    }
    plVar14 = (long *)0x0;
LAB_013ba3ec:
    *(long **)(param_1 + 0x470) = plVar14;
    return;
  }
  if (*(float *)(lVar12 + 0x2b4) < *(float *)(lVar12 + 0x2b0)) {
    local_64[0] = '\0';
    FUN_013b7618(param_1,local_7c,local_64);
    if (local_64[0] != '\0') {
      uVar9 = FUN_013b77f4(param_1);
      if ((uVar9 & 1) == 0) goto LAB_013ba01c;
      FUN_013b795c(param_1);
    }
    if (*(int *)(param_1 + 0x280) != 5) {
      FUN_03ebb160(param_1 + 0x278,5);
    }
  }
LAB_013ba01c:
  fVar21 = 35.5;
  if (*(int *)(param_1 + 0x460) != 1) {
    fVar21 = 25.5;
  }
  FUN_02507c6c(local_7c,7,1,1,0);
  puVar5 = PTR_DAT_04bb5038;
  puVar4 = PTR_DAT_04bb4718;
  if (7 < (byte)local_7c[0]) {
    return;
  }
  local_80[0] = (byte)local_7c[0];
  do {
    pfVar10 = (float *)FUN_0251b3b0(local_7c,0);
    if ((pfVar10 != (float *)0x0) &&
       (fVar19 = *pfVar10 - *(float *)(param_1 + 0x38c),
       fVar20 = pfVar10[2] - *(float *)(param_1 + 0x394),
       SQRT(fVar20 * fVar20 + fVar19 * fVar19) <= fVar21)) {
      uVar9 = FUN_0252e560(local_80);
      if (((uVar9 & 1) == 0) && (uVar9 = FUN_0252e334(local_80), (uVar9 & 1) == 0)) {
        lVar12 = *(long *)puVar4;
        if ((lVar12 == 0) || (uVar9 = (ulong)local_80[0], 7 < uVar9)) {
          psVar13 = &DAT_054f0c08;
          cVar3 = DAT_054f0c6c;
          if ((DAT_054f0c70 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(&DAT_054f0c70);
            if (iVar7 != 0) {
              DAT_054f0c1c._0_4_ = 0;
              DAT_054f0c1c._4_4_ = 0;
              DAT_054f0c68 = 1;
              DAT_054f0c6c = '\0';
              DAT_054f0c24._0_4_ = 0;
              DAT_054f0c24._4_4_ = 0;
              DAT_054f0c2c._0_4_ = 0;
              DAT_054f0c2c._4_4_ = 0;
              _DAT_054f0c44 = 0;
              DAT_054f0c34._0_4_ = 0;
              DAT_054f0c34._4_4_ = 0;
              DAT_054f0c3c._0_4_ = 0;
              DAT_054f0c3c._4_4_ = 0;
              _DAT_054f0c08 = 0;
              _DAT_054f0c10 = 1;
              DAT_054f0c14._0_4_ = 0;
              DAT_054f0c14._4_4_ = 0;
              DAT_054f0c48 = 0;
              DAT_054f0c50 = 0;
              DAT_054f0c58 = 0;
              DAT_054f0c60 = 0;
              __cxa_guard_release(&DAT_054f0c70);
            }
            psVar13 = &DAT_054f0c08;
            cVar3 = DAT_054f0c6c;
          }
        }
        else {
          lVar12 = lVar12 + uVar9 * 0xd0 + (ulong)(*(uint *)(lVar12 + uVar9 * 4 + 0xd68) & 1) * 0x68
          ;
          psVar13 = (short *)(lVar12 + 0x6e8);
          cVar3 = *(char *)(lVar12 + 0x74c);
        }
        if (((((cVar3 == '\0') || (*psVar13 != *(short *)PTR_DAT_04bb6298)) ||
             (0x148 < *(uint *)(psVar13 + 2))) || (*(uint *)(psVar13 + 2) != 0xf9)) &&
           ((uVar9 = FUN_0252e78c(local_80), (uVar9 & 1) == 0 &&
            (uVar9 = FUN_0252e9b8(local_80), (uVar9 & 1) == 0)))) goto LAB_013ba1d0;
      }
      local_68[0] = '\0';
      FUN_013b7618(param_1,local_64,local_68);
      if (local_68[0] != '\0') {
        uVar9 = FUN_013b77f4(param_1);
        if ((uVar9 & 1) == 0) goto LAB_013ba1d0;
        FUN_013b795c(param_1);
      }
      if (*(int *)(param_1 + 0x280) != 5) {
        FUN_03ebb160(param_1 + 0x278,5);
      }
    }
LAB_013ba1d0:
    bVar6 = (byte)local_7c[0];
    uVar9 = (ulong)(byte)local_7c[0];
    if (7 < (byte)local_7c[0]) {
      return;
    }
    if (uVar9 + 1 == 8) {
      return;
    }
    pbVar16 = puVar5 + uVar9 + 1;
    uVar11 = FUN_02507924(local_7c,pbVar16);
    if ((uVar11 & 1) == 0) {
      if (uVar9 + 2 == 8) {
        return;
      }
      pbVar16 = puVar5 + uVar9 + 2;
      uVar11 = FUN_02507924(local_7c,pbVar16);
      if ((uVar11 & 1) == 0) {
        if (uVar9 + 3 == 8) {
          return;
        }
        pbVar16 = puVar5 + uVar9 + 3;
        uVar11 = FUN_02507924(local_7c,pbVar16);
        if ((uVar11 & 1) == 0) {
          if (uVar9 + 4 == 8) {
            return;
          }
          pbVar16 = puVar5 + uVar9 + 4;
          uVar11 = FUN_02507924(local_7c,pbVar16);
          if ((uVar11 & 1) == 0) {
            if (uVar9 + 5 == 8) {
              return;
            }
            pbVar16 = puVar5 + uVar9 + 5;
            uVar11 = FUN_02507924(local_7c,pbVar16);
            if ((uVar11 & 1) == 0) {
              if (uVar9 + 6 == 8) {
                return;
              }
              pbVar16 = puVar5 + uVar9 + 6;
              uVar11 = FUN_02507924(local_7c,pbVar16);
              if ((uVar11 & 1) == 0) {
                if (uVar9 + 7 == 8) {
                  return;
                }
                pbVar16 = puVar5 + uVar9 + 7;
                uVar11 = FUN_02507924(local_7c,pbVar16);
                if ((uVar11 & 1) == 0) {
                  if (bVar6 == 0) {
                    return;
                  }
                  pbVar16 = puVar5 + uVar9 + 8;
                  FUN_02507924(local_7c,pbVar16);
                }
              }
            }
          }
        }
      }
    }
    local_80[0] = *pbVar16;
    if (7 < local_80[0]) {
      return;
    }
    local_7c[0] = CONCAT31(local_7c[0]._1_3_,local_80[0]);
  } while( true );
}

