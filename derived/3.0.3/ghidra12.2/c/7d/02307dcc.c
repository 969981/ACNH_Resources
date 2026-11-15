
/* WARNING: Removing unreachable block (ram,0x023083d0) */

void FUN_02307dcc(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  ushort uVar12;
  byte bVar13;
  uint *puVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  char *pcVar20;
  undefined8 *puVar21;
  undefined **local_118;
  undefined ***local_110;
  undefined **local_108;
  undefined ***local_100;
  undefined1 auStack_f8 [8];
  undefined2 local_f0;
  undefined1 local_b5;
  undefined **local_b0;
  uint *local_a8;
  undefined4 local_a0;
  uint local_9c [4];
  int local_8c;
  undefined1 local_5d;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  
  puVar5 = PTR_DAT_04bb43c0;
  lVar19 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4();
  lVar17 = *(long *)puVar5;
  if (lVar17 == 0) {
    return;
  }
  lVar19 = *(long *)(lVar19 + 0x57e58);
  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
  if (*(uint *)(lVar19 + 0x1d8) <= uVar9) {
    return;
  }
  if (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0) {
    return;
  }
  local_48 = (uint *)0x0;
  local_50 = *(undefined4 *)param_1;
  uStack_4c = *(undefined4 *)((long)param_1 + 4);
  local_58 = PTR_DAT_04bc0510 + 0x10;
  uVar9 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar5 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      lVar17 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(param_1);
      puVar5 = PTR_DAT_04bb2020;
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
         (puVar14 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8),
         puVar14 != (uint *)0x0)) {
        uVar9 = *puVar14;
        uVar12 = 0;
        local_48 = puVar14;
        if ((uVar9 == 0) || (puVar14 == (uint *)(ulong)uVar9)) goto LAB_023080cc;
        puVar16 = (uint *)((long)puVar14 - (long)(ulong)uVar9);
        uVar12 = 0;
        if (*puVar16 == 0) goto LAB_023080cc;
        uVar9 = puVar16[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
          lVar17 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar16 + lVar17 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar17 != 0) {
            uVar3 = 0;
            if ((ulong)uVar9 != 0) {
              uVar3 = (uint)((ulong)((long)puVar14 - lVar17) / (ulong)uVar9);
            }
            if (*puVar16 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
               uVar12 < 0xbd)) {
              if (uVar12 == 100) {
                lVar17 = (long)param_1 + 9;
                ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                local_a8 = (uint *)0x4087e29;
                local_b0 = ppuVar1;
                FUN_0279b044(lVar17,&local_b0,1);
                if (*(char *)(param_1 + 1) != '\0') {
                  local_100 = (undefined ***)0x40b19f4;
                  local_108 = ppuVar1;
                  FUN_025ffac8(&local_b0,&local_108,lVar17);
                  ppuVar1 = (undefined **)(PTR_DAT_04bc32c8 + 0x10);
                  local_b0 = ppuVar1;
                  FUN_0252d8f0(&local_118,lVar17);
                  local_108 = param_1;
                  local_100 = &local_118;
                  FUN_025a0ea4(&local_b0,&local_108);
                  local_b0 = ppuVar1;
                  iVar11 = FUN_02589ca4(&local_b0);
                  if (iVar11 == -1) {
LAB_0230827c:
                    if (local_8c == 0) {
                      local_8c = 1;
                    }
                  }
                  else {
                    iVar11 = (*(code *)local_b0[4])(&local_b0);
                    local_108 = (undefined **)CONCAT44(local_108._4_4_,iVar11);
                    if (0xc < iVar11) goto LAB_0230827c;
                  }
                  FUN_02601530(&local_b0);
                }
                uVar12 = 100;
                goto LAB_023080cc;
              }
              if (uVar12 != 0x69) goto LAB_023080cc;
              lVar17 = (long)param_1 + 9;
              ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
              local_a8 = (uint *)0x40769c8;
              local_b0 = ppuVar1;
              FUN_0279b044(lVar17,&local_b0,1);
              local_a8 = (uint *)0x40769c8;
              local_b0 = ppuVar1;
              FUN_0279a9f0(lVar17,&local_b0,1);
              local_5d = 0;
              local_a8 = local_9c;
              local_a0 = 0x40;
              local_9c[0] = local_9c[0] & 0xffffff00;
              ppuVar2 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
              local_b0 = ppuVar2;
              uVar10 = FUN_0277d6c4(param_1);
              FUN_01a10f50(&local_b0,uVar10);
              local_b5 = 0;
              local_100 = (undefined ***)(auStack_f8 + 4);
              auStack_f8 = (undefined1  [8])0x6374614300000040;
              local_f0 = 0x68;
              local_108 = ppuVar2;
              (*(code *)local_b0[3])(&local_b0);
              FUN_038d13f0(&local_108,&DAT_0409e973,local_a8);
              FUN_0279b044(lVar17,&local_108,1);
              local_110 = (undefined ***)0x40a6f30;
              local_118 = ppuVar1;
              (*(code *)local_108[3])(&local_108);
              (*(code *)local_108[3])(&local_108);
              pppuVar7 = local_100;
              (*(code *)local_118[3])(&local_118);
              if (pppuVar7 == local_110) {
LAB_0230830c:
                FUN_0279a9f0(lVar17,&local_108,1);
              }
              else {
                uVar15 = 0;
                bVar8 = true;
                do {
                  if (*(char *)((long)local_100 + uVar15) != *(char *)((long)local_110 + uVar15))
                  break;
                  if (*(char *)((long)local_100 + uVar15) == '\0') {
                    if (bVar8) goto LAB_0230830c;
                    break;
                  }
                  bVar8 = uVar15 < 0x80000;
                  uVar15 = uVar15 + 1;
                } while (uVar15 != 0x80001);
                (*(code *)local_108[3])(&local_108);
                (*(code *)local_108[3])(&local_108);
                if (local_100 == (undefined ***)"CatchSeminonukegara") goto LAB_0230830c;
                if (*(char *)local_100 == 'C') {
                  lVar19 = 0;
                  do {
                    if ((lVar19 == 0x80000) ||
                       (cVar4 = *(char *)((long)local_100 + lVar19 + 1),
                       cVar4 != "CatchSeminonukegara"[lVar19 + 1])) goto LAB_0230831c;
                    lVar19 = lVar19 + 1;
                  } while (cVar4 != '\0');
                  goto LAB_0230830c;
                }
              }
LAB_0230831c:
              if (*(char *)(param_1 + 1) != '\0') {
                local_a0 = *(undefined4 *)param_1;
                local_9c[0] = *(uint *)((long)param_1 + 4);
                local_b0 = &PTR_FUN_04a72e50;
                iVar11 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
                if (iVar11 != 0) {
                  lVar19 = (long)iVar11 << 3;
                  puVar21 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
                  local_a8 = (uint *)lVar17;
                  do {
                    (*(code *)*local_b0)(&local_b0,*puVar21);
                    lVar19 = lVar19 + -8;
                    puVar21 = puVar21 + 1;
                  } while (lVar19 != 0);
                }
                local_b0 = (undefined **)(puVar5 + 0x10);
                local_a8 = (uint *)0x40dff8b;
                bVar13 = *(byte *)((long)param_1 + 9);
                if (7 < bVar13) {
                  bVar13 = 0xff;
                }
                local_118 = (undefined **)CONCAT71(local_118._1_7_,bVar13);
                uVar10 = FUN_02582fe0(&local_118);
                local_108 = (undefined **)CONCAT44(local_108._4_4_,uVar10);
                FUN_021294b0(&local_b0,1,&local_108);
                if (*(char *)(param_1 + 1) != '\0') {
                  local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
                  **(int **)PTR_DAT_04bc2fc8 = **(int **)PTR_DAT_04bc2fc8 + 1;
                  if (*(char *)(param_1 + 1) != '\0') {
                    local_108 = (undefined **)(puVar5 + 0x10);
                    local_100 = (undefined ***)0x40b19f4;
                    FUN_025ffac8(&local_b0,&local_108,lVar17);
                    ppuVar1 = (undefined **)(PTR_DAT_04bc32c8 + 0x10);
                    local_b0 = ppuVar1;
                    FUN_0252d8f0(&local_118,lVar17);
                    local_108 = param_1;
                    local_100 = &local_118;
                    FUN_025a0ea4(&local_b0,&local_108);
                    local_b0 = ppuVar1;
                    iVar11 = FUN_02589ca4(&local_b0);
                    if (iVar11 == -1) {
LAB_02308470:
                      if (local_8c == 0) {
                        local_8c = 1;
                      }
                    }
                    else {
                      iVar11 = (*(code *)local_b0[4])(&local_b0);
                      local_108 = (undefined **)CONCAT44(local_108._4_4_,iVar11);
                      if (0xc < iVar11) goto LAB_02308470;
                    }
                    FUN_02601530(&local_b0);
                    puVar6 = PTR_DAT_04bb49a0;
                    if (*(char *)(param_1 + 1) != '\0') {
                      local_a8 = (uint *)0x4087e12;
                      uVar18 = *(undefined8 *)PTR_DAT_04bb49a0;
                      local_b0 = (undefined **)(puVar5 + 0x10);
                      uVar10 = FUN_006bd550("PE_GetInsect_HighPrice",0);
                      local_108._0_4_ = uVar10;
                      uVar18 = FUN_01b5b4b0(uVar18,&local_108);
                      FUN_01b5e0b0(&local_b0,param_1,uVar18,lVar17,0);
                      uVar18 = *(undefined8 *)puVar6;
                      local_a8 = (uint *)0x40a19a0;
                      local_b0 = (undefined **)(puVar5 + 0x10);
                      uVar10 = FUN_006bd550("PE_GetInsect_New",0);
                      local_108 = (undefined **)CONCAT44(local_108._4_4_,uVar10);
                      uVar18 = FUN_01b5b4b0(uVar18,&local_108);
                      FUN_01b5e0b0(&local_b0,param_1,uVar18,lVar17,0);
                    }
                  }
                }
              }
              uVar12 = 0x69;
              goto LAB_023080cc;
            }
          }
        }
        uVar12 = 0;
        goto LAB_023080cc;
      }
    }
  }
  uVar12 = 0xbc;
LAB_023080cc:
  if (*(char *)(param_1 + 1) != '\0') {
    if (uVar12 == 0x66) {
      pcVar20 = "IsOnPlayerMemoriesSeasonPetal";
    }
    else if (uVar12 == 0x65) {
      pcVar20 = "IsOnPlayerMemoriesSeasonLeaf";
    }
    else {
      if (uVar12 != 100) {
        return;
      }
      pcVar20 = "IsOnPlayerMemoriesSeasonCrystal";
    }
    lVar17 = (long)param_1 + 9;
    ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_b0 = ppuVar1;
    local_a8 = (uint *)pcVar20;
    iVar11 = FUN_0274bce0(lVar17,&local_b0);
    if (iVar11 == 0) {
      local_b0 = ppuVar1;
      local_a8 = (uint *)pcVar20;
      FUN_0274bfe8(lVar17,&local_b0,1);
      local_a8 = (uint *)0x40d513b;
      uVar18 = *(undefined8 *)PTR_DAT_04bb49a0;
      local_b0 = ppuVar1;
      uVar10 = FUN_006bd550("PE_GetSeasonTraditionItem",0);
      local_108 = (undefined **)CONCAT44(local_108._4_4_,uVar10);
      uVar18 = FUN_01b5b4b0(uVar18,&local_108);
      FUN_01b5e0b0(&local_b0,param_1,uVar18,lVar17,0);
    }
  }
  return;
}

