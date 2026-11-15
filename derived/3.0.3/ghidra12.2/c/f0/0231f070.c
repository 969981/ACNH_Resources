
/* WARNING: Type propagation algorithm not settling */

bool FUN_0231f070(undefined4 param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  uint *puVar6;
  ulong uVar7;
  char cVar8;
  uint *puVar9;
  int *piVar10;
  
  if ((param_2 & 1) != 0) {
    return true;
  }
  if (((DAT_054f0b68 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_054f0b68,param_1), iVar5 != 0))
  {
    DAT_054f0b60 = 0;
    __cxa_guard_release(&DAT_054f0b68,param_1);
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    puVar6 = &DAT_054f0b60;
    pcVar3 = PTR_DAT_04bc2fe0;
    puVar4 = (undefined8 *)PTR_DAT_04bc2fe8;
    uVar2 = DAT_054f0b60;
  }
  else {
    lVar1 = *(long *)PTR_DAT_04bb4718 + 0x20;
    puVar6 = (uint *)FUN_0250f090(lVar1,param_1);
    if (puVar6 == (uint *)0x0) {
      puVar9 = (uint *)FUN_0250f090(lVar1,0);
      puVar6 = &DAT_054f0b60;
      if (puVar9 != (uint *)0x0) {
        puVar6 = puVar9;
      }
      pcVar3 = PTR_DAT_04bc2fe0;
      puVar4 = (undefined8 *)PTR_DAT_04bc2fe8;
      uVar2 = *puVar6;
    }
    else {
      uVar2 = *puVar6;
      pcVar3 = PTR_DAT_04bc2fe0;
      puVar4 = (undefined8 *)PTR_DAT_04bc2fe8;
    }
  }
  if (uVar2 == 0) {
    PTR_DAT_04bc2fe8 = (undefined *)puVar4;
    PTR_DAT_04bc2fe0 = pcVar3;
    return true;
  }
  cVar8 = *pcVar3;
  PTR_DAT_04bc2fe0 = pcVar3;
  PTR_DAT_04bc2fe8 = (undefined *)puVar4;
  while( true ) {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *puVar4 = 0xffffffffffffffff;
      puVar4[1] = 0xffffffffffffffff;
      *pcVar3 = '\x01';
      puVar4[0x14] = 0xffffffffffffffff;
      puVar4[2] = 0xffffffffffffffff;
      puVar4[3] = 0xffffffffffffffff;
      puVar4[4] = 0xffffffffffffffff;
      puVar4[5] = 0xffffffffffffffff;
      puVar4[6] = 0xffffffffffffffff;
      puVar4[7] = 0xffffffffffffffff;
      puVar4[8] = 0xffffffffffffffff;
      puVar4[9] = 0xffffffffffffffff;
      puVar4[10] = 0xffffffffffffffff;
      puVar4[0xb] = 0xffffffffffffffff;
      puVar4[0xc] = 0xffffffffffffffff;
      puVar4[0xd] = 0xffffffffffffffff;
      puVar4[0xe] = 0xffffffffffffffff;
      puVar4[0xf] = 0xffffffffffffffff;
      puVar4[0x10] = 0xffffffffffffffff;
      puVar4[0x11] = 0xffffffffffffffff;
      puVar4[0x12] = 0xffffffffffffffff;
      puVar4[0x13] = 0xffffffffffffffff;
    }
    else {
      uVar2 = *(uint *)(puVar4 + 4);
      if (-1 < (int)uVar2) {
        if ((char *)((ulong)uVar2 + (long)puVar6) == (char *)0x0) {
          return true;
        }
        return *(char *)((ulong)uVar2 + (long)puVar6) != '\0';
      }
      if (uVar2 != 0xffffffff) {
        return true;
      }
    }
    puVar9 = (uint *)(ulong)*puVar6;
    if (*puVar6 == 0) {
      return true;
    }
    if (puVar6 == puVar9) break;
    lVar1 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar6 + (lVar1 - (long)puVar9);
    if (lVar1 == 0) {
      return true;
    }
    uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
    *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
    if (uVar7 == 0) {
      return true;
    }
    piVar10 = (int *)(lVar1 + 4);
    while (piVar10[-1] != -0x59cdb2cc) {
      piVar10 = piVar10 + 2;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return true;
      }
    }
    iVar5 = 0;
    if (*piVar10 != -1) {
      iVar5 = *piVar10;
    }
    *(int *)(puVar4 + 4) = iVar5;
    if (*puVar6 == 0) {
      return true;
    }
  }
  return true;
}

