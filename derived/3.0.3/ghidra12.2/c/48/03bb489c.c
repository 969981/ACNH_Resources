
void FUN_03bb489c(long param_1,long *param_2,long *param_3)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  
  if (*param_2 == 0) {
    return;
  }
  iVar1 = *(int *)(*param_2 + 8);
  *(int *)(param_1 + 0x84) = iVar1;
  lVar6 = DAT_05ae7600;
  if (iVar1 == 3) {
    if (DAT_05ae7600 == 0) {
      plVar4 = malloc(8);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar6 + 8);
        if (lVar3 != 0) {
          param_3 = (long *)(lVar3 + 0xa8);
        }
        param_3 = (long *)*param_3;
      }
      plVar4 = (long *)(**(code **)(*param_3 + 0x30))(param_3,8,8);
    }
    puVar5 = &DAT_04b7a8f0;
LAB_03bb4a38:
    *plVar4 = (long)(puVar5 + 0x10);
    *(long **)(param_1 + 0x60) = plVar4;
    uVar7 = (**(code **)(*plVar4 + 0x18))
                      (*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
                       *(undefined4 *)(param_1 + 0x70));
    *(undefined4 *)(param_1 + 0x80) = uVar7;
    lVar6 = *param_2;
    if (lVar6 != 0) goto LAB_03bb4a64;
LAB_03bb49f8:
    fVar8 = 1.0;
LAB_03bb4a70:
    *(float *)(param_1 + 0x68) = fVar8;
    if (*(long **)(param_1 + 0x60) != (long *)0x0) {
      uVar7 = (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
                        (fVar8,*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
      *(undefined4 *)(param_1 + 0x80) = uVar7;
    }
  }
  else {
    if (iVar1 == 2) {
      if (DAT_05ae7600 == 0) {
        plVar4 = malloc(8);
      }
      else {
        if (param_3 == (long *)0x0) {
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          param_3 = (long *)(lVar6 + 8);
          if (lVar3 != 0) {
            param_3 = (long *)(lVar3 + 0xa8);
          }
          param_3 = (long *)*param_3;
        }
        plVar4 = (long *)(**(code **)(*param_3 + 0x30))(param_3,8,8);
      }
      puVar5 = &DAT_04b7a8a8;
      goto LAB_03bb4a38;
    }
    if (iVar1 == 1) {
      if (DAT_05ae7600 == 0) {
        plVar4 = malloc(8);
      }
      else {
        if (param_3 == (long *)0x0) {
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          param_3 = (long *)(lVar6 + 8);
          if (lVar3 != 0) {
            param_3 = (long *)(lVar3 + 0xa8);
          }
          param_3 = (long *)*param_3;
        }
        plVar4 = (long *)(**(code **)(*param_3 + 0x30))(param_3,8,8);
      }
      puVar5 = &DAT_04b7a860;
      goto LAB_03bb4a38;
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    lVar6 = *param_2;
    if (lVar6 == 0) goto LAB_03bb49f8;
LAB_03bb4a64:
    fVar8 = *(float *)(lVar6 + 0xc);
    if (0.0 < fVar8) goto LAB_03bb4a70;
  }
  if (*param_2 == 0) {
    fVar8 = 0.0;
LAB_03bb4aac:
    *(float *)(param_1 + 0x6c) = fVar8;
    if (*(long **)(param_1 + 0x60) != (long *)0x0) {
      uVar7 = (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
                        (*(undefined4 *)(param_1 + 0x68),fVar8,*(undefined4 *)(param_1 + 0x70));
      *(undefined4 *)(param_1 + 0x80) = uVar7;
    }
  }
  else {
    fVar8 = *(float *)(*param_2 + 0x10);
    if (0.0 <= fVar8) goto LAB_03bb4aac;
  }
  if (*param_2 == 0) {
    fVar8 = 1.0;
LAB_03bb4aec:
    *(float *)(param_1 + 0x70) = fVar8;
    if (*(long **)(param_1 + 0x60) != (long *)0x0) {
      uVar7 = (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
                        (*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
      *(undefined4 *)(param_1 + 0x80) = uVar7;
    }
  }
  else {
    fVar8 = *(float *)(*param_2 + 0x14);
    if (0.0 <= fVar8) goto LAB_03bb4aec;
  }
  lVar6 = *param_2;
  if (lVar6 == 0) {
    fVar8 = 1.0;
  }
  else {
    fVar8 = *(float *)(lVar6 + 0x18);
    if (fVar8 < 0.0) goto LAB_03bb4b44;
  }
  if (fVar8 <= 1.0) {
    *(float *)(param_1 + 0x74) = fVar8;
    lVar6 = *param_2;
  }
LAB_03bb4b44:
  bVar2 = false;
  if (lVar6 != 0) {
    bVar2 = *(int *)(lVar6 + 0x1c) != 0;
  }
  *(bool *)(param_1 + 0x78) = bVar2;
  if (*param_2 == 0) {
    fVar8 = 1.0;
  }
  else {
    fVar8 = 0.0;
    if (((char)param_2[1] == '\0') && (fVar8 = *(float *)(*param_2 + 0x20), fVar8 < 0.0)) {
      return;
    }
  }
  *(float *)(param_1 + 0x7c) = fVar8;
  return;
}

