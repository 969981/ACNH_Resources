
void FUN_01f92d30(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  ulong uVar11;
  float *pfVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined *puVar17;
  float fVar18;
  float fVar19;
  undefined *local_a8;
  undefined2 local_a0;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  char *local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  undefined *local_60;
  char *local_58;
  
  puVar6 = PTR_DAT_04bb7648;
  puVar17 = PTR_DAT_04bb32e0;
  puVar1 = PTR_PTR_04bb2238;
  if ((*(byte *)((long)param_1 + 0xaf69) >> 2 & 1) != 0) {
    if (*(int *)(*(long *)(param_1[1] + 0x3b0) + 0x4b8) == 0) {
      return;
    }
    if (*(int *)(*(long *)(param_1[1] + 0x3b0) + 0x378) == 0x23) {
      *(byte *)((long)param_1 + 0xaf69) = *(byte *)((long)param_1 + 0xaf69) & 0xfb;
      FUN_01ea5c80(param_1,puVar1,puVar1,1,0,puVar17);
      return;
    }
    return;
  }
  plVar2 = param_1 + 0x1954;
  plVar16 = param_1 + 0x15f0;
  local_a8 = PTR_DAT_04bb7648 + 0x10;
  local_a0 = FUN_0376baa0(param_1[1] + 0x3e0);
  iVar8 = *(int *)(param_1[1] + 0x750);
  if ((iVar8 == 0 || iVar8 == 3) || (*(int *)((long)param_1 + 0xaf4c) == 0xe)) {
LAB_01f930bc:
    puVar1 = PTR_DAT_04bb2020;
    if (((((char)param_1[0x15ed] == '\0') && ((int)param_1[0x15e9] < 6)) &&
        (lVar14 = *(long *)PTR_DAT_04bb27f8, lVar14 != 0)) &&
       ((((*(byte *)(lVar14 + 0x1a71) >> 1 & 1) != 0 && (*(int *)(param_1[1] + 0x750) == 0)) &&
        ((*(int *)(lVar14 + 0x14) < 1 || (3 < *(int *)(lVar14 + 0x14))))))) {
      local_88 = PTR_DAT_04bb2020 + 0x10;
      local_80 = "Prohibit_NewOrder";
      iVar8 = FUN_02758850(&local_88);
      if (iVar8 == 0) {
        uVar5 = *(uint *)(param_1 + 0x15e9);
        if (uVar5 != 0xffffffff && (int)uVar5 < 0x10) {
          puVar17 = &DAT_0545b240 + (ulong)uVar5 * 0x118;
          if (0xf < uVar5) {
            puVar17 = &DAT_0545b240;
          }
          if ((puVar17[0x8c] != '\0') && (*(int *)(puVar17 + 0xa8) == 0x1e)) goto LAB_01f9328c;
        }
        if (((*(byte *)((long)param_1 + 0xad5a) >> 2 & 1) == 0) &&
           ((*(long *)PTR_DAT_04bb4978 != 0 && (uVar5 != 0xffffffff && (int)uVar5 < 0x10)))) {
          puVar17 = &DAT_0545b240 + (ulong)uVar5 * 0x118;
          if (0xf < uVar5) {
            puVar17 = &DAT_0545b240;
          }
          if (puVar17[0x8c] != '\0') {
            local_98 = (undefined *)CONCAT44(local_98._4_4_,*(undefined4 *)(puVar17 + 0xa8));
            lVar14 = FUN_01f9a1fc(*(long *)PTR_DAT_04bb4978,*(undefined4 *)(puVar17 + 0xa8));
            if (((lVar14 != 0) && (uVar11 = FUN_01f935e0(lVar14,0), (uVar11 & 1) == 0)) &&
               (uVar11 = FUN_01f935e0(lVar14,3), (uVar11 & 1) == 0)) {
              local_88 = puVar6 + 0x10;
              uVar7 = FUN_0376baa0(param_1[1] + 0x3e0);
              local_80 = (char *)CONCAT62(local_80._2_6_,uVar7);
              local_60 = puVar1 + 0x10;
              local_58 = "ApproachOccurringFlag";
              iVar8 = FUN_0376c020(&local_88,&local_60);
              if (iVar8 == 1) {
                pfVar10 = (float *)FUN_0252d9bc(0);
                pfVar12 = (float *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x18518) +
                                               0xf0))();
                if ((pfVar10 != (float *)0x0) &&
                   (fVar18 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x278) - *pfVar10,
                   fVar19 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x280) - pfVar10[2],
                   fVar19 * fVar19 + fVar18 * fVar18 <= *pfVar12 * *pfVar12)) {
                  (**(code **)(*param_1 + 0x38))(param_1,0x3b,0,1);
                  if (0 < (int)*plVar16) {
                    lVar14 = 0;
                    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
                    do {
                      plVar15 = *(long **)(param_1[0x15f1] + lVar14 * 8);
                      lVar14 = lVar14 + 1;
                      plVar15[0xf] = (long)puVar1;
                      *plVar15 = param_1[0x15f2];
                      param_1[0x15f2] = (long)plVar15;
                    } while (lVar14 < (int)*plVar16);
                  }
                  *(int *)plVar16 = 0;
                  if (0 < (int)*plVar2) {
                    lVar14 = 0;
                    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
                    do {
                      plVar16 = *(long **)(param_1[0x1955] + lVar14 * 8);
                      lVar14 = lVar14 + 1;
                      plVar16[0xf] = (long)puVar1;
                      *plVar16 = param_1[0x1956];
                      param_1[0x1956] = (long)plVar16;
                    } while (lVar14 < (int)*plVar2);
                  }
                  goto LAB_01f93058;
                }
              }
            }
          }
        }
      }
    }
LAB_01f9328c:
    FUN_02193780(param_1 + 0x15ee);
  }
  else {
    local_88 = puVar6 + 0x10;
    uVar7 = FUN_0376baa0(param_1[1] + 0x3e0);
    puVar1 = PTR_DAT_04bb2020;
    local_80 = (char *)CONCAT62(local_80._2_6_,uVar7);
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "StandingUpFlag";
    iVar8 = FUN_0376c020(&local_88,&local_60);
    if (iVar8 == 0) goto LAB_01f930bc;
    iVar8 = *(int *)(param_1[1] + 0x750);
    if (iVar8 != 2) {
      if (iVar8 == 1) {
        lVar14 = *(long *)(param_1[1] + 0x68);
        local_78 = 0;
        local_88 = PTR_DAT_04bbc1a0 + 0x10;
        local_80 = PTR_DAT_04bb2010 + 0x10;
        local_68 = 0;
        local_70 = local_80;
        iVar9 = FUN_01517930(&local_88,lVar14 + 0x278,lVar14 + 0x2b4,1);
        iVar8 = (int)local_78 + -1;
        if ((int)local_78 <= (int)local_68 + 1) {
          local_78._0_4_ = (int)local_68 + 1;
        }
        iVar4 = local_78._4_4_;
        if (local_78._4_4_ <= local_68._4_4_ + 1) {
          iVar4 = local_68._4_4_ + 1;
        }
        iVar3 = iVar8;
        if ((int)local_78 <= iVar8) {
          iVar3 = (int)local_78;
        }
        if (iVar8 <= (int)local_78) {
          iVar8 = (int)local_78;
        }
        local_78 = CONCAT44(local_78._4_4_,iVar3);
        local_68 = CONCAT44(iVar4,iVar8);
        pfVar10 = (float *)FUN_0252d9bc(0);
        if (iVar9 == 0) {
          iVar8 = (int)((float)(int)pfVar10[2] / 5.0) - (uint)(pfVar10[2] < 0.0);
          iVar9 = (int)((float)(int)*pfVar10 / 5.0) - (uint)(*pfVar10 < 0.0);
          if ((((iVar9 < (int)local_78 || (int)local_68 < iVar9) || iVar8 < local_78._4_4_) ||
              iVar8 != local_68._4_4_) &&
              ((((int)local_78 <= iVar9 && iVar9 <= (int)local_68) && local_78._4_4_ <= iVar8) &&
              iVar8 - local_68._4_4_ < 0) ==
              ((((int)local_78 <= iVar9 && iVar9 <= (int)local_68) && local_78._4_4_ <= iVar8) &&
              SBORROW4(iVar8,local_68._4_4_))) {
            *(undefined4 *)((long)param_1 + 0xaf5c) = 0;
            if (*(int *)(param_1[1] + 0x750) == 2) goto LAB_01f92f6c;
            if (*(int *)(param_1[1] + 0x750) == 1) {
              uVar13 = 0x15;
              goto LAB_01f92f70;
            }
            goto LAB_01f92f88;
          }
        }
        iVar8 = *(int *)((long)param_1 + 0xaf5c);
        *(int *)((long)param_1 + 0xaf5c) = iVar8 + 1;
        if (899 < iVar8) {
          local_60 = puVar6 + 0x10;
          *(undefined4 *)((long)param_1 + 0xaf5c) = 0;
          uVar7 = FUN_0376baa0(param_1[1] + 0x3e0);
          local_58 = (char *)CONCAT62(local_58._2_6_,uVar7);
          local_98 = puVar1 + 0x10;
          pcStack_90 = "StandingUpFlag";
          FUN_0376c130(&local_60,&local_98,0);
        }
      }
      goto LAB_01f930bc;
    }
LAB_01f92f6c:
    uVar13 = 0x3d;
LAB_01f92f70:
    (**(code **)(*param_1 + 0x38))(param_1,uVar13,0,1);
LAB_01f92f88:
    puVar1 = puVar1 + 0x10;
    *(undefined4 *)((long)param_1 + 0xaf5c) = 0;
    local_80 = "StandingUpFlag";
    local_88 = puVar1;
    FUN_0376c130(&local_a8,&local_88,0);
    local_80 = "KeepStandingUpFlag";
    local_88 = puVar1;
    FUN_0376c130(&local_a8,&local_88,1);
    if (0 < (int)*plVar16) {
      lVar14 = 0;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      do {
        plVar15 = *(long **)(param_1[0x15f1] + lVar14 * 8);
        lVar14 = lVar14 + 1;
        plVar15[0xf] = (long)puVar1;
        *plVar15 = param_1[0x15f2];
        param_1[0x15f2] = (long)plVar15;
      } while (lVar14 < (int)*plVar16);
    }
    *(int *)plVar16 = 0;
    if (0 < (int)*plVar2) {
      lVar14 = 0;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      do {
        plVar16 = *(long **)(param_1[0x1955] + lVar14 * 8);
        lVar14 = lVar14 + 1;
        plVar16[0xf] = (long)puVar1;
        *plVar16 = param_1[0x1956];
        param_1[0x1956] = (long)plVar16;
      } while (lVar14 < (int)*plVar2);
    }
LAB_01f93058:
    *(int *)plVar2 = 0;
    param_1[0x1cb8] = 0;
    param_1[0x1cb9] = 0;
    param_1[0x1cba] = 0;
  }
  return;
}

