
void FUN_03f416d0(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  byte *pbVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  int iVar11;
  undefined **local_80;
  long *plStack_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  
  plVar6 = (long *)PTR_DAT_04bb2698;
  pvVar9 = *(void **)(param_1 + 0x40);
  if (pvVar9 == (void *)0x0) goto LAB_03f41790;
  plStack_78 = (long *)(param_1 + 0x30);
  local_70 = &LAB_03f41908;
  uStack_68 = 0;
  local_80 = &PTR_LAB_04ba9078;
  if (*plStack_78 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    lVar4 = *plVar6;
    if (lVar4 != 0) goto LAB_03f4174c;
LAB_03f41780:
    free(pvVar9);
  }
  else {
    FUN_03f41920(*plStack_78,&local_80);
    pvVar9 = *(void **)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (pvVar9 != (void *)0x0) {
      lVar4 = *plVar6;
      if (lVar4 == 0) goto LAB_03f41780;
LAB_03f4174c:
      plVar5 = (long *)FUN_038cb610(lVar4,pvVar9);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar9);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
LAB_03f41790:
  pvVar9 = *(void **)(param_1 + 0x18);
  if (pvVar9 != (void *)0x0) {
    if (*plVar6 == 0) {
      free(pvVar9);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*plVar6,pvVar9);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar9);
      }
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  puVar3 = PTR_DAT_04bb49b8;
  lVar4 = *(long *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    iVar11 = 0;
    do {
      lVar10 = lVar4 + (long)iVar11 * 0x38;
      pbVar7 = (byte *)(lVar10 + 8);
      bVar2 = *pbVar7;
      if ((bVar2 >> 1 & 1) != 0) {
        lVar8 = lVar4 + (long)iVar11 * 0x38;
        *pbVar7 = bVar2 & 0xf8 | 4;
        plVar6 = (long *)(lVar8 + 0x10);
        if (*(long *)(lVar8 + 0x28) == 0) {
          if (*plVar6 != 0) goto LAB_03f41860;
        }
        else {
          FUN_03f45838(lVar4 + (long)iVar11 * 0x38 + 0x18);
          if (*plVar6 == 0) {
            *(undefined4 *)(lVar4 + (long)iVar11 * 0x38 + 0xc) = 0xe;
          }
          else {
LAB_03f41860:
            if (*(long *)puVar3 != 0) {
              FUN_03f350f4(*(long *)puVar3,lVar10);
            }
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar1 != iVar11);
    lVar4 = *(long *)(param_1 + 0x10);
    plVar6 = (long *)PTR_DAT_04bb2698;
  }
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + -8);
    if (*plVar5 != 0) {
      lVar10 = *plVar5 * 0x38;
      do {
        FUN_03f2d448(lVar4 + -0x38 + lVar10);
        lVar10 = lVar10 + -0x38;
      } while (lVar10 != 0);
    }
    if (*plVar6 == 0) {
      free(plVar5);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*plVar6,plVar5);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,plVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

