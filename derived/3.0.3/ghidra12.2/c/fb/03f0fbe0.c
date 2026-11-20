
ulong FUN_03f0fbe0(uint *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  long *plVar13;
  
  if (*(long *)(param_1 + 6) != 0) {
    uVar4 = *param_1;
    puVar12 = (uint *)(*(long *)(param_1 + 6) + 0x3c);
    uVar11 = *puVar12;
    goto joined_r0x03f0fca0;
  }
  lVar5 = *(long *)(param_1 + 2);
  if (lVar5 == 0) {
    plVar13 = (long *)0x0;
    uVar4 = 0;
  }
  else if (param_1[4] == *(uint *)(lVar5 + 0x10)) {
    lVar7 = *(long *)(*(long *)(lVar5 + 0x120) + 8);
    lVar5 = *(long *)(lVar7 + 0x38);
    if ((DAT_05aebc00 == '\0') && (lVar5 == 0)) {
LAB_03f0fc90:
      plVar13 = (long *)0x0;
    }
    else {
      if (DAT_05aebc00 != '\0') {
        lVar5 = lVar7 + 0x70;
      }
      lVar5 = *(long *)(lVar5 + 8);
      if ((lVar5 == 0) || (*(uint *)(lVar5 + 0x18) == 0)) goto LAB_03f0fc90;
      plVar13 = (long *)((ulong)*(uint *)(lVar5 + 0x18) + lVar5);
      if (*plVar13 != 0x101feff464e494d) {
        plVar13 = (long *)0x0;
      }
    }
    uVar4 = FUN_03b46270();
  }
  else {
    plVar13 = (long *)0x0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  puVar12 = (uint *)((long)plVar13 + 0x3c);
  uVar11 = *puVar12;
joined_r0x03f0fca0:
  if (uVar11 != 0) {
    puVar1 = (ushort *)((ulong)uVar11 + (long)puVar12);
    uVar2 = *puVar1;
    uVar9 = (ulong)uVar2;
    if (uVar2 != 0) {
      uVar6 = (ulong)(uVar2 >> 1);
      uVar11 = *(uint *)(puVar1 + uVar6 * 2 + 2);
      if (uVar11 == uVar4) {
        return uVar6;
      }
      iVar10 = 0;
      while( true ) {
        iVar3 = (int)uVar6;
        iVar8 = iVar10;
        if (uVar4 <= uVar11) {
          iVar8 = (int)uVar9;
          uVar9 = uVar6;
          iVar3 = iVar10;
        }
        iVar10 = iVar3;
        if (iVar8 == (int)uVar6) break;
        uVar6 = (ulong)((uint)(iVar10 + (int)uVar9) >> 1);
        uVar11 = *(uint *)(puVar1 + uVar6 * 2 + 2);
        if (uVar11 == uVar4) {
          return uVar6;
        }
      }
      return uVar6;
    }
  }
  return 0;
}

