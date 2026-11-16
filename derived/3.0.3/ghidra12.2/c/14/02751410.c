
undefined2 FUN_02751410(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  char cVar10;
  int *piVar11;
  undefined4 local_24;
  
  lVar8 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_1 + 0x18))();
  local_24 = FUN_006bd550(param_1[1],0);
  puVar7 = (uint *)FUN_027521e0(lVar8 + 0x1740,&local_24);
  puVar6 = PTR_DAT_04bb6408;
  puVar5 = PTR_DAT_04bb6400;
  if ((puVar7 == (uint *)0x0) || (uVar2 = *puVar7, uVar2 == 0)) {
    return 0;
  }
  cVar10 = *PTR_DAT_04bb6400;
  while( true ) {
    if (cVar10 == '\0') {
      cVar10 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      uVar2 = *puVar7;
    }
    else {
      uVar3 = *(uint *)puVar6;
      if (-1 < (int)uVar3) {
        if ((undefined2 *)((ulong)uVar3 + (long)puVar7) == (undefined2 *)0x0) {
          return 0;
        }
        return *(undefined2 *)((ulong)uVar3 + (long)puVar7);
      }
      if (uVar3 != 0xffffffff) {
        return 0;
      }
    }
    puVar4 = (uint *)(ulong)uVar2;
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
    if (puVar7 == puVar4) break;
    lVar8 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar4)) != '\0') {
      lVar8 = 0x1c;
    }
    lVar8 = (long)puVar7 + (lVar8 - (long)puVar4);
    if (lVar8 == 0) {
      return 0;
    }
    uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar4));
    *(undefined4 *)puVar6 = 0xfffffffe;
    if (uVar9 == 0) {
      return 0;
    }
    piVar11 = (int *)(lVar8 + 4);
    while (piVar11[-1] != 0x110b14c) {
      piVar11 = piVar11 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar11 != -1) {
      iVar1 = *piVar11;
    }
    *(int *)puVar6 = iVar1;
    uVar2 = *puVar7;
    if (uVar2 == 0) {
      return 0;
    }
  }
  return 0;
}

