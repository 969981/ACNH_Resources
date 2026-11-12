
void FUN_0081cfb0(long param_1,long param_2,byte *param_3,byte param_4)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  byte bVar15;
  long lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  lVar14 = *(long *)(param_2 + 0x10);
  if ((*(ushort *)(lVar14 + 6) & 1) == 0) {
    lVar12 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x30) + 0x18) + 0x28;
    pcVar11 = (char *)FUN_03be9dd0(lVar12,"CtrlRumblePattern",lVar14);
    pcVar4 = *(char **)(PTR_PTR_04bb2238 + 8);
    if (pcVar11 != (char *)0x0) {
      pcVar4 = pcVar11;
    }
    if (*pcVar4 != '\0') {
      uVar17 = FUN_03be9248(lVar12,3,lVar14,*(undefined8 *)(param_2 + 0x18));
      uVar18 = FUN_03be9248(lVar12,4,lVar14,*(undefined8 *)(param_2 + 0x18));
      uVar19 = FUN_03be9248(lVar12,5,lVar14,0);
      uVar9 = FUN_03be90c0(lVar12,0,lVar14);
      iVar10 = FUN_03be90c0(lVar12,1,lVar14);
      puVar8 = PTR_DAT_04bb3350;
      if (iVar10 == 0) {
        bVar15 = 0xff;
      }
      else {
        bVar15 = *param_3;
        if (7 < bVar15) {
          return;
        }
      }
      plVar1 = (long *)(param_1 + 0x990);
      lVar16 = *(long *)(*(long *)(param_2 + 0x18) + 0x40);
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      do {
        while (*plVar1 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar12;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            iVar10 = 1;
            goto LAB_0081d120;
          }
        }
        ClearExclusiveLocal();
      } while (*plVar1 != lVar12);
      iVar10 = *(int *)(param_1 + 0x998) + 1;
LAB_0081d120:
      *(int *)(param_1 + 0x998) = iVar10;
      iVar10 = *(int *)(param_1 + 0x6e8);
      iVar5 = *(int *)(param_1 + 0x6e0);
      if (iVar10 < iVar5) {
        if (iVar10 != 0) {
          iVar13 = 0;
          do {
            iVar2 = *(int *)(param_1 + 0x6e4) + iVar13;
            iVar3 = 0;
            if (iVar5 <= iVar2) {
              iVar3 = iVar5;
            }
            iVar2 = iVar2 - iVar3;
            lVar12 = *(long *)(*(long *)(param_1 + 0x6d8) + (long)iVar2 * 0x38 + 0x28);
            if ((lVar12 != 0 && lVar12 == lVar16) &&
               (lVar12 = *(long *)(*(long *)(param_1 + 0x6d8) + (long)iVar2 * 0x38 + 0x30),
               lVar12 != 0 && lVar12 == lVar14)) goto LAB_0081d218;
            iVar13 = iVar13 + 1;
          } while (iVar10 != iVar13);
        }
      }
      else {
        iVar10 = 0;
        *(undefined8 *)(param_1 + 0x6e4) = 0;
      }
      lVar12 = **(long **)(param_2 + 0x20);
      if ((lVar12 != 0) &&
         ((int)(*(long **)(param_2 + 0x20))[1] == *(int *)(lVar12 + 0x34) && iVar10 < iVar5)) {
        *(int *)(param_1 + 0x6e8) = iVar10 + 1;
        iVar10 = *(int *)(param_1 + 0x6e4) + iVar10;
        iVar13 = 0;
        if (iVar5 <= iVar10) {
          iVar13 = iVar5;
        }
        lVar12 = *(long *)(param_1 + 0x6d8) + (long)(iVar10 - iVar13) * 0x38;
        if (7 < bVar15) {
          bVar15 = 0xff;
        }
        *(char **)(lVar12 + 8) = pcVar4;
        *(undefined4 *)(lVar12 + 0x10) = uVar17;
        *(undefined4 *)(lVar12 + 0x14) = uVar18;
        *(undefined4 *)(lVar12 + 0x18) = uVar19;
        *(undefined4 *)(lVar12 + 0x1c) = uVar9;
        *(byte *)(lVar12 + 0x20) = bVar15;
        *(byte *)(lVar12 + 0x21) = param_4 & 1;
        *(long *)(lVar12 + 0x28) = lVar16;
        *(long *)(lVar12 + 0x30) = lVar14;
      }
LAB_0081d218:
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
      if ((*plVar1 == lVar14) &&
         (iVar10 = *(int *)(param_1 + 0x998) + -1, *(int *)(param_1 + 0x998) = iVar10, iVar10 == 0))
      {
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
  }
  return;
}

