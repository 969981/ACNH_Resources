
bool FUN_01a4b340(long param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  undefined *puVar5;
  undefined *__s;
  uint uVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  char cVar18;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint *local_68;
  
  puVar5 = PTR_DAT_04bb43c0;
  if (param_1 == 0) {
    return false;
  }
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(param_2);
  lVar15 = *(long *)puVar5;
  if (lVar15 == 0) {
    return false;
  }
  lVar16 = *(long *)(lVar16 + 0x57e58);
  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
  if (*(uint *)(lVar16 + 0x1d8) <= uVar9) {
    return false;
  }
  if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) == 0) {
    return false;
  }
  local_68 = (uint *)0x0;
  local_70 = *param_2;
  uStack_6c = param_2[1];
  local_78 = PTR_DAT_04bc0510 + 0x10;
  uVar9 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar5 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(param_2);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if (uVar9 < *(uint *)(lVar15 + 0x1d8)) {
        puVar17 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8);
        if (puVar17 != (uint *)0x0) {
          local_68 = puVar17;
        }
        goto LAB_01a4b45c;
      }
    }
  }
  puVar17 = (uint *)0x0;
LAB_01a4b45c:
  bVar7 = FUN_01ad7260(&local_78);
  __s = PTR_DAT_04bbfe90;
  puVar5 = PTR_DAT_04bbfe88;
  if (bVar7 == 0) {
    return false;
  }
  if (puVar17 == (uint *)0x0) {
    return false;
  }
  uVar9 = *puVar17;
  if (uVar9 == 0) {
    return false;
  }
  cVar18 = *PTR_DAT_04bbfe88;
  do {
    if (cVar18 == '\0') {
      cVar18 = '\x01';
      *puVar5 = 1;
      memset(__s,0xff,0x1ac);
      uVar9 = *puVar17;
    }
    else {
      uVar3 = *(uint *)(__s + 0x120);
      if (-1 < (int)uVar3) {
        if ((short *)((ulong)uVar3 + (long)puVar17) == (short *)0x0) {
          return false;
        }
        sVar4 = *(short *)((ulong)uVar3 + (long)puVar17);
        if ((int)sVar4 == 0xffffffff) {
          return false;
        }
        if ((*(long **)(param_1 + 0x28) == (long *)0x0) ||
           (puVar10 = (undefined8 *)**(long **)(param_1 + 0x28), puVar10 == (undefined8 *)0x0)) {
          uVar9 = 1;
        }
        else {
          uVar9 = (**(code **)*puVar10)();
          uVar9 = uVar9 ^ 1;
        }
        if (((uint)(int)sVar4 >> 4 & 0x1ffffff) < 0x7d) {
          lVar15 = *(long *)(param_1 + 0x10) + *(long *)(param_1 + 8);
          uVar3 = sVar4 * 8;
          if ((*(uint *)(lVar15 + (ulong)(((int)sVar4 & 0x1fffffffU) >> 2) * 4) >>
               (ulong)(uVar3 & 0x18) & 1) != 0) {
            uVar6 = 1;
            break;
          }
        }
        bVar8 = true;
        goto LAB_01a4b620;
      }
      if (uVar3 != 0xffffffff) {
        return false;
      }
    }
    puVar11 = (uint *)(ulong)uVar9;
    if (puVar11 == (uint *)0x0) {
      return false;
    }
    if (puVar17 == puVar11) {
      return false;
    }
    lVar15 = 0xc;
    if (*(char *)((long)puVar17 + (10 - (long)puVar11)) != '\0') {
      lVar15 = 0x1c;
    }
    lVar15 = (long)puVar17 + (lVar15 - (long)puVar11);
    if (lVar15 == 0) {
      return false;
    }
    uVar12 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar11));
    *(undefined4 *)(__s + 0x120) = 0xfffffffe;
    if (uVar12 == 0) {
      return false;
    }
    piVar13 = (int *)(lVar15 + 4);
    while (piVar13[-1] != -0x34a14cc1) {
      piVar13 = piVar13 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) {
        return false;
      }
    }
    iVar2 = 0;
    if (*piVar13 != -1) {
      iVar2 = *piVar13;
    }
    *(int *)(__s + 0x120) = iVar2;
    uVar9 = *puVar17;
    if (uVar9 == 0) {
      return false;
    }
  } while( true );
  while (uVar6 = uVar14 + 1,
        (*(uint *)(lVar15 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) {
    uVar14 = uVar6;
    if ((bVar7 == uVar14) || (uVar1 = uVar3 + (uVar14 & 0xff), 0x7c < uVar1 >> 7)) break;
  }
  bVar8 = uVar14 < bVar7;
LAB_01a4b620:
  if ((uVar9 & 1) != 0) {
    return bVar8;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return bVar8;
  }
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 8);
  if (puVar10 == (undefined8 *)0x0) {
    return bVar8;
  }
  (**(code **)*puVar10)(puVar10);
  return bVar8;
}

