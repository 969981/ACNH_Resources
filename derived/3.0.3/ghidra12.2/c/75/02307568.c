
/* WARNING: Removing unreachable block (ram,0x0230782c) */

void FUN_02307568(undefined8 *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined *puVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  uint *puVar14;
  byte bVar15;
  uint *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  undefined *local_90;
  char *local_88;
  undefined8 local_80;
  byte local_74 [4];
  undefined *local_70;
  char *pcStack_68;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar21 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4();
  lVar17 = *(long *)puVar1;
  if (lVar17 == 0) {
    return;
  }
  lVar21 = *(long *)(lVar21 + 0x57e58);
  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
  if (*(uint *)(lVar21 + 0x1d8) <= uVar9) {
    return;
  }
  if (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8) == 0) {
    return;
  }
  local_80 = 0;
  local_88 = (char *)*param_1;
  local_90 = PTR_DAT_04bc0510 + 0x10;
  uVar9 = FUN_0277d6c4(&local_88);
  if (*(long *)puVar1 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      lVar17 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(param_1);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
         (((puVar14 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8),
           puVar14 != (uint *)0x0 && (uVar9 = *puVar14, uVar9 != 0)) &&
          (puVar14 != (uint *)(ulong)uVar9)))) {
        puVar16 = (uint *)((long)puVar14 - (long)(ulong)uVar9);
        if (((*puVar16 != 0) && (uVar9 = puVar16[1], uVar9 != 0)) &&
           ((ulong)(ushort)puVar16[2] != 0)) {
          lVar17 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar16 + lVar17 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar17 != 0) {
            uVar4 = 0;
            if ((ulong)uVar9 != 0) {
              uVar4 = (uint)((ulong)((long)puVar14 - lVar17) / (ulong)uVar9);
            }
            if (*puVar16 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if (((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
                uVar5 < 0xbd)) && (uVar5 == 0x6b)) {
              lVar17 = (long)param_1 + 0xb;
              puVar1 = PTR_DAT_04bb2020 + 0x10;
              local_88 = "CatchSeafood";
              local_90 = puVar1;
              FUN_0279a9f0(lVar17,&local_90,1);
              local_88 = "CatchSeafood";
              local_90 = puVar1;
              FUN_0279b044(lVar17,&local_90,1);
              local_88 = "GetDiveFishCount";
              local_74[0] = *(byte *)((long)param_1 + 0xb);
              if (7 < local_74[0]) {
                local_74[0] = 0xff;
              }
              local_90 = puVar1;
              uVar10 = FUN_02582fe0(local_74);
              local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar10);
              FUN_021294b0(&local_90,1,&local_70);
              puVar8 = PTR_DAT_04bb49a0;
              if (*(char *)(param_1 + 1) != '\0') {
                local_88 = "PE_GetSeafood_HighPrice";
                uVar19 = *(undefined8 *)PTR_DAT_04bb49a0;
                local_90 = puVar1;
                uVar10 = FUN_006bd550("PE_GetSeafood_HighPrice",0);
                local_70._0_4_ = uVar10;
                uVar19 = FUN_01b5b4b0(uVar19,&local_70);
                FUN_01b5e0b0(&local_90,param_1,uVar19,lVar17,0);
                uVar19 = *(undefined8 *)puVar8;
                local_88 = "PE_GetSeafood_New";
                local_90 = puVar1;
                uVar10 = FUN_006bd550("PE_GetSeafood_New",0);
                local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar10);
                uVar19 = FUN_01b5b4b0(uVar19,&local_70);
                FUN_01b5e0b0(&local_90,param_1,uVar19,lVar17,0);
                if (*(char *)(param_1 + 1) != '\0') {
                  local_90 = (undefined *)CONCAT44(local_90._4_4_,2);
                  *(int *)(*(long *)PTR_DAT_04bc2fc8 + 8) =
                       *(int *)(*(long *)PTR_DAT_04bc2fc8 + 8) + 1;
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(char *)((long)param_1 + 0xc) != '\0' || *(char *)((long)param_1 + 9) != '\0') {
    return;
  }
  if (1 < *(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80)) {
    return;
  }
  iVar11 = FUN_0277d6c4(param_1);
  puVar8 = PTR_DAT_04bb3968;
  puVar1 = PTR_DAT_04bb2020;
  if (iVar11 != 0xb17) {
    return;
  }
  local_90 = PTR_DAT_04bb2020 + 0x10;
  local_88 = "seo";
  uVar9 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_90,PTR_DAT_04bb3238,1);
  puVar6 = PTR_DAT_04bb27c0;
  lVar17 = *(long *)PTR_DAT_04bb27c0;
  if (lVar17 == 0) {
    return;
  }
  if ((((uVar9 == 0) ||
       (plVar20 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) + (ulong)(uVar9 >> 0x14) * 8),
       plVar20 == (long *)0x0)) || ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar20 + 0x46) != uVar9)) {
    plVar20 = (long *)0x0;
  }
  if ((*(int *)(lVar17 + 0x288) == 1) || (*(int *)(lVar17 + 0x288) == -1)) {
    plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)puVar6;
    iVar11 = (**(code **)(*plVar12 + 0x60))();
    if (iVar11 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar17 + 0x5e8)) goto LAB_02307954;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02307954:
    uVar9 = 0;
  }
  if (plVar20 == (long *)0x0) {
    return;
  }
  lVar17 = plVar20[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar11 != 0)) {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  puVar7 = PTR_DAT_04bb37d0;
  uVar13 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb37d0);
  uVar4 = 0;
  if ((int)lVar17 == 1) {
    uVar4 = uVar9;
  }
  if ((uVar13 & 1) == 0) {
    return;
  }
  if (uVar4 == 0) {
    return;
  }
  if ((plVar20[0x76] != 0) && (*(int *)(plVar20[0x76] + 0x360) != 0x13)) {
    return;
  }
  pbVar2 = (byte *)((long)param_1 + 0xb);
  puVar3 = puVar1 + 0x10;
  local_88 = "SeoExchangeItemToday";
  local_90 = puVar3;
  iVar11 = FUN_0274bce0(pbVar2,&local_90);
  if (iVar11 != 0) {
    pcStack_68 = "SeoNotGetPearlFlag";
    local_70 = puVar3;
    iVar11 = FUN_0274bce0(pbVar2,&local_70);
    if (iVar11 == 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 1) == '\0') {
    return;
  }
  local_90 = puVar1 + 0x10;
  local_88 = "seo";
  uVar9 = FUN_020a4f40(*(undefined8 *)puVar8,&local_90,PTR_DAT_04bb3238,1);
  lVar17 = *(long *)puVar6;
  if (lVar17 == 0) {
    return;
  }
  if ((((uVar9 == 0) ||
       (plVar20 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) + (ulong)(uVar9 >> 0x14) * 8),
       plVar20 == (long *)0x0)) || ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar20 + 0x46) != uVar9)) {
    plVar20 = (long *)0x0;
  }
  if ((*(int *)(lVar17 + 0x288) == 1) || (*(int *)(lVar17 + 0x288) == -1)) {
    plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)puVar6;
    iVar11 = (**(code **)(*plVar12 + 0x60))();
    if (iVar11 < 0x11) {
      uVar9 = 1;
      goto LAB_02307ad0;
    }
    if (*(uint *)(lVar17 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
      goto LAB_02307ad0;
    }
  }
  uVar9 = 0;
LAB_02307ad0:
  if (plVar20 != (long *)0x0) {
    lVar17 = plVar20[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar11 != 0)) {
      *(undefined **)puVar7 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar13 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb37d0);
    uVar4 = 0;
    if ((int)lVar17 == 1) {
      uVar4 = uVar9;
    }
    if (((uVar13 & 1) != 0) && (uVar4 != 0)) {
      puVar18 = (undefined8 *)plVar20[0x77];
      if (((*PTR_DAT_04bb40f8 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb40f8), iVar11 != 0)) {
        *(undefined **)PTR_DAT_04bb40f0 = PTR_DAT_04bb4100 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb40f8);
      }
      if (((puVar18 != (undefined8 *)0x0) &&
          (uVar13 = (**(code **)*puVar18)(puVar18,PTR_DAT_04bb40f0), (uVar13 & 1) != 0)) &&
         (uVar13 = FUN_01f78db0(puVar18), (uVar13 & 1) != 0)) {
        *(undefined1 *)((long)puVar18 + 0xaf31) = 1;
        bVar15 = *pbVar2;
        if (7 < bVar15) {
          bVar15 = 0xff;
        }
        *(byte *)((long)puVar18 + 0xaf32) = bVar15;
        lVar17 = FUN_0251d150(pbVar2);
        *(uint *)(lVar17 + 4) = *(uint *)(lVar17 + 4) | 0x2000;
      }
    }
  }
  return;
}

