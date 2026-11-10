
ulong FUN_002ae9c0(ulong param_1)

{
  uint *__s;
  long lVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  long lVar13;
  char acStack_70 [32];
  
  if (*(short *)(param_1 + 0x32) == 0) {
    return param_1;
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  uVar8 = *(uint *)(param_1 + 0x2c);
  lVar13 = *(long *)(param_1 + 0x20);
  __s = (uint *)(param_1 + 0x674);
  uVar7 = param_1;
LAB_002aea2c:
  do {
    uVar2 = 0;
    if (uVar6 <= uVar8) {
      uVar2 = uVar6;
    }
    if (*(short *)(lVar13 + (ulong)(uVar8 - uVar2) * 0x5d0 + 0x24) == 0 &&
        *(short *)(param_1 + 0x30) == -1) {
      FUN_002b29c0(param_1 + 0x18);
      memset(__s,0,4);
      uVar6 = *(uint *)(param_1 + 0x674);
      lVar9 = 0;
      do {
        lVar1 = param_1 + lVar9 * 8;
        uVar3 = 1 << (ulong)((uint)lVar9 & 0x1f);
        if (*(long *)(lVar1 + 0x538) != 0 && (uVar3 & *(uint *)(param_1 + 0x670)) == 0) {
          uVar6 = uVar3 | uVar6;
          *__s = uVar6;
        }
        uVar3 = 1 << (ulong)((uint)lVar9 + 1 & 0x1f);
        if (*(long *)(lVar1 + 0x540) != 0 && (uVar3 & *(uint *)(param_1 + 0x670)) == 0) {
          uVar6 = uVar3 | uVar6;
          *__s = uVar6;
        }
        lVar9 = lVar9 + 2;
      } while (lVar9 != 0x20);
      uVar6 = sprintf(acStack_70,"%08x");
      uVar7 = (ulong)uVar6;
    }
    if (*(int *)(lVar13 + (ulong)(uVar8 - uVar2) * 0x5d0 + 0x2c) != 0) {
      return uVar7;
    }
    uVar6 = *(uint *)(param_1 + 0x28);
    uVar8 = *(uint *)(param_1 + 0x2c);
    sVar12 = *(short *)(param_1 + 0x32);
    lVar13 = *(long *)(param_1 + 0x20);
    sVar10 = sVar12;
    if (lVar13 == 0) {
      sVar11 = *(short *)(param_1 + 0x34);
      do {
        uVar8 = uVar6 + 1 + uVar8;
        do {
          uVar8 = uVar8 - uVar6;
        } while (uVar6 <= uVar8);
        if (sVar12 == 0) {
          sVar12 = 0;
        }
        else {
          sVar10 = sVar12 + -1;
          *(short *)(param_1 + 0x32) = sVar10;
          sVar12 = sVar10;
        }
        if (sVar11 == 0) goto LAB_002aea10;
        *(short *)(param_1 + 0x34) = sVar11 + -1;
        bVar5 = sVar11 != 1;
        sVar11 = sVar11 + -1;
      } while (bVar5);
    }
    else {
      sVar11 = *(short *)(param_1 + 0x34);
      do {
        uVar8 = uVar6 + 1 + uVar8;
        do {
          uVar8 = uVar8 - uVar6;
        } while (uVar6 <= uVar8);
        if (sVar12 == 0) {
          sVar12 = 0;
        }
        else {
          sVar10 = sVar12 + -1;
          *(short *)(param_1 + 0x32) = sVar10;
          sVar12 = sVar10;
        }
        if (sVar11 == 0) goto LAB_002aea10;
        sVar4 = sVar11 + -1;
        *(short *)(param_1 + 0x34) = sVar4;
      } while ((sVar11 != 1) &&
              ((sVar11 = sVar4, sVar12 == 0 || (*(char *)(lVar13 + (ulong)uVar8 * 0x5d0) == '\0'))))
      ;
    }
    *(uint *)(param_1 + 0x2c) = uVar8;
    if (sVar10 == 0) {
      return uVar7;
    }
  } while( true );
LAB_002aea10:
  *(uint *)(param_1 + 0x2c) = uVar8;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + 1;
  if (sVar10 == 0) {
    return uVar7;
  }
  goto LAB_002aea2c;
}

