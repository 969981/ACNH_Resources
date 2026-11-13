
ulong FUN_013837d0(short param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  bVar2 = DAT_055c1b60 == &DAT_055c1b58;
  puVar7 = DAT_055c1b60 + -8;
  if ((param_1 != 0) && (puVar5 = DAT_055c1b60, puVar7 != &DAT_055c1b18)) {
    do {
      puVar5 = (undefined8 *)puVar5[1];
      param_1 = param_1 + -1;
      bVar2 = puVar5 == &DAT_055c1b58;
    } while (!bVar2 && param_1 != 0);
    puVar7 = puVar5 + -8;
  }
  puVar5 = &DAT_055c04a0;
  if (!bVar2) {
    puVar5 = puVar7;
  }
  uVar4 = 0;
  while( true ) {
    piVar1 = &DAT_0516b108 + uVar4;
    uVar3 = (uint)uVar4;
    if (0x38 < uVar3) {
      piVar1 = &DAT_0516b108;
    }
    if (*piVar1 == *(int *)(puVar5 + 7)) break;
    uVar6 = 0x39;
    if ((int)uVar3 < 0x39) {
      uVar6 = uVar3 + 1;
    }
    uVar4 = (ulong)uVar6;
    if (uVar6 == 0x39) {
      return 0;
    }
  }
  return uVar4;
}

