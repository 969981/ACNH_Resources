
bool FUN_00188244(void)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint *puVar7;
  long *plVar8;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar5 = PTR_DAT_04bcbd18;
  (**(code **)(*(long *)PTR_DAT_04bcbd18 + 0x10))(PTR_DAT_04bcbd18);
  puVar3 = PTR_DAT_04bcb900;
  plVar8 = (long *)(PTR_DAT_04bcb900 + 0x80);
  if (*PTR_DAT_04bcb908 == '\0') {
LAB_001882b8:
    if (*plVar8 != 0) {
      bVar6 = *(char *)(*plVar8 + 0x5c) != '\0';
      goto LAB_00188308;
    }
  }
  else {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    puVar4 = PTR_DAT_04bcbc88;
    uVar2 = *puVar7;
    if (uVar2 == 0) goto LAB_001882b8;
    lVar1 = **(long **)(puVar3 + 0xa0);
    if ((ulong)uVar2 < (ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar1 >> 3)) {
      plVar8 = (long *)(*(long *)(lVar1 + (ulong)uVar2 * 8) + 0x78);
      goto LAB_001882b8;
    }
    local_24 = 0xe0000003;
    local_28 = 0;
    FUN_0018cd00(*(long *)PTR_DAT_04bcbc88 + 0x38,&local_24);
    FUN_0018cd00(*(long *)puVar4 + 0xb8,&local_28);
  }
  bVar6 = false;
LAB_00188308:
  (**(code **)(*(long *)puVar5 + 0x20))(puVar5);
  return bVar6;
}

