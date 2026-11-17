
undefined2 FUN_02b48190(long param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  char cVar10;
  ulong uVar11;
  int *piVar12;
  
  iVar6 = FUN_02a6cb24(param_1 + 0x550);
  puVar4 = PTR_DAT_04bb5be8;
  puVar3 = PTR_DAT_04bb5be0;
  uVar5 = 0xffff;
  lVar8 = *(long *)PTR_DAT_04bb5008;
  uVar7 = (uint)*(ushort *)(param_1 + 0x560);
  if (iVar6 != 0) {
    uVar7 = 0xffff;
  }
  uVar7 = uVar7 - *(ushort *)(lVar8 + 0x9f0);
  if ((uVar7 < *(uint *)(lVar8 + 0x9d0)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0x9d8) + (long)(int)uVar7 * 8), puVar9 != (uint *)0x0))
  {
    uVar7 = *puVar9;
    if (uVar7 != 0) {
      cVar10 = *PTR_DAT_04bb5be0;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          uVar7 = *puVar9;
        }
        else {
          uVar1 = *(uint *)(puVar4 + 0xc);
          if (-1 < (int)uVar1) {
            if ((undefined2 *)((ulong)uVar1 + (long)puVar9) != (undefined2 *)0x0) {
              return *(undefined2 *)((ulong)uVar1 + (long)puVar9);
            }
            break;
          }
          if (uVar1 != 0xffffffff) break;
        }
        puVar2 = (uint *)(ulong)uVar7;
        if (puVar2 == (uint *)0x0) {
          return 0;
        }
        if (puVar9 == puVar2) {
          return 0;
        }
        lVar8 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar2)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar9 + (lVar8 - (long)puVar2);
        if (lVar8 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar2));
        *(undefined4 *)(puVar4 + 0xc) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar12 = (int *)(lVar8 + 4);
        while (piVar12[-1] != -0x490afe2e) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_02b482dc;
        }
        iVar6 = 0;
        if (*piVar12 != -1) {
          iVar6 = *piVar12;
        }
        *(int *)(puVar4 + 0xc) = iVar6;
        uVar7 = *puVar9;
        if (uVar7 == 0) {
          return 0;
        }
      } while( true );
    }
LAB_02b482dc:
    uVar5 = 0;
  }
  return uVar5;
}

