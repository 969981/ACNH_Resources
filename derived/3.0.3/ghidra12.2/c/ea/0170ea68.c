
undefined2 FUN_0170ea68(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined *__s;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  uint *puVar13;
  char cVar14;
  long lVar15;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined8 local_68;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  
  lVar9 = (**(code **)(*param_1 + 0x3e0))();
  puVar7 = PTR_DAT_04bb43c0;
  if (lVar9 != 0) {
    lVar9 = lVar9 + ((ulong)*(uint *)(lVar9 + 0x10) & 1) * 0x20;
    uVar6 = *(undefined2 *)(lVar9 + 0x14);
    uVar4 = *(undefined1 *)(lVar9 + 0x16);
    uVar5 = *(undefined1 *)(lVar9 + 0x17);
    uVar2 = *(undefined4 *)(lVar9 + 0x18);
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    local_48 = uVar6;
    local_46 = uVar4;
    local_45 = uVar5;
    local_44 = uVar2;
    uVar8 = FUN_0277d6c4(&local_48);
    lVar9 = *(long *)puVar7;
    if (lVar9 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        local_68 = 0;
        local_70 = uVar6;
        local_6e = uVar4;
        local_6d = uVar5;
        local_6c = uVar2;
        uVar8 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar7 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar9 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            lVar9 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(&local_48);
            __s = PTR_DAT_04bbfe90;
            puVar7 = PTR_DAT_04bbfe88;
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((uVar8 < *(uint *)(lVar9 + 0x1d8)) &&
               ((puVar13 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar8 * 8),
                puVar13 != (uint *)0x0 && (uVar8 = *puVar13, uVar8 != 0)))) {
              cVar14 = *PTR_DAT_04bbfe88;
              while( true ) {
                if (cVar14 == '\0') {
                  cVar14 = '\x01';
                  *puVar7 = 1;
                  memset(__s,0xff,0x1ac);
                  uVar8 = *puVar13;
                }
                else {
                  uVar3 = *(uint *)(__s + 0x118);
                  if (-1 < (int)uVar3) {
                    if ((undefined2 *)((ulong)uVar3 + (long)puVar13) == (undefined2 *)0x0) {
                      return 0;
                    }
                    return *(undefined2 *)((ulong)uVar3 + (long)puVar13);
                  }
                  if (uVar3 != 0xffffffff) {
                    return 0;
                  }
                }
                puVar10 = (uint *)(ulong)uVar8;
                if (puVar10 == (uint *)0x0) {
                  return 0;
                }
                if (puVar13 == puVar10) break;
                lVar9 = 0xc;
                if (*(char *)((long)puVar13 + (10 - (long)puVar10)) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar13 + (lVar9 - (long)puVar10);
                if (lVar9 == 0) {
                  return 0;
                }
                uVar11 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar10));
                *(undefined4 *)(__s + 0x118) = 0xfffffffe;
                if (uVar11 == 0) {
                  return 0;
                }
                piVar12 = (int *)(lVar9 + 4);
                while (piVar12[-1] != -0x613cb12c) {
                  piVar12 = piVar12 + 2;
                  uVar11 = uVar11 - 1;
                  if (uVar11 == 0) {
                    return 0;
                  }
                }
                iVar1 = 0;
                if (*piVar12 != -1) {
                  iVar1 = *piVar12;
                }
                *(int *)(__s + 0x118) = iVar1;
                uVar8 = *puVar13;
                if (uVar8 == 0) {
                  return 0;
                }
              }
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}

