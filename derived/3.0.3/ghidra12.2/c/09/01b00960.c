
uint FUN_01b00960(undefined4 *param_1)

{
  short sVar1;
  undefined *puVar2;
  undefined *__s;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  char cVar12;
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint *local_68;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    return 0xffffffff;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar3) {
    return 0xffffffff;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 0xffffffff;
  }
  local_68 = (uint *)0x0;
  local_78 = &PTR_FUN_04a36b50;
  local_70 = *param_1;
  uStack_6c = param_1[1];
  uVar3 = FUN_0277d6c4(&local_70);
  lVar10 = DAT_0532a768;
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      uVar3 = FUN_0277d6c4(param_1);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if (uVar3 < *(uint *)(lVar10 + 0x1d8)) {
        puVar11 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8);
        if (puVar11 != (uint *)0x0) {
          local_68 = puVar11;
        }
        goto LAB_01b00a68;
      }
    }
  }
  puVar11 = (uint *)0x0;
LAB_01b00a68:
  iVar4 = FUN_01ad7260(&local_78);
  __s = PTR_DAT_04bbfe90;
  puVar2 = PTR_DAT_04bbfe88;
  if (iVar4 == 0) {
    return 0xffffffff;
  }
  if (puVar11 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (*puVar11 == 0) {
    return 0xffffffff;
  }
  cVar12 = *PTR_DAT_04bbfe88;
  while( true ) {
    if (cVar12 == '\0') {
      cVar12 = '\x01';
      *puVar2 = 1;
      memset(__s,0xff,0x1ac);
    }
    else {
      uVar3 = *(uint *)(__s + 0x120);
      if (-1 < (int)uVar3) {
        if ((short *)((ulong)uVar3 + (long)puVar11) == (short *)0x0) {
          return 0xffffffff;
        }
        sVar1 = *(short *)((ulong)uVar3 + (long)puVar11);
        if (sVar1 == -1) {
          return (int)sVar1;
        }
        iVar4 = FUN_01ad7260(&local_78);
        if ((iVar4 == 0) || (puVar6 = (ushort *)FUN_01afd600(&local_78), puVar6 == (ushort *)0x0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = *puVar6 & 7;
          uVar5 = FUN_01ad7260(&local_78);
          if (uVar5 <= uVar3) {
            uVar3 = 0;
          }
        }
        return uVar3 | (int)sVar1 << 3;
      }
      if (uVar3 != 0xffffffff) {
        return 0xffffffff;
      }
    }
    lVar9 = (long)puVar11 - (ulong)*puVar11;
    if (*puVar11 == 0) {
      return 0xffffffff;
    }
    if (lVar9 == 0) break;
    lVar10 = 0xc;
    if (*(char *)(lVar9 + 10) != '\0') {
      lVar10 = 0x1c;
    }
    if (lVar10 + lVar9 == 0) {
      return 0xffffffff;
    }
    uVar7 = (ulong)*(ushort *)(lVar9 + 8);
    *(undefined4 *)(__s + 0x120) = 0xfffffffe;
    if (uVar7 == 0) {
      return 0xffffffff;
    }
    piVar8 = (int *)(lVar10 + lVar9 + 4);
    while (piVar8[-1] != -0x34a14cc1) {
      piVar8 = piVar8 + 2;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return 0xffffffff;
      }
    }
    iVar4 = 0;
    if (*piVar8 != -1) {
      iVar4 = *piVar8;
    }
    *(int *)(__s + 0x120) = iVar4;
    if (*puVar11 == 0) {
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

