
uint FUN_02e3e49c(long param_1)

{
  undefined *puVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  byte local_3c [4];
  undefined4 local_38 [6];
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
LAB_02e3e508:
    if ((*(char *)(DAT_05358908 + 0xf78) != '\0') && (*(int *)(DAT_05358908 + 0xc4) == 0)) {
      uVar5 = 1;
      goto LAB_02e3e530;
    }
  }
  else {
    local_38[0] = 0x20;
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
    if (0xff < (uint)(int)sVar2) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if (((*(uint *)(puVar1 + 4) & 1) == 0) ||
       (uVar4 = nn::pctl::IsFreeCommunicationAvailable(), (uVar4 & 1) != 0)) goto LAB_02e3e508;
  }
  uVar5 = 0;
LAB_02e3e530:
  local_3c[0] = *(byte *)(param_1 + 0x50);
  if (7 < local_3c[0]) {
    local_3c[0] = 0xff;
  }
  FUN_02645730(local_38,local_3c);
  uVar3 = FUN_02645980(local_38);
  return uVar5 & uVar3;
}

