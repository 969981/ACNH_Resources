
void FUN_03c3c8f0(long *param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  char *pcVar14;
  long lVar15;
  
  puVar5 = PTR_DAT_04bd0d40;
  puVar2 = PTR_DAT_04bc39a8;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  plVar13 = param_1 + 2;
  *plVar13 = (long)(puVar5 + 0x10);
  *param_1 = (long)(puVar2 + 0x10);
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar8 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar13);
    param_1[3] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar12 = (long *)(lVar8 + 0x70);
      lVar11 = *plVar12;
      plVar13 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)plVar13);
      *plVar12 = (long)plVar13;
      *plVar13 = lVar11;
      plVar13[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar13;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar15 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar15 + 0x20));
      }
    }
  }
  plVar13 = param_1 + 0xe;
  *plVar13 = (long)(puVar5 + 0x10);
  param_1[8] = 0;
  puVar2 = PTR_DAT_04bb2020;
  *(undefined4 *)(param_1 + 9) = 1;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  puVar7 = PTR_DAT_04bbd830;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  param_1[2] = (long)(puVar7 + 0x10);
  param_1[6] = (long)(puVar2 + 0x10);
  param_1[7] = (long)&DAT_0407ebb1;
  puVar6 = PTR_DAT_04bbd828;
  param_1[0xf] = 0;
  *(undefined **)((long)param_1 + 0x4c) = puVar6 + 0x10;
  puVar5 = PTR_DAT_04bb2698;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (*(long *)puVar5 != 0) {
    lVar8 = FUN_038cb610(*(long *)puVar5,plVar13);
    param_1[0xf] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar12 = (long *)(lVar8 + 0x70);
      lVar11 = *plVar12;
      plVar13 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)plVar13);
      *plVar12 = (long)plVar13;
      *plVar13 = lVar11;
      plVar13[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar13;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar15 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar15 + 0x20));
      }
    }
  }
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  param_1[0xe] = (long)(puVar7 + 0x10);
  param_1[0x24] = (long)param_1 + 300;
  param_1[0x12] = (long)(puVar2 + 0x10);
  param_1[0x13] = (long)&DAT_0407ebb1;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 1;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined **)((long)param_1 + 0xac) = puVar6 + 0x10;
  param_1[0x1a] = param_2;
  *(undefined2 *)(param_1 + 0x21) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x100;
  *(undefined1 *)((long)param_1 + 0x22b) = 0;
  *(undefined1 *)((long)param_1 + 300) = 0;
  puVar5 = PTR_DAT_04bb2720;
  puVar2 = PTR_DAT_04bb21f8 + 0x10;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = (long)puVar2;
  lVar8 = *(long *)(*(long *)puVar5 + 0x6e8);
  param_1[0x1f] = lVar8;
  FUN_03eb82fc(lVar8,7);
  FUN_03eb7ff0(param_1[0x1f]);
  lVar8 = *(long *)puVar5;
  (**(code **)(*(long *)(lVar8 + 0x578) + 0x18))(lVar8 + 0x578);
  (**(code **)(*(long *)(lVar8 + 0x578) + 0x18))(lVar8 + 0x578);
  pcVar14 = *(char **)(lVar8 + 0x580);
  do {
    cVar4 = *pcVar14;
    if ((cVar4 != '\t') && (cVar4 != ' ')) {
      if (cVar4 == '\0') {
        param_1[0x1b] = 0;
        plVar13 = *(long **)PTR_DAT_04bb2640;
        uVar9 = (**(code **)(*plVar13 + 0x98))(plVar13);
        if ((uVar9 & 1) != 0) {
          lVar8 = *(long *)PTR_DAT_04bb2698;
          if (lVar8 == 0) {
            pvVar10 = malloc(0x1b0);
          }
          else {
            lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            puVar3 = (undefined8 *)(lVar8 + 8);
            if (lVar15 != 0) {
              puVar3 = (undefined8 *)(lVar15 + 0xa8);
            }
            pvVar10 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x1b0,8);
          }
          FUN_03c3deb0(pvVar10,0x800);
          param_1[0x1d] = (long)pvVar10;
        }
        uVar9 = (**(code **)(*plVar13 + 0xa0))(plVar13);
        if ((uVar9 & 1) != 0) {
          lVar8 = *(long *)PTR_DAT_04bb2698;
          if (lVar8 == 0) {
            pvVar10 = malloc(0x50);
          }
          else {
            lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            puVar3 = (undefined8 *)(lVar8 + 8);
            if (lVar15 != 0) {
              puVar3 = (undefined8 *)(lVar15 + 0xa8);
            }
            pvVar10 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x50,8);
          }
          FUN_03c3dba4();
          param_1[0x1e] = (long)pvVar10;
        }
        lVar8 = *(long *)PTR_DAT_04bb2698;
        if (lVar8 == 0) {
          pvVar10 = malloc(0x1b8);
        }
        else {
          lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          puVar3 = (undefined8 *)(lVar8 + 8);
          if (lVar15 != 0) {
            puVar3 = (undefined8 *)(lVar15 + 0xa8);
          }
          pvVar10 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x1b8,8);
        }
        FUN_03eb7a88();
        param_1[0x20] = (long)pvVar10;
                    /* WARNING: Could not recover jumptable at 0x03c3cd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar13 + 0x78))(plVar13);
        return;
      }
      (**(code **)(param_1[0x23] + 0x18))(param_1 + 0x23);
      lVar15 = param_1[0x24];
      lVar8 = 0;
      do {
        if (*(char *)(lVar15 + lVar8) == '\0') goto LAB_03c3cbd0;
        if (*(char *)(lVar15 + lVar8 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_03c3cbd0;
        }
        if (*(char *)(lVar15 + lVar8 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_03c3cbd0;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_03c3cbd0:
      if ((int)lVar8 < (int)param_1[0x25] + -1) {
        pcVar1 = (char *)(lVar15 + (int)lVar8);
        *pcVar1 = cVar4;
        pcVar1[1] = '\0';
      }
    }
    pcVar14 = pcVar14 + 1;
  } while( true );
}

