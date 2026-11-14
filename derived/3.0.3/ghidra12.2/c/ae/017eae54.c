
void FUN_017eae54(void)

{
  uint *puVar1;
  undefined4 uVar2;
  byte bVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 local_14;
  
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 0x1a & 1) != 0) && (*(long *)PTR_DAT_04bb59d8 != 0)) {
      FUN_0370d960(*(long *)PTR_DAT_04bb59d8 + 0x10,1);
    }
  }
  FUN_016cd510();
  puVar7 = PTR_DAT_04bc39e0;
  puVar6 = PTR_DAT_04bbe4a8;
  puVar5 = PTR_DAT_04bbe4a0;
  if (*PTR_DAT_04bbe4a0 != '\0' && PTR_DAT_04bc39e0[0x9c] == '\0') {
    FUN_0292e870(&local_14,0);
    *(undefined4 *)(puVar7 + 0xb4) = local_14;
    bVar3 = puVar7[0xcb];
    puVar7[0xcb] = bVar3 | 4;
    if (puVar7[0x9c] == '\0') {
      uVar2 = *(undefined4 *)puVar6;
      puVar7[0xcb] = bVar3 | 6;
      *(undefined4 *)(puVar7 + 0xb0) = uVar2;
    }
  }
  *puVar5 = 0;
  *(undefined4 *)puVar6 = 0;
  return;
}

