
void FUN_0081baf0(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  *param_1 = &PTR_FUN_04917910;
  plVar2 = (long *)param_1[1];
  if (plVar2 != (long *)0x0) {
    puVar4 = (undefined8 *)param_1[3];
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = puVar4 + -1;
      lVar5 = *plVar2;
      if (lVar5 != 0) {
        puVar6 = puVar4 + lVar5 * 0x18;
        uVar7 = lVar5 * 0xc0 - 0xc0;
        uVar1 = ((uint)(uVar7 / 0xc0) & 0x1ffffff) + 1;
        if ((uVar1 & 7) != 0) {
          lVar5 = ((ulong)uVar1 & 7) * 0xc0;
          do {
            lVar5 = lVar5 + -0xc0;
            puVar6 = puVar6 + -0x18;
            *puVar6 = &PTR_LAB_04917978;
          } while (lVar5 != 0);
        }
        if (0x53f < uVar7) {
          do {
            puVar6[-0x18] = &PTR_LAB_04917978;
            puVar6[-0x30] = &PTR_LAB_04917978;
            puVar6[-0x48] = &PTR_LAB_04917978;
            puVar6[-0x60] = &PTR_LAB_04917978;
            puVar6[-0x78] = &PTR_LAB_04917978;
            puVar6[-0x90] = &PTR_LAB_04917978;
            puVar8 = puVar6 + -0xa8;
            puVar6 = puVar6 + -0xc0;
            *puVar8 = &PTR_LAB_04917978;
            *puVar6 = &PTR_LAB_04917978;
          } while (puVar6 != puVar4);
        }
      }
      if (DAT_05ae7600 == 0) {
        free(plVar2);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,plVar2);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
        }
      }
      plVar2 = (long *)param_1[1];
      param_1[3] = 0;
      *(undefined4 *)(param_1 + 2) = 0;
    }
    (**(code **)(*plVar2 + 0x20))();
    param_1[1] = 0;
  }
  FUN_03f2a9b0(param_1 + 4);
  FUN_038e1a84(param_1 + 0x49);
  FUN_03f2a9b0(param_1 + 4);
  FUN_038e1a84(param_1 + 0x12);
  return;
}

