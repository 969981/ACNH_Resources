
ulong FUN_00422a90(undefined8 *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  char *pcVar3;
  ulong uVar4;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  
  pcVar3 = (char *)*param_1;
  if (*pcVar3 == '\0') {
    return 0xffffffff;
  }
  if (*param_2 == 0) {
    return 0;
  }
  uVar4 = 0;
  do {
    pcVar6 = pcVar3;
    uVar7 = (uint)*param_2;
    pbVar5 = param_2;
    while( true ) {
      pbVar5 = pbVar5 + 1;
      bVar2 = pcVar6[uVar4];
      uVar8 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar8 = (uint)bVar2;
      }
      uVar1 = uVar7 + 0x20;
      if (0x19 < (uVar7 - 0x41 & 0xff)) {
        uVar1 = uVar7;
      }
      if ((uVar8 & 0xff) != (uVar1 & 0xff)) break;
      uVar7 = (uint)*pbVar5;
      pcVar6 = pcVar6 + 1;
      if (uVar7 == 0) {
        return uVar4 & 0xffffffff;
      }
    }
    uVar4 = uVar4 + 1;
    if (pcVar3[uVar4] == '\0') {
      return 0xffffffff;
    }
  } while( true );
}

