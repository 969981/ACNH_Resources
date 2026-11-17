
undefined8 FUN_02cb6f90(long *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  ushort *puVar9;
  long lVar10;
  code *pcVar11;
  char acStack_e4 [7];
  undefined1 local_dd;
  undefined *local_d8;
  char *local_d0;
  int local_c8;
  char acStack_c4 [7];
  undefined1 local_bd;
  undefined4 local_b8;
  undefined4 uStack_b4;
  char *local_b0;
  undefined *local_98;
  char *local_90;
  int local_88;
  char acStack_84 [7];
  undefined1 local_7d;
  long local_78;
  char *local_70;
  undefined4 local_54;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  uVar6 = (**(code **)(*param_1 + 0x38))();
  if ((uVar6 & 1) == 0) {
    uVar6 = (**(code **)(*param_1 + 0x28))(param_1);
    if ((uVar6 & 1) == 0) {
      uVar6 = (**(code **)(*param_1 + 0x30))(param_1);
      if ((uVar6 & 1) != 0) {
        (**(code **)(*param_1 + 0x48))(&local_78,param_1);
        (**(code **)(*param_1 + 0x50))(&local_b8,param_1);
        if ((*local_70 != '\0') && (*local_b0 != '\0')) {
          local_c8 = 8;
          local_bd = 0;
          local_d8 = PTR_DAT_04bb6a30 + 0x10;
          local_d0 = acStack_c4;
          (**(code **)(local_78 + 0x18))(&local_78);
          pcVar2 = local_70;
          if (acStack_c4 != local_70) {
            (**(code **)(local_78 + 0x18))(&local_78);
            lVar10 = 0;
            do {
              if (local_70[lVar10] == '\0') goto LAB_02cb72e8;
              if (local_70[lVar10 + 1] == '\0') {
                lVar10 = lVar10 + 1;
                goto LAB_02cb72e8;
              }
              if (local_70[lVar10 + 2] == '\0') {
                lVar10 = lVar10 + 2;
                goto LAB_02cb72e8;
              }
              lVar10 = lVar10 + 3;
            } while (lVar10 != 0x80001);
            lVar10 = 0;
LAB_02cb72e8:
            iVar5 = (int)lVar10;
            if (local_c8 <= (int)lVar10) {
              iVar5 = local_c8 + -1;
            }
            memcpy(acStack_c4,pcVar2,(long)iVar5);
            acStack_c4[iVar5] = '\0';
          }
          puVar1 = PTR_DAT_04bb4130;
          local_d8 = PTR_DAT_04bb3768 + 0x10;
          lVar10 = *(long *)PTR_DAT_04bb4130;
          if (lVar10 == 0) {
LAB_02cb7360:
            sVar3 = (**(code **)(*param_1 + 0x58))(param_1);
            if (sVar3 == -1) goto LAB_02cb73fc;
          }
          else {
            local_d0[(long)local_c8 + -1] = '\0';
            local_54 = FUN_006bd550(local_d0,0);
            lVar10 = FUN_0079e4d0(lVar10,&local_54);
            if (lVar10 == 0) goto LAB_02cb7360;
          }
          local_dd = 0;
          (**(code **)(CONCAT44(uStack_b4,local_b8) + 0x18))(&local_b8);
          pcVar2 = local_b0;
          if (acStack_e4 != local_b0) {
            (**(code **)(CONCAT44(uStack_b4,local_b8) + 0x18))(&local_b8);
            lVar10 = 0;
            do {
              if (local_b0[lVar10] == '\0') goto LAB_02cb7428;
              if (local_b0[lVar10 + 1] == '\0') {
                lVar10 = lVar10 + 1;
                goto LAB_02cb7428;
              }
              if (local_b0[lVar10 + 2] == '\0') {
                lVar10 = lVar10 + 2;
                goto LAB_02cb7428;
              }
              lVar10 = lVar10 + 3;
            } while (lVar10 != 0x80001);
            lVar10 = 0;
LAB_02cb7428:
            iVar5 = (int)lVar10;
            if (7 < (int)lVar10) {
              iVar5 = 7;
            }
            memcpy(acStack_e4,pcVar2,(long)iVar5);
            acStack_e4[iVar5] = '\0';
          }
          lVar10 = *(long *)puVar1;
          if (lVar10 != 0) {
            local_54 = FUN_006bd550(acStack_e4,0);
            lVar10 = FUN_0079e4d0(lVar10,&local_54);
            if (lVar10 != 0) goto LAB_02cb7228;
          }
          pcVar11 = *(code **)(*param_1 + 0x60);
          goto LAB_02cb7218;
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x48))(&local_78,param_1);
      if (*local_70 == '\0') goto LAB_02cb73fc;
      local_88 = 8;
      local_7d = 0;
      local_98 = PTR_DAT_04bb6a30 + 0x10;
      local_90 = acStack_84;
      (**(code **)(local_78 + 0x18))(&local_78);
      pcVar2 = local_70;
      if (acStack_84 != local_70) {
        (**(code **)(local_78 + 0x18))(&local_78);
        lVar10 = 0;
        do {
          if (local_70[lVar10] == '\0') goto LAB_02cb7194;
          if (local_70[lVar10 + 1] == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_02cb7194;
          }
          if (local_70[lVar10 + 2] == '\0') {
            lVar10 = lVar10 + 2;
            goto LAB_02cb7194;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_02cb7194:
        iVar5 = (int)lVar10;
        if (local_88 <= (int)lVar10) {
          iVar5 = local_88 + -1;
        }
        memcpy(acStack_84,pcVar2,(long)iVar5);
        acStack_84[iVar5] = '\0';
      }
      local_98 = PTR_DAT_04bb3768 + 0x10;
      lVar10 = *(long *)PTR_DAT_04bb4130;
      if (lVar10 == 0) {
LAB_02cb720c:
        pcVar11 = *(code **)(*param_1 + 0x58);
LAB_02cb7218:
        sVar3 = (*pcVar11)(param_1);
        if (sVar3 == -1) goto LAB_02cb73fc;
      }
      else {
        local_90[(long)local_88 + -1] = '\0';
        local_b8 = FUN_006bd550(local_90,0);
        lVar10 = FUN_0079e4d0(lVar10,&local_b8);
        if (lVar10 == 0) goto LAB_02cb720c;
      }
LAB_02cb7228:
      sVar3 = (**(code **)(*param_1 + 0x78))(param_1);
      if (sVar3 != -1) {
        uVar6 = (**(code **)(*param_1 + 0x88))(param_1);
        if ((uVar6 & 1) == 0) {
          uVar4 = (**(code **)(*param_1 + 0x70))(param_1);
          uVar4 = uVar4 ^ 0xffff;
        }
        else {
          uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
          if ((uVar6 & 1) != 0) goto LAB_02cb6fdc;
          plVar8 = (long *)(**(code **)(*param_1 + 0x90))(param_1);
          if (plVar8 == (long *)0x0) {
            return 0;
          }
          puVar9 = (ushort *)(**(code **)(*plVar8 + 0x18))();
          iVar5 = (**(code **)(*plVar8 + 0x20))(plVar8);
          if (puVar9 == (ushort *)0x0) {
            return 0;
          }
          if (iVar5 == 0) {
            return 0;
          }
          uVar4 = *puVar9;
        }
        if (uVar4 != 0) goto LAB_02cb6fdc;
      }
    }
LAB_02cb73fc:
    uVar7 = 0;
  }
  else {
    iVar5 = (**(code **)(*param_1 + 0x98))(param_1);
    if (iVar5 == 5) goto LAB_02cb73fc;
LAB_02cb6fdc:
    uVar7 = 1;
  }
  return uVar7;
}

