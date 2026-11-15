
void FUN_020baad0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  void *pvVar10;
  long lVar11;
  
  param_1[0x1e6] = 0;
  puVar4 = PTR_DAT_04bb31d0;
  param_1[0x1e0] = 0;
  puVar3 = PTR_DAT_04bb3380;
  *param_1 = &PTR_FUN_04a72100;
  param_1[0x1da] = 0;
  param_1[0x1d4] = 0;
  param_1[0x1e1] = puVar4 + 0x10;
  param_1[0x1cf] = puVar4 + 0x10;
  param_1[0x1db] = puVar3 + 0x10;
  param_1[0x1d5] = puVar3 + 0x10;
  param_1[0x1ac] = PTR_DAT_04bb51e0 + 0x10;
  if (0 < *(int *)(param_1 + 0x1b3)) {
    lVar11 = 0;
    do {
      puVar9 = *(undefined8 **)(param_1[0x1b4] + lVar11 * 8);
      (**(code **)*puVar9)(puVar9);
      lVar11 = lVar11 + 1;
      *puVar9 = param_1[0x1b5];
      param_1[0x1b5] = puVar9;
    } while (lVar11 < *(int *)(param_1 + 0x1b3));
  }
  *(undefined4 *)(param_1 + 0x1b3) = 0;
  puVar1 = PTR_DAT_04bb5258 + 0x10;
  param_1[0x181] = puVar1;
  if (0 < *(int *)(param_1 + 0x188)) {
    lVar11 = 0;
    do {
      puVar9 = *(undefined8 **)(param_1[0x189] + lVar11 * 8);
      (**(code **)*puVar9)(puVar9);
      lVar11 = lVar11 + 1;
      *puVar9 = param_1[0x18a];
      param_1[0x18a] = puVar9;
    } while (lVar11 < *(int *)(param_1 + 0x188));
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  param_1[0x156] = puVar1;
  if (0 < *(int *)(param_1 + 0x15d)) {
    lVar11 = 0;
    do {
      puVar9 = *(undefined8 **)(param_1[0x15e] + lVar11 * 8);
      (**(code **)*puVar9)(puVar9);
      lVar11 = lVar11 + 1;
      *puVar9 = param_1[0x15f];
      param_1[0x15f] = puVar9;
    } while (lVar11 < *(int *)(param_1 + 0x15d));
  }
  puVar1 = puVar4 + 0x10;
  *(undefined4 *)(param_1 + 0x15d) = 0;
  param_1[0x150] = puVar1;
  param_1[0x155] = 0;
  param_1[0x14a] = puVar1;
  param_1[0x14f] = 0;
  param_1[0x144] = puVar1;
  param_1[0x149] = 0;
  param_1[0x13e] = puVar1;
  param_1[0x143] = 0;
  param_1[0x138] = puVar1;
  param_1[0x13d] = 0;
  param_1[0x132] = puVar1;
  param_1[0x137] = 0;
  param_1[300] = puVar3 + 0x10;
  param_1[0x131] = 0;
  puVar5 = PTR_DAT_04bb2fe8;
  puVar2 = PTR_DAT_04bb2fe8 + 0x10;
  param_1[0x126] = puVar1;
  param_1[299] = 0;
  puVar6 = PTR_DAT_04bb3058;
  lVar11 = *(long *)PTR_DAT_04bb3058;
  param_1[0x120] = puVar1;
  param_1[0x125] = 0;
  param_1[0x11a] = puVar1;
  param_1[0x11f] = 0;
  param_1[0x113] = puVar2;
  uVar7 = (**(code **)(**(long **)(lVar11 + 0x330) + 0x88))
                    (*(long **)(lVar11 + 0x330),param_1[0x119]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x119], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar11 = *(long *)puVar6;
  param_1[0x119] = 0;
  param_1[0x10c] = puVar2;
  uVar7 = (**(code **)(**(long **)(lVar11 + 0x330) + 0x88))
                    (*(long **)(lVar11 + 0x330),param_1[0x112]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x112], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar11 = *(long *)puVar6;
  param_1[0x112] = 0;
  param_1[0x105] = puVar5 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar11 + 0x330) + 0x88))
                    (*(long **)(lVar11 + 0x330),param_1[0x10b]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x10b], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar11 = *(long *)puVar6;
  param_1[0x10b] = 0;
  param_1[0xfe] = puVar5 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar11 + 0x330) + 0x88))
                    (*(long **)(lVar11 + 0x330),param_1[0x104]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x104], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar11 = *(long *)puVar6;
  param_1[0x104] = 0;
  param_1[0xf7] = puVar5 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar11 + 0x330) + 0x88))
                    (*(long **)(lVar11 + 0x330),param_1[0xfd]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0xfd], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar11 = *(long *)puVar6;
  param_1[0xfd] = 0;
  param_1[0xf0] = puVar5 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar11 + 0x330) + 0x88))
                    (*(long **)(lVar11 + 0x330),param_1[0xf6]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0xf6], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar11 = *(long *)puVar6;
  param_1[0xf6] = 0;
  param_1[0xe9] = puVar5 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar11 + 0x330) + 0x88))
                    (*(long **)(lVar11 + 0x330),param_1[0xef]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0xef], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar11 = *(long *)puVar6;
  param_1[0xef] = 0;
  param_1[0xe2] = puVar5 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar11 + 0x330) + 0x88))
                    (*(long **)(lVar11 + 0x330),param_1[0xe8]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0xe8], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar11 = *(long *)puVar6;
  param_1[0xe8] = 0;
  param_1[0xdb] = puVar5 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar11 + 0x330) + 0x88))
                    (*(long **)(lVar11 + 0x330),param_1[0xe1]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0xe1], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar11 = *(long *)puVar6;
  param_1[0xe1] = 0;
  param_1[0xd4] = puVar5 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar11 + 0x330) + 0x88))
                    (*(long **)(lVar11 + 0x330),param_1[0xda]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0xda], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar11 = *(long *)puVar6;
  param_1[0xda] = 0;
  param_1[0xcd] = puVar5 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar11 + 0x330) + 0x88))
                    (*(long **)(lVar11 + 0x330),param_1[0xd3]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0xd3], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar11 = *(long *)puVar6;
  param_1[0xd3] = 0;
  param_1[0xc6] = puVar5 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar11 + 0x330) + 0x88))
                    (*(long **)(lVar11 + 0x330),param_1[0xcc]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0xcc], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  param_1[0xcc] = 0;
  param_1[0xc5] = 0;
  puVar3 = puVar3 + 0x10;
  param_1[0xbf] = &PTR_LAB_04a72270;
  param_1[0xb8] = &PTR_LAB_04a72270;
  param_1[0xbe] = 0;
  param_1[0xb1] = &PTR_LAB_04a72270;
  param_1[0xb7] = 0;
  param_1[0xaa] = &PTR_LAB_04a72270;
  param_1[0xb0] = 0;
  param_1[0xa3] = &PTR_LAB_04a72270;
  param_1[0xa9] = 0;
  puVar1 = PTR_DAT_04bb5890 + 0x10;
  param_1[0xa2] = 0;
  param_1[0x9b] = 0;
  param_1[0x90] = puVar3;
  param_1[0x9c] = puVar1;
  puVar4 = puVar4 + 0x10;
  param_1[0x95] = 0;
  param_1[0x96] = puVar4;
  param_1[0x8a] = puVar3;
  param_1[0x8f] = 0;
  param_1[0x84] = puVar3;
  param_1[0x89] = 0;
  param_1[0x7e] = puVar4;
  param_1[0x83] = 0;
  param_1[0x78] = puVar4;
  param_1[0x7d] = 0;
  param_1[0x72] = puVar4;
  param_1[0x77] = 0;
  param_1[0x6c] = PTR_DAT_04bb33a8 + 0x10;
  param_1[0x71] = 0;
  param_1[0x66] = puVar3;
  param_1[0x6b] = 0;
  param_1[0x60] = puVar3;
  param_1[0x65] = 0;
  param_1[0x5a] = puVar3;
  param_1[0x5f] = 0;
  param_1[0x54] = puVar3;
  param_1[0x59] = 0;
  param_1[0x4e] = puVar3;
  param_1[0x53] = 0;
  param_1[0x48] = puVar3;
  param_1[0x4d] = 0;
  param_1[0x42] = puVar4;
  param_1[0x47] = 0;
  param_1[0x41] = 0;
  param_1[0x18] = puVar4;
  param_1[0x3b] = 0;
  param_1[0x3c] = puVar4;
  param_1[0x35] = 0;
  param_1[0x36] = puVar3;
  param_1[0x2f] = 0;
  param_1[0x30] = puVar4;
  param_1[0x29] = 0;
  param_1[0x2a] = puVar4;
  param_1[0x23] = 0;
  param_1[0x24] = puVar4;
  param_1[0x1d] = 0;
  param_1[0x1e] = puVar3;
  return;
}

