
undefined8 FUN_0343d7f0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulong uVar8;
  int *piVar9;
  char cVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4();
  lVar11 = *(long *)puVar3;
  if (lVar11 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_68 = 0;
      local_70 = *param_1;
      uStack_6c = param_1[1];
      uVar5 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar3 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(param_1);
          puVar4 = PTR_DAT_04bbfe90;
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
             ((puVar15 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8),
              puVar15 != (uint *)0x0 && (uVar5 = *puVar15, uVar5 != 0)))) {
            cVar10 = *PTR_DAT_04bbfe88;
            do {
              if (cVar10 == '\0') {
                cVar10 = '\x01';
                *PTR_DAT_04bbfe88 = 1;
                memset(puVar4,0xff,0x1ac);
                uVar5 = *puVar15;
              }
              else {
                uVar12 = *(uint *)(puVar4 + 0x24);
                if (-1 < (int)uVar12) {
                  if ((uint *)((ulong)uVar12 + (long)puVar15) == (uint *)0x0) break;
                  uVar5 = *(uint *)((ulong)uVar12 + (long)puVar15);
                  uVar12 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
                  uVar14 = ~uVar5 >> 0x1f;
                  goto LAB_0343dbc8;
                }
                if (uVar12 != 0xffffffff) break;
              }
              puVar7 = (uint *)(ulong)uVar5;
              uVar12 = 0;
              if (puVar7 == (uint *)0x0) {
                uVar14 = 0;
                goto LAB_0343dbc8;
              }
              uVar14 = 0;
              if (puVar15 == puVar7) goto LAB_0343dbc8;
              lVar11 = 0xc;
              if (*(char *)((long)puVar15 + (10 - (long)puVar7)) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar15 + (lVar11 - (long)puVar7);
              if (lVar11 == 0) break;
              uVar8 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar7));
              *(undefined4 *)(puVar4 + 0x24) = 0xfffffffe;
              if (uVar8 == 0) break;
              piVar9 = (int *)(lVar11 + 4);
              while (piVar9[-1] != -0x650d6d06) {
                uVar12 = 0;
                uVar14 = 0;
                piVar9 = piVar9 + 2;
                uVar8 = uVar8 - 1;
                if (uVar8 == 0) goto LAB_0343dbc8;
              }
              uVar12 = 0;
              uVar14 = 0;
              iVar2 = 0;
              if (*piVar9 != -1) {
                iVar2 = *piVar9;
              }
              *(int *)(puVar4 + 0x24) = iVar2;
              uVar5 = *puVar15;
              if (uVar5 == 0) goto LAB_0343dbc8;
            } while( true );
          }
        }
      }
      uVar12 = 0;
      uVar14 = 0;
LAB_0343dbc8:
      lVar11 = *(long *)puVar3;
      goto LAB_0343d9f4;
    }
  }
  uVar12 = 0;
  uVar14 = 0;
LAB_0343d9f4:
  uVar5 = FUN_0277d6c4(param_2);
  lVar13 = *(long *)puVar3;
  if (lVar13 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_68 = 0;
      local_70 = *param_2;
      uStack_6c = param_2[1];
      uVar5 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar3 != 0) {
        lVar11 = *(long *)(lVar13 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(param_2);
          puVar4 = PTR_DAT_04bbfe90;
          puVar3 = PTR_DAT_04bbfe88;
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
             ((puVar15 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8),
              puVar15 != (uint *)0x0 && (uVar5 = *puVar15, uVar5 != 0)))) {
            cVar10 = *PTR_DAT_04bbfe88;
            do {
              if (cVar10 == '\0') {
                cVar10 = '\x01';
                *puVar3 = 1;
                memset(puVar4,0xff,0x1ac);
                uVar5 = *puVar15;
              }
              else {
                uVar1 = *(uint *)(puVar4 + 0x24);
                if (-1 < (int)uVar1) {
                  if (((int *)((ulong)uVar1 + (long)puVar15) != (int *)0x0) &&
                     (iVar2 = *(int *)((ulong)uVar1 + (long)puVar15), -1 < iVar2)) {
                    uVar5 = 0;
                    if ((int)uVar12 <= iVar2) {
                      uVar5 = uVar14;
                    }
                    if (uVar5 == 0) {
                      return 1;
                    }
                    if (iVar2 <= (int)uVar12) goto LAB_0343dbf4;
                    goto LAB_0343dc00;
                  }
                  break;
                }
                if (uVar1 != 0xffffffff) break;
              }
              puVar7 = (uint *)(ulong)uVar5;
              if ((puVar7 == (uint *)0x0) || (puVar15 == puVar7)) break;
              lVar11 = 0xc;
              if (*(char *)((long)puVar15 + (10 - (long)puVar7)) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar15 + (lVar11 - (long)puVar7);
              if (lVar11 == 0) break;
              uVar8 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar7));
              *(undefined4 *)(puVar4 + 0x24) = 0xfffffffe;
              if (uVar8 == 0) break;
              piVar9 = (int *)(lVar11 + 4);
              while (piVar9[-1] != -0x650d6d06) {
                piVar9 = piVar9 + 2;
                uVar8 = uVar8 - 1;
                if (uVar8 == 0) goto LAB_0343dbfc;
              }
              iVar2 = 0;
              if (*piVar9 != -1) {
                iVar2 = *piVar9;
              }
              *(int *)(puVar4 + 0x24) = iVar2;
              uVar5 = *puVar15;
              if (uVar5 == 0) break;
            } while( true );
          }
        }
      }
    }
  }
LAB_0343dbfc:
  if (uVar14 == 0) {
LAB_0343dbf4:
    uVar6 = 0;
  }
  else {
LAB_0343dc00:
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

