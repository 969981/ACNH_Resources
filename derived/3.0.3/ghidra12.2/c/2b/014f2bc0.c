
void FUN_014f2bc0(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_4470;
  undefined4 local_4468;
  float local_2290;
  float local_228c;
  float local_2288;
  undefined8 uStack_2284;
  undefined4 local_227c;
  byte bStack_2278;
  undefined8 local_2270;
  undefined4 local_2268;
  undefined8 local_2260;
  undefined1 *local_2258;
  long **local_2250;
  long **local_2248;
  long *local_2240 [5];
  long alStack_2218 [890];
  undefined8 local_648;
  undefined1 auStack_620 [1440];
  
  lVar7 = param_4 + 0x268;
  if (*(long *)(param_4 + 0x270) != lVar7) {
    lVar11 = (long)*(int *)(param_4 + 0x27c);
    lVar9 = *(long *)(param_4 + 0x270) - lVar11;
    do {
      FUN_014ea1d0(lVar9,lVar9 + 0x20);
      *(undefined1 *)(lVar9 + 0x74) = 0;
      lVar9 = *(long *)(lVar9 + lVar11 + 8) - lVar11;
    } while (lVar9 != lVar7 - lVar11);
  }
  lVar9 = 0xb2;
  local_2258 = (undefined1 *)0x0;
  local_2260 = 0;
  local_2250 = local_2240;
  local_2240[0] = alStack_2218;
  plVar15 = local_2240[0];
  do {
    lVar9 = lVar9 + -2;
    *plVar15 = (long)(plVar15 + 5);
    plVar15[5] = (long)(plVar15 + 10);
    plVar15 = plVar15 + 10;
  } while (lVar9 != 0);
  local_648 = 0;
  if (auStack_620 != (undefined1 *)0x0) {
    local_2260 = 0xb400000000;
    local_2258 = auStack_620;
  }
  iVar5 = *(int *)(param_4 + 0x27c);
  lVar14 = (long)iVar5;
  lVar12 = -lVar14;
  lVar9 = *(long *)(param_4 + 0x270) - lVar14;
  lVar11 = lVar7 - lVar14;
  local_2248 = local_2250;
  if (*(long *)(param_4 + 0x270) != lVar7) {
    do {
      FUN_014bbff0(&local_2260,lVar9);
      lVar9 = *(long *)(lVar9 + lVar14 + 8) + lVar12;
    } while (lVar9 != lVar11);
    iVar5 = *(int *)(param_4 + 0x27c);
    lVar11 = (long)iVar5;
    lVar12 = -lVar11;
    lVar9 = *(long *)(param_4 + 0x270) - lVar11;
    lVar11 = lVar7 - lVar11;
  }
  if (lVar9 == lVar11) {
    fVar18 = 0.0;
    fVar19 = 0.0;
    bVar10 = 0;
    fVar17 = 0.0;
  }
  else {
    fVar17 = 0.0;
    fVar19 = 0.0;
    bVar10 = 0;
    fVar18 = 0.0;
    do {
      fVar16 = (float)FUN_014e8b30(lVar9);
      fVar18 = fVar18 + fVar16;
      fVar19 = fVar19 + param_2;
      fVar17 = fVar17 + param_3;
      bVar4 = FUN_014efd60(lVar9);
      bVar10 = bVar4 | bVar10;
      lVar9 = lVar12 + *(long *)(lVar9 + iVar5 + 8);
    } while (lVar11 != lVar9);
  }
  iVar6 = *(int *)(param_4 + 0x278);
  iVar5 = iVar6;
  if (iVar6 < 2) {
    iVar5 = 1;
  }
  fVar16 = 1.0 / (float)iVar5;
  local_2270 = *(undefined8 *)(param_4 + 8);
  local_2268 = *(undefined4 *)(param_4 + 0x10);
  if (0 < iVar6) {
    iVar5 = FUN_014eb660(*(long *)(param_4 + 0x270) - (long)*(int *)(param_4 + 0x27c));
    local_4470 = (undefined *)CONCAT44(local_4470._4_4_,iVar5);
    if (iVar5 - 2U < 4) {
      lVar7 = *(long *)PTR_DAT_04bb2720;
      if (lVar7 == 0) {
        puVar13 = &DAT_055c04a0;
      }
      else {
        puVar13 = &DAT_055c04a0;
        if (*(long *)(lVar7 + 0x330) != 0) {
          puVar13 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
          iVar6 = FUN_006bd550(*puVar13,0);
          puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar6 != 0x758f7eaf) {
            puVar13 = &DAT_055c04a0;
          }
        }
      }
      FUN_0153e6b0(&local_2270,iVar5,*(undefined4 *)(puVar13 + 7));
    }
  }
  FUN_014e2eb0(&local_4470,&local_2260);
  uStack_2284 = *(undefined8 *)(param_4 + 8);
  local_227c = *(undefined4 *)(param_4 + 0x10);
  local_2290 = fVar18 * fVar16;
  local_228c = fVar19 * fVar16;
  local_2288 = fVar17 * fVar16;
  bStack_2278 = bVar10;
  FUN_014bb6d0(&local_4470);
  puVar3 = PTR_DAT_04bb3238;
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
    iVar5 = *(int *)(param_4 + 0x27c);
    nn::os::UnlockMutex((MutexType *)(param_4 + 0x2a0));
    if ((plVar15 == (long *)0x0) || (lVar7 = (long)plVar15 - (long)iVar5, lVar7 == 0)) break;
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(undefined4 *)(lVar7 + 0x38) = 0;
    local_4470 = (undefined *)0xfffe;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x30) = 0;
    FUN_0277d4ac(&local_4470);
    uVar2 = *(undefined4 *)puVar3;
    *(undefined1 *)(lVar7 + 0x88) = 0;
    *(undefined8 *)(lVar7 + 0x68) = 0;
    *(undefined8 *)(lVar7 + 0x6d) = 0;
    local_4468 = 0;
    *(undefined4 *)(lVar7 + 0x60) = (undefined4)local_4470;
    *(undefined4 *)(lVar7 + 100) = local_4470._4_4_;
    *(undefined4 *)(lVar7 + 0x8c) = uVar2;
    local_4470 = puVar1;
    FUN_014ba7d4(lVar7 + 0x90,&local_4470);
    if (0 < *(int *)(lVar7 + 0xe8)) {
      lVar9 = 0;
      puVar13 = *(undefined8 **)(lVar7 + 0xf8);
      do {
        puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0xf0) + lVar9 * 8);
        lVar9 = lVar9 + 1;
        *puVar8 = puVar13;
        *(undefined8 **)(lVar7 + 0xf8) = puVar8;
        puVar13 = puVar8;
      } while (lVar9 < *(int *)(lVar7 + 0xe8));
    }
    *(undefined4 *)(lVar7 + 0xe8) = 0;
    nn::os::LockMutex((MutexType *)(param_4 + 0x248));
    plVar15 = (long *)(lVar7 + *(int *)(param_4 + 0x224));
    lVar7 = *(long *)(param_4 + 0x210);
    *(long **)(param_4 + 0x210) = plVar15;
    *plVar15 = lVar7;
    plVar15[1] = param_4 + 0x210;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar15;
    }
    *(int *)(param_4 + 0x220) = *(int *)(param_4 + 0x220) + 1;
    nn::os::UnlockMutex((MutexType *)(param_4 + 0x248));
  }
  return;
}

