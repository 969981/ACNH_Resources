
void FUN_014f2510(undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
                 long *param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  byte bVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_4478;
  float local_4470;
  float fStack_446c;
  float local_4468;
  undefined8 local_4464;
  float local_2298;
  float local_2294;
  float local_2290;
  undefined8 uStack_228c;
  undefined4 local_2284;
  byte bStack_2280;
  undefined8 local_2278;
  undefined4 local_2270;
  undefined8 local_2268;
  undefined1 *local_2260;
  long **local_2258;
  long **local_2250;
  long *local_2248 [5];
  long alStack_2220 [890];
  undefined8 local_650;
  undefined1 auStack_628 [1448];
  
  lVar16 = param_4 + 0x268;
  if (*(long *)(param_4 + 0x270) != lVar16) {
    lVar14 = (long)*(int *)(param_4 + 0x27c);
    lVar12 = *(long *)(param_4 + 0x270) - lVar14;
    lVar17 = -lVar14;
    puVar1 = PTR_DAT_04bbbc20 + 0x10;
    lVar18 = lVar16 - lVar14;
    lVar9 = lVar12;
    do {
      local_4464 = 0;
      param_2 = (*(float *)(lVar9 + 0x4c) - *(float *)(param_4 + 0xc)) + *(float *)(param_5 + 0xc);
      local_4470 = (*(float *)(lVar9 + 0x48) - *(float *)(param_4 + 8)) + *(float *)(param_5 + 8);
      param_3 = (*(float *)(lVar9 + 0x50) - *(float *)(param_4 + 0x10)) + *(float *)(param_5 + 0x10)
      ;
      if (*(uint *)(param_5 + 0x18) < 8) {
        uVar3 = 1 << (ulong)(*(uint *)(param_5 + 0x18) & 0x1f);
        if ((uVar3 & 0x3c) == 0) {
          if ((uVar3 & 0x43) == 0) {
            uVar3 = *(uint *)(lVar9 + 0x34);
            iVar6 = 7;
          }
          else {
            uVar3 = *(uint *)(lVar9 + 0x34);
            iVar6 = *(int *)(lVar9 + 0x38);
          }
        }
        else {
          iVar6 = *(int *)(param_5 + 0x18);
          uVar3 = iVar6 << 0x1e ^ 0x80000000;
        }
        local_4464 = CONCAT44(iVar6,uVar3);
      }
      local_4478 = puVar1;
      fStack_446c = param_2;
      local_4468 = param_3;
      uVar8 = FUN_014ea4c0(lVar9,(long)&local_4464 + 4,&local_4478);
      if ((uVar8 & 1) == 0) goto LAB_014f2670;
      lVar9 = *(long *)(lVar9 + lVar14 + 8) + lVar17;
    } while (lVar9 != lVar18);
    puVar1 = PTR_DAT_04bbbc20 + 0x10;
    do {
      local_4464 = 0;
      param_2 = (*(float *)(lVar12 + 0x4c) - *(float *)(param_4 + 0xc)) + *(float *)(param_5 + 0xc);
      local_4470 = (*(float *)(lVar12 + 0x48) - *(float *)(param_4 + 8)) + *(float *)(param_5 + 8);
      param_3 = (*(float *)(lVar12 + 0x50) - *(float *)(param_4 + 0x10)) +
                *(float *)(param_5 + 0x10);
      if (*(uint *)(param_5 + 0x18) < 8) {
        uVar3 = 1 << (ulong)(*(uint *)(param_5 + 0x18) & 0x1f);
        if ((uVar3 & 0x3c) == 0) {
          if ((uVar3 & 0x43) == 0) {
            uVar3 = *(uint *)(lVar12 + 0x34);
            iVar6 = 7;
          }
          else {
            uVar3 = *(uint *)(lVar12 + 0x34);
            iVar6 = *(int *)(lVar12 + 0x38);
          }
        }
        else {
          iVar6 = *(int *)(param_5 + 0x18);
          uVar3 = iVar6 << 0x1e ^ 0x80000000;
        }
        local_4464 = CONCAT44(iVar6,uVar3);
      }
      local_4478 = puVar1;
      fStack_446c = param_2;
      local_4468 = param_3;
      uVar8 = FUN_014ea4c0(lVar12,(long)&local_4464 + 4,&local_4478);
      if ((uVar8 & 1) == 0) {
        FUN_014ea1d0(lVar12,lVar12 + 0x20);
      }
      else {
        FUN_014ebb40(lVar12,&local_4478,0);
      }
      *(undefined1 *)(lVar12 + 0x74) = 0;
      lVar12 = *(long *)(lVar12 + lVar14 + 8) + lVar17;
    } while (lVar12 != lVar18);
  }
LAB_014f2690:
  lVar9 = 0xb2;
  local_2260 = (undefined1 *)0x0;
  local_2268 = 0;
  local_2258 = local_2248;
  local_2248[0] = alStack_2220;
  plVar15 = local_2248[0];
  do {
    lVar9 = lVar9 + -2;
    *plVar15 = (long)(plVar15 + 5);
    plVar15[5] = (long)(plVar15 + 10);
    plVar15 = plVar15 + 10;
  } while (lVar9 != 0);
  local_650 = 0;
  if (auStack_628 != (undefined1 *)0x0) {
    local_2268 = 0xb400000000;
    local_2260 = auStack_628;
  }
  iVar6 = *(int *)(param_4 + 0x27c);
  lVar14 = (long)iVar6;
  lVar17 = -lVar14;
  lVar9 = *(long *)(param_4 + 0x270) - lVar14;
  lVar12 = lVar16 - lVar14;
  local_2250 = local_2258;
  if (*(long *)(param_4 + 0x270) != lVar16) {
    do {
      FUN_014bbff0(&local_2268,lVar9);
      lVar9 = *(long *)(lVar9 + lVar14 + 8) + lVar17;
    } while (lVar9 != lVar12);
    iVar6 = *(int *)(param_4 + 0x27c);
    lVar12 = (long)iVar6;
    lVar17 = -lVar12;
    lVar9 = *(long *)(param_4 + 0x270) - lVar12;
    lVar12 = lVar16 - lVar12;
  }
  if (lVar9 == lVar12) {
    fVar21 = 0.0;
    fVar22 = 0.0;
    bVar13 = 0;
    fVar20 = 0.0;
  }
  else {
    fVar20 = 0.0;
    fVar22 = 0.0;
    bVar13 = 0;
    fVar21 = 0.0;
    do {
      fVar19 = (float)FUN_014e8b30(lVar9);
      fVar21 = fVar21 + fVar19;
      fVar22 = fVar22 + param_2;
      fVar20 = fVar20 + param_3;
      bVar5 = FUN_014efd60(lVar9);
      bVar13 = bVar5 | bVar13;
      lVar9 = lVar17 + *(long *)(lVar9 + iVar6 + 8);
    } while (lVar12 != lVar9);
  }
  iVar7 = *(int *)(param_4 + 0x278);
  iVar6 = iVar7;
  if (iVar7 < 2) {
    iVar6 = 1;
  }
  fVar19 = 1.0 / (float)iVar6;
  local_2278 = *(undefined8 *)(param_5 + 8);
  local_2270 = *(undefined4 *)(param_5 + 0x10);
  if (0 < iVar7) {
    iVar6 = FUN_014eb660(*(long *)(param_4 + 0x270) - (long)*(int *)(param_4 + 0x27c));
    local_4478 = (undefined *)CONCAT44(local_4478._4_4_,iVar6);
    if (iVar6 - 2U < 4) {
      lVar9 = *(long *)PTR_DAT_04bb2720;
      if (lVar9 == 0) {
        puVar11 = &DAT_055c04a0;
      }
      else {
        puVar11 = &DAT_055c04a0;
        if (*(long *)(lVar9 + 0x330) != 0) {
          puVar11 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
          iVar7 = FUN_006bd550(*puVar11,0);
          puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar7 != 0x758f7eaf) {
            puVar11 = &DAT_055c04a0;
          }
        }
      }
      FUN_0153e6b0(&local_2278,iVar6,*(undefined4 *)(puVar11 + 7));
    }
  }
  FUN_014e2eb0(&local_4478,&local_2268);
  uStack_228c = *(undefined8 *)(param_5 + 8);
  local_2284 = *(undefined4 *)(param_5 + 0x10);
  local_2298 = fVar21 * fVar19;
  local_2294 = fVar22 * fVar19;
  local_2290 = fVar20 * fVar19;
  bStack_2280 = bVar13;
  FUN_014bb6d0(&local_4478);
  uVar8 = (**(code **)(*param_6 + 0x10))(param_6);
  if (((uVar8 & 1) != 0) && (*(long *)(param_4 + 0x270) != lVar16)) {
    lVar12 = (long)*(int *)(param_4 + 0x27c);
    lVar9 = *(long *)(param_4 + 0x270) - lVar12;
    do {
      (**(code **)*param_6)(param_6,lVar9);
      lVar9 = *(long *)(lVar9 + lVar12 + 8) - lVar12;
    } while (lVar9 != lVar16 - lVar12);
  }
  puVar4 = PTR_DAT_04bb3238;
  puVar1 = PTR_DAT_04bbcf08 + 0x10;
  while( true ) {
    nn::os::LockMutex((MutexType *)(param_4 + 0x2a0));
    if (*(int *)(param_4 + 0x278) < 1) {
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = *(long **)(param_4 + 0x270);
      if (*plVar15 != 0) {
        *(long *)(*plVar15 + 8) = plVar15[1];
      }
      if ((long *)plVar15[1] != (long *)0x0) {
        *(long *)plVar15[1] = *plVar15;
      }
      *plVar15 = 0;
      plVar15[1] = 0;
      *(int *)(param_4 + 0x278) = *(int *)(param_4 + 0x278) + -1;
    }
    iVar6 = *(int *)(param_4 + 0x27c);
    nn::os::UnlockMutex((MutexType *)(param_4 + 0x2a0));
    if ((plVar15 == (long *)0x0) || (lVar16 = (long)plVar15 - (long)iVar6, lVar16 == 0)) break;
    *(undefined4 *)(lVar16 + 0x18) = 0;
    *(undefined4 *)(lVar16 + 0x38) = 0;
    local_4478 = (undefined *)0xfffe;
    *(undefined8 *)(lVar16 + 0x28) = 0;
    *(undefined8 *)(lVar16 + 0x30) = 0;
    FUN_0277d4ac(&local_4478);
    uVar2 = *(undefined4 *)puVar4;
    *(undefined1 *)(lVar16 + 0x88) = 0;
    *(undefined8 *)(lVar16 + 0x68) = 0;
    *(undefined8 *)(lVar16 + 0x6d) = 0;
    local_4470 = 0.0;
    *(undefined4 *)(lVar16 + 0x60) = (undefined4)local_4478;
    *(undefined4 *)(lVar16 + 100) = local_4478._4_4_;
    *(undefined4 *)(lVar16 + 0x8c) = uVar2;
    local_4478 = puVar1;
    FUN_014ba7d4(lVar16 + 0x90,&local_4478);
    if (0 < *(int *)(lVar16 + 0xe8)) {
      lVar9 = 0;
      puVar11 = *(undefined8 **)(lVar16 + 0xf8);
      do {
        puVar10 = *(undefined8 **)(*(long *)(lVar16 + 0xf0) + lVar9 * 8);
        lVar9 = lVar9 + 1;
        *puVar10 = puVar11;
        *(undefined8 **)(lVar16 + 0xf8) = puVar10;
        puVar11 = puVar10;
      } while (lVar9 < *(int *)(lVar16 + 0xe8));
    }
    *(undefined4 *)(lVar16 + 0xe8) = 0;
    nn::os::LockMutex((MutexType *)(param_4 + 0x248));
    plVar15 = (long *)(lVar16 + *(int *)(param_4 + 0x224));
    lVar16 = *(long *)(param_4 + 0x210);
    *(long **)(param_4 + 0x210) = plVar15;
    *plVar15 = lVar16;
    plVar15[1] = param_4 + 0x210;
    if (lVar16 != 0) {
      *(long **)(lVar16 + 8) = plVar15;
    }
    *(int *)(param_4 + 0x220) = *(int *)(param_4 + 0x220) + 1;
    nn::os::UnlockMutex((MutexType *)(param_4 + 0x248));
  }
  return;
LAB_014f2670:
  do {
    FUN_014ea1d0(lVar12,lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + lVar14 + 8) + lVar17;
  } while (lVar12 != lVar18);
  goto LAB_014f2690;
}

