
uint FUN_02e3e384(long param_1)

{
  undefined *puVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  byte local_3c [4];
  undefined4 local_38 [6];
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
LAB_02e3e3f0:
    if ((*(char *)(DAT_05358908 + 0xf78) != '\0') && (*(int *)(DAT_05358908 + 0xc4) == 0)) {
      uVar7 = 0;
      goto LAB_02e3e418;
    }
  }
  else {
    local_38[0] = 0x20;
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
    if (0xff < (uint)(int)sVar2) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if (((*(uint *)(puVar1 + 4) & 1) == 0) ||
       (uVar5 = nn::pctl::IsFreeCommunicationAvailable(), (uVar5 & 1) != 0)) goto LAB_02e3e3f0;
  }
  uVar7 = 1;
LAB_02e3e418:
  local_3c[0] = *(byte *)(param_1 + 0x50);
  if (7 < local_3c[0]) {
    local_3c[0] = 0xff;
  }
  FUN_02645730(local_38,local_3c);
  uVar3 = FUN_02645980(local_38);
  lVar6 = *DAT_0537d558;
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0x508) == 0 || *(char *)(lVar6 + 0x55d) == '\0')) {
    uVar4 = 0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 1) {
      uVar4 = uVar7 & uVar3;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

