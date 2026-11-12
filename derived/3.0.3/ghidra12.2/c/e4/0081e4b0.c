
void FUN_0081e4b0(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  puVar8 = PTR_DAT_04bb3350;
  lVar10 = *(long *)(param_2 + 0x10);
  plVar1 = (long *)(param_1 + 0x990);
  lVar18 = *(long *)(*(long *)(param_2 + 0x18) + 0x40);
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  do {
    while (*plVar1 != 0) {
      ClearExclusiveLocal();
      if (*plVar1 == lVar9) {
        iVar11 = *(int *)(param_1 + 0x998) + 1;
        goto LAB_0081e530;
      }
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  iVar11 = 1;
LAB_0081e530:
  uVar14 = *(uint *)(param_1 + 0x6e8);
  *(int *)(param_1 + 0x998) = iVar11;
  if (uVar14 != 0) {
    uVar12 = 0;
    uVar15 = 0;
    do {
      iVar11 = *(int *)(param_1 + 0x6e4) + uVar15;
      iVar2 = 0;
      if (*(int *)(param_1 + 0x6e0) <= iVar11) {
        iVar2 = *(int *)(param_1 + 0x6e0);
      }
      iVar11 = iVar11 - iVar2;
      lVar9 = *(long *)(*(long *)(param_1 + 0x6d8) + (long)iVar11 * 0x38 + 0x28);
      if ((lVar9 == 0 || lVar9 != lVar18) ||
         (lVar9 = *(long *)(*(long *)(param_1 + 0x6d8) + (long)iVar11 * 0x38 + 0x30),
         lVar9 == 0 || lVar9 != lVar10)) {
        uVar15 = uVar15 + 1;
        uVar12 = uVar12 + 1;
      }
      else {
        if ((((int)uVar12 < (int)uVar14) && (-1 < (int)uVar12)) &&
           (uVar15 = uVar14 - 1, 0 < (int)uVar14)) {
          uVar14 = uVar15;
          if (uVar12 < uVar15) {
            lVar9 = (long)(int)uVar12;
            do {
              iVar5 = *(int *)(param_1 + 0x6e4);
              iVar11 = (int)lVar9 + iVar5;
              iVar4 = *(int *)(param_1 + 0x6e0);
              iVar2 = 0;
              if (iVar4 <= iVar11 + 1) {
                iVar2 = iVar4;
              }
              lVar17 = *(long *)(param_1 + 0x6d8) + (lVar9 + ((long)iVar5 - (long)iVar2)) * 0x38;
              iVar2 = 0;
              if (iVar4 <= iVar11) {
                iVar2 = iVar4;
              }
              lVar16 = lVar9 + ((long)iVar5 - (long)iVar2);
              lVar9 = lVar9 + 1;
              lVar16 = *(long *)(param_1 + 0x6d8) + lVar16 * 0x38;
              *(undefined8 *)(lVar16 + 8) = *(undefined8 *)(lVar17 + 0x40);
              uVar3 = *(undefined8 *)(lVar17 + 0x50);
              *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar17 + 0x48);
              *(undefined8 *)(lVar16 + 0x18) = uVar3;
              bVar13 = *(byte *)(lVar17 + 0x58);
              *(undefined1 *)(lVar16 + 0x21) = *(undefined1 *)(lVar17 + 0x59);
              if (7 < bVar13) {
                bVar13 = 0xff;
              }
              *(byte *)(lVar16 + 0x20) = bVar13;
              uVar3 = *(undefined8 *)(lVar17 + 0x68);
              *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(lVar17 + 0x60);
              *(undefined8 *)(lVar16 + 0x30) = uVar3;
              uVar14 = *(int *)(param_1 + 0x6e8) - 1;
            } while ((int)lVar9 < (int)uVar14);
          }
          *(uint *)(param_1 + 0x6e8) = uVar14;
        }
        uVar15 = 0;
        if (uVar12 <= uVar14) {
          uVar15 = uVar12;
        }
        if (uVar15 == uVar14) break;
      }
    } while (uVar15 != uVar14);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
  if ((*plVar1 == lVar10) &&
     (iVar11 = *(int *)(param_1 + 0x998) + -1, *(int *)(param_1 + 0x998) = iVar11, iVar11 == 0)) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  return;
}

