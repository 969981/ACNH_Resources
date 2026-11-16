
void FUN_029c9230(long param_1)

{
  char *pcVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  long *plVar11;
  
  *(undefined8 *)(param_1 + 0x25bd4) = 0;
  puVar3 = PTR_DAT_04bb3350;
  lVar7 = *(long *)(param_1 + 0x25bc0);
  iVar2 = *(int *)(param_1 + 0x25bb8);
  if (iVar2 != 0) {
    iVar8 = 0;
    do {
      pcVar10 = (char *)(lVar7 + (long)iVar8 * 0x16a8 + 0x10);
      if (*pcVar10 != '\0') {
        plVar11 = (long *)(lVar7 + (long)iVar8 * 0x16a8 + 0x18);
        lVar9 = *plVar11;
        if (lVar9 == 0) {
          lVar6 = 1;
        }
        else {
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
          lVar6 = *(long *)(lVar4 + 0xa8);
          *(long *)(lVar4 + 0xa8) = lVar9;
        }
        if ((0 < *(int *)(lVar7 + (long)iVar8 * 0x16a8 + 0x20)) &&
           (pcVar1 = (char *)(lVar7 + (long)iVar8 * 0x16a8 + 0x14c4), *pcVar1 != '\0')) {
          *pcVar1 = '\0';
        }
        if (lVar6 != 1) {
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
          *(long *)(lVar9 + 0xa8) = lVar6;
        }
        *plVar11 = 0;
        *pcVar10 = '\0';
      }
      iVar8 = iVar8 + 1;
    } while (iVar2 != iVar8);
    lVar7 = *(long *)(param_1 + 0x25bc0);
  }
  if (lVar7 != 0) {
    plVar11 = (long *)(lVar7 + -8);
    lVar9 = *plVar11;
    if (lVar9 != 0) {
      lVar6 = lVar9 * -0x16a8;
      pcVar10 = (char *)(lVar7 + lVar9 * 0x16a8 + -0x1e4);
      do {
        if (pcVar10[-0x14b4] != '\0') {
          lVar7 = *(long *)(pcVar10 + -0x14ac);
          if (lVar7 == 0) {
            lVar9 = 1;
          }
          else {
            lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
            lVar9 = *(long *)(lVar4 + 0xa8);
            *(long *)(lVar4 + 0xa8) = lVar7;
          }
          if ((0 < *(int *)(pcVar10 + -0x14a4)) && (*pcVar10 != '\0')) {
            *pcVar10 = '\0';
          }
          if (lVar9 != 1) {
            lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
            *(long *)(lVar7 + 0xa8) = lVar9;
          }
          *(long *)(pcVar10 + -0x14ac) = 0;
          pcVar10[-0x14b4] = '\0';
        }
        if (*pcVar10 != '\0') {
          *pcVar10 = '\0';
        }
        pcVar10 = pcVar10 + -0x16a8;
        lVar6 = lVar6 + 0x16a8;
      } while (lVar6 != 0);
    }
    if (DAT_05ae7600 == 0) {
      free(plVar11);
    }
    else {
      plVar5 = (long *)FUN_038cb610(DAT_05ae7600,plVar11);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar11);
      }
    }
    *(undefined8 *)(param_1 + 0x25bc0) = 0;
    *(int *)(param_1 + 0x25bb8) = 0;
  }
  return;
}

