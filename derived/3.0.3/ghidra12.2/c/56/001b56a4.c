
void FUN_001b56a4(long *param_1)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_58 [24];
  undefined8 local_38;
  
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  puVar9 = PTR_DAT_04bcc4d8;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *param_1 = (long)(puVar9 + 0x10);
  FUN_0019c050();
  FUN_00186460(param_1 + 3,0x20000000,1);
  FUN_0019d6e8(param_1 + 0xc,1);
  param_1[0x10] = (long)(PTR_DAT_04bcc4e0 + 0x10);
  FUN_00186460(param_1 + 0x11,1,1);
  param_1[0x1c] = 0;
  param_1[0x1a] = (long)(param_1 + 0x1a);
  param_1[0x1b] = (long)(param_1 + 0x1a);
  FUN_00187e94(param_1 + 0x1e);
  FUN_001a60bc(param_1 + 0x2c);
  FUN_001d6484(param_1 + 0x34);
  plVar1 = param_1 + 0x37;
  FUN_00195604(plVar1);
  puVar9 = PTR_DAT_04bcc328;
  param_1[0x8d] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x8c] = (long)(puVar9 + 0x10);
  FUN_0019b310(param_1 + 0xc,param_1);
  puVar9 = PTR_DAT_04bcc4e8;
  *(undefined **)PTR_DAT_04bcc2e0 = PTR_DAT_04bcc4e8;
  lVar7 = *(long *)(puVar9 + 0x1c0);
  if (lVar7 != 0) {
    *(long *)PTR_DAT_04bcbf10 = lVar7;
  }
  (**(code **)(*(long *)puVar9 + 0x40))();
  plVar5 = (long *)FUN_00185a6c(0x560);
  FUN_001dae68();
  param_1[0x1d] = (long)plVar5;
  (**(code **)(*plVar5 + 0x10))(auStack_58,plVar5);
  lVar7 = FUN_00185a6c(0x1c8);
  FUN_001ac810();
  puVar8 = PTR_DAT_04bcc4f0;
  param_1[0x33] = lVar7;
  puVar4 = PTR_DAT_04bcbb78;
  puVar3 = PTR_DAT_04bcb910;
  puVar9 = PTR_DAT_04bcb908;
  if (*puVar8 != '\0') {
    if (*PTR_DAT_04bcb908 == '\0') {
LAB_001b5858:
      *(long **)(puVar4 + 0x840) = plVar1;
      if (*puVar9 == '\0') goto LAB_001b5884;
LAB_001b5868:
      puVar6 = (uint *)FUN_03876070(*(undefined8 *)puVar3);
      if (*puVar6 == 0) goto LAB_001b5884;
      puVar8 = (undefined *)(*(long *)(puVar4 + 0x560) + (ulong)*puVar6 * 0x148);
    }
    else {
      puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      if (*puVar6 == 0) goto LAB_001b5858;
      *(long **)(*(long *)(puVar4 + 0x808) + (ulong)*puVar6 * 0x148 + 0x30) = plVar1;
      if (*puVar9 != '\0') goto LAB_001b5868;
LAB_001b5884:
      puVar8 = puVar4 + 0x568;
    }
    *(long **)(puVar8 + 0x30) = plVar1;
  }
  lVar7 = FUN_00185a6c(0xd8);
  if (lVar7 != 0) {
    FUN_00193120(lVar7);
  }
  param_1[0x8a] = lVar7;
  local_38 = 0x807060504030201;
  *(undefined8 *)PTR_DAT_04bcc4c8 = 8;
  memcpy(PTR_DAT_04bcc4d0,&local_38,8);
  lVar7 = FUN_00185a6c(0x50);
  if (lVar7 != 0) {
    FUN_0019508c(lVar7);
  }
  param_1[0x8b] = lVar7;
  FUN_001b5960(param_1);
  if (*puVar9 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)puVar3);
    if (*puVar6 != 0) {
      puVar9 = (undefined *)(*(long *)(puVar4 + 0x1aa0) + (ulong)*puVar6 * 0x148);
      cVar2 = puVar9[0xf7];
      goto joined_r0x001b593c;
    }
  }
  puVar9 = puVar4 + 0x1aa8;
  cVar2 = puVar4[0x1b9f];
joined_r0x001b593c:
  if (cVar2 != '\0') {
    puVar9[0x108] = 1;
  }
  return;
}

