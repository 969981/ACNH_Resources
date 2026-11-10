
void FUN_001d5b10(long param_1,uint *param_2,ushort *param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  uint uVar8;
  byte *pbVar9;
  undefined *puVar10;
  
  puVar5 = PTR_DAT_04bcb908;
  *param_2 = 0;
  puVar10 = PTR_DAT_04bcc718;
  puVar6 = PTR_DAT_04bcb910;
  if (*puVar5 == '\0') {
LAB_001d5b70:
    pbVar9 = puVar10 + 0x18;
  }
  else {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar7 == 0) goto LAB_001d5b70;
    pbVar9 = (byte *)(*(long *)(puVar10 + 0x10) + (ulong)*puVar7);
  }
  puVar10 = PTR_DAT_04bcc720;
  bVar3 = *pbVar9;
  *param_2 = (uint)bVar3;
  uVar1 = *(uint *)(param_1 + 8);
  uVar8 = (uint)bVar3 | *(int *)puVar10 << 8;
  *param_2 = uVar8;
  puVar10 = PTR_DAT_04bcbb78;
  if ((uVar1 | 8) == 10) {
    if (*puVar5 == '\0') {
LAB_001d5bf0:
      iVar2 = *(int *)(puVar10 + (ulong)uVar1 * 0x2a8 + 0x114);
    }
    else {
      puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
      if (*puVar7 == 0) goto LAB_001d5bf0;
      iVar2 = *(int *)(*(long *)(puVar10 + (ulong)uVar1 * 0x2a8 + 0x10) + (ulong)*puVar7 * 0x148 +
                      0xfc);
    }
    if (iVar2 != 2) {
      uVar8 = *param_2;
      goto LAB_001d5c0c;
    }
    uVar1 = *(uint *)(param_1 + 8);
    cVar4 = *puVar5;
  }
  else {
LAB_001d5c0c:
    *param_2 = uVar8 & 0xfffffeff;
    uVar1 = *(uint *)(param_1 + 8);
    cVar4 = *puVar5;
  }
  if (cVar4 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
    if (*puVar7 != 0) {
      puVar10 = (undefined *)
                (*(long *)(puVar10 + (ulong)uVar1 * 0x2a8 + 0x10) + (ulong)*puVar7 * 0x148);
      goto LAB_001d5c50;
    }
  }
  puVar10 = puVar10 + (ulong)uVar1 * 0x2a8 + 0x18;
LAB_001d5c50:
  *param_3 = (ushort)(byte)puVar10[0xf8];
  return;
}

