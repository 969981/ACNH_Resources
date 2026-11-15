
undefined4 FUN_021d6da0(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined4 local_4;
  
  uVar8 = *(undefined8 *)PTR_DAT_04bb4130;
  local_4 = FUN_006bd550(param_1,0);
  puVar5 = (uint *)FUN_0079e4d0(uVar8,&local_4);
  if (puVar5 == (uint *)0x0) {
    return 0;
  }
  if (0xf < *DAT_04ccdcc0) {
    return 0;
  }
  uVar4 = 1 << (ulong)(*DAT_04ccdcc0 & 0x1f);
  if ((uVar4 & 0x1bee) == 0) {
    if ((uVar4 & 0xe001) == 0) {
      return 0;
    }
    uVar4 = *puVar5;
    if (uVar4 == 0 || puVar5 == (uint *)(ulong)uVar4) {
      return 1;
    }
    puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
    if (*puVar7 == 0) {
      return 1;
    }
    uVar4 = puVar7[1];
    if (uVar4 == 0) {
      return 1;
    }
    if ((ulong)(ushort)puVar7[2] == 0) {
      return 1;
    }
    lVar1 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
    if (lVar1 == 0) {
      return 1;
    }
    uVar2 = 0;
    if ((ulong)uVar4 != 0) {
      uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar4);
    }
    if (*puVar7 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if (DAT_053f98f8 <= uVar2) {
      return 1;
    }
    uVar3 = *(ushort *)(DAT_053f9900 + (long)(int)uVar2 * 2);
  }
  else {
    uVar4 = *puVar5;
    if (uVar4 == 0 || puVar5 == (uint *)(ulong)uVar4) {
      return 1;
    }
    puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
    if (*puVar7 == 0) {
      return 1;
    }
    uVar4 = puVar7[1];
    if (uVar4 == 0) {
      return 1;
    }
    if ((ulong)(ushort)puVar7[2] == 0) {
      return 1;
    }
    lVar1 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
    if (lVar1 == 0) {
      return 1;
    }
    uVar2 = 0;
    if ((ulong)uVar4 != 0) {
      uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar4);
    }
    if (*puVar7 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if (DAT_053f9908 <= uVar2) {
      return 1;
    }
    uVar3 = *(ushort *)(DAT_053f9910 + (long)(int)uVar2 * 2);
  }
  if (1 < uVar3) {
    return 1;
  }
  uVar6 = 1;
  if (uVar3 != 0) {
    uVar6 = 2;
  }
  return uVar6;
}

