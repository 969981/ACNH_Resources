
void FUN_008bfe90(undefined8 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  size_t __n;
  long lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  
  *param_1 = &PTR_FUN_04920860;
  if (*(int *)(param_1 + 0x82) == 0x1d) {
    *(uint *)PTR_DAT_04bb3450 =
         *(uint *)PTR_DAT_04bb3450 & 0xfffffffe | (uint)*(byte *)((long)param_1 + 0x37fbf);
  }
  DAT_04cee6a9 = 0;
  (**(code **)(*(long *)param_1[0x7004] + 0x20))();
  if (*(char *)((long)param_1 + 0x37e4c) != '\0') {
    *(undefined1 *)((long)param_1 + 0x37e4c) = 0;
  }
  if (*(char *)((long)param_1 + 0x37e44) != '\0') {
    *(undefined1 *)((long)param_1 + 0x37e44) = 0;
  }
  if (*(char *)(param_1 + 0x6fc7) != '\0') {
    (**(code **)param_1[0x6fc5])(param_1 + 0x6fc5);
    *(undefined1 *)(param_1 + 0x6fc7) = 0;
  }
  if (*(char *)(param_1 + 0x6fc3) != '\0') {
    *(undefined1 *)(param_1 + 0x6fc3) = 0;
  }
  if (*(char *)(param_1 + 0x6fc2) != '\0') {
    *(char *)(param_1 + 0x6fc2) = '\0';
  }
  if (0 < *(int *)(param_1 + 0x63ed)) {
    lVar9 = 0;
    do {
      lVar11 = *(long *)(param_1[0x63ee] + lVar9 * 8);
      if (*(char *)(lVar11 + 0xa0) != '\0') {
        *(undefined1 *)(lVar11 + 0xa0) = 0;
      }
      if (*(char *)(lVar11 + 0x98) != '\0') {
        *(undefined1 *)(lVar11 + 0x98) = 0;
      }
      if (*(char *)(lVar11 + 0x84) != '\0') {
        *(undefined1 *)(lVar11 + 0x84) = 0;
      }
      if (*(char *)(lVar11 + 0x7c) != '\0') {
        *(undefined1 *)(lVar11 + 0x7c) = 0;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x63ed));
  }
  if (0 < *(int *)(param_1 + 0x630d)) {
    lVar9 = 0;
    do {
      lVar11 = *(long *)(param_1[0x630e] + lVar9 * 8);
      if (*(char *)(lVar11 + 0xa0) != '\0') {
        *(undefined1 *)(lVar11 + 0xa0) = 0;
      }
      if (*(char *)(lVar11 + 0x98) != '\0') {
        *(undefined1 *)(lVar11 + 0x98) = 0;
      }
      if (*(char *)(lVar11 + 0x84) != '\0') {
        *(undefined1 *)(lVar11 + 0x84) = 0;
      }
      if (*(char *)(lVar11 + 0x7c) != '\0') {
        *(undefined1 *)(lVar11 + 0x7c) = 0;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x630d));
  }
  puVar10 = param_1 + 0x6160;
  do {
    puVar10 = (undefined8 *)puVar10[1];
  } while (puVar10 != param_1 + 0x6160);
  puVar10 = param_1 + 0x6138;
  do {
    puVar10 = (undefined8 *)puVar10[1];
  } while (puVar10 != param_1 + 0x6138);
  param_1[0x6103] = &PTR_LAB_04b5eb40;
  if (param_1[0x6105] != 0) {
    if (0 < *(int *)(param_1 + 0x6104)) {
      lVar9 = 0;
      puVar10 = (undefined8 *)param_1[0x6106];
      do {
        puVar12 = *(undefined8 **)(param_1[0x6105] + lVar9 * 8);
        lVar9 = lVar9 + 1;
        *puVar12 = puVar10;
        param_1[0x6106] = puVar12;
        puVar10 = puVar12;
      } while (lVar9 < *(int *)(param_1 + 0x6104));
    }
    pvVar13 = (void *)param_1[0x6107];
    *(undefined4 *)(param_1 + 0x6104) = 0;
    if (pvVar13 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar13);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar13);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar13);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x3083c) = 0;
    *(undefined8 *)((long)param_1 + 0x30834) = 0;
    *(undefined8 *)((long)param_1 + 0x3082c) = 0;
    *(undefined8 *)((long)param_1 + 0x30824) = 0;
  }
  lVar9 = param_1[0x60c3];
  if (lVar9 == 0) {
    lVar11 = 1;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = lVar9;
  }
  if ((long *)param_1[0x60c4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x60c4] + 8))();
    param_1[0x60c4] = 0;
  }
  param_1[0x60c3] = 0;
  if (lVar11 != 1) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    *(long *)(lVar9 + 0xa8) = lVar11;
  }
  param_1[0x60bd] = &PTR_LAB_04925150;
  if ((*(char *)(param_1 + 0x60c2) != '\0') && (param_1[0x60bf] != 0)) {
    if (0 < *(int *)(param_1 + 0x60be)) {
      lVar9 = 0;
      puVar10 = (undefined8 *)param_1[0x60c0];
      do {
        puVar12 = *(undefined8 **)(param_1[0x60bf] + lVar9 * 8);
        lVar9 = lVar9 + 1;
        *puVar12 = puVar10;
        param_1[0x60c0] = puVar12;
        puVar10 = puVar12;
      } while (lVar9 < *(int *)(param_1 + 0x60be));
    }
    pvVar13 = (void *)param_1[0x60c1];
    *(undefined4 *)(param_1 + 0x60be) = 0;
    if (pvVar13 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar13);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar13);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar13);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x3060c) = 0;
    *(undefined8 *)((long)param_1 + 0x30604) = 0;
    *(undefined8 *)((long)param_1 + 0x305fc) = 0;
    *(undefined8 *)((long)param_1 + 0x305f4) = 0;
  }
  puVar2 = PTR_DAT_04bb3350;
  lVar9 = param_1[0x60bb];
  *(undefined1 *)(param_1 + 0x60c2) = 0;
  if (lVar9 == 0) {
    lVar11 = 1;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    lVar11 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = lVar9;
  }
  if ((long *)param_1[0x60bc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x60bc] + 8))();
    param_1[0x60bc] = 0;
  }
  param_1[0x60bb] = 0;
  if (lVar11 != 1) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    *(long *)(lVar9 + 0xa8) = lVar11;
  }
  param_1[0x60b5] = &PTR_LAB_049248b0;
  if ((*(char *)(param_1 + 0x60ba) != '\0') && (param_1[0x60b7] != 0)) {
    if (0 < *(int *)(param_1 + 0x60b6)) {
      lVar9 = 0;
      puVar10 = (undefined8 *)param_1[0x60b8];
      do {
        puVar12 = *(undefined8 **)(param_1[0x60b7] + lVar9 * 8);
        lVar9 = lVar9 + 1;
        *puVar12 = puVar10;
        param_1[0x60b8] = puVar12;
        puVar10 = puVar12;
      } while (lVar9 < *(int *)(param_1 + 0x60b6));
    }
    pvVar13 = (void *)param_1[0x60b9];
    *(undefined4 *)(param_1 + 0x60b6) = 0;
    if (pvVar13 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar13);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar13);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar13);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x305cc) = 0;
    *(undefined8 *)((long)param_1 + 0x305c4) = 0;
    *(undefined8 *)((long)param_1 + 0x305bc) = 0;
    *(undefined8 *)((long)param_1 + 0x305b4) = 0;
  }
  *(undefined1 *)(param_1 + 0x60ba) = 0;
  param_1[0x5ffe] = &PTR_FUN_04923110;
  param_1[0x6016] = &PTR_LAB_04923280;
  if (0 < *(int *)(param_1 + 0x601d)) {
    lVar9 = 0;
    do {
      puVar10 = *(undefined8 **)(param_1[0x601e] + lVar9 * 8);
      (**(code **)*puVar10)(puVar10);
      lVar9 = lVar9 + 1;
      *puVar10 = param_1[0x601f];
      param_1[0x601f] = puVar10;
    } while (lVar9 < *(int *)(param_1 + 0x601d));
  }
  *(undefined4 *)(param_1 + 0x601d) = 0;
  param_1[22999] = &PTR_LAB_04921ce8;
  param_1[0x59ef] = &PTR_LAB_04921fd8;
  if (0 < *(int *)(param_1 + 0x59f6)) {
    lVar9 = 0;
    do {
      puVar10 = *(undefined8 **)(param_1[0x59f7] + lVar9 * 8);
      (**(code **)*puVar10)(puVar10);
      lVar9 = lVar9 + 1;
      *puVar10 = param_1[0x59f8];
      param_1[0x59f8] = puVar10;
    } while (lVar9 < *(int *)(param_1 + 0x59f6));
  }
  *(undefined4 *)(param_1 + 0x59f6) = 0;
  param_1[0x4c6b] = &PTR_LAB_04923400;
  param_1[0x4c83] = &PTR_LAB_04923570;
  if (0 < *(int *)(param_1 + 0x4c8a)) {
    lVar9 = 0;
    do {
      puVar10 = *(undefined8 **)(param_1[0x4c8b] + lVar9 * 8);
      (**(code **)*puVar10)(puVar10);
      lVar9 = lVar9 + 1;
      *puVar10 = param_1[0x4c8c];
      param_1[0x4c8c] = puVar10;
    } while (lVar9 < *(int *)(param_1 + 0x4c8a));
  }
  *(undefined4 *)(param_1 + 0x4c8a) = 0;
  param_1[0x45e6] = &PTR_LAB_04921400;
  param_1[0x45fe] = &PTR_LAB_049216f0;
  if (0 < *(int *)(param_1 + 0x4605)) {
    lVar9 = 0;
    do {
      puVar10 = *(undefined8 **)(param_1[0x4606] + lVar9 * 8);
      (**(code **)*puVar10)(puVar10);
      lVar9 = lVar9 + 1;
      *puVar10 = param_1[0x4607];
      param_1[0x4607] = puVar10;
    } while (lVar9 < *(int *)(param_1 + 0x4605));
  }
  *(undefined4 *)(param_1 + 0x4605) = 0;
  param_1[0x8a] = &PTR_LAB_04920b18;
  param_1[0xa2] = &PTR_LAB_04920e08;
  if (0 < *(int *)(param_1 + 0xa9)) {
    lVar9 = 0;
    do {
      puVar10 = *(undefined8 **)(param_1[0xaa] + lVar9 * 8);
      (**(code **)*puVar10)(puVar10);
      lVar9 = lVar9 + 1;
      *puVar10 = param_1[0xab];
      param_1[0xab] = puVar10;
    } while (lVar9 < *(int *)(param_1 + 0xa9));
  }
  *(undefined4 *)(param_1 + 0xa9) = 0;
  *param_1 = &PTR_LAB_04920738;
  uVar5 = *(uint *)(param_1 + 0x6b);
  uVar6 = (ulong)uVar5;
  do {
    do {
      if (uVar5 == 0) {
        *param_1 = &PTR_LAB_048fce60;
        if ((undefined8 *)param_1[0x16] != param_1 + 0x15) {
          lVar11 = (long)*(int *)((long)param_1 + 0xbc);
          plVar3 = (long *)((long)param_1[0x16] - lVar11);
          lVar9 = (long)plVar3 + lVar11;
          do {
            plVar1 = (long *)((long)plVar3 + (long)*(int *)((long)param_1 + 0xbc));
            lVar9 = *(long *)(lVar9 + 8);
            if (*plVar1 != 0) {
              *(long *)(*plVar1 + 8) = plVar1[1];
            }
            if ((long *)plVar1[1] != (long *)0x0) {
              *(long *)plVar1[1] = *plVar1;
            }
            *plVar1 = 0;
            plVar1[1] = 0;
            *(int *)(param_1 + 0x17) = *(int *)(param_1 + 0x17) + -1;
            (**(code **)(*plVar3 + 0x28))();
            plVar3 = (long *)(lVar9 - lVar11);
          } while (plVar3 != (long *)((long)(param_1 + 0x15) - lVar11));
        }
        return;
      }
      uVar5 = (uint)uVar6;
    } while ((int)uVar5 < 1);
    plVar3 = (long *)param_1[0x6c];
    __n = -(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3;
    uVar8 = 0;
    lVar9 = *plVar3;
    do {
      __n = __n - 8;
      if (*plVar3 == lVar9) {
        iVar7 = (int)uVar8;
        if (-1 < iVar7) {
          if (iVar7 < (int)uVar5) {
            if (iVar7 + 1 < (int)uVar5) {
              memmove(plVar3,plVar3 + 1,__n);
              uVar6 = (ulong)*(uint *)(param_1 + 0x6b);
            }
            *(int *)(param_1 + 0x6b) = (int)uVar6 + -1;
          }
          *(undefined8 *)(lVar9 + 0x20) = 0;
          uVar5 = *(uint *)(param_1 + 0x6b);
          uVar6 = (ulong)uVar5;
        }
        break;
      }
      uVar8 = uVar8 + 1;
      plVar3 = plVar3 + 1;
    } while (uVar6 != uVar8);
  } while( true );
}

