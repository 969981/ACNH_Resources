
void FUN_02115470(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *param_1 = &PTR_LAB_04a74e90;
  FUN_021262ac(param_1 + 1);
  param_1[0x25d] = 0;
  param_1[0x41] = param_1 + 0x7d;
  param_1[0x7d] = param_1 + 0xb9;
  param_1[0xb9] = param_1 + 0xf5;
  param_1[0xf5] = param_1 + 0x131;
  param_1[0x131] = param_1 + 0x16d;
  param_1[0x16d] = param_1 + 0x1a9;
  param_1[0x1a9] = param_1 + 0x1e5;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x1e5] = param_1 + 0x221;
  param_1[0x221] = param_1 + 0x25d;
  param_1[0x3f] = param_1 + 0x41;
  param_1[0x40] = param_1 + 0x41;
  if (param_1 + 0x299 != (undefined8 *)0x0) {
    param_1[0x3e] = param_1 + 0x299;
    *(undefined4 *)((long)param_1 + 0x1ec) = 10;
  }
  *(undefined2 *)(param_1 + 0x2a5) = 0;
  *(undefined4 *)(param_1 + 0x2a3) = 0xffffffff;
  param_1[0x2a6] = 0;
  param_1[0x2a7] = 0;
  param_1[0x2aa] = param_1 + 0x2ab;
  param_1[0x2a8] = param_1 + 0x2aa;
  param_1[0x2b4] = 0;
  param_1[0x2a9] = param_1 + 0x2aa;
  param_1[0x2ab] = param_1 + 0x2ac;
  param_1[0x2ac] = param_1 + 0x2ad;
  param_1[0x2ad] = param_1 + 0x2ae;
  param_1[0x2ae] = param_1 + 0x2af;
  param_1[0x2af] = param_1 + 0x2b0;
  param_1[0x2b0] = param_1 + 0x2b1;
  param_1[0x2b1] = param_1 + 0x2b2;
  param_1[0x2b2] = param_1 + 0x2b3;
  param_1[0x2b3] = param_1 + 0x2b4;
  if (param_1 + 0x2b5 != (undefined8 *)0x0) {
    param_1[0x2a7] = param_1 + 0x2b5;
    *(undefined4 *)((long)param_1 + 0x1534) = 0xb;
  }
  *(undefined4 *)(param_1 + 0x2c0) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x1604) = 0;
  *(undefined8 *)((long)param_1 + 0x1609) = 0;
  *(undefined8 *)((long)param_1 + 0x1614) = 0;
  *(undefined8 *)((long)param_1 + 0x161c) = 0;
  *(undefined4 *)((long)param_1 + 0x1624) = *(undefined4 *)PTR_DAT_04bb3238;
  FUN_021264e4(param_1 + 0x1e);
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((long)param_1 + 0xd4) = 0;
  *(undefined4 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (0 < *(int *)(param_1 + 0x3d)) {
    lVar5 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x3e] + lVar5 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar5 = lVar5 + 1;
      *puVar4 = param_1[0x3f];
      param_1[0x3f] = puVar4;
    } while (lVar5 < *(int *)(param_1 + 0x3d));
  }
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined2 *)(param_1 + 0x2a5) = 0;
  if (0 < *(int *)(param_1 + 0x2a6)) {
    lVar5 = 0;
    puVar4 = (undefined8 *)param_1[0x2a8];
    do {
      puVar3 = *(undefined8 **)(param_1[0x2a7] + lVar5 * 8);
      lVar5 = lVar5 + 1;
      *puVar3 = puVar4;
      param_1[0x2a8] = puVar3;
      puVar4 = puVar3;
    } while (lVar5 < *(int *)(param_1 + 0x2a6));
  }
  *(undefined4 *)(param_1 + 0x2a6) = 0;
  if (*(int *)((long)param_1 + 0x1534) < 1) {
    return;
  }
  puVar4 = (undefined8 *)param_1[0x2a8];
  if (puVar4 != (undefined8 *)0x0) {
    param_1[0x2a8] = *puVar4;
  }
  *(undefined4 *)puVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x2a6);
  iVar1 = *(int *)((long)param_1 + 0x1534);
  if (iVar2 < iVar1) {
    *(undefined8 **)(param_1[0x2a7] + (long)iVar2 * 8) = puVar4;
    iVar2 = *(int *)(param_1 + 0x2a6) + 1;
    iVar1 = *(int *)((long)param_1 + 0x1534);
    *(int *)(param_1 + 0x2a6) = iVar2;
    if (iVar2 < iVar1) goto LAB_021157a0;
LAB_02115730:
    if (iVar1 <= iVar2) goto LAB_02115738;
LAB_021157fc:
    puVar4 = (undefined8 *)param_1[0x2a8];
    if (puVar4 != (undefined8 *)0x0) {
      param_1[0x2a8] = *puVar4;
    }
    *(undefined4 *)puVar4 = 2;
    iVar2 = *(int *)(param_1 + 0x2a6);
    iVar1 = *(int *)((long)param_1 + 0x1534);
    if (iVar2 < iVar1) {
      *(undefined8 **)(param_1[0x2a7] + (long)iVar2 * 8) = puVar4;
      iVar2 = *(int *)(param_1 + 0x2a6) + 1;
      iVar1 = *(int *)((long)param_1 + 0x1534);
      *(int *)(param_1 + 0x2a6) = iVar2;
      if (iVar1 <= iVar2) goto LAB_02115740;
      goto LAB_02115858;
    }
    if (iVar2 < iVar1) goto LAB_02115858;
LAB_02115740:
    if (iVar1 <= iVar2) goto LAB_02115748;
LAB_021158b4:
    puVar4 = (undefined8 *)param_1[0x2a8];
    if (puVar4 != (undefined8 *)0x0) {
      param_1[0x2a8] = *puVar4;
    }
    *(undefined4 *)puVar4 = 4;
    iVar2 = *(int *)(param_1 + 0x2a6);
    iVar1 = *(int *)((long)param_1 + 0x1534);
    if (iVar2 < iVar1) {
      *(undefined8 **)(param_1[0x2a7] + (long)iVar2 * 8) = puVar4;
      iVar2 = *(int *)(param_1 + 0x2a6) + 1;
      iVar1 = *(int *)((long)param_1 + 0x1534);
      *(int *)(param_1 + 0x2a6) = iVar2;
      if (iVar1 <= iVar2) goto LAB_02115750;
      goto LAB_02115910;
    }
    if (iVar2 < iVar1) goto LAB_02115910;
LAB_02115750:
    if (iVar1 <= iVar2) goto LAB_02115758;
LAB_0211596c:
    puVar4 = (undefined8 *)param_1[0x2a8];
    if (puVar4 != (undefined8 *)0x0) {
      param_1[0x2a8] = *puVar4;
    }
    *(undefined4 *)puVar4 = 6;
    iVar2 = *(int *)(param_1 + 0x2a6);
    iVar1 = *(int *)((long)param_1 + 0x1534);
    if (iVar2 < iVar1) {
      *(undefined8 **)(param_1[0x2a7] + (long)iVar2 * 8) = puVar4;
      iVar2 = *(int *)(param_1 + 0x2a6) + 1;
      iVar1 = *(int *)((long)param_1 + 0x1534);
      *(int *)(param_1 + 0x2a6) = iVar2;
      if (iVar1 <= iVar2) goto LAB_02115760;
      goto LAB_021159c8;
    }
    if (iVar2 < iVar1) goto LAB_021159c8;
LAB_02115760:
    if (iVar1 <= iVar2) goto LAB_02115768;
LAB_02115a24:
    puVar4 = (undefined8 *)param_1[0x2a8];
    if (puVar4 != (undefined8 *)0x0) {
      param_1[0x2a8] = *puVar4;
    }
    *(undefined4 *)puVar4 = 8;
    iVar2 = *(int *)(param_1 + 0x2a6);
    iVar1 = *(int *)((long)param_1 + 0x1534);
    if (iVar2 < iVar1) {
      *(undefined8 **)(param_1[0x2a7] + (long)iVar2 * 8) = puVar4;
      iVar2 = *(int *)(param_1 + 0x2a6) + 1;
      iVar1 = *(int *)((long)param_1 + 0x1534);
      *(int *)(param_1 + 0x2a6) = iVar2;
      if (iVar1 <= iVar2) goto LAB_02115770;
      goto LAB_02115a80;
    }
    if (iVar2 < iVar1) goto LAB_02115a80;
  }
  else {
    if (iVar1 <= iVar2) goto LAB_02115730;
LAB_021157a0:
    puVar4 = (undefined8 *)param_1[0x2a8];
    if (puVar4 != (undefined8 *)0x0) {
      param_1[0x2a8] = *puVar4;
    }
    *(undefined4 *)puVar4 = 1;
    iVar2 = *(int *)(param_1 + 0x2a6);
    iVar1 = *(int *)((long)param_1 + 0x1534);
    if (iVar1 <= iVar2) {
      if (iVar1 <= iVar2) goto LAB_02115738;
      goto LAB_021157fc;
    }
    *(undefined8 **)(param_1[0x2a7] + (long)iVar2 * 8) = puVar4;
    iVar2 = *(int *)(param_1 + 0x2a6) + 1;
    iVar1 = *(int *)((long)param_1 + 0x1534);
    *(int *)(param_1 + 0x2a6) = iVar2;
    if (iVar2 < iVar1) goto LAB_021157fc;
LAB_02115738:
    if (iVar1 <= iVar2) goto LAB_02115740;
LAB_02115858:
    puVar4 = (undefined8 *)param_1[0x2a8];
    if (puVar4 != (undefined8 *)0x0) {
      param_1[0x2a8] = *puVar4;
    }
    *(undefined4 *)puVar4 = 3;
    iVar2 = *(int *)(param_1 + 0x2a6);
    iVar1 = *(int *)((long)param_1 + 0x1534);
    if (iVar1 <= iVar2) {
      if (iVar1 <= iVar2) goto LAB_02115748;
      goto LAB_021158b4;
    }
    *(undefined8 **)(param_1[0x2a7] + (long)iVar2 * 8) = puVar4;
    iVar2 = *(int *)(param_1 + 0x2a6) + 1;
    iVar1 = *(int *)((long)param_1 + 0x1534);
    *(int *)(param_1 + 0x2a6) = iVar2;
    if (iVar2 < iVar1) goto LAB_021158b4;
LAB_02115748:
    if (iVar1 <= iVar2) goto LAB_02115750;
LAB_02115910:
    puVar4 = (undefined8 *)param_1[0x2a8];
    if (puVar4 != (undefined8 *)0x0) {
      param_1[0x2a8] = *puVar4;
    }
    *(undefined4 *)puVar4 = 5;
    iVar2 = *(int *)(param_1 + 0x2a6);
    iVar1 = *(int *)((long)param_1 + 0x1534);
    if (iVar1 <= iVar2) {
      if (iVar1 <= iVar2) goto LAB_02115758;
      goto LAB_0211596c;
    }
    *(undefined8 **)(param_1[0x2a7] + (long)iVar2 * 8) = puVar4;
    iVar2 = *(int *)(param_1 + 0x2a6) + 1;
    iVar1 = *(int *)((long)param_1 + 0x1534);
    *(int *)(param_1 + 0x2a6) = iVar2;
    if (iVar2 < iVar1) goto LAB_0211596c;
LAB_02115758:
    if (iVar1 <= iVar2) goto LAB_02115760;
LAB_021159c8:
    puVar4 = (undefined8 *)param_1[0x2a8];
    if (puVar4 != (undefined8 *)0x0) {
      param_1[0x2a8] = *puVar4;
    }
    *(undefined4 *)puVar4 = 7;
    iVar2 = *(int *)(param_1 + 0x2a6);
    iVar1 = *(int *)((long)param_1 + 0x1534);
    if (iVar1 <= iVar2) {
      if (iVar1 <= iVar2) goto LAB_02115768;
      goto LAB_02115a24;
    }
    *(undefined8 **)(param_1[0x2a7] + (long)iVar2 * 8) = puVar4;
    iVar2 = *(int *)(param_1 + 0x2a6) + 1;
    iVar1 = *(int *)((long)param_1 + 0x1534);
    *(int *)(param_1 + 0x2a6) = iVar2;
    if (iVar2 < iVar1) goto LAB_02115a24;
LAB_02115768:
    if (iVar2 < iVar1) {
LAB_02115a80:
      puVar4 = (undefined8 *)param_1[0x2a8];
      if (puVar4 != (undefined8 *)0x0) {
        param_1[0x2a8] = *puVar4;
      }
      *(undefined4 *)puVar4 = 9;
      iVar2 = *(int *)(param_1 + 0x2a6);
      if (iVar2 < *(int *)((long)param_1 + 0x1534)) {
        *(undefined8 **)(param_1[0x2a7] + (long)iVar2 * 8) = puVar4;
        iVar2 = *(int *)(param_1 + 0x2a6);
        *(int *)(param_1 + 0x2a6) = iVar2 + 1;
        if (*(int *)((long)param_1 + 0x1534) <= iVar2 + 1) {
          return;
        }
      }
      else if (*(int *)((long)param_1 + 0x1534) <= iVar2) {
        return;
      }
      goto LAB_02115adc;
    }
  }
LAB_02115770:
  if (iVar1 <= iVar2) {
    return;
  }
LAB_02115adc:
  puVar4 = (undefined8 *)param_1[0x2a8];
  if (puVar4 != (undefined8 *)0x0) {
    param_1[0x2a8] = *puVar4;
  }
  *(undefined4 *)puVar4 = 10;
  if (*(int *)(param_1 + 0x2a6) < *(int *)((long)param_1 + 0x1534)) {
    *(undefined8 **)(param_1[0x2a7] + (long)*(int *)(param_1 + 0x2a6) * 8) = puVar4;
    *(int *)(param_1 + 0x2a6) = *(int *)(param_1 + 0x2a6) + 1;
  }
  return;
}

