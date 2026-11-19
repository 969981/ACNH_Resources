
void FUN_03849ef0(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  
  puVar3 = PTR_DAT_04bb49b8;
  lVar9 = *(long *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar10 = 0;
    do {
      lVar7 = lVar9 + (long)iVar10 * 0x38;
      pbVar5 = (byte *)(lVar7 + 8);
      bVar2 = *pbVar5;
      if ((bVar2 >> 1 & 1) != 0) {
        lVar6 = lVar9 + (long)iVar10 * 0x38;
        *pbVar5 = bVar2 & 0xf8 | 4;
        plVar8 = (long *)(lVar6 + 0x10);
        if (*(long *)(lVar6 + 0x28) == 0) {
          if (*plVar8 != 0) goto LAB_03849fa0;
        }
        else {
          FUN_03f45838(lVar9 + (long)iVar10 * 0x38 + 0x18);
          if (*plVar8 == 0) {
            *(undefined4 *)(lVar9 + (long)iVar10 * 0x38 + 0xc) = 0xe;
          }
          else {
LAB_03849fa0:
            if (*(long *)puVar3 != 0) {
              FUN_03f350f4(*(long *)puVar3,lVar7);
            }
          }
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar1 != iVar10);
    lVar9 = *(long *)(param_1 + 0x20);
  }
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + -8);
    if (*plVar8 != 0) {
      lVar7 = *plVar8 * 0x38;
      do {
        FUN_03f2d448(lVar9 + -0x38 + lVar7);
        lVar7 = lVar7 + -0x38;
      } while (lVar7 != 0);
    }
    if (DAT_05ae7600 == 0) {
      free(plVar8);
    }
    else {
      plVar4 = (long *)FUN_038cb610(DAT_05ae7600,plVar8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,plVar8);
      }
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + -8);
    if (*plVar8 != 0) {
      lVar7 = *plVar8 * 0x30;
      do {
        FUN_03830084(lVar9 + -0x30 + lVar7);
        lVar7 = lVar7 + -0x30;
      } while (lVar7 != 0);
    }
    if (DAT_05ae7600 == 0) {
      free(plVar8);
    }
    else {
      plVar4 = (long *)FUN_038cb610(DAT_05ae7600,plVar8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,plVar8);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

