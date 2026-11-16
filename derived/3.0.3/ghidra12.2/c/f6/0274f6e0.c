
undefined4 FUN_0274f6e0(long *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  ulong uVar7;
  char cVar8;
  uint *puVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined4 local_24;
  
  uVar11 = *(undefined8 *)PTR_DAT_04bb2208;
  (**(code **)(*param_1 + 0x18))();
  local_24 = FUN_006bd550(param_1[1],0);
  puVar6 = (uint *)FUN_00d654a0(uVar11,&local_24);
  puVar5 = PTR_DAT_04bb6348;
  puVar4 = PTR_DAT_04bb6340;
  if ((puVar6 == (uint *)0x0) || (*puVar6 == 0)) {
    return 0;
  }
  cVar8 = *PTR_DAT_04bb6340;
  while( true ) {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
    }
    else {
      uVar3 = *(uint *)(puVar5 + 4);
      if (-1 < (int)uVar3) {
        if ((undefined4 *)((ulong)uVar3 + (long)puVar6) == (undefined4 *)0x0) {
          return 0;
        }
        return *(undefined4 *)((ulong)uVar3 + (long)puVar6);
      }
      if (uVar3 != 0xffffffff) {
        return 0;
      }
    }
    puVar9 = (uint *)(ulong)*puVar6;
    if (*puVar6 == 0) {
      return 0;
    }
    if (puVar6 == puVar9) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
    if (lVar2 == 0) {
      return 0;
    }
    uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
    *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
    if (uVar7 == 0) {
      return 0;
    }
    piVar10 = (int *)(lVar2 + 4);
    while (piVar10[-1] != 0x344b17d7) {
      piVar10 = piVar10 + 2;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar10 != -1) {
      iVar1 = *piVar10;
    }
    *(int *)(puVar5 + 4) = iVar1;
    if (*puVar6 == 0) {
      return 0;
    }
  }
  return 0;
}

