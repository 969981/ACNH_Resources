
bool FUN_004737c0(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  
  puVar5 = (ulong *)*param_1;
  if (puVar5 == (ulong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    puVar6 = puVar5;
    do {
      puVar6 = (ulong *)*puVar6;
      lVar4 = lVar4 + 1;
    } while (puVar6 != (ulong *)0x0);
  }
  uVar7 = param_1[1];
  uVar11 = 0;
  if (uVar7 != 0) {
    uVar11 = (param_1[9] - param_1[8]) / uVar7;
  }
  uVar11 = uVar11 + lVar4;
  puVar6 = (ulong *)param_1[4];
  if (puVar6 != (ulong *)0x0) {
    puVar8 = puVar6;
    do {
      puVar9 = puVar8 + 3;
      puVar8 = (ulong *)*puVar8;
      uVar11 = *puVar9 + uVar11;
    } while (puVar8 != (ulong *)0x0);
  }
  if (uVar11 == param_1[0xd]) {
    puVar8 = (ulong *)param_1[3];
    if (puVar8 == (ulong *)0x0) {
      lVar4 = 0;
      lVar10 = 0;
    }
    else {
      lVar4 = 0;
      puVar9 = puVar8;
      do {
        puVar1 = puVar9 + 3;
        puVar9 = (ulong *)*puVar9;
        lVar4 = *puVar1 + lVar4;
      } while (puVar9 != (ulong *)0x0);
      lVar10 = 0;
    }
    for (; puVar6 != (ulong *)0x0; puVar6 = (ulong *)*puVar6) {
      lVar10 = puVar6[3] + lVar10;
    }
    bVar3 = lVar10 + lVar4 == param_1[0xc];
    if (!bVar3 || puVar5 == (ulong *)0x0) {
      return bVar3;
    }
    if (puVar8 != (ulong *)0x0) {
      while ((param_1[6] - 1 & (ulong)puVar5) == 0) {
        puVar6 = puVar8;
        while ((uVar11 = puVar6[2], puVar5 < uVar11 || (uVar11 + puVar6[3] * uVar7 <= puVar5))) {
          puVar6 = (ulong *)*puVar6;
          if (puVar6 == (ulong *)0x0) {
            return false;
          }
        }
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = ((long)puVar5 - uVar11) / uVar7;
        }
        if ((long)puVar5 - uVar11 != uVar2 * uVar7) {
          return false;
        }
        puVar5 = (ulong *)*puVar5;
        if (puVar5 == (ulong *)0x0) {
          return true;
        }
      }
    }
  }
  return false;
}

