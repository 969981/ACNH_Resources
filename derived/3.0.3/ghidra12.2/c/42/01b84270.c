
uint FUN_01b84270(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  char cVar10;
  ulong uVar11;
  int *piVar12;
  
  uVar6 = (**(code **)(*param_1 + 0x20))();
  puVar5 = PTR_DAT_04bc06c8;
  puVar4 = PTR_DAT_04bc06c0;
  if (uVar6 != 0xffff) {
    lVar8 = *(long *)PTR_DAT_04bb4788;
    uVar7 = (uint)uVar6 - (uint)*(ushort *)(lVar8 + 0x5f8);
    if ((uVar7 < *(uint *)(lVar8 + 0x5d8)) &&
       (puVar9 = *(uint **)(*(long *)(lVar8 + 0x5e0) + (long)(int)uVar7 * 8), puVar9 != (uint *)0x0)
       ) {
      uVar7 = *puVar9;
      if (uVar7 == 0) {
        return 0xff;
      }
      cVar10 = *PTR_DAT_04bc06c0;
      while( true ) {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *puVar4 = 1;
          uVar7 = *puVar9;
        }
        else {
          uVar2 = *(uint *)puVar5;
          if (-1 < (int)uVar2) {
            uVar7 = 0xff;
            if ((int *)((ulong)uVar2 + (long)puVar9) != (int *)0x0) {
              uVar7 = *(int *)((ulong)uVar2 + (long)puVar9) << 8 | 0xff;
            }
            return uVar7;
          }
          if (uVar2 != 0xffffffff) {
            return 0xff;
          }
        }
        puVar3 = (uint *)(ulong)uVar7;
        if (puVar3 == (uint *)0x0) {
          return 0xff;
        }
        if (puVar9 == puVar3) break;
        lVar8 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar3)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar9 + (lVar8 - (long)puVar3);
        if (lVar8 == 0) {
          return 0xff;
        }
        uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar3));
        *(undefined4 *)puVar5 = 0xfffffffe;
        if (uVar11 == 0) {
          return 0xff;
        }
        piVar12 = (int *)(lVar8 + 4);
        while (piVar12[-1] != -0xf307f01) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            return 0xff;
          }
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)puVar5 = iVar1;
        uVar7 = *puVar9;
        if (uVar7 == 0) {
          return 0xff;
        }
      }
      return 0xff;
    }
  }
  return 0;
}

