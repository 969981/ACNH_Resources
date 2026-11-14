
ulong FUN_0176cdec(long param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  
  fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x170));
  fVar7 = fVar7 * 8.381903e-08;
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  if (45.0 <= fVar7) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar7)) {
      bVar2 = fVar7 < 315.0;
      bVar3 = fVar7 == 315.0;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar2 != bVar4) {
    bVar2 = false;
    if ((45.0 <= fVar7) && (bVar2 = false, !NAN(fVar7))) {
      bVar2 = fVar7 < 135.0;
    }
    if (bVar2) {
      uVar5 = 3;
      if (*(char *)(param_1 + 0x6e8) != '\0') {
        uVar5 = 1;
      }
      return (ulong)uVar5;
    }
    uVar5 = (uint)(fVar7 < 135.0);
    if (225.0 <= fVar7) {
      uVar5 = 1;
    }
    uVar6 = (ulong)uVar5;
    cVar1 = *(char *)(param_1 + 0x6e8);
  }
  else {
    uVar6 = 2;
    cVar1 = *(char *)(param_1 + 0x6e8);
  }
  if (cVar1 != '\0') {
    uVar6 = (ulong)*(uint *)(&DAT_04130c24 + uVar6 * 4);
  }
  return uVar6;
}

