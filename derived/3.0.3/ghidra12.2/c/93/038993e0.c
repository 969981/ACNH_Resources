
void FUN_038993e0(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint *puVar6;
  undefined *puVar7;
  undefined1 auStack_38 [24];
  
  FUN_00189530(0);
  FUN_00196a0c(0x4d8);
  puVar3 = PTR_DAT_04bcbb68;
  puVar2 = PTR_DAT_04bcbb60;
  puVar7 = PTR_DAT_04bcbb58;
  *PTR_DAT_04bcbb50 = 1;
  bVar1 = *(byte *)(param_1 + 0x2c0);
  *(undefined4 *)puVar7 = 2;
  *(uint *)puVar2 = (uint)bVar1;
  *(uint *)puVar3 = (uint)bVar1;
  *(ulong *)PTR_DAT_04bcbb70 = (ulong)*(ushort *)(param_1 + 0x2c2);
  uVar4 = FUN_00187a2c();
  FUN_00187a24(uVar4,*(undefined4 *)(param_1 + 0x2c8));
  lVar5 = FUN_00187aac();
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(param_1 + 0x2d0);
  puVar7 = PTR_DAT_04bcbb78;
  lVar5 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x20);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar6 != 0) {
      puVar7 = (undefined *)(*(long *)(puVar7 + 0x2b8) + (ulong)*puVar6 * 0x148);
      goto LAB_038994c0;
    }
  }
  puVar7 = puVar7 + 0x2c0;
LAB_038994c0:
  FUN_001ba56c(auStack_38,puVar7,*(undefined4 *)(lVar5 + 8));
  return;
}

