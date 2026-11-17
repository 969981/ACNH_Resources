
void FUN_03165fe0(long param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  int local_9c;
  undefined1 auStack_98 [3];
  char local_95;
  int local_94;
  undefined **local_90;
  int local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined8 local_7a;
  undefined4 local_70;
  undefined8 local_6c;
  byte local_64;
  
  lVar17 = *(long *)(*(long *)(param_1 + 0x210) + 0x588);
  if (lVar17 == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x1c1d8);
  uVar6 = *(uint *)(param_1 + 0x1c1f0);
  iVar10 = *piVar1;
  bVar5 = false;
  if (((int)uVar6 < 0) || (iVar10 <= (int)uVar6)) {
LAB_0316611c:
    if (*(long **)(param_1 + 0x1c2e8) == (long *)0x0) {
      iVar16 = 0;
    }
    else {
      piVar8 = (int *)(**(code **)(**(long **)(param_1 + 0x1c2e8) + 0x18))();
      iVar16 = *piVar8;
      uVar6 = *(uint *)(param_1 + 0x1c1f0);
      iVar10 = *piVar1;
    }
  }
  else {
    uVar12 = uVar6 + 1;
    lVar11 = param_1 + 0x1c1c8;
    uVar13 = uVar12 & 3;
    lVar14 = lVar11;
    if (2 < uVar6) {
      uVar15 = uVar12 & 0xfffffffc;
      do {
        uVar15 = uVar15 - 4;
        lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(lVar14 + 8) + 8) + 8) + 8);
      } while (uVar15 != 0);
    }
    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
      lVar14 = *(long *)(lVar14 + 8);
    }
    iVar16 = -1;
    if ((lVar14 != 0) && (lVar14 = lVar14 - *(int *)(param_1 + 0x1c1dc), lVar14 != 0)) {
      iVar16 = *(int *)(lVar14 + 0x270);
    }
    bVar5 = iVar16 == 0x6f;
    uVar13 = uVar12 & 3;
    if (2 < uVar6) {
      uVar12 = uVar12 & 0xfffffffc;
      do {
        uVar12 = uVar12 - 4;
        lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(lVar11 + 8) + 8) + 8) + 8);
      } while (uVar12 != 0);
    }
    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
      lVar11 = *(long *)(lVar11 + 8);
    }
    if (((lVar11 == 0) || (lVar11 = lVar11 - *(int *)(param_1 + 0x1c1dc), lVar11 == 0)) ||
       (*(int *)(lVar11 + 0x270) != 0x6f)) goto LAB_0316611c;
    iVar16 = **(int **)(param_1 + 0x1c308);
  }
  uVar12 = 0xffffffff;
  if ((-1 < (int)uVar6) && (uVar12 = 0xffffffff, (int)uVar6 < iVar10)) {
    lVar11 = param_1 + 0x1c1c8;
    uVar12 = uVar6 + 1 & 3;
    if (2 < uVar6) {
      uVar6 = uVar6 + 1 & 0xfffffffc;
      do {
        uVar6 = uVar6 - 4;
        lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(lVar11 + 8) + 8) + 8) + 8);
      } while (uVar6 != 0);
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      lVar11 = *(long *)(lVar11 + 8);
    }
    uVar12 = 0xffffffff;
    if ((lVar11 != 0) && (lVar11 = lVar11 - *(int *)(param_1 + 0x1c1dc), lVar11 != 0)) {
      uVar12 = *(uint *)(lVar11 + 0x270);
    }
  }
  local_70 = 0;
  local_7a = 0x100000101000001;
  local_6c = 0x60000000c;
  local_64 = *(byte *)(param_1 + 0x1f8);
  if ((uVar12 & 0xfffffffe) == 8) {
    iVar16 = iVar16 + 1;
  }
  local_84 = 0;
  local_7c = 0;
  local_90 = &PTR_LAB_04b2b020;
  if (7 < local_64) {
    local_64 = 0xff;
  }
  local_88 = iVar16;
  uVar7 = FUN_01810f30();
  lVar11 = FUN_033d0598(&DAT_0548e140);
  puVar4 = PTR_DAT_04bb43c0;
  lVar14 = 0x28c;
  if ((uVar7 & 1) == 0) {
    lVar14 = 0x1e4;
  }
  lVar11 = lVar11 + lVar14;
  if (bVar5) {
    uVar6 = *(uint *)(lVar11 + 0x9c);
    if ((param_2 & 1) != 0) goto LAB_03166254;
LAB_031664b4:
    local_9c = (int)*(char *)(lVar11 + 0xa6);
    if (DAT_056fc1c0 == local_9c) {
      lVar14 = 0;
    }
    else if (DAT_056fc230 == local_9c) {
      lVar14 = 1;
    }
    else if (DAT_056fc2a0 == local_9c) {
      lVar14 = 2;
    }
    else if (DAT_056fc310 == local_9c) {
      lVar14 = 3;
    }
    else if (DAT_056fc380 == local_9c) {
      lVar14 = 4;
    }
    else if (DAT_056fc3f0 == local_9c) {
      lVar14 = 5;
    }
    else if (DAT_056fc460 == local_9c) {
      lVar14 = 6;
    }
    else if (DAT_056fc4d0 == local_9c) {
      lVar14 = 7;
    }
    else if (DAT_056fc540 == local_9c) {
      lVar14 = 8;
    }
    else if (DAT_056fc5b0 == local_9c) {
      lVar14 = 9;
    }
    else if (DAT_056fc620 == local_9c) {
      lVar14 = 10;
    }
    else if (DAT_056fc690 == local_9c) {
      lVar14 = 0xb;
    }
    else {
      lVar14 = 0xc;
      if (DAT_056fc700 != local_9c) {
        lVar14 = 0;
      }
    }
    if ((int)uVar6 < 0) {
      uVar6 = 0;
      local_84._4_4_ = 0;
    }
    else {
      iVar10 = *(int *)(lVar11 + lVar14 * 4);
      local_84._4_4_ = uVar6;
      if (-1 < iVar10) {
        iVar16 = *(int *)(lVar17 + 0x2e8);
        iVar9 = 0;
        if (iVar16 != 0) {
          iVar9 = (int)uVar6 / iVar16;
        }
        uVar6 = iVar9 * iVar16 - iVar16 * iVar10;
        uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
      }
    }
  }
  else {
    local_9c = (int)*(char *)(lVar11 + 0xa6);
    if (DAT_056fc1c0 == local_9c) {
      lVar14 = 0;
    }
    else if (DAT_056fc230 == local_9c) {
      lVar14 = 1;
    }
    else if (DAT_056fc2a0 == local_9c) {
      lVar14 = 2;
    }
    else if (DAT_056fc310 == local_9c) {
      lVar14 = 3;
    }
    else if (DAT_056fc380 == local_9c) {
      lVar14 = 4;
    }
    else if (DAT_056fc3f0 == local_9c) {
      lVar14 = 5;
    }
    else if (DAT_056fc460 == local_9c) {
      lVar14 = 6;
    }
    else if (DAT_056fc4d0 == local_9c) {
      lVar14 = 7;
    }
    else if (DAT_056fc540 == local_9c) {
      lVar14 = 8;
    }
    else if (DAT_056fc5b0 == local_9c) {
      lVar14 = 9;
    }
    else if (DAT_056fc620 == local_9c) {
      lVar14 = 10;
    }
    else if (DAT_056fc690 == local_9c) {
      lVar14 = 0xb;
    }
    else {
      lVar14 = 0xc;
      if (DAT_056fc700 != local_9c) {
        lVar14 = 0;
      }
    }
    lVar18 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(lVar11 + 0x34 + lVar14 * 8);
    if (*(long *)puVar4 == 0) {
LAB_031664ac:
      uVar6 = 0xffffffff;
    }
    else {
      lVar14 = *(long *)(lVar18 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((*(uint *)(lVar14 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_031664ac;
      local_9c = (int)*(char *)(lVar11 + 0xa6);
      if (DAT_056fc1c0 == local_9c) {
        lVar14 = 0;
      }
      else if (DAT_056fc230 == local_9c) {
        lVar14 = 1;
      }
      else if (DAT_056fc2a0 == local_9c) {
        lVar14 = 2;
      }
      else if (DAT_056fc310 == local_9c) {
        lVar14 = 3;
      }
      else if (DAT_056fc380 == local_9c) {
        lVar14 = 4;
      }
      else if (DAT_056fc3f0 == local_9c) {
        lVar14 = 5;
      }
      else if (DAT_056fc460 == local_9c) {
        lVar14 = 6;
      }
      else if (DAT_056fc4d0 == local_9c) {
        lVar14 = 7;
      }
      else if (DAT_056fc540 == local_9c) {
        lVar14 = 8;
      }
      else if (DAT_056fc5b0 == local_9c) {
        lVar14 = 9;
      }
      else if (DAT_056fc620 == local_9c) {
        lVar14 = 10;
      }
      else if (DAT_056fc690 == local_9c) {
        lVar14 = 0xb;
      }
      else {
        lVar14 = 0xc;
        if (DAT_056fc700 != local_9c) {
          lVar14 = 0;
        }
      }
      uVar6 = *(uint *)(param_1 + 0x1c1f0);
      iVar10 = *piVar1;
      if (((int)uVar6 < 0) || (iVar10 <= (int)uVar6)) {
LAB_03166864:
        if (*(long **)(param_1 + 0x1c2e8) == (long *)0x0) {
          iVar9 = 0;
        }
        else {
          piVar8 = (int *)(**(code **)(**(long **)(param_1 + 0x1c2e8) + 0x18))();
          iVar9 = *piVar8;
          uVar6 = *(uint *)(param_1 + 0x1c1f0);
          iVar10 = *piVar1;
        }
      }
      else {
        lVar18 = param_1 + 0x1c1c8;
        uVar12 = uVar6 + 1 & 3;
        if (2 < uVar6) {
          uVar13 = uVar6 + 1 & 0xfffffffc;
          do {
            uVar13 = uVar13 - 4;
            lVar18 = *(long *)(*(long *)(*(long *)(*(long *)(lVar18 + 8) + 8) + 8) + 8);
          } while (uVar13 != 0);
        }
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          lVar18 = *(long *)(lVar18 + 8);
        }
        if (((lVar18 == 0) || (lVar18 = lVar18 - *(int *)(param_1 + 0x1c1dc), lVar18 == 0)) ||
           (*(int *)(lVar18 + 0x270) != 0x6f)) goto LAB_03166864;
        iVar9 = **(int **)(param_1 + 0x1c308);
      }
      uVar12 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < iVar10)) {
        lVar18 = param_1 + 0x1c1c8;
        uVar12 = uVar6 + 1 & 3;
        if (2 < uVar6) {
          uVar6 = uVar6 + 1 & 0xfffffffc;
          do {
            uVar6 = uVar6 - 4;
            lVar18 = *(long *)(*(long *)(*(long *)(*(long *)(lVar18 + 8) + 8) + 8) + 8);
          } while (uVar6 != 0);
        }
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          lVar18 = *(long *)(lVar18 + 8);
        }
        uVar12 = 0;
        if ((lVar18 != 0) && (lVar18 = lVar18 - *(int *)(param_1 + 0x1c1dc), lVar18 != 0)) {
          uVar12 = (uint)((*(uint *)(lVar18 + 0x270) & 0xfffffffe) == 8);
        }
      }
      if (0 < (int)(iVar9 + uVar12)) {
        lVar14 = lVar11 + 0x34 + lVar14 * 8;
        uVar6 = 0;
        do {
          FUN_0315e2f0(&local_9c,param_1,uVar6);
          uVar7 = FUN_0277d7b4(auStack_98,lVar14);
          if ((((uVar7 & 1) != 0) && (local_95 == *(char *)(lVar14 + 3))) &&
             (local_94 == *(int *)(lVar14 + 4))) goto joined_r0x0316699c;
          uVar6 = uVar6 + 1;
        } while (iVar9 + uVar12 != uVar6);
      }
      uVar6 = 0xffffffff;
    }
joined_r0x0316699c:
    if ((param_2 & 1) == 0) goto LAB_031664b4;
LAB_03166254:
    if (iVar16 < 1) goto LAB_03166754;
    iVar10 = *(int *)(lVar17 + 0x2e8);
    uVar12 = 0;
    if (iVar10 != 0) {
      uVar12 = *(int *)(lVar17 + 0x2f4) / iVar10;
    }
    local_84._4_4_ = uVar6;
    if (uVar12 != 1) {
      fVar19 = (float)(int)uVar12 * 0.5;
      uVar13 = 0;
      if (fVar19 != (float)(int)fVar19) {
        uVar13 = (uint)(0.0 <= fVar19);
      }
      iVar9 = uVar13 + (int)fVar19;
      if ((uVar12 & 1) != 0) {
        iVar9 = uVar12 - (uVar13 + (int)fVar19);
      }
      iVar3 = 0;
      if (iVar10 != 0) {
        iVar3 = (int)uVar6 / iVar10;
      }
      iVar9 = iVar3 - iVar9;
      iVar2 = iVar9;
      if (iVar16 <= iVar9 * iVar10) {
        iVar2 = iVar3;
      }
      iVar16 = 0;
      if (-1 < iVar9) {
        iVar16 = iVar2;
      }
      uVar6 = iVar16 * iVar10;
    }
  }
  local_84 = CONCAT44(local_84._4_4_,uVar6);
LAB_03166754:
  local_7c = 0x101;
  local_6c = CONCAT44(3,(undefined4)local_6c);
  FUN_03864290(lVar17,&local_90);
  return;
}

