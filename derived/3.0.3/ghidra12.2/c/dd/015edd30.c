
void FUN_015edd30(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  void *__src;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  void *__dest;
  undefined **local_190;
  void *local_188;
  undefined **local_180;
  char *local_178;
  undefined8 local_170;
  undefined *puStack_168;
  undefined **local_160;
  undefined8 *puStack_158;
  undefined4 local_150;
  undefined1 local_6d;
  
  local_188 = (void *)(**(code **)(*param_1 + 0x80))();
  lVar7 = DAT_05ae7600;
  local_190 = &PTR_LAB_048f9770;
  if (DAT_05ae7600 == 0) {
    plVar6 = malloc(600);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar6 = (long *)(lVar7 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,600,8);
    }
  }
  local_160 = &PTR_LAB_048f9770;
  puStack_158 = &DAT_0407ebb1;
  local_150 = 0;
  plVar1 = param_1 + 0xf4a89;
  local_180 = &PTR_LAB_048f9770;
  local_178 = "DynamicLightSceneParam";
  local_170 = &PTR_LAB_048f9770;
  puStack_168 = &DAT_040b5839;
  *plVar6 = (long)&DAT_04b7e9f0;
  (*(code *)PTR_FUN_048f9788)(&local_180);
  plVar6[3] = 0;
  *(undefined1 *)((long)plVar6 + 0x143) = 0;
  *(undefined1 *)((long)plVar6 + 0x44) = 0;
  puVar3 = PTR_DAT_04bb21f8;
  plVar6[7] = (long)plVar6 + 0x44;
  plVar6[1] = (long)local_178;
  plVar6[2] = 0;
  *(undefined4 *)(plVar6 + 8) = 0x100;
  *(undefined1 *)(plVar6 + 0x29) = 0;
  *(undefined4 *)(plVar6 + 4) = local_150;
  plVar6[5] = 0;
  plVar6[6] = (long)(puVar3 + 0x10);
  *plVar6 = (long)&PTR_FUN_049b0940;
  local_150 = 8;
  local_160 = &PTR_LAB_048f9770;
  puStack_158 = &DAT_0407ebb1;
  local_180 = &PTR_LAB_048f9770;
  local_178 = "mPointParamArray";
  local_170 = &PTR_LAB_048f9770;
  puStack_168 = &DAT_040f97d6;
  plVar6[0x2c] = 0;
  plVar6[0x2d] = 0;
  plVar6[0x2a] = (long)plVar6;
  plVar6[0x2b] = (long)&PTR_FUN_04b64428;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  plVar6[0x2e] = 0;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,plVar6 + 0x2b);
    plVar6[0x2c] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar13 = (long *)(lVar7 + 0x70);
      lVar12 = *plVar13;
      plVar11 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)(plVar6 + 0x2b));
      *plVar13 = (long)plVar11;
      *plVar11 = lVar12;
      plVar11[1] = (long)plVar13;
      if (lVar12 != 0) {
        *(long **)(lVar12 + 8) = plVar11;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar5 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
      }
    }
  }
  plVar6[0x2f] = (long)&DAT_04b7e9f0;
  (*(code *)local_180[3])(&local_180);
  plVar6[0x31] = 0;
  plVar6[0x32] = 0;
  *(undefined4 *)(plVar6 + 0x33) = local_150;
  plVar6[0x34] = 0;
  plVar6[0x2f] = (long)&DAT_04b7e798;
  plVar6[0x30] = (long)local_178;
  (**(code **)(*plVar6 + 0x140))(plVar6,plVar6 + 0x2f);
  *(undefined4 *)(plVar6 + 0x3a) = 0;
  plVar6[0x2b] = (long)&PTR_LAB_049b0aa8;
  plVar6[0x35] = 0;
  plVar6[0x2f] = (long)&PTR_LAB_049b0b68;
  local_150 = 8;
  local_180 = &PTR_LAB_048f9770;
  local_178 = "mSpotParamArray";
  plVar6[0x38] = 0;
  plVar6[0x39] = 0;
  plVar6[0x36] = 0;
  plVar6[0x37] = 0;
  local_170 = &PTR_LAB_048f9770;
  puStack_168 = &DAT_040ca0fe;
  local_160 = &PTR_LAB_048f9770;
  puStack_158 = &DAT_0407ebb1;
  plVar6[0x3b] = (long)&PTR_FUN_04b64428;
  plVar6[0x3c] = 0;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  plVar6[0x3d] = 0;
  plVar6[0x3e] = 0;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,plVar6 + 0x3b);
    plVar6[0x3c] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar13 = (long *)(lVar7 + 0x70);
      lVar12 = *plVar13;
      plVar11 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)(plVar6 + 0x3b));
      *plVar13 = (long)plVar11;
      *plVar11 = lVar12;
      plVar11[1] = (long)plVar13;
      if (lVar12 != 0) {
        *(long **)(lVar12 + 8) = plVar11;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar5 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
      }
    }
  }
  plVar6[0x3f] = (long)(PTR_DAT_04bb3050 + 0x10);
  (*(code *)local_180[3])(&local_180);
  plVar6[0x41] = 0;
  plVar6[0x42] = 0;
  plVar6[0x44] = 0;
  *(undefined4 *)(plVar6 + 0x43) = local_150;
  plVar6[0x3f] = (long)&DAT_04b7e798;
  plVar6[0x40] = (long)local_178;
  (**(code **)(*plVar6 + 0x140))(plVar6,plVar6 + 0x3f);
  *(undefined4 *)(plVar6 + 0x4a) = 0;
  plVar6[0x3b] = (long)&PTR_LAB_049b1030;
  plVar6[0x49] = 0;
  plVar6[0x48] = 0;
  plVar6[0x47] = 0;
  plVar6[0x46] = 0;
  plVar6[0x45] = 0;
  plVar6[0x3f] = (long)&PTR_LAB_049b10f0;
  param_1[0xf5097] = (long)plVar6;
  __dest = (void *)plVar6[7];
  (*(code *)local_190[3])(&local_190);
  __src = local_188;
  if (__dest != local_188) {
    (*(code *)local_190[3])(&local_190);
    lVar7 = 0;
    do {
      if (*(char *)((long)local_188 + lVar7) == '\0') goto LAB_015ee15c;
      if (*(char *)((long)local_188 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_015ee15c;
      }
      if (*(char *)((long)local_188 + lVar7 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_015ee15c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_015ee15c:
    iVar4 = (int)lVar7;
    if ((int)plVar6[8] <= (int)lVar7) {
      iVar4 = (int)plVar6[8] + -1;
    }
    memcpy(__dest,__src,(long)iVar4);
    *(undefined1 *)((long)__dest + (long)iVar4) = 0;
  }
  local_6d = 0;
  plVar6 = (long *)param_1[0xf5097];
  local_178 = (char *)((long)&local_170 + 4);
  local_170 = (undefined **)CONCAT35(local_170._5_3_,0x100);
  local_180 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
  uVar8 = (**(code **)(*plVar6 + 0xf0))(plVar6,&local_180,1);
  if ((uVar8 & 1) != 0) {
    FUN_03c27e60(plVar6,&local_180,0);
  }
  lVar7 = param_1[0xf5097];
  uVar2 = *(uint *)(lVar7 + 0x1d0);
  if (0 < (int)uVar2) {
    uVar8 = 0;
    do {
      if (uVar8 < *(uint *)(lVar7 + 0x1b0)) {
        lVar5 = *(long *)(*(long *)(lVar7 + 0x1b8) + uVar8 * 8);
      }
      else {
        lVar5 = 0;
      }
      pcVar9 = (char *)(**(code **)(*(long *)(lVar5 + 0x158) + 0xf0))(lVar5 + 0x158);
      if (*pcVar9 != '\0') {
        lVar10 = (**(code **)(*(long *)(lVar5 + 0x430) + 0xf0))(lVar5 + 0x430);
        lVar12 = DAT_05ae7600;
        if (**(char **)(lVar10 + 8) == '\0') {
          plVar6 = (long *)FUN_015ef2fc(param_1,lVar5);
          if (plVar6 == (long *)0x0) goto LAB_015ee214;
        }
        else {
          if (DAT_05ae7600 == 0) {
            plVar6 = malloc(0x50);
          }
          else {
            lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar6 = (long *)(lVar12 + 8);
            if (lVar10 != 0) {
              plVar6 = (long *)(lVar10 + 0xa8);
            }
            plVar6 = (long *)*plVar6;
            if (plVar6 == (long *)0x0) {
              plVar6 = (long *)0x0;
            }
            else {
              plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x50,8);
            }
          }
          plVar6[5] = 0;
          *(undefined4 *)(plVar6 + 6) = 0xffffffff;
          *(undefined4 *)(plVar6 + 7) = 0x30;
          plVar13 = plVar6 + 2;
          *plVar13 = 0;
          plVar6[3] = 0;
          plVar6[4] = 0;
          *plVar6 = (long)&PTR_FUN_049b3668;
          plVar6[1] = (long)&PTR_FUN_049b4b10;
          plVar6[8] = 0;
          plVar6[9] = -0xffffffff;
          FUN_0160fd18(plVar6,0);
          plVar11 = (long *)*plVar13;
          if (plVar11 == (long *)0x0) {
            lVar5 = 0;
          }
          else {
            (**(code **)(*plVar11 + 0x98))(plVar11,lVar5);
            lVar5 = *plVar13;
          }
          (**(code **)(*(long *)(lVar5 + 0x188) + 0xf0))(lVar5 + 0x188);
          nn::os::LockMutex((MutexType *)(param_1 + 0xf4a85));
          if ((int)*plVar1 < *(int *)((long)param_1 + 0x7a544c)) {
            *(long **)(param_1[0xf4a8a] + (long)(int)*plVar1 * 8) = plVar6;
            *(int *)plVar1 = (int)*plVar1 + 1;
          }
          nn::os::UnlockMutex((MutexType *)(param_1 + 0xf4a85));
        }
        lVar5 = (**(code **)(*(long *)(plVar6[2] + 0x430) + 0xf0))(plVar6[2] + 0x430);
        if ((**(char **)(lVar5 + 8) == '\0') &&
           (iVar4 = (**(code **)(*plVar6 + 0x30))(plVar6), iVar4 != 1)) {
          (**(code **)(*plVar6 + 0x30))(plVar6);
        }
      }
LAB_015ee214:
      uVar8 = uVar8 + 1;
    } while (uVar2 != uVar8);
  }
  uVar2 = *(uint *)(lVar7 + 0x250);
  if (0 < (int)uVar2) {
    uVar8 = 0;
    do {
      if (uVar8 < *(uint *)(lVar7 + 0x230)) {
        lVar5 = *(long *)(*(long *)(lVar7 + 0x238) + uVar8 * 8);
      }
      else {
        lVar5 = 0;
      }
      pcVar9 = (char *)(**(code **)(*(long *)(lVar5 + 0x158) + 0xf0))(lVar5 + 0x158);
      if (*pcVar9 != '\0') {
        lVar10 = (**(code **)(*(long *)(lVar5 + 0x430) + 0xf0))(lVar5 + 0x430);
        lVar12 = DAT_05ae7600;
        if (**(char **)(lVar10 + 8) == '\0') {
          plVar6 = (long *)FUN_015ef51c(param_1,lVar5);
          if (plVar6 == (long *)0x0) goto LAB_015ee420;
        }
        else {
          if (DAT_05ae7600 == 0) {
            plVar6 = malloc(0x50);
          }
          else {
            lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar6 = (long *)(lVar12 + 8);
            if (lVar10 != 0) {
              plVar6 = (long *)(lVar10 + 0xa8);
            }
            plVar6 = (long *)*plVar6;
            if (plVar6 == (long *)0x0) {
              plVar6 = (long *)0x0;
            }
            else {
              plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x50,8);
            }
          }
          plVar6[5] = 0;
          *(undefined4 *)(plVar6 + 6) = 0xffffffff;
          *(undefined4 *)(plVar6 + 7) = 0x30;
          plVar6[3] = 0;
          plVar6[4] = 0;
          plVar13 = plVar6 + 2;
          *plVar13 = 0;
          *plVar6 = (long)&PTR_FUN_049b3668;
          plVar6[1] = (long)&PTR_FUN_049b4b10;
          plVar6[8] = 0;
          plVar6[9] = -0xfffffffe;
          FUN_0160fd18(plVar6,0);
          plVar11 = (long *)*plVar13;
          if (plVar11 == (long *)0x0) {
            lVar5 = 0;
          }
          else {
            (**(code **)(*plVar11 + 0x98))(plVar11,lVar5);
            lVar5 = *plVar13;
          }
          (**(code **)(*(long *)(lVar5 + 0x188) + 0xf0))(lVar5 + 0x188);
          nn::os::LockMutex((MutexType *)(param_1 + 0xf4a85));
          if ((int)*plVar1 < *(int *)((long)param_1 + 0x7a544c)) {
            *(long **)(param_1[0xf4a8a] + (long)(int)*plVar1 * 8) = plVar6;
            *(int *)plVar1 = (int)*plVar1 + 1;
          }
          nn::os::UnlockMutex((MutexType *)(param_1 + 0xf4a85));
        }
        lVar5 = (**(code **)(*(long *)(plVar6[2] + 0x430) + 0xf0))(plVar6[2] + 0x430);
        if ((**(char **)(lVar5 + 8) == '\0') &&
           (iVar4 = (**(code **)(*plVar6 + 0x30))(plVar6), iVar4 != 1)) {
          (**(code **)(*plVar6 + 0x30))(plVar6);
        }
      }
LAB_015ee420:
      uVar8 = uVar8 + 1;
    } while (uVar2 != uVar8);
  }
  return;
}

