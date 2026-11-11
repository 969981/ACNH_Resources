
undefined8 FUN_00421adc(long *param_1,ulong param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  undefined1 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  void *pvVar7;
  long *plVar8;
  
  plVar8 = (long *)*param_1;
  puVar5 = (undefined1 *)plVar8[3];
  puVar6 = (undefined1 *)plVar8[4];
  if ((param_2 & 1) == 0) {
    if (puVar6 < puVar5 + 5) {
      pvVar7 = (void *)plVar8[2];
      if (pvVar7 == (void *)0x0) {
        if (*plVar8 == 0) {
          lVar4 = FUN_00187df4(1);
          pvVar7 = (void *)plVar8[2];
          puVar5 = (undefined1 *)plVar8[3];
          puVar6 = (undefined1 *)plVar8[5];
          *plVar8 = lVar4;
          plVar8[1] = lVar4;
        }
        else {
          puVar6 = (undefined1 *)plVar8[5];
          pvVar7 = (void *)0x0;
        }
      }
      else {
        puVar6 = puVar6 + (((ulong)(puVar6 + (1 - (long)pvVar7)) >> 1) - (long)pvVar7);
      }
      puVar1 = (undefined1 *)(((long)puVar5 - (long)pvVar7) + 5);
      if (puVar6 <= puVar1) {
        puVar6 = puVar1;
      }
      if (puVar6 == (undefined1 *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        lVar4 = plVar8[4];
        pvVar2 = (void *)FUN_00187df4(puVar6);
        puVar1 = puVar6;
        if ((undefined1 *)(lVar4 - (long)pvVar7) <= puVar6) {
          puVar1 = (undefined1 *)(lVar4 - (long)pvVar7);
        }
        memcpy(pvVar2,pvVar7,(size_t)puVar1);
      }
      FUN_00187e4c(pvVar7);
      plVar8[2] = (long)pvVar2;
      plVar8[3] = (long)pvVar2 + ((long)puVar5 - (long)pvVar7);
      plVar8[4] = (long)((long)pvVar2 + (long)puVar6);
      plVar8 = (long *)*param_1;
      puVar5 = (undefined1 *)plVar8[3];
    }
    plVar8[3] = (long)(puVar5 + 1);
    *puVar5 = 0x66;
    puVar6 = *(undefined1 **)(*param_1 + 0x18);
    *(undefined1 **)(*param_1 + 0x18) = puVar6 + 1;
    *puVar6 = 0x61;
    puVar6 = *(undefined1 **)(*param_1 + 0x18);
    *(undefined1 **)(*param_1 + 0x18) = puVar6 + 1;
    *puVar6 = 0x6c;
    puVar6 = *(undefined1 **)(*param_1 + 0x18);
    *(undefined1 **)(*param_1 + 0x18) = puVar6 + 1;
    uVar3 = 0x73;
  }
  else {
    if (puVar6 < puVar5 + 4) {
      pvVar7 = (void *)plVar8[2];
      if (pvVar7 == (void *)0x0) {
        if (*plVar8 == 0) {
          lVar4 = FUN_00187df4(1);
          pvVar7 = (void *)plVar8[2];
          puVar5 = (undefined1 *)plVar8[3];
          puVar6 = (undefined1 *)plVar8[5];
          *plVar8 = lVar4;
          plVar8[1] = lVar4;
        }
        else {
          puVar6 = (undefined1 *)plVar8[5];
          pvVar7 = (void *)0x0;
        }
      }
      else {
        puVar6 = puVar6 + (((ulong)(puVar6 + (1 - (long)pvVar7)) >> 1) - (long)pvVar7);
      }
      puVar1 = (undefined1 *)(((long)puVar5 - (long)pvVar7) + 4);
      if (puVar6 <= puVar1) {
        puVar6 = puVar1;
      }
      if (puVar6 == (undefined1 *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        lVar4 = plVar8[4];
        pvVar2 = (void *)FUN_00187df4(puVar6);
        puVar1 = puVar6;
        if ((undefined1 *)(lVar4 - (long)pvVar7) <= puVar6) {
          puVar1 = (undefined1 *)(lVar4 - (long)pvVar7);
        }
        memcpy(pvVar2,pvVar7,(size_t)puVar1);
      }
      FUN_00187e4c(pvVar7);
      plVar8[2] = (long)pvVar2;
      plVar8[3] = (long)pvVar2 + ((long)puVar5 - (long)pvVar7);
      plVar8[4] = (long)((long)pvVar2 + (long)puVar6);
      plVar8 = (long *)*param_1;
      puVar5 = (undefined1 *)plVar8[3];
    }
    plVar8[3] = (long)(puVar5 + 1);
    *puVar5 = 0x74;
    puVar6 = *(undefined1 **)(*param_1 + 0x18);
    *(undefined1 **)(*param_1 + 0x18) = puVar6 + 1;
    *puVar6 = 0x72;
    puVar6 = *(undefined1 **)(*param_1 + 0x18);
    *(undefined1 **)(*param_1 + 0x18) = puVar6 + 1;
    uVar3 = 0x75;
  }
  *puVar6 = uVar3;
  puVar6 = *(undefined1 **)(*param_1 + 0x18);
  *(undefined1 **)(*param_1 + 0x18) = puVar6 + 1;
  *puVar6 = 0x65;
  return 1;
}

