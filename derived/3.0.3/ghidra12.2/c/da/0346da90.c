
/* WARNING: Removing unreachable block (ram,0x0346e40c) */
/* WARNING: Removing unreachable block (ram,0x0346e220) */
/* WARNING: Removing unreachable block (ram,0x0346e030) */
/* WARNING: Removing unreachable block (ram,0x0346e128) */
/* WARNING: Removing unreachable block (ram,0x0346e318) */
/* WARNING: Removing unreachable block (ram,0x0346e0ac) */
/* WARNING: Removing unreachable block (ram,0x0346e390) */
/* WARNING: Removing unreachable block (ram,0x0346e1a4) */
/* WARNING: Removing unreachable block (ram,0x0346e29c) */

void FUN_0346da90(long param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  char *pcVar18;
  undefined4 uVar19;
  undefined *local_5d8;
  undefined4 local_5d0;
  undefined4 uStack_5cc;
  uint local_59c;
  undefined *local_598;
  undefined1 *local_590;
  undefined4 local_588;
  undefined1 local_584 [31];
  undefined1 local_565;
  byte local_560;
  undefined8 local_558;
  undefined1 *local_550;
  undefined8 ****local_548;
  undefined8 ****local_540;
  undefined8 ****local_538 [24];
  undefined8 ****local_478 [24];
  undefined8 ***local_3b8 [24];
  undefined8 **local_2f8 [24];
  undefined8 *local_238 [24];
  undefined8 local_178 [24];
  undefined1 auStack_b8 [56];
  
  local_178[0] = 0;
  local_548 = local_538;
  local_538[0] = local_478;
  local_478[0] = local_3b8;
  local_3b8[0] = local_2f8;
  local_2f8[0] = local_238;
  local_238[0] = local_178;
  local_558 = 0;
  local_550 = (undefined1 *)0x0;
  if (auStack_b8 != (undefined1 *)0x0) {
    local_558 = 0x600000000;
    local_550 = auStack_b8;
  }
  local_565 = 0;
  local_588 = 0x20;
  local_590 = local_584;
  local_584[0] = 0;
  local_560 = 0;
  local_598 = PTR_DAT_04bb2028 + 0x10;
  local_540 = local_548;
  FUN_03472ad0(&local_598,&local_558,param_2);
  puVar12 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar6 = PTR_DAT_04bc0878;
  puVar5 = PTR_PTR_04bb8620;
  if ((puVar12 == (undefined8 *)0x0) ||
     (uVar9 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc4e58), (uVar9 & 1) == 0)) goto LAB_0346df1c;
  local_59c = 0;
  lVar13 = *(long *)puVar12[0x43];
  if (lVar13 != 0) {
    local_5d8 = (undefined *)((ulong)local_5d8 & 0xffffffff00000000);
    if ((local_560 & 1) == 0) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      plVar14 = *(long **)(lVar13 + 0x48);
      if (plVar14[1] != 0) {
        local_5d8 = puVar6 + 0x10;
        uVar17 = *(undefined8 *)(puVar5 + 8);
        local_5d0 = 8;
        (**(code **)(*plVar14 + 0x18))(plVar14,&local_5d8);
        (**(code **)(plVar14[3] + 0x5d8))(plVar14[1],uVar17);
LAB_0346dcbc:
        FUN_03d7dd80(lVar13);
      }
    }
    else {
      (**(code **)(local_598 + 0x18))(&local_598);
      FUN_006d8678(&local_5d8,"%s%02d",local_590,local_59c);
      if ((*(long *)(*(long *)(lVar13 + 0x48) + 8) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_03d53db0(*(undefined8 *)(*(long *)PTR_DAT_04bb2718 + 0x408),PTR_DAT_04bc9d18
                                ), puVar10 != (undefined8 *)0x0)) {
        (**(code **)(local_5d8 + 0x18))(&local_5d8);
        iVar7 = FUN_038f40b0(*puVar10,CONCAT44(uStack_5cc,local_5d0));
        if (-1 < iVar7) {
          FUN_03c7f3c0(*(undefined8 *)(lVar13 + 0x48),PTR_DAT_04bc9d18,&local_5d8,0);
          goto LAB_0346dcbc;
        }
      }
    }
  }
  local_59c = 1;
  lVar13 = *(long *)(puVar12[0x43] + (long)(int)(uint)(1 < *(uint *)(puVar12 + 0x42)) * 8);
  if (lVar13 != 0) {
    local_5d8 = (undefined *)CONCAT44(local_5d8._4_4_,1);
    if ((local_560 >> 1 & 1) == 0) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      plVar14 = *(long **)(lVar13 + 0x48);
      if (plVar14[1] != 0) {
        local_5d8 = puVar6 + 0x10;
        uVar17 = *(undefined8 *)(puVar5 + 8);
        local_5d0 = 8;
        (**(code **)(*plVar14 + 0x18))(plVar14,&local_5d8);
        (**(code **)(plVar14[3] + 0x5d8))(plVar14[1],uVar17);
LAB_0346dde8:
        FUN_03d7dd80(lVar13);
      }
    }
    else {
      (**(code **)(local_598 + 0x18))(&local_598);
      FUN_006d8678(&local_5d8,"%s%02d",local_590,local_59c);
      if ((*(long *)(*(long *)(lVar13 + 0x48) + 8) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_03d53db0(*(undefined8 *)(*(long *)PTR_DAT_04bb2718 + 0x408),PTR_DAT_04bc9d18
                                ), puVar10 != (undefined8 *)0x0)) {
        (**(code **)(local_5d8 + 0x18))(&local_5d8);
        iVar7 = FUN_038f40b0(*puVar10,CONCAT44(uStack_5cc,local_5d0));
        if (-1 < iVar7) {
          FUN_03c7f3c0(*(undefined8 *)(lVar13 + 0x48),PTR_DAT_04bc9d18,&local_5d8,0);
          goto LAB_0346dde8;
        }
      }
    }
  }
  local_59c = 2;
  iVar7 = 2;
  if (*(uint *)(puVar12 + 0x42) < 3) {
    iVar7 = 0;
  }
  lVar13 = *(long *)(puVar12[0x43] + (long)iVar7 * 8);
  if (lVar13 == 0) goto LAB_0346df1c;
  local_5d8 = (undefined *)CONCAT44(local_5d8._4_4_,2);
  if ((local_560 >> 2 & 1) == 0) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    plVar14 = *(long **)(lVar13 + 0x48);
    if (plVar14[1] == 0) goto LAB_0346df1c;
    local_5d8 = puVar6 + 0x10;
    uVar17 = *(undefined8 *)(puVar5 + 8);
    local_5d0 = 8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&local_5d8);
    (**(code **)(plVar14[3] + 0x5d8))(plVar14[1],uVar17);
  }
  else {
    (**(code **)(local_598 + 0x18))(&local_598);
    FUN_006d8678(&local_5d8,"%s%02d",local_590,local_59c);
    if ((*(long *)(*(long *)(lVar13 + 0x48) + 8) == 0) ||
       (puVar12 = (undefined8 *)
                  FUN_03d53db0(*(undefined8 *)(*(long *)PTR_DAT_04bb2718 + 0x408),PTR_DAT_04bc9d18),
       puVar12 == (undefined8 *)0x0)) goto LAB_0346df1c;
    (**(code **)(local_5d8 + 0x18))(&local_5d8);
    iVar7 = FUN_038f40b0(*puVar12,CONCAT44(uStack_5cc,local_5d0));
    if (iVar7 < 0) goto LAB_0346df1c;
    FUN_03c7f3c0(*(undefined8 *)(lVar13 + 0x48),PTR_DAT_04bc9d18,&local_5d8,0);
  }
  FUN_03d7dd80(lVar13);
LAB_0346df1c:
  iVar7 = 6 - (uint)local_558;
  puVar2 = PTR_DAT_04bc0cb8 + 0x10;
  puVar3 = PTR_DAT_04bc4f00 + 0x10;
  uVar11 = 0;
  do {
    while( true ) {
      local_59c = uVar11;
      if ((uVar11 < 6) &&
         (lVar13 = *(long *)(*(long *)(param_1 + 0x210) + (ulong)uVar11 * 8 + 0x570), lVar13 != 0))
      break;
LAB_0346dfa0:
      uVar11 = uVar11 + 1;
      if (uVar11 == 6) goto LAB_0346e748;
    }
    plVar14 = *(long **)(lVar13 + 0x1d0);
    if ((int)uVar11 < iVar7) {
      local_5d0 = 7;
      local_5d8 = puVar2;
      (**(code **)(*plVar14 + 0x18))(plVar14,&local_5d8);
      (**(code **)(plVar14[3] + 0x88))(plVar14[1],0);
      goto LAB_0346dfa0;
    }
    local_5d0 = 7;
    local_5d8 = PTR_DAT_04bc0cb8 + 0x10;
    (**(code **)(*plVar14 + 0x18))(plVar14,&local_5d8);
    (**(code **)(plVar14[3] + 0x88))(plVar14[1],1);
    plVar14 = (long *)(lVar13 + 0x2a0);
    lVar15 = *plVar14;
    if (lVar15 != 0) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      plVar16 = *(long **)(lVar15 + 0x48);
      if (plVar16[1] != 0) {
        local_5d8 = puVar6 + 0x10;
        uVar17 = *(undefined8 *)(puVar5 + 8);
        local_5d0 = 8;
        (**(code **)(*plVar16 + 0x18))(plVar16,&local_5d8);
        (**(code **)(plVar16[3] + 0x5d8))(plVar16[1],uVar17);
        FUN_03d7dd80(lVar15);
      }
    }
    lVar15 = *(long *)(lVar13 + 0x2a8);
    if (lVar15 != 0) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      plVar16 = *(long **)(lVar15 + 0x48);
      if (plVar16[1] != 0) {
        local_5d8 = puVar6 + 0x10;
        uVar17 = *(undefined8 *)(puVar5 + 8);
        local_5d0 = 8;
        (**(code **)(*plVar16 + 0x18))(plVar16,&local_5d8);
        (**(code **)(plVar16[3] + 0x5d8))(plVar16[1],uVar17);
        FUN_03d7dd80(lVar15);
      }
    }
    lVar15 = *(long *)(lVar13 + 0x2b0);
    if (lVar15 != 0) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      plVar16 = *(long **)(lVar15 + 0x48);
      if (plVar16[1] != 0) {
        local_5d8 = puVar6 + 0x10;
        uVar17 = *(undefined8 *)(puVar5 + 8);
        local_5d0 = 8;
        (**(code **)(*plVar16 + 0x18))(plVar16,&local_5d8);
        (**(code **)(plVar16[3] + 0x5d8))(plVar16[1],uVar17);
        FUN_03d7dd80(lVar15);
      }
    }
    lVar15 = *(long *)(lVar13 + 0x2b8);
    if (lVar15 != 0) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      plVar16 = *(long **)(lVar15 + 0x48);
      if (plVar16[1] != 0) {
        local_5d8 = puVar6 + 0x10;
        uVar17 = *(undefined8 *)(puVar5 + 8);
        local_5d0 = 8;
        (**(code **)(*plVar16 + 0x18))(plVar16,&local_5d8);
        (**(code **)(plVar16[3] + 0x5d8))(plVar16[1],uVar17);
        FUN_03d7dd80(lVar15);
      }
    }
    lVar15 = *(long *)(lVar13 + 0x2c0);
    if (lVar15 != 0) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      plVar16 = *(long **)(lVar15 + 0x48);
      if (plVar16[1] != 0) {
        local_5d8 = puVar6 + 0x10;
        uVar17 = *(undefined8 *)(puVar5 + 8);
        local_5d0 = 8;
        (**(code **)(*plVar16 + 0x18))(plVar16,&local_5d8);
        (**(code **)(plVar16[3] + 0x5d8))(plVar16[1],uVar17);
        FUN_03d7dd80(lVar15);
      }
    }
    lVar15 = *(long *)(lVar13 + 0x2c8);
    if (lVar15 != 0) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      plVar16 = *(long **)(lVar15 + 0x48);
      if (plVar16[1] != 0) {
        local_5d8 = puVar6 + 0x10;
        uVar17 = *(undefined8 *)(puVar5 + 8);
        local_5d0 = 8;
        (**(code **)(*plVar16 + 0x18))(plVar16,&local_5d8);
        (**(code **)(plVar16[3] + 0x5d8))(plVar16[1],uVar17);
        FUN_03d7dd80(lVar15);
      }
    }
    lVar15 = *(long *)(lVar13 + 0x2d0);
    if (lVar15 != 0) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      plVar16 = *(long **)(lVar15 + 0x48);
      if (plVar16[1] != 0) {
        local_5d8 = puVar6 + 0x10;
        uVar17 = *(undefined8 *)(puVar5 + 8);
        local_5d0 = 8;
        (**(code **)(*plVar16 + 0x18))(plVar16,&local_5d8);
        (**(code **)(plVar16[3] + 0x5d8))(plVar16[1],uVar17);
        FUN_03d7dd80(lVar15);
      }
    }
    lVar15 = *(long *)(lVar13 + 0x2d8);
    if (lVar15 != 0) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      plVar16 = *(long **)(lVar15 + 0x48);
      if (plVar16[1] != 0) {
        local_5d8 = puVar6 + 0x10;
        uVar17 = *(undefined8 *)(puVar5 + 8);
        local_5d0 = 8;
        (**(code **)(*plVar16 + 0x18))(plVar16,&local_5d8);
        (**(code **)(plVar16[3] + 0x5d8))(plVar16[1],uVar17);
        FUN_03d7dd80(lVar15);
      }
    }
    lVar15 = *(long *)(lVar13 + 0x2e0);
    if (lVar15 != 0) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      plVar16 = *(long **)(lVar15 + 0x48);
      if (plVar16[1] != 0) {
        uVar17 = *(undefined8 *)(puVar5 + 8);
        local_5d0 = 8;
        local_5d8 = puVar6 + 0x10;
        (**(code **)(*plVar16 + 0x18))(plVar16,&local_5d8);
        (**(code **)(plVar16[3] + 0x5d8))(plVar16[1],uVar17);
        FUN_03d7dd80(lVar15);
      }
    }
    uVar4 = local_59c - iVar7;
    if (uVar4 < (uint)local_558) {
      pcVar18 = *(char **)(local_550 + (long)(int)uVar4 * 8);
    }
    else {
      pcVar18 = (char *)0x0;
    }
    uVar9 = (ulong)*(uint *)(pcVar18 + 8);
    if (0x10 < *(uint *)(pcVar18 + 8)) {
      uVar9 = 0;
    }
    lVar15 = plVar14[uVar9];
    if (((lVar15 != 0) && (*(long *)(*(long *)(lVar15 + 0x48) + 8) != 0)) &&
       (puVar12 = (undefined8 *)
                  FUN_03d53db0(*(undefined8 *)(*(long *)PTR_DAT_04bb2718 + 0x408),PTR_DAT_04bc9d18),
       puVar12 != (undefined8 *)0x0)) {
      (**(code **)(*(long *)(pcVar18 + 0x10) + 0x18))(pcVar18 + 0x10);
      iVar8 = FUN_038f40b0(*puVar12,*(undefined8 *)(pcVar18 + 0x18));
      if (-1 < iVar8) {
        FUN_03c7f3c0(*(undefined8 *)(lVar15 + 0x48),PTR_DAT_04bc9d18,pcVar18 + 0x10,0);
        FUN_03d7dd80(lVar15);
      }
    }
    uVar9 = (ulong)*(uint *)(pcVar18 + 0x48);
    if (0x10 < *(uint *)(pcVar18 + 0x48)) {
      uVar9 = 0;
    }
    lVar15 = plVar14[uVar9];
    if (((lVar15 != 0) && (*(long *)(*(long *)(lVar15 + 0x48) + 8) != 0)) &&
       (puVar12 = (undefined8 *)
                  FUN_03d53db0(*(undefined8 *)(*(long *)PTR_DAT_04bb2718 + 0x408),PTR_DAT_04bc9d18),
       puVar12 != (undefined8 *)0x0)) {
      (**(code **)(*(long *)(pcVar18 + 0x50) + 0x18))(pcVar18 + 0x50);
      iVar8 = FUN_038f40b0(*puVar12,*(undefined8 *)(pcVar18 + 0x58));
      if (-1 < iVar8) {
        FUN_03c7f3c0(*(undefined8 *)(lVar15 + 0x48),PTR_DAT_04bc9d18,pcVar18 + 0x50,0);
        FUN_03d7dd80(lVar15);
      }
    }
    if (((**(char **)(pcVar18 + 0x90) != '\0') && (lVar15 = *plVar14, lVar15 != 0)) &&
       ((*(long *)(*(long *)(lVar15 + 0x48) + 8) != 0 &&
        (puVar12 = (undefined8 *)
                   FUN_03d53db0(*(undefined8 *)(*(long *)PTR_DAT_04bb2718 + 0x408),PTR_DAT_04bc9d18)
        , puVar12 != (undefined8 *)0x0)))) {
      (**(code **)(*(long *)(pcVar18 + 0x88) + 0x18))(pcVar18 + 0x88);
      iVar8 = FUN_038f40b0(*puVar12,*(undefined8 *)(pcVar18 + 0x90));
      if (-1 < iVar8) {
        FUN_03c7f3c0(*(undefined8 *)(lVar15 + 0x48),PTR_DAT_04bc9d18,pcVar18 + 0x88,0);
        FUN_03d7dd80(lVar15);
      }
    }
    plVar14 = *(long **)(lVar13 + 0x288);
    if (plVar14 != (long *)0x0) {
      iVar8 = *(int *)(pcVar18 + 4);
      local_5d8 = PTR_DAT_04bc4f00 + 0x10;
      local_5d0 = 0x14;
      (**(code **)(*plVar14 + 0x18))(plVar14,&local_5d8);
      (**(code **)(plVar14[3] + 0x158))((float)iVar8,plVar14[1]);
    }
    plVar14 = *(long **)(lVar13 + 0x290);
    if (plVar14 != (long *)0x0) {
      uVar19 = 0;
      if (*pcVar18 != '\0') {
        uVar19 = 0x3f800000;
      }
      local_5d8 = PTR_DAT_04bc4f00 + 0x10;
      local_5d0 = 0x15;
      (**(code **)(*plVar14 + 0x18))(plVar14,&local_5d8);
      (**(code **)(plVar14[3] + 0x168))(uVar19,plVar14[1]);
    }
    plVar14 = *(long **)(lVar13 + 0x298);
    if (plVar14 != (long *)0x0) {
      uVar19 = 0;
      if (**(char **)(pcVar18 + 0x90) != '\0') {
        uVar19 = 0x3f800000;
      }
      local_5d0 = 0x15;
      local_5d8 = puVar3;
      (**(code **)(*plVar14 + 0x18))(plVar14,&local_5d8);
      (**(code **)(plVar14[3] + 0x168))(uVar19,plVar14[1]);
    }
    bVar1 = (int)uVar11 < 5;
    uVar11 = uVar11 + 1;
  } while (bVar1);
LAB_0346e748:
  uVar11 = param_2 - 0x3d2;
  if ((uVar11 < 8) && ((0xf7U >> (ulong)(uVar11 & 0x1f) & 1) != 0)) {
    if (*(char *)(param_1 + 0x21c) == '\0') {
      *(undefined1 *)(param_1 + 0x21c) = 1;
    }
    uVar19 = *(undefined4 *)(&DAT_04057ea0 + (long)(int)uVar11 * 4);
    *(int *)(param_1 + 0x218) = param_2;
    if (*(long *)(param_1 + 0x210) != 0) {
      puVar12 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
      if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      if (((puVar12 != (undefined8 *)0x0) &&
          (uVar9 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc4e58), (uVar9 & 1) != 0)) &&
         (plVar14 = *(long **)puVar12[0x45], plVar14 != (long *)0x0)) {
        local_5d8 = PTR_DAT_04bc4f00 + 0x10;
        local_5d0 = 0x14;
        (**(code **)(*plVar14 + 0x18))(plVar14,&local_5d8);
        (**(code **)(plVar14[3] + 0x158))(uVar19,plVar14[1]);
      }
    }
  }
  else if (*(char *)(param_1 + 0x21c) != '\0') {
    *(undefined1 *)(param_1 + 0x21c) = 0;
  }
  lVar13 = *(long *)(param_1 + 0x210);
  if ((*(char *)(lVar13 + 0x624) == '\0') ||
     (FUN_0346c774(lVar13,0), *(char *)(lVar13 + 0x624) == '\0')) {
    *(undefined1 *)(lVar13 + 0x624) = 1;
  }
  *(uint *)(lVar13 + 0x620) = (uint)(param_2 == 0x3d9);
  *(undefined8 *)(lVar13 + 0x608) = 0xffffffffffffffff;
  lVar15 = lVar13 + 0x5c0 + (ulong)*(uint *)(lVar13 + 0x620) * 0x20;
  if (1 < *(uint *)(lVar13 + 0x620)) {
    lVar15 = lVar13 + 0x5c0;
  }
  *(undefined8 *)(lVar13 + 0x608) = *(undefined8 *)(lVar15 + 8);
  *(undefined4 *)(lVar13 + 0x610) = *(undefined4 *)(lVar15 + 0x10);
  *(undefined4 *)(lVar13 + 0x618) = *(undefined4 *)(lVar15 + 0x18);
  FUN_0346c774(lVar13,0);
  return;
}

