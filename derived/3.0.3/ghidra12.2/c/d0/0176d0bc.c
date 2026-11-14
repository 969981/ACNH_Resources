
void FUN_0176d0bc(long param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  float fVar8;
  
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x170));
  fVar8 = fVar8 * 8.381903e-08;
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  if (45.0 <= fVar8) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar8)) {
      bVar2 = fVar8 < 315.0;
      bVar3 = fVar8 == 315.0;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar2 != bVar4) {
    bVar2 = false;
    if ((45.0 <= fVar8) && (bVar2 = false, !NAN(fVar8))) {
      bVar2 = fVar8 < 135.0;
    }
    if (bVar2) {
      uVar6 = 3;
      if (*(char *)(param_1 + 0x6e8) != '\0') {
        uVar6 = 1;
      }
      uVar7 = (ulong)uVar6;
      goto LAB_0176d170;
    }
    uVar6 = (uint)(fVar8 < 135.0);
    if (225.0 <= fVar8) {
      uVar6 = 1;
    }
    uVar7 = (ulong)uVar6;
    cVar1 = *(char *)(param_1 + 0x6e8);
  }
  else {
    uVar7 = 2;
    cVar1 = *(char *)(param_1 + 0x6e8);
  }
  if (cVar1 != '\0') {
    uVar7 = (ulong)*(uint *)(&DAT_04130c24 + uVar7 * 4);
  }
LAB_0176d170:
  lVar5 = FUN_017f8364(*(long *)PTR_DAT_04bb5ce0 + 0xda0,uVar7);
  if (lVar5 == 0) {
    **(undefined1 **)(param_1 + 0x348) = 0;
  }
  return;
}

