
ulong FUN_003640a0(long param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  
  iVar3 = *(int *)(param_1 + 0x30);
  uVar6 = *(uint *)(*(long *)(param_1 + 8) + 8);
  uVar11 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
  if (iVar3 != 0) {
    uVar11 = uVar6;
  }
  uVar6 = (uint)*param_2;
  if (*param_2 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    pbVar7 = param_2;
    do {
      pbVar7 = pbVar7 + 1;
      uVar13 = uVar6 + uVar13 * uVar11;
      uVar6 = (uint)*pbVar7;
    } while (uVar6 != 0);
  }
  uVar6 = *(uint *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x18);
  uVar11 = uVar6;
  if ((int)uVar6 < 0) {
    uVar11 = uVar6 + 1;
  }
  uVar8 = (ulong)(uint)((int)uVar11 >> 1);
  uVar10 = *(uint *)(lVar5 + (-(ulong)((uint)((int)uVar11 >> 1) >> 0x1f) & 0xfffffff000000000 |
                             uVar8 << 4));
  uVar11 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
  uVar9 = uVar11 >> 0x10 | uVar11 << 0x10;
  uVar11 = uVar9;
  if (iVar3 != 0) {
    uVar11 = uVar10;
  }
  if (uVar11 != uVar13) {
    uVar16 = 0;
    if (iVar3 == 0) {
      uVar11 = uVar6;
      do {
        uVar2 = (uint)uVar8;
        uVar10 = uVar11;
        if (uVar9 < uVar13) {
          uVar10 = (uint)uVar16;
          uVar16 = uVar8;
          uVar2 = uVar11;
        }
        uVar11 = uVar2;
        if (uVar10 == (uint)uVar8) {
          return 0xffffffff;
        }
        iVar12 = (int)uVar16 + uVar11;
        if (iVar12 < 0 != SCARRY4((int)uVar16,uVar11)) {
          iVar12 = iVar12 + 1;
        }
        uVar8 = (ulong)(uint)(iVar12 >> 1);
        uVar10 = *(uint *)(lVar5 + (-(ulong)((uint)(iVar12 >> 1) >> 0x1f) & 0xfffffff000000000 |
                                   uVar8 << 4));
        uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
        uVar9 = uVar10 >> 0x10 | uVar10 << 0x10;
      } while (uVar9 != uVar13);
    }
    else {
      uVar11 = uVar6;
      do {
        uVar2 = (uint)uVar8;
        uVar9 = uVar11;
        if (uVar10 < uVar13) {
          uVar9 = (uint)uVar16;
          uVar16 = uVar8;
          uVar2 = uVar11;
        }
        uVar11 = uVar2;
        if (uVar9 == (uint)uVar8) {
          return 0xffffffff;
        }
        iVar12 = (int)uVar16 + uVar11;
        if (iVar12 < 0 != SCARRY4((int)uVar16,uVar11)) {
          iVar12 = iVar12 + 1;
        }
        uVar8 = (ulong)(uint)(iVar12 >> 1);
        uVar10 = *(uint *)(lVar5 + (-(ulong)((uint)(iVar12 >> 1) >> 0x1f) & 0xfffffff000000000 |
                                   uVar8 << 4));
      } while (uVar10 != uVar13);
    }
  }
  iVar12 = (int)uVar8;
  if (iVar12 == -1) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar10 = *(uint *)(lVar5 + (long)iVar12 * 0x10 + 4);
    uVar11 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
    if (iVar3 != 0) {
      uVar11 = uVar10;
    }
    if (uVar11 != 0) {
      iVar1 = iVar12 - (uVar11 >> 0x18);
      lVar15 = *(long *)(param_1 + 0x10);
      uVar16 = *(ulong *)(param_1 + 0x28);
      lVar14 = (long)(int)uVar6;
      if ((int)uVar6 <= iVar1 + 1) {
        uVar6 = iVar1 + 1;
      }
      if (iVar3 == 0) {
        uVar11 = uVar11 >> 0x18;
        uVar8 = (ulong)(iVar12 - uVar11);
        lVar4 = (long)iVar12 - (ulong)uVar11;
        puVar17 = (uint *)(lVar5 + (ulong)uVar11 * -0x10 + (long)iVar12 * 0x10 + 0x14);
        do {
          lVar4 = lVar4 + 1;
          if (lVar14 <= lVar4) goto LAB_0036432c;
          uVar11 = (puVar17[-1] & 0xff00ff00) >> 8 | (puVar17[-1] & 0xff00ff) << 8;
          if ((uVar11 >> 0x10 | uVar11 << 0x10) != uVar13) {
            return 0xffffffff;
          }
          uVar11 = (*puVar17 & 0xff00ff00) >> 8;
          uVar11 = (uVar11 | (*puVar17 & 0xff0000) << 8) >> 0x10 | uVar11 << 0x10;
          if (uVar16 < lVar15 + (ulong)uVar11) {
            return 0xffffffff;
          }
          iVar3 = strcmp((char *)param_2,(char *)(lVar15 + (ulong)(uVar11 << 2)));
          uVar8 = (ulong)((int)uVar8 + 1);
          puVar17 = puVar17 + 4;
        } while (iVar3 != 0);
      }
      else {
        uVar11 = uVar11 >> 0x18;
        uVar8 = (ulong)(iVar12 - uVar11);
        lVar4 = (long)iVar12 - (ulong)uVar11;
        puVar17 = (uint *)(lVar5 + (ulong)uVar11 * -0x10 + (long)iVar12 * 0x10 + 0x14);
        do {
          lVar4 = lVar4 + 1;
          if (lVar14 <= lVar4) {
LAB_0036432c:
            return (ulong)uVar6;
          }
          if ((puVar17[-1] != uVar13) || (uVar16 < lVar15 + ((ulong)*puVar17 & 0xffffff))) {
            return 0xffffffff;
          }
          iVar3 = strcmp((char *)param_2,
                         (char *)(lVar15 + (ulong)(uint)((int)((ulong)*puVar17 & 0xffffff) << 2)));
          uVar8 = (ulong)((int)uVar8 + 1);
          puVar17 = puVar17 + 4;
        } while (iVar3 != 0);
      }
    }
  }
  return uVar8;
}

