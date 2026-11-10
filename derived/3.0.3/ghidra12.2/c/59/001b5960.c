
/* WARNING: Type propagation algorithm not settling */

void FUN_001b5960(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  undefined *puVar3;
  long lVar4;
  char cVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [40];
  
  uVar7 = *(undefined8 *)(param_1 + 0x450);
  FUN_0019c970(auStack_48,PTR_DAT_04bcc4f8,0x10);
  FUN_00194da8(uVar7,auStack_48);
  FUN_0019cd34(auStack_48);
  uVar7 = *(undefined8 *)(param_1 + 0x458);
  lVar4 = *(long *)PTR_DAT_04bcc4c8;
  if (lVar4 == 0) {
    lVar4 = 0x10;
    puVar3 = PTR_DAT_04bcc4f8;
  }
  else {
    puVar3 = PTR_DAT_04bcc4d0;
  }
  FUN_0019c970(auStack_48,puVar3,lVar4);
  FUN_00194da8(uVar7,auStack_48);
  FUN_0019cd34(auStack_48);
  puVar1 = PTR_DAT_04bcbb78;
  puVar3 = PTR_DAT_04bcb908;
  if (*PTR_DAT_04bcc500 != '\0') {
    if (*PTR_DAT_04bcb908 == '\0') {
LAB_001b5a38:
      puVar6 = puVar1 + 0x1aa8;
    }
    else {
      puVar2 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      if (*puVar2 == 0) goto LAB_001b5a38;
      puVar6 = (undefined *)(*(long *)(puVar1 + 0x1aa0) + (ulong)*puVar2 * 0x148);
    }
    *(undefined8 *)(puVar6 + 0x100) = *(undefined8 *)(param_1 + 0x450);
  }
  if (*PTR_DAT_04bcc508 == '\0') {
    return;
  }
  if (*puVar3 == '\0') {
LAB_001b5a98:
    cVar5 = *puVar3;
    if (*(long *)(puVar1 + 0x1900) != 0) goto joined_r0x001b5afc;
LAB_001b5aac:
    if (cVar5 == '\0') {
LAB_001b5ae8:
      *(undefined8 *)(puVar1 + 0x1900) = *(undefined8 *)(param_1 + 0x458);
      cVar5 = *puVar3;
      goto joined_r0x001b5afc;
    }
    puVar2 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar2 == 0) goto LAB_001b5ae8;
    *(undefined8 *)(*(long *)(puVar1 + 0x17f8) + (ulong)*puVar2 * 0x148 + 0x100) =
         *(undefined8 *)(param_1 + 0x458);
    if (*puVar3 != '\0') goto LAB_001b5b00;
LAB_001b5b38:
    lVar4 = *(long *)(puVar1 + 0x3c0);
    cVar5 = *puVar3;
  }
  else {
    puVar2 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar2 == 0) goto LAB_001b5a98;
    cVar5 = *puVar3;
    if (*(long *)(*(long *)(puVar1 + 0x17f8) + (ulong)*puVar2 * 0x148 + 0x100) == 0)
    goto LAB_001b5aac;
joined_r0x001b5afc:
    if (cVar5 == '\0') goto LAB_001b5b38;
LAB_001b5b00:
    puVar2 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar2 == 0) goto LAB_001b5b38;
    lVar4 = *(long *)(*(long *)(puVar1 + 0x2b8) + (ulong)*puVar2 * 0x148 + 0x100);
    cVar5 = *puVar3;
  }
  if (lVar4 == 0) {
    if (cVar5 != '\0') {
      puVar2 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      if (*puVar2 != 0) {
        *(undefined8 *)(*(long *)(puVar1 + 0x2b8) + (ulong)*puVar2 * 0x148 + 0x100) =
             *(undefined8 *)(param_1 + 0x458);
        cVar5 = *puVar3;
        goto joined_r0x001b5b30;
      }
    }
    *(undefined8 *)(puVar1 + 0x3c0) = *(undefined8 *)(param_1 + 0x458);
    cVar5 = *puVar3;
  }
joined_r0x001b5b30:
  if (cVar5 != '\0') {
    puVar2 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar2 != 0) {
      lVar4 = *(long *)(*(long *)(puVar1 + 0x1550) + (ulong)*puVar2 * 0x148 + 0x100);
      goto joined_r0x001b5bc0;
    }
  }
  lVar4 = *(long *)(puVar1 + 0x1658);
joined_r0x001b5bc0:
  if (lVar4 != 0) {
    return;
  }
  if (*puVar3 != '\0') {
    puVar2 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar2 != 0) {
      *(undefined8 *)(*(long *)(puVar1 + 0x1550) + (ulong)*puVar2 * 0x148 + 0x100) =
           *(undefined8 *)(param_1 + 0x458);
      return;
    }
  }
  *(undefined8 *)(puVar1 + 0x1658) = *(undefined8 *)(param_1 + 0x458);
  return;
}

