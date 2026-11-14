
undefined8 FUN_01dd2ec8(long param_1,uint *param_2,char *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x160) = 0;
  if (*(char *)(param_1 + 0x161) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x162) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x163) != '\0') {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  uVar9 = *param_2;
  if (uVar9 - 4 < 2) {
LAB_01dd2f30:
    plVar7 = *(long **)(param_2 + 4);
    if (plVar7 == (long *)0x0) {
      return 0;
    }
LAB_01dd2f38:
    cVar3 = (char)plVar7[0xd7];
    plVar1 = &DAT_04178a58;
    if (cVar3 != '\0') {
      plVar1 = plVar7;
    }
    if (*plVar1 != *(long *)(param_2 + 2)) {
      return 0;
    }
LAB_01dd2f80:
    plVar1 = &DAT_04178a58;
    if (cVar3 != '\0') {
      plVar1 = plVar7;
    }
    *(long *)(param_1 + 0x98) = *plVar1;
    uVar9 = *param_2;
  }
  else {
    if (uVar9 == 0) {
      return 0;
    }
    if (uVar9 == 1) goto LAB_01dd2f30;
    plVar7 = *(long **)(param_2 + 4);
    if ((uVar9 & 0xfffffffe) != 8) {
      if (plVar7 == (long *)0x0) goto LAB_01dd2f9c;
      cVar3 = (char)plVar7[0xd7];
      goto LAB_01dd2f80;
    }
    if (plVar7 != (long *)0x0) goto LAB_01dd2f38;
  }
LAB_01dd2f9c:
  if (uVar9 - 4 < 2) {
LAB_01dd2fb4:
    plVar7 = *(long **)(param_2 + 4);
    if (plVar7 == (long *)0x0) {
      return 0;
    }
  }
  else {
    if (uVar9 == 0) {
      return 0;
    }
    if (uVar9 == 1) goto LAB_01dd2fb4;
    if (((uVar9 & 0xfffffffe) != 8) || (plVar7 = *(long **)(param_2 + 4), plVar7 == (long *)0x0))
    goto LAB_01dd2ff8;
  }
  plVar1 = &DAT_04178a58;
  if ((char)plVar7[0xd7] != '\0') {
    plVar1 = plVar7;
  }
  if (*plVar1 != *(long *)(param_2 + 2)) {
    return 0;
  }
LAB_01dd2ff8:
  if (((byte)param_2[10] >> 2 & 1) != 0) {
    return 0;
  }
  puVar8 = *(undefined4 **)(param_2 + 6);
  if (puVar8 == (undefined4 *)0x0) {
    if (((byte)param_2[10] & 1) == 0) {
      return 0;
    }
    puVar8 = *(undefined4 **)(param_2 + 8);
    if (puVar8 == (undefined4 *)0x0) {
      return 0;
    }
  }
  puVar10 = *(undefined4 **)(param_1 + 0xa0);
  *puVar10 = *puVar8;
  puVar10[1] = puVar8[1];
  uVar4 = *(undefined1 *)(puVar8 + 2);
  *(undefined8 *)((long)puVar10 + 9) = 0;
  *(undefined8 *)((long)puVar10 + 0x11) = 0;
  *(undefined8 *)((long)puVar10 + 0x19) = 0;
  *(undefined8 *)(puVar10 + 8) = 0;
  *(undefined1 *)(puVar10 + 2) = uVar4;
  uVar11 = *(undefined8 *)((long)puVar8 + 9);
  uVar12 = *(undefined8 *)((long)puVar8 + 0x11);
  uVar13 = *(undefined8 *)((long)puVar8 + 0x19);
  *(undefined8 *)((long)puVar10 + 0x1f) = *(undefined8 *)((long)puVar8 + 0x1f);
  *(undefined8 *)((long)puVar10 + 0x19) = uVar13;
  *(undefined8 *)((long)puVar10 + 0x11) = uVar12;
  *(undefined8 *)((long)puVar10 + 9) = uVar11;
  *(undefined1 *)(puVar10 + 10) = *(undefined1 *)(puVar8 + 10);
  uVar4 = *(undefined1 *)((long)puVar8 + 0x29);
  *(undefined8 *)((long)puVar10 + 0x2a) = 0;
  *(undefined8 *)((long)puVar10 + 0x32) = 0;
  *(undefined8 *)((long)puVar10 + 0x3a) = 0;
  *(undefined8 *)((long)puVar10 + 0x42) = 0;
  *(undefined8 *)((long)puVar10 + 0x4a) = 0;
  *(undefined8 *)((long)puVar10 + 0x52) = 0;
  *(undefined8 *)((long)puVar10 + 0x5a) = 0;
  *(undefined8 *)((long)puVar10 + 0x5f) = 0;
  *(undefined1 *)((long)puVar10 + 0x29) = uVar4;
  uVar11 = *(undefined8 *)((long)puVar8 + 0x2a);
  uVar12 = *(undefined8 *)((long)puVar8 + 0x32);
  uVar13 = *(undefined8 *)((long)puVar8 + 0x3a);
  *(undefined8 *)((long)puVar10 + 0x42) = *(undefined8 *)((long)puVar8 + 0x42);
  *(undefined8 *)((long)puVar10 + 0x3a) = uVar13;
  *(undefined8 *)((long)puVar10 + 0x32) = uVar12;
  *(undefined8 *)((long)puVar10 + 0x2a) = uVar11;
  uVar11 = *(undefined8 *)((long)puVar8 + 0x4a);
  uVar12 = *(undefined8 *)((long)puVar8 + 0x52);
  uVar13 = *(undefined8 *)((long)puVar8 + 0x5a);
  *(undefined4 *)((long)puVar10 + 0x62) = *(undefined4 *)((long)puVar8 + 0x62);
  *(undefined8 *)((long)puVar10 + 0x5a) = uVar13;
  *(undefined8 *)((long)puVar10 + 0x52) = uVar12;
  *(undefined8 *)((long)puVar10 + 0x4a) = uVar11;
  *(undefined1 *)((long)puVar10 + 0x67) = *(undefined1 *)((long)puVar8 + 0x67);
  uVar11 = *(undefined8 *)(puVar8 + 0x1a);
  puVar10[0x1c] = puVar8[0x1c];
  *(undefined8 *)(puVar10 + 0x1a) = uVar11;
  *(undefined1 *)(puVar10 + 0x1d) = *(undefined1 *)(puVar8 + 0x1d);
  *(undefined8 *)(puVar10 + 0x1e) = *(undefined8 *)(puVar8 + 0x1e);
  *(undefined8 *)(puVar10 + 0x20) = 0;
  uVar2 = puVar8[0x20];
  *(undefined4 *)((long)puVar10 + 0x83) = *(undefined4 *)((long)puVar8 + 0x83);
  puVar10[0x20] = uVar2;
  *(undefined8 *)(puVar10 + 0x22) = *(undefined8 *)(puVar8 + 0x22);
  memset(puVar10 + 0x24,0,0x400);
  memcpy(puVar10 + 0x24,puVar8 + 0x24,0x3ff);
  puVar5 = PTR_DAT_04bc1048;
  cVar3 = 'c';
  if (*param_3 != '\x04') {
    cVar3 = *param_3;
  }
  *(char *)(*(long *)(param_1 + 0xa0) + 0x67) = cVar3;
  lVar6 = FUN_01dd0780(*(undefined8 *)puVar5,*(undefined8 *)(param_1 + 0xa0));
  *(long *)(param_1 + 0xa8) = lVar6;
  if (lVar6 == 0) {
    return 0;
  }
  FUN_03ebb160(param_1,3);
  return 1;
}

