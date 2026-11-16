
undefined2 FUN_02745680(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  char cVar8;
  uint *puVar9;
  int *piVar10;
  undefined4 local_24;
  
  lVar6 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_1 + 0x18))();
  local_24 = FUN_006bd550(param_1[1],0);
  puVar5 = (uint *)FUN_027457e0(lVar6 + 0xca0,&local_24);
  puVar4 = PTR_DAT_04bb63a8;
  puVar3 = PTR_DAT_04bb63a0;
  if ((puVar5 == (uint *)0x0) || (*puVar5 == 0)) {
    return 0;
  }
  cVar8 = *PTR_DAT_04bb63a0;
  while( true ) {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    }
    else {
      uVar2 = *(uint *)(puVar4 + 4);
      if (-1 < (int)uVar2) {
        if ((undefined2 *)((ulong)uVar2 + (long)puVar5) == (undefined2 *)0x0) {
          return 0;
        }
        return *(undefined2 *)((ulong)uVar2 + (long)puVar5);
      }
      if (uVar2 != 0xffffffff) {
        return 0;
      }
    }
    puVar9 = (uint *)(ulong)*puVar5;
    if (*puVar5 == 0) {
      return 0;
    }
    if (puVar5 == puVar9) break;
    lVar6 = 0xc;
    if (*(char *)((long)puVar5 + (10 - (long)puVar9)) != '\0') {
      lVar6 = 0x1c;
    }
    lVar6 = (long)puVar5 + (lVar6 - (long)puVar9);
    if (lVar6 == 0) {
      return 0;
    }
    uVar7 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar9));
    *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
    if (uVar7 == 0) {
      return 0;
    }
    piVar10 = (int *)(lVar6 + 4);
    while (piVar10[-1] != 0x110b14c) {
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
    *(int *)(puVar4 + 4) = iVar1;
    if (*puVar5 == 0) {
      return 0;
    }
  }
  return 0;
}

