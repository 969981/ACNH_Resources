
void FUN_001a57fc(long *param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined *puVar5;
  uint uVar6;
  
  *(uint *)(param_1 + 1) = param_2;
  *param_1 = (long)(PTR_DAT_04bcc2b0 + 0x10);
  puVar5 = PTR_DAT_04bcbb78;
  puVar3 = PTR_DAT_04bcb910;
  puVar2 = PTR_DAT_04bcb908;
  if (*PTR_DAT_04bcb908 == '\0') {
LAB_001a5880:
    uVar6 = *(uint *)(param_1 + 1);
    *(uint *)(puVar5 + (ulong)param_2 * 0x2a8 + 0x38) = uVar6;
    if (*puVar2 == '\0') goto LAB_001a58dc;
LAB_001a589c:
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)puVar3);
    if (*puVar4 == 0) goto LAB_001a58dc;
    iVar1 = *(int *)(*(long *)(puVar5 + (ulong)uVar6 * 0x2a8 + 0x10) + (ulong)*puVar4 * 0x148 +
                    0x140);
  }
  else {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar4 == 0) goto LAB_001a5880;
    uVar6 = *(uint *)(param_1 + 1);
    *(uint *)(*(long *)(puVar5 + (ulong)param_2 * 0x2a8 + 0x10) + (ulong)*puVar4 * 0x148 + 0x20) =
         uVar6;
    if (*puVar2 != '\0') goto LAB_001a589c;
LAB_001a58dc:
    iVar1 = *(int *)(puVar5 + (ulong)uVar6 * 0x2a8 + 0x158);
  }
  if (iVar1 != -1) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 1);
  if (*puVar2 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)puVar3);
    if (*puVar4 != 0) {
      puVar5 = (undefined *)
               (*(long *)(puVar5 + (ulong)uVar6 * 0x2a8 + 0x10) + (ulong)*puVar4 * 0x148);
      iVar1 = (int)param_1[1];
      goto joined_r0x001a5944;
    }
  }
  puVar5 = puVar5 + (ulong)uVar6 * 0x2a8 + 0x18;
  iVar1 = (int)param_1[1];
joined_r0x001a5944:
  if (((iVar1 == 10) || (iVar1 == 3)) || (iVar1 == 2)) {
    *(undefined4 *)(puVar5 + 0x140) = *(undefined4 *)PTR_DAT_04bcc2b8;
    return;
  }
  *(undefined4 *)(puVar5 + 0x140) = 0;
  return;
}

