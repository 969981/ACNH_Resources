
int FUN_021dd320(long *param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 local_24;
  
  iVar4 = FUN_021d5df0();
  if (iVar4 == 1) {
    uVar9 = *(undefined8 *)PTR_DAT_04bb4130;
    (**(code **)(*param_1 + 0x18))(param_1);
    local_24 = FUN_006bd550(param_1[1],0);
    puVar5 = (uint *)FUN_0079e4d0(uVar9,&local_24);
    if (puVar5 == (uint *)0x0) {
      return DAT_053dcefc;
    }
    uVar6 = *puVar5;
    if (uVar6 == 0 || puVar5 == (uint *)(ulong)uVar6) {
      return DAT_053dcefc;
    }
    puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar6);
    uVar6 = *puVar7;
    if (uVar6 == 0) {
      return DAT_053dcefc;
    }
    uVar2 = puVar7[1];
    if (uVar2 == 0) {
      return DAT_053dcefc;
    }
    if ((ulong)(ushort)puVar7[2] == 0) {
      return DAT_053dcefc;
    }
    lVar1 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
    if (lVar1 == 0) {
      return DAT_053dcefc;
    }
    uVar8 = 0;
    if ((ulong)uVar2 != 0) {
      uVar8 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar2);
    }
    puVar5 = &DAT_053f9918;
  }
  else {
    if (iVar4 != 0) {
      return DAT_053dcefc;
    }
    uVar9 = *(undefined8 *)PTR_DAT_04bb4138;
    (**(code **)(*param_1 + 0x18))(param_1);
    local_24 = FUN_006bd550(param_1[1],0);
    puVar5 = (uint *)FUN_0079e770(uVar9,&local_24);
    if (puVar5 == (uint *)0x0) {
      return DAT_053dcefc;
    }
    uVar6 = *puVar5;
    if (uVar6 == 0 || puVar5 == (uint *)(ulong)uVar6) {
      return DAT_053dcefc;
    }
    puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar6);
    uVar6 = *puVar7;
    if (uVar6 == 0) {
      return DAT_053dcefc;
    }
    uVar2 = puVar7[1];
    if (uVar2 == 0) {
      return DAT_053dcefc;
    }
    if ((ulong)(ushort)puVar7[2] == 0) {
      return DAT_053dcefc;
    }
    lVar1 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
    if (lVar1 == 0) {
      return DAT_053dcefc;
    }
    uVar8 = 0;
    if ((ulong)uVar2 != 0) {
      uVar8 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar2);
    }
    puVar5 = &DAT_0538ea70;
  }
  if (uVar6 <= uVar8) {
    uVar8 = 0xffffffff;
  }
  if (((uVar8 < *puVar5) &&
      (uVar3 = *(ushort *)(*(long *)(puVar5 + 2) + (long)(int)uVar8 * 2), uVar3 < 7)) &&
     (uVar3 != 0)) {
    return uVar3 - 1;
  }
  return DAT_053dcefc;
}

