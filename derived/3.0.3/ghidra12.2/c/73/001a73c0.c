
undefined8 FUN_001a73c0(long param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined1 auStack_98 [40];
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar9 = PTR_DAT_04bcbb78;
  puVar4 = PTR_DAT_04bcb910;
  puVar3 = PTR_DAT_04bcb908;
  if (*(char *)(param_1 + 0x18) != -1) {
    return 0;
  }
  if (*(int *)(param_1 + 8) != 9) goto LAB_001a7500;
  if (*PTR_DAT_04bcb908 == '\0') {
LAB_001a7444:
    cVar2 = puVar9[0x1908];
  }
  else {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar5 == 0) goto LAB_001a7444;
    cVar2 = *(char *)(*(long *)(puVar9 + 0x17f8) + (ulong)*puVar5 * 0x148 + 0x108);
  }
  if (cVar2 == '\0') goto LAB_001a7500;
  uVar1 = *(uint *)(param_1 + 8);
  if (*puVar3 == '\0') {
LAB_001a7484:
    puVar9 = puVar9 + (ulong)uVar1 * 0x2a8 + 0x18;
  }
  else {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar4);
    if (*puVar5 == 0) goto LAB_001a7484;
    puVar9 = (undefined *)(*(long *)(puVar9 + (ulong)uVar1 * 0x2a8 + 0x10) + (ulong)*puVar5 * 0x148)
    ;
  }
  uStack_58 = *(undefined8 *)(puVar9 + 0x128);
  local_50 = *(undefined8 *)(puVar9 + 0x130);
  uStack_68 = *(undefined8 *)(puVar9 + 0x118);
  local_60 = *(undefined8 *)(puVar9 + 0x120);
  uStack_48 = *(undefined8 *)(puVar9 + 0x138);
  local_70 = PTR_DAT_04bcc328 + 0x10;
  FUN_0019c970(auStack_98,&local_60);
  lVar6 = FUN_001932e0(auStack_98);
  if (lVar6 == 0) {
    FUN_0019cd34(auStack_98);
    return 0;
  }
  plVar7 = (long *)FUN_00185a6c(0x108);
  FUN_001b64dc();
  *(long **)(param_1 + 0x28) = plVar7;
  (**(code **)(*plVar7 + 0x40))(plVar7,auStack_98);
  FUN_0019cd34(auStack_98);
LAB_001a7500:
  uVar8 = FUN_001bb090(*(long *)(param_1 + 0x10) + 0xf0,param_1,param_2,0);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  *(char *)(param_1 + 0x18) = (char)param_2;
  return 1;
}

