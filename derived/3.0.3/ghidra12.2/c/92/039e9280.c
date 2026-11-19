
void FUN_039e9280(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  void *__ptr;
  
  *param_1 = &PTR_LAB_04b6b640;
  puVar4 = (undefined8 *)param_1[0x1c];
  if (puVar4 != (undefined8 *)0x0) {
    plVar3 = puVar4 + -1;
    lVar5 = *plVar3;
    if (lVar5 != 0) {
      uVar8 = lVar5 * 0x38 - 0x38;
      puVar6 = puVar4 + lVar5 * 7;
      uVar1 = (int)(uVar8 / 0x38) + 1;
      if ((uVar1 & 7) != 0) {
        lVar5 = ((ulong)uVar1 & 7) * 0x38;
        do {
          lVar5 = lVar5 + -0x38;
          puVar6 = puVar6 + -7;
          *puVar6 = &PTR_LAB_04b6b908;
        } while (lVar5 != 0);
      }
      if (0x187 < uVar8) {
        puVar6 = puVar6 + -0x1c;
        do {
          puVar6[0x15] = &PTR_LAB_04b6b908;
          puVar6[0xe] = &PTR_LAB_04b6b908;
          puVar6[7] = &PTR_LAB_04b6b908;
          *puVar6 = &PTR_LAB_04b6b908;
          puVar6[-7] = &PTR_LAB_04b6b908;
          puVar6[-0xe] = &PTR_LAB_04b6b908;
          puVar6[-0x15] = &PTR_LAB_04b6b908;
          puVar7 = puVar6 + -0x1c;
          *puVar7 = &PTR_LAB_04b6b908;
          puVar6 = puVar6 + -0x38;
        } while (puVar7 != puVar4);
      }
    }
    if (DAT_05ae7600 == 0) {
      free(plVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,plVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,plVar3);
      }
    }
    param_1[0x1c] = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0;
  }
  *param_1 = &PTR_FUN_04b71508;
  if (((*(byte *)((long)param_1 + 0xae) >> 1 & 1) != 0) &&
     (__ptr = (void *)param_1[9], __ptr != (void *)0x0)) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    param_1[9] = 0;
  }
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
    param_1[2] = 0;
  }
  return;
}

