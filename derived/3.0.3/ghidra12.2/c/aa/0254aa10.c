
bool FUN_0254aa10(byte *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  char cVar10;
  uint *puVar11;
  int *piVar12;
  long *plVar13;
  uint uVar14;
  
  puVar2 = PTR_DAT_04bb27c0;
  puVar7 = (uint *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar7 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return false;
  }
  uVar14 = *puVar7;
  if ((((uVar14 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar14)) {
    plVar13 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar14 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_0254ab00;
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0254ab00:
    uVar14 = 0;
  }
  if (plVar13 == (long *)0x0) {
    return false;
  }
  lVar8 = plVar13[0x2a];
  uVar1 = *(uint *)(plVar13 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar5 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb3770);
  if ((int)lVar8 != 1) {
    return false;
  }
  if ((uVar5 & uVar14) == 0) {
    return false;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return false;
  }
  uVar9 = plVar13[0xe];
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x3ee08254) {
    if (uVar9 == 0) goto LAB_0254abb8;
    if (*(int *)(uVar9 + 0x280) == 0x41) {
      return false;
    }
  }
  else if (uVar9 == 0) goto LAB_0254abb8;
  uVar14 = 0;
  if (*(uint *)(uVar9 + 0x280) < 0x149) {
    uVar14 = *(uint *)(uVar9 + 0x280);
  }
  uVar9 = (ulong)uVar14;
LAB_0254abb8:
  puVar7 = (uint *)FUN_0251d928(uVar9 & 0xffffffff);
  puVar3 = PTR_DAT_04bc2fe8;
  puVar2 = PTR_DAT_04bc2fe0;
  if (*puVar7 == 0) {
    return false;
  }
  cVar10 = *PTR_DAT_04bc2fe0;
  while( true ) {
    if (cVar10 == '\0') {
      cVar10 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined8 *)(puVar3 + 0xa0) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
    }
    else {
      uVar14 = *(uint *)(puVar3 + 0x28);
      if (-1 < (int)uVar14) {
        if ((char *)((ulong)uVar14 + (long)puVar7) == (char *)0x0) {
          return false;
        }
        return *(char *)((ulong)uVar14 + (long)puVar7) != '\0';
      }
      if (uVar14 != 0xffffffff) {
        return false;
      }
    }
    puVar11 = (uint *)(ulong)*puVar7;
    if (*puVar7 == 0) {
      return false;
    }
    if (puVar7 == puVar11) break;
    lVar8 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
      lVar8 = 0x1c;
    }
    lVar8 = (long)puVar7 + (lVar8 - (long)puVar11);
    if (lVar8 == 0) {
      return false;
    }
    uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
    *(undefined4 *)(puVar3 + 0x28) = 0xfffffffe;
    if (uVar9 == 0) {
      return false;
    }
    piVar12 = (int *)(lVar8 + 4);
    while (piVar12[-1] != -0x7cc1d6be) {
      piVar12 = piVar12 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return false;
      }
    }
    iVar4 = 0;
    if (*piVar12 != -1) {
      iVar4 = *piVar12;
    }
    *(int *)(puVar3 + 0x28) = iVar4;
    if (*puVar7 == 0) {
      return false;
    }
  }
  return false;
}

