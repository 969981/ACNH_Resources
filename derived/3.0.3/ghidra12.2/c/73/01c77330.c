
void FUN_01c77330(long *param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  char *pcVar12;
  int iVar13;
  undefined *local_70;
  char *pcStack_68;
  
  if ((*param_1 == 0) || ((param_2 & 1) != 0)) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 9));
  puVar5 = PTR_DAT_04bc3a80;
  iVar13 = 0;
  lVar1 = *param_1 + 8;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  do {
    pcVar12 = (char *)(lVar1 + (long)iVar13 * 0x168);
    if (pcVar12[0x161] != '\0') {
      if ((*pcVar12 == '\0') && ((long *)param_1[3] != param_1 + 2)) {
        lVar7 = (long)*(int *)((long)param_1 + 0x24);
        lVar9 = lVar1 + (long)iVar13 * 0x168;
        bVar10 = false;
        pcVar3 = pcVar12 + 0x160;
        piVar8 = (int *)(param_1[3] - lVar7);
        do {
          if (*piVar8 == *(int *)(lVar9 + 4)) {
            iVar6 = piVar8[4];
            if (iVar6 - 1U < 2) {
              if (iVar6 == 2) {
                if (pcVar12[0x161] == '\0') {
LAB_01c7745c:
                  *pcVar3 = '\0';
                }
                else if (*pcVar3 != '\0') goto LAB_01c7746c;
LAB_01c77460:
                iVar6 = 4;
                piVar8[6] = 0;
                piVar8[7] = 0;
              }
              else {
                if (iVar6 != 1) goto LAB_01c7746c;
                if (pcVar12[0x161] == '\0') goto LAB_01c7745c;
                if (*pcVar3 == '\0') goto LAB_01c77460;
                lVar11 = *(long *)(lVar9 + 0x150);
                if (lVar11 == 0) {
                  piVar8[6] = 0;
                  piVar8[7] = 0;
                  iVar6 = 3;
                }
                else {
                  *(long *)(piVar8 + 6) = lVar11;
                  iVar6 = 2;
                }
              }
              piVar8[4] = iVar6;
            }
LAB_01c7746c:
            bVar10 = true;
          }
          piVar8 = (int *)(*(long *)((long)piVar8 + lVar7 + 8) - lVar7);
        } while (piVar8 != (int *)((long)(param_1 + 2) - lVar7));
        if (!bVar10) goto LAB_01c773d0;
      }
      else {
LAB_01c773d0:
        if (*(int *)(puVar5 + 0x38) == -0x7a57de51) {
          pcStack_68 = "TapIndoorSelectCloudIsland";
          local_70 = puVar2;
          iVar6 = FUN_02743000(&local_70);
          if ((iVar6 != 0) || (*(long *)(*(long *)PTR_DAT_04bb3728 + 0x50) != 0)) {
            lVar7 = lVar1 + (long)iVar13 * 0x168;
            piVar8 = (int *)(lVar7 + 0x148);
            if (*(char *)(lVar7 + 1) == '\0') {
              iVar6 = *piVar8;
              iVar4 = iVar6 + -1;
              *piVar8 = iVar4;
              if (iVar4 == 0 || iVar6 < 1) {
                FUN_01c781b8(pcVar12);
              }
            }
            else {
              *piVar8 = 3;
            }
            goto LAB_01c773ac;
          }
        }
      }
      *(undefined4 *)(lVar1 + (long)iVar13 * 0x168 + 0x148) = 3;
    }
LAB_01c773ac:
    iVar13 = iVar13 + 1;
    if (iVar13 == 4) {
      nn::os::UnlockMutex((MutexType *)(param_1 + 9));
      return;
    }
  } while( true );
}

