
void FUN_001b5c50(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  uint *puVar5;
  char cVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  
  puVar7 = PTR_DAT_04bcbf10;
  uVar8 = *(undefined8 *)PTR_PTR_04bcbfd0;
  *param_1 = (long)(PTR_DAT_04bcc4d8 + 0x10);
  *(undefined8 *)puVar7 = uVar8;
  if (*(long **)PTR_DAT_04bcc2e0 != (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_04bcc2e0 + 0x48))();
  }
  plVar4 = (long *)param_1[0x33];
  if (*(int *)((long)plVar4 + 0xb4) == 1) {
    FUN_00197980(plVar4 + 0x14);
    plVar4 = (long *)param_1[0x33];
    if (plVar4 != (long *)0x0) goto LAB_001b5cc4;
  }
  else {
LAB_001b5cc4:
    (**(code **)(*plVar4 + 8))();
  }
  param_1[0x33] = 0;
  if ((long *)param_1[0x1d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1d] + 8))();
  }
  param_1[0x1d] = 0;
  puVar7 = PTR_DAT_04bcbb78;
  puVar3 = PTR_DAT_04bcb910;
  puVar2 = PTR_DAT_04bcb908;
  if (*PTR_DAT_04bcb908 == '\0') {
LAB_001b5d44:
    cVar6 = *puVar2;
    if (*(long *)(puVar7 + 0x1900) != param_1[0x8b]) goto joined_r0x001b5d9c;
LAB_001b5d60:
    if (cVar6 == '\0') {
LAB_001b5d8c:
      *(undefined8 *)(puVar7 + 0x1900) = 0;
      cVar6 = *puVar2;
      goto joined_r0x001b5d9c;
    }
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar3);
    if (*puVar5 == 0) goto LAB_001b5d8c;
    *(undefined8 *)(*(long *)(puVar7 + 0x17f8) + (ulong)*puVar5 * 0x148 + 0x100) = 0;
    if (*puVar2 != '\0') goto LAB_001b5da0;
LAB_001b5dd4:
    cVar6 = *puVar2;
    if (*(long *)(puVar7 + 0x3c0) == param_1[0x8b]) goto LAB_001b5dec;
LAB_001b5dcc:
    if (cVar6 != '\0') goto LAB_001b5e28;
LAB_001b5e54:
    if (*(long *)(puVar7 + 0x1658) != param_1[0x8b]) goto LAB_001b5e9c;
  }
  else {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar5 == 0) goto LAB_001b5d44;
    cVar6 = *puVar2;
    if (*(long *)(*(long *)(puVar7 + 0x17f8) + (ulong)*puVar5 * 0x148 + 0x100) == param_1[0x8b])
    goto LAB_001b5d60;
joined_r0x001b5d9c:
    if (cVar6 == '\0') goto LAB_001b5dd4;
LAB_001b5da0:
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar3);
    if (*puVar5 == 0) goto LAB_001b5dd4;
    cVar6 = *puVar2;
    if (*(long *)(*(long *)(puVar7 + 0x2b8) + (ulong)*puVar5 * 0x148 + 0x100) != param_1[0x8b])
    goto LAB_001b5dcc;
LAB_001b5dec:
    if (cVar6 == '\0') {
LAB_001b5e18:
      *(undefined8 *)(puVar7 + 0x3c0) = 0;
      cVar6 = *puVar2;
    }
    else {
      puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar3);
      if (*puVar5 == 0) goto LAB_001b5e18;
      *(undefined8 *)(*(long *)(puVar7 + 0x2b8) + (ulong)*puVar5 * 0x148 + 0x100) = 0;
      cVar6 = *puVar2;
    }
    if (cVar6 == '\0') goto LAB_001b5e54;
LAB_001b5e28:
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar3);
    if (*puVar5 == 0) goto LAB_001b5e54;
    if (*(long *)(*(long *)(puVar7 + 0x1550) + (ulong)*puVar5 * 0x148 + 0x100) != param_1[0x8b])
    goto LAB_001b5e9c;
  }
  if (*puVar2 == '\0') {
LAB_001b5e90:
    puVar7 = puVar7 + 0x1558;
  }
  else {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar3);
    if (*puVar5 == 0) goto LAB_001b5e90;
    puVar7 = (undefined *)(*(long *)(puVar7 + 0x1550) + (ulong)*puVar5 * 0x148);
  }
  *(undefined8 *)(puVar7 + 0x100) = 0;
LAB_001b5e9c:
  if ((long *)param_1[0x8a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8a] + 8))();
  }
  if ((long *)param_1[0x8b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8b] + 8))();
  }
  if (param_1[0x92] != 0) {
    param_1[0x93] = param_1[0x92];
    FUN_00187e4c();
  }
  FUN_001956e4(param_1 + 0x37);
  FUN_001d64e4(param_1 + 0x34);
  FUN_001a619c(param_1 + 0x2c);
  FUN_00187ee0(param_1 + 0x1e);
  param_1[0x10] = (long)(PTR_DAT_04bcc4e0 + 0x10);
  if (param_1[0x1c] != 0) {
    lVar1 = param_1[0x1a];
    plVar4 = (long *)param_1[0x1b];
    param_1[0x1c] = 0;
    lVar9 = *plVar4;
    *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar9;
    while (plVar4 != param_1 + 0x1a) {
      plVar10 = (long *)plVar4[1];
      (**(code **)plVar4[2])();
      FUN_00187e4c(plVar4);
      plVar4 = plVar10;
    }
  }
  FUN_0018ac30(param_1 + 0x11);
  FUN_0019c5fc(param_1 + 0xc);
  FUN_0018ac30(param_1 + 3);
  FUN_0019c210();
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  return;
}

