
void FUN_01fbd2d0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 uVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined *local_218;
  undefined2 local_210;
  undefined *local_208;
  undefined8 local_200;
  long *local_1e8;
  undefined4 local_1a4;
  undefined2 local_1a0;
  undefined1 local_19e;
  undefined2 local_48 [2];
  int local_44;
  
  local_218 = PTR_DAT_04bb7648 + 0x10;
  local_210 = FUN_0376baa0(param_1[1] + 0x3e0);
  puVar1 = PTR_DAT_04bb2020;
  local_208 = PTR_DAT_04bb2020 + 0x10;
  local_200 = "StandingUpFlag";
  iVar11 = FUN_0376c020(&local_218,&local_208);
  puVar10 = PTR_DAT_04bbc1a0;
  puVar9 = PTR_DAT_04bb4e28;
  if (iVar11 == 1) {
    plVar2 = param_1 + 0x1619;
    plVar3 = param_1 + 0x197d;
    if (0 < (int)*plVar2) {
      lVar15 = 0;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      do {
        plVar16 = *(long **)(param_1[0x161a] + lVar15 * 8);
        lVar15 = lVar15 + 1;
        plVar16[0xf] = (long)puVar1;
        *plVar16 = param_1[0x161b];
        param_1[0x161b] = (long)plVar16;
      } while (lVar15 < (int)*plVar2);
    }
    *(int *)plVar2 = 0;
    if (0 < (int)*plVar3) {
      lVar15 = 0;
      do {
        plVar16 = *(long **)(param_1[0x197e] + lVar15 * 8);
        lVar15 = lVar15 + 1;
        plVar16[0xf] = (long)(puVar10 + 0x10);
        *plVar16 = param_1[0x197f];
        param_1[0x197f] = (long)plVar16;
      } while (lVar15 < (int)*plVar3);
    }
    *(int *)plVar3 = 0;
    *(undefined1 *)((long)param_1 + 0xe724) = 0;
    param_1[0x1ce1] = 0;
    param_1[0x1ce2] = 0;
    param_1[0x1ce3] = 0;
    FUN_01e63f1c(&local_208);
    *(undefined4 *)((long)param_1 + 0xaf8c) = 0;
    local_1e8 = param_1 + 0x243f;
    param_1[0x2440] = (long)param_1;
    param_1[0x2441] = 0x600;
    local_208 = (undefined *)CONCAT44(local_208._4_4_,1);
    param_1[0x2442] = 1;
    local_1a4 = 1;
    if ((int)*plVar2 < *(int *)((long)param_1 + 0xb0cc)) {
      FUN_021920b0(plVar2,&local_208);
    }
    FUN_02192850(param_1 + 0x1617,0,0);
    return;
  }
  if (((&DAT_00001230)[*(long *)PTR_DAT_04bb4e28] & 0xc) != 0) {
    (**(code **)(*param_1 + 0x5f0))(param_1,1,1);
    return;
  }
  puVar4 = (ushort *)(param_1 + 0x15a5);
  lVar15 = *(long *)PTR_DAT_04bb4130;
  if (lVar15 == 0) {
LAB_01fbd504:
    local_208 = puVar1 + 0x10;
    local_200 = "RequestEndShareHouseDemo";
    iVar11 = FUN_02758850(&local_208);
    if ((iVar11 == 0) && (uVar13 = (**(code **)(*param_1 + 0x5c0))(param_1), (uVar13 & 1) == 0)) {
      if ((*(uint *)(param_1 + 0x15f6) >> 9 & 1) != 0) {
        *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) & 0xfffffdff;
        if ((int)param_1[0x2411] == 0) {
          plVar2 = param_1 + 0x23f9;
          uVar13 = FUN_0277db54(plVar2);
          if ((uVar13 & 1) != 0) {
            FUN_01fb63c4(param_1,plVar2,param_1 + 0x23fa,1);
            return;
          }
          uVar13 = FUN_01f9d6fc(param_1,plVar2,param_1 + 0x23fa,1,0);
          if ((uVar13 & 1) != 0) {
            param_1[0x2406] = param_1[0x23fc];
            *(int *)(param_1 + 0x2407) = (int)param_1[0x23ff];
            return;
          }
        }
        else {
          FUN_00adda18(&local_208,param_1 + 0x2411,0);
          *(undefined4 *)(param_1 + 0x2411) = 0;
          if ((((local_208 != (undefined *)0x0) && ((char)local_200 != '\0')) &&
              (local_200._1_1_ != '\0')) &&
             ((lVar15 = FUN_01fa2530(), lVar15 != 0 &&
              (uVar13 = FUN_01fbd8e0(param_1,lVar15), (uVar13 & 1) != 0)))) {
            return;
          }
        }
        goto LAB_01fbd740;
      }
      lVar15 = *(long *)PTR_DAT_04bb27f8;
      if ((lVar15 != 0) && (*(int *)(lVar15 + 0x14) == 6)) {
        FUN_0252d11c(&local_44);
        local_208 = puVar1 + 0x10;
        local_200 = "WHEREAREN_MncTalkReserve_AfterCompleteDemo";
        iVar11 = FUN_02753180(&local_44,&local_208);
        if (iVar11 == 0) {
          if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
             (uVar8 = **(ushort **)PTR_DAT_04bc3a48, (uVar8 & 1) == 0)) {
            if (*(int *)(lVar15 + 0x10) == 1) goto LAB_01fbd788;
          }
          else if (((uVar8 ^ 0xffff) & 3) == 0) {
LAB_01fbd788:
            if ((*(uint *)(param_1 + 0x15f6) >> 0x1b & 1) == 0) {
              *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) | 0x8000000;
              puVar1 = PTR_DAT_04bb37e0;
              *(undefined2 *)((long)param_1 + 0xae84) = *(undefined2 *)PTR_DAT_04bb37e0;
              *(undefined *)((long)param_1 + 0xae86) = puVar1[2];
              *(undefined *)((long)param_1 + 0xae87) = puVar1[3];
              *(undefined4 *)(param_1 + 0x15d1) = *(undefined4 *)(puVar1 + 4);
              local_208._0_4_ = 8;
              *puVar4 = *puVar4 | 0x100;
              FUN_01e63f1c(&local_208);
              local_208 = (undefined *)CONCAT44(local_208._4_4_,0x4e);
              local_1a4 = 1;
              piVar14 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x17a90) + 0xf0))
                                         ();
              iVar6 = *piVar14;
              uVar13 = FUN_01fae650(param_1);
              lVar15 = param_1[1];
              iVar11 = 0;
              if ((uVar13 & 1) == 0) {
                iVar11 = iVar6;
              }
              uVar13 = FUN_01fae650(param_1);
              if ((uVar13 & 1) == 0) {
                lVar15 = lVar15 + 0x3e0;
                uVar13 = FUN_021d5fa0(lVar15);
                if ((uVar13 & 1) != 0) {
                  local_48[0] = FUN_0376baa0(lVar15);
                  uVar13 = FUN_03770770(local_48,0);
                  if (((uVar13 & 1) != 0) &&
                     (uVar13 = FUN_037385c0(*(undefined8 *)puVar9,&local_44,lVar15),
                     (uVar13 & 1) != 0)) {
                    lVar15 = param_1[1];
                    uVar5 = *(uint *)(lVar15 + 0x288);
                    *(undefined4 *)(lVar15 + 0x288) = *(undefined4 *)(lVar15 + 0x28c);
                    uVar5 = uVar5 ^ uVar5 << 0xb;
                    *(undefined4 *)(lVar15 + 0x28c) = *(undefined4 *)(lVar15 + 0x290);
                    uVar7 = *(uint *)(lVar15 + 0x294);
                    *(uint *)(lVar15 + 0x290) = uVar7;
                    uVar5 = uVar5 >> 8 ^ uVar7 >> 0x13 ^ uVar5 ^ uVar7;
                    *(uint *)(lVar15 + 0x294) = uVar5;
                    iVar11 = local_44 * ((uVar5 & 2) - 1) * 3 + iVar11;
                  }
                }
              }
              goto LAB_01fbd5a4;
            }
          }
        }
      }
      if (*(int *)(param_1[1] + 0x750) - 1U < 3) {
        uVar5 = *(uint *)(param_1 + 0x15f6);
        if ((uVar5 >> 0x17 & 1) == 0) {
          *(undefined4 *)((long)param_1 + 0xaf8c) = 2;
          *(uint *)(param_1 + 0x15f6) = uVar5 | 0x8000;
          FUN_01fa09e0(param_1);
          *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) & 0xffff7fff;
          return;
        }
        local_208 = (undefined *)((ulong)local_208 & 0xffffffff00000000);
        *(uint *)(param_1 + 0x15f6) = uVar5 & 0xff7fffff;
        FUN_01facaec(param_1,PTR_DAT_04bb37e0,&local_208);
        return;
      }
LAB_01fbd740:
      (**(code **)(*param_1 + 0x538))(param_1);
      return;
    }
  }
  else {
    lVar17 = param_1[1];
    (**(code **)(*(long *)(lVar17 + 0x3e0) + 0x18))(lVar17 + 0x3e0);
    uVar12 = FUN_006bd550(*(undefined8 *)(lVar17 + 1000),0);
    local_208 = (undefined *)CONCAT44(local_208._4_4_,uVar12);
    lVar15 = FUN_0079e4d0(lVar15,&local_208);
    if ((lVar15 == 0) || (uVar13 = FUN_01fb8180(param_1), (uVar13 & 1) == 0)) goto LAB_01fbd504;
  }
  *(undefined4 *)((long)param_1 + 0xaf8c) = 0;
  FUN_01e63f1c(&local_208);
  local_1a0 = 0x101;
  local_19e = 1;
  local_208 = (undefined *)CONCAT44(local_208._4_4_,1);
  local_1a4 = 1;
  if (*(int *)(param_1[1] + 0x750) == 3) {
    FUN_0212eca8(param_1 + 0x154a,1,0);
    local_44 = 5;
    *puVar4 = *puVar4 & 0xffdf;
  }
  iVar11 = 0;
LAB_01fbd5a4:
  FUN_01fb1020(param_1,&local_208,iVar11);
  return;
}

