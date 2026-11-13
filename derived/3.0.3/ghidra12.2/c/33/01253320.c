
bool FUN_01253320(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint *puVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  uint *local_28;
  
  lVar10 = *(long *)PTR_DAT_04bbbc68;
  if (lVar10 == 0) {
    return false;
  }
  if (*(long *)(lVar10 + 0xb0) == 0) {
    return false;
  }
  if (*(long *)(*(long *)(lVar10 + 0xb0) + 8) == 0) {
    return false;
  }
  if (*(long *)(lVar10 + 0x488) == 0) {
    return false;
  }
  if (*(long *)(*(long *)(lVar10 + 0x488) + 8) == 0) {
    return false;
  }
  if (*(long *)(lVar10 + 0x2b0) == 0) {
    return false;
  }
  if (*(long *)(*(long *)(lVar10 + 0x2b0) + 8) == 0) {
    return false;
  }
  uVar4 = FUN_0277d6c4();
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar4) {
    return false;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return false;
  }
  FUN_0124c030(auStack_38,param_1);
  iVar5 = FUN_0123db50(auStack_30,local_28);
  puVar3 = PTR_DAT_04bbbc78;
  puVar2 = PTR_DAT_04bbbc70;
  if (iVar5 - 0x23U < 9) {
    if (local_28 == (uint *)0x0) {
      return false;
    }
    if (*local_28 == 0) {
      return false;
    }
    cVar6 = *PTR_DAT_04bbbc70;
    do {
      if (cVar6 == '\0') {
        cVar6 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined4 *)(puVar3 + 0x60) = 0xffffffff;
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
      }
      else {
        uVar4 = *(uint *)(puVar3 + 0x4c);
        if (-1 < (int)uVar4) {
LAB_01253718:
          pcVar1 = (char *)((ulong)uVar4 + (long)local_28);
joined_r0x01253730:
          if (pcVar1 == (char *)0x0) {
            return false;
          }
          return *pcVar1 == '\x03';
        }
        if (uVar4 != 0xffffffff) {
          return false;
        }
      }
      puVar7 = (uint *)(ulong)*local_28;
      if (*local_28 == 0) {
        return false;
      }
      if (local_28 == puVar7) {
        return false;
      }
      lVar10 = 0xc;
      if (*(char *)((long)local_28 + (10 - (long)puVar7)) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)local_28 + (lVar10 - (long)puVar7);
      if (lVar10 == 0) {
        return false;
      }
      uVar8 = (ulong)*(ushort *)((long)local_28 + (8 - (long)puVar7));
      *(undefined4 *)(puVar3 + 0x4c) = 0xfffffffe;
      if (uVar8 == 0) {
        return false;
      }
      piVar9 = (int *)(lVar10 + 4);
      while (piVar9[-1] != -0xa58ccc9) {
        piVar9 = piVar9 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          return false;
        }
      }
      iVar5 = 0;
      if (*piVar9 != -1) {
        iVar5 = *piVar9;
      }
      *(int *)(puVar3 + 0x4c) = iVar5;
      if (*local_28 == 0) {
        return false;
      }
    } while( true );
  }
  iVar5 = FUN_0123db50(auStack_30);
  puVar3 = PTR_DAT_04bbbc78;
  puVar2 = PTR_DAT_04bbbc70;
  if (6 < iVar5 - 0xbU) {
    iVar5 = FUN_0123db50(auStack_30);
    puVar3 = PTR_DAT_04bbbc78;
    puVar2 = PTR_DAT_04bbbc70;
    if (5 < iVar5 - 0x12U) {
      if ((((*(byte *)(param_1 + 6) & 0x18) == 0) &&
          (uVar8 = FUN_0123b020(param_1,0,0,0), (uVar8 & 1) != 0)) ||
         (iVar5 = FUN_0277d6c4(auStack_30), iVar5 == 0xec9a)) {
        return true;
      }
      iVar5 = FUN_0277d6c4(auStack_30);
      return iVar5 == 0xec97;
    }
    if (local_28 == (uint *)0x0) {
      return false;
    }
    if (*local_28 == 0) {
      return false;
    }
    cVar6 = *PTR_DAT_04bbbc70;
    do {
      if (cVar6 == '\0') {
        cVar6 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined4 *)(puVar3 + 0x60) = 0xffffffff;
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
      }
      else {
        uVar4 = *(uint *)(puVar3 + 0x4c);
        if (-1 < (int)uVar4) {
          pcVar1 = (char *)((ulong)uVar4 + (long)local_28);
          goto joined_r0x01253730;
        }
        if (uVar4 != 0xffffffff) {
          return false;
        }
      }
      puVar7 = (uint *)(ulong)*local_28;
      if (*local_28 == 0) {
        return false;
      }
      if (local_28 == puVar7) {
        return false;
      }
      lVar10 = 0xc;
      if (*(char *)((long)local_28 + (10 - (long)puVar7)) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)local_28 + (lVar10 - (long)puVar7);
      if (lVar10 == 0) {
        return false;
      }
      uVar8 = (ulong)*(ushort *)((long)local_28 + (8 - (long)puVar7));
      *(undefined4 *)(puVar3 + 0x4c) = 0xfffffffe;
      if (uVar8 == 0) {
        return false;
      }
      piVar9 = (int *)(lVar10 + 4);
      while (piVar9[-1] != -0xa58ccc9) {
        piVar9 = piVar9 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          return false;
        }
      }
      iVar5 = 0;
      if (*piVar9 != -1) {
        iVar5 = *piVar9;
      }
      *(int *)(puVar3 + 0x4c) = iVar5;
      if (*local_28 == 0) {
        return false;
      }
    } while( true );
  }
  if (local_28 == (uint *)0x0) {
    return false;
  }
  if (*local_28 == 0) {
    return false;
  }
  cVar6 = *PTR_DAT_04bbbc70;
  do {
    if (cVar6 == '\0') {
      cVar6 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined4 *)(puVar3 + 0x60) = 0xffffffff;
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
    }
    else {
      uVar4 = *(uint *)(puVar3 + 0x4c);
      if (-1 < (int)uVar4) goto LAB_01253718;
      if (uVar4 != 0xffffffff) {
        return false;
      }
    }
    puVar7 = (uint *)(ulong)*local_28;
    if (*local_28 == 0) {
      return false;
    }
    if (local_28 == puVar7) {
      return false;
    }
    lVar10 = 0xc;
    if (*(char *)((long)local_28 + (10 - (long)puVar7)) != '\0') {
      lVar10 = 0x1c;
    }
    lVar10 = (long)local_28 + (lVar10 - (long)puVar7);
    if (lVar10 == 0) {
      return false;
    }
    uVar8 = (ulong)*(ushort *)((long)local_28 + (8 - (long)puVar7));
    *(undefined4 *)(puVar3 + 0x4c) = 0xfffffffe;
    if (uVar8 == 0) {
      return false;
    }
    piVar9 = (int *)(lVar10 + 4);
    while (piVar9[-1] != -0xa58ccc9) {
      piVar9 = piVar9 + 2;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) {
        return false;
      }
    }
    iVar5 = 0;
    if (*piVar9 != -1) {
      iVar5 = *piVar9;
    }
    *(int *)(puVar3 + 0x4c) = iVar5;
    if (*local_28 == 0) {
      return false;
    }
  } while( true );
}

