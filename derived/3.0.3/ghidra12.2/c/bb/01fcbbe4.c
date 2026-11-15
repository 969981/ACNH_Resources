
void FUN_01fcbbe4(long *param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  undefined2 uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *local_58;
  
  FUN_01ed85e0();
  puVar7 = PTR_DAT_04bb4e28;
  puVar6 = PTR_DAT_04bb27f8;
  if (*(long *)PTR_DAT_04bb4e28 == 0) {
    bVar8 = false;
  }
  else {
    bVar8 = ((&DAT_00001230)[*(long *)PTR_DAT_04bb4e28] & 0xc) != 0;
  }
  if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0))
  {
    if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 4) {
      bVar9 = true;
    }
    else {
      bVar9 = *(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 5;
    }
  }
  else {
    bVar9 = false;
  }
  if ((int)param_1[0x15f1] == 1) {
    lVar14 = param_1[1];
    if ((*(int *)(lVar14 + 0x750) == 0) && (lVar13 = *(long *)PTR_DAT_04bb4130, lVar13 != 0)) {
      (**(code **)(*(long *)(lVar14 + 0x3e0) + 0x18))(lVar14 + 0x3e0);
      local_60._0_4_ = FUN_006bd550(*(undefined8 *)(lVar14 + 1000),0);
      lVar14 = FUN_0079e4d0(lVar13,&local_60);
      if ((lVar14 != 0) && (uVar12 = FUN_01fb8180(param_1), (uVar12 & 1) != 0)) {
        FUN_01fcc0dc(param_1);
        piVar1 = (int *)(param_1[3] + 0x10);
        uVar5 = *(uint *)(param_1[3] + 0x294);
        piVar3 = piVar1 + (ulong)uVar5 * 0x20;
        if (4 < uVar5) {
          piVar3 = piVar1;
        }
        local_60 = (undefined *)CONCAT44(local_60._4_4_,*piVar3);
        if (*piVar3 != 4) {
          FUN_01fa096c(param_1);
        }
      }
    }
    local_60 = PTR_DAT_04bb7648 + 0x10;
    uVar10 = FUN_0376baa0(param_1[1] + 0x3e0);
    local_58 = (char *)CONCAT62(local_58._2_6_,uVar10);
    if (*(int *)(param_1[1] + 0x750) != 0) {
      return;
    }
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "KeepStandingUpFlag";
    iVar11 = FUN_0376c020(&local_60,&local_70);
    if (iVar11 != 1) {
      return;
    }
    FUN_01fcc0dc(param_1);
    piVar1 = (int *)(param_1[3] + 0x10);
    uVar5 = *(uint *)(param_1[3] + 0x294);
    piVar3 = piVar1 + (ulong)uVar5 * 0x20;
    if (4 < uVar5) {
      piVar3 = piVar1;
    }
    local_70 = (undefined *)CONCAT44(local_70._4_4_,*piVar3);
    if (*piVar3 != 4) {
      iVar11 = FUN_03738270(*(undefined8 *)puVar7);
      if (iVar11 == *(int *)PTR_DAT_04bb3238) {
        FUN_02085a50(param_1[3],0,0);
      }
      else {
        FUN_02085e20(param_1[3],0,iVar11,PTR_DAT_04bb6928,0);
      }
    }
    if (*(int *)((long)param_1 + 0x77b4) < 600) {
      return;
    }
    FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
    return;
  }
  if ((int)param_1[0x15f1] != 0) {
    return;
  }
  if (((bVar8) || (*(int *)(param_1[1] + 0x750) != 0)) ||
     ((uVar12 = (**(code **)(*param_1 + 0x5c0))(param_1), (uVar12 & 1) != 0 && (!bVar9))))
  goto LAB_01fcbec4;
  lVar14 = *(long *)puVar7;
  if ((lVar14 != 0) && (uVar5 = *(uint *)(&DAT_00001230 + lVar14), (uVar5 >> 10 & 1) == 0)) {
    if ((uVar5 >> 2 & 1) != 0) goto LAB_01fcbec4;
    if ((uVar5 >> 3 & 1) == 0) {
      lVar13 = FUN_0252d9bc(0);
      if (lVar13 == 0) goto LAB_01fcbec4;
    }
    else {
      lVar13 = lVar14 + 0x1170;
    }
    uVar12 = FUN_012e2100(*(long *)PTR_DAT_04bb59d8 + 0x40,lVar13);
    if ((uVar12 & 1) != 0) goto LAB_01fcbec4;
    *(uint *)(&DAT_00001230 + lVar14) = *(uint *)(&DAT_00001230 + lVar14) | 0x400;
  }
  FUN_01fcc0dc(param_1);
LAB_01fcbec4:
  if ((*(int *)(param_1[1] + 0x750) == 0) && ((*(uint *)(param_1 + 0x15f6) >> 10 & 1) == 0)) {
    if (((*(uint *)(param_1 + 0x15f6) & 0x50) == 0) &&
       (uVar12 = (**(code **)(*param_1 + 0x608))(param_1), (uVar12 & 1) == 0)) {
      *(int *)(param_1 + 0x1614) = (int)param_1[0x1614] + 1;
    }
    if (*(int *)((long)param_1 + 0xb0a4) <= (int)param_1[0x1614]) {
      FUN_01fb8360(param_1);
    }
  }
  if (*(int *)(param_1[1] + 0x750) != 3) {
    if ((*(byte *)(param_1 + 0x15f6) >> 4 & 1) == 0) {
      if (bVar8) {
        lVar14 = param_1[3];
        piVar1 = (int *)(lVar14 + 0x10);
        piVar3 = piVar1 + (ulong)*(uint *)(lVar14 + 0x294) * 0x20;
        if (4 < *(uint *)(lVar14 + 0x294)) {
          piVar3 = piVar1;
        }
        local_60 = (undefined *)CONCAT44(local_60._4_4_,*piVar3);
        if ((*piVar3 != 1) && (uVar12 = FUN_02085a50(lVar14,1,0), (uVar12 & 1) != 0)) {
          *(undefined1 *)(lVar14 + 0x801) = 1;
          piVar3 = piVar1 + (ulong)*(uint *)(lVar14 + 0x294) * 0x20;
          if (4 < *(uint *)(lVar14 + 0x294)) {
            piVar3 = piVar1;
          }
          piVar3[3] = 0;
          piVar3[4] = 0;
          piVar3[5] = 0;
        }
      }
      else if (bVar9) {
        local_60 = PTR_DAT_04bb2020 + 0x10;
        local_58 = "SeqKabetasuEventReady";
        iVar11 = FUN_02758850(&local_60);
        if ((iVar11 != 0) && ((*(ushort *)(*(long *)puVar6 + 0xc0) & 0xf) == 1)) {
          local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
          uVar12 = FUN_0290cbcc(&local_70);
          if ((uVar12 & 1) != 0) {
            lVar14 = param_1[3];
            piVar1 = (int *)(lVar14 + 0x10) + (ulong)*(uint *)(lVar14 + 0x294) * 0x20;
            if (4 < *(uint *)(lVar14 + 0x294)) {
              piVar1 = (int *)(lVar14 + 0x10);
            }
            local_60 = (undefined *)CONCAT44(local_60._4_4_,*piVar1);
            if (*piVar1 == 0) {
              return;
            }
            FUN_02085a50(lVar14,0,0);
            return;
          }
        }
        piVar1 = (int *)(param_1[3] + 0x10);
        uVar5 = *(uint *)(param_1[3] + 0x294);
        piVar3 = piVar1 + (ulong)uVar5 * 0x20;
        if (4 < uVar5) {
          piVar3 = piVar1;
        }
        local_60 = (undefined *)CONCAT44(local_60._4_4_,*piVar3);
        if (*piVar3 != 4) {
          FUN_01fa096c(param_1);
        }
      }
    }
    else {
      lVar14 = param_1[3];
      lVar13 = *(long *)puVar7;
      uVar12 = FUN_02085a50(lVar14,3,0);
      if ((uVar12 & 1) != 0) {
        *(undefined1 *)(lVar14 + 0x801) = 1;
        lVar2 = lVar14 + 0x10;
        lVar4 = lVar2 + (ulong)*(uint *)(lVar14 + 0x294) * 0x80;
        if (4 < *(uint *)(lVar14 + 0x294)) {
          lVar4 = lVar2;
        }
        *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)(lVar13 + 0x121c);
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(lVar13 + 0x1220);
        *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)(lVar13 + 0x1224);
        lVar13 = lVar2 + (ulong)*(uint *)(lVar14 + 0x294) * 0x80;
        if (4 < *(uint *)(lVar14 + 0x294)) {
          lVar13 = lVar2;
        }
        *(undefined1 *)(lVar13 + 0x7e) = 0;
      }
    }
  }
  return;
}

