
void FUN_00198f30(undefined4 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_48;
  uint local_44;
  
  puVar4 = PTR_DAT_04bcb910;
  puVar3 = PTR_DAT_04bcb908;
  if (*PTR_DAT_04bcc080 == '\0') {
    FUN_001a007c(param_1);
    return;
  }
  if (*PTR_DAT_04bcb908 == '\0') {
    uVar8 = 0;
  }
  else {
    puVar6 = (undefined4 *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar8 = *puVar6;
  }
  puVar5 = PTR_DAT_04bcc088;
  (**(code **)(*(long *)PTR_DAT_04bcc088 + 0x10))(PTR_DAT_04bcc088);
  puVar2 = PTR_DAT_04bcb900;
  plVar7 = *(long **)(PTR_DAT_04bcb900 + 0xa0);
  if (plVar7 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (int)((ulong)(plVar7[1] - *plVar7) >> 3) - 1;
  }
  (**(code **)(*(long *)puVar5 + 0x20))(puVar5);
  uVar10 = 0;
  do {
    while ((**(code **)(*(long *)puVar5 + 0x10))(puVar5), uVar10 == 0) {
LAB_00199050:
      (**(code **)(*(long *)puVar5 + 0x20))(puVar5);
      local_44 = uVar10;
      if (*puVar3 != '\0') {
        FUN_0018cd00(*(undefined8 *)puVar4,&local_44);
      }
      FUN_001a007c(param_1);
      uVar10 = uVar10 + 1;
      if (uVar9 < uVar10) goto LAB_0019908c;
    }
    lVar1 = **(long **)(puVar2 + 0xa0);
    if (((ulong)uVar10 < (ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar1 >> 3)) &&
       (*(long *)(lVar1 + (ulong)uVar10 * 8) != 0)) goto LAB_00199050;
    (**(code **)(*(long *)puVar5 + 0x20))(puVar5);
    uVar10 = uVar10 + 1;
  } while (uVar10 <= uVar9);
LAB_0019908c:
  if (*puVar3 != '\0') {
    local_48 = uVar8;
    FUN_0018cd00(*(undefined8 *)puVar4,&local_48);
  }
  return;
}

