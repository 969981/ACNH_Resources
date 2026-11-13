
/* WARNING: Removing unreachable block (ram,0x012e0814) */
/* WARNING: Removing unreachable block (ram,0x012e0804) */
/* WARNING: Removing unreachable block (ram,0x012e0820) */
/* WARNING: Removing unreachable block (ram,0x012e090c) */

void FUN_012e07c0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  char cVar12;
  char cVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  int iVar17;
  ushort local_86 [7];
  undefined *local_78;
  int local_70;
  int iStack_6c;
  undefined4 local_64;
  
  puVar8 = PTR_DAT_04bbbde0;
  puVar6 = PTR_DAT_04bb27a8;
  if ((((*(byte *)(param_1 + 8) >> 1 & 1) == 0) &&
      (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0)) &&
     (lVar16 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xa8), lVar16 != 0)) {
    iVar9 = *(int *)(param_1 + 0xc);
    if (0 < iVar9) {
      iVar17 = 0;
      puVar2 = PTR_DAT_04bb2018 + 0x10;
      iVar1 = (*(int *)(lVar16 + 0x28) - *(int *)(lVar16 + 0x18)) + 1;
      do {
        local_70 = *(int *)(param_1 + 0x10) + iVar17;
        iStack_6c = 0;
        if (iVar1 != 0) {
          iStack_6c = local_70 / iVar1;
        }
        local_70 = local_70 - iStack_6c * iVar1;
        if (((*(int *)(lVar16 + 0x18) <= local_70 && local_70 <= *(int *)(lVar16 + 0x28)) &&
            (*(int *)(lVar16 + 0x1c) <= iStack_6c)) && (iStack_6c <= *(int *)(lVar16 + 0x2c))) {
          local_78 = puVar2;
          FUN_01309ec4(local_86,lVar16,&local_78);
          local_64 = 0;
          cVar13 = '\0';
          lVar10 = *(long *)puVar6;
          uVar4 = (uint)local_86[0] - (uint)*(ushort *)(lVar10 + 0x408);
          if (uVar4 < *(uint *)(lVar10 + 1000)) {
            puVar11 = *(uint **)(*(long *)(lVar10 + 0x3f0) + (long)(int)uVar4 * 8);
            if ((puVar11 != (uint *)0x0) && (uVar4 = *puVar11, uVar4 != 0)) {
              cVar12 = *PTR_DAT_04bbbdd8;
              do {
                puVar7 = PTR_DAT_04bbbdd8;
                if (cVar12 == '\0') {
                  cVar12 = '\x01';
                  *(undefined8 *)puVar8 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0xa0) = 0xffffffffffffffff;
                  *puVar7 = 1;
                  *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x88) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x90) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x98) = 0xffffffffffffffff;
                  uVar4 = *puVar11;
                }
                else {
                  uVar3 = *(uint *)(puVar8 + 0x24);
                  if (-1 < (int)uVar3) {
                    if ((char *)((ulong)uVar3 + (long)puVar11) == (char *)0x0) break;
                    cVar13 = *(char *)((ulong)uVar3 + (long)puVar11);
                    goto LAB_012e0884;
                  }
                  if (uVar3 != 0xffffffff) break;
                }
                puVar5 = (uint *)(ulong)uVar4;
                cVar13 = '\0';
                if ((puVar5 == (uint *)0x0) || (cVar13 = '\0', puVar11 == puVar5))
                goto LAB_012e0884;
                lVar10 = 0xc;
                if (*(char *)((long)puVar11 + (10 - (long)puVar5)) != '\0') {
                  lVar10 = 0x1c;
                }
                lVar10 = (long)puVar11 + (lVar10 - (long)puVar5);
                if (lVar10 == 0) break;
                uVar14 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar5));
                *(undefined4 *)(puVar8 + 0x24) = 0xfffffffe;
                cVar13 = '\0';
                if (uVar14 == 0) goto LAB_012e0884;
                piVar15 = (int *)(lVar10 + 4);
                while (piVar15[-1] != -0x5b0925ef) {
                  piVar15 = piVar15 + 2;
                  uVar14 = uVar14 - 1;
                  if (uVar14 == 0) {
                    cVar13 = '\0';
                    goto LAB_012e0884;
                  }
                }
                cVar13 = '\0';
                iVar9 = 0;
                if (*piVar15 != -1) {
                  iVar9 = *piVar15;
                }
                *(int *)(puVar8 + 0x24) = iVar9;
                uVar4 = *puVar11;
                if (uVar4 == 0) goto LAB_012e0884;
              } while( true );
            }
            cVar13 = '\0';
          }
LAB_012e0884:
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (int)cVar13;
          iVar9 = *(int *)(param_1 + 0xc);
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < iVar9);
    }
    iVar9 = *(int *)(param_1 + 0x10) + iVar9;
    *(int *)(param_1 + 0x10) = iVar9;
    iVar1 = (*(int *)(lVar16 + 0x28) - *(int *)(lVar16 + 0x18)) + 1;
    if (iVar1 + iVar1 * (*(int *)(lVar16 + 0x2c) - *(int *)(lVar16 + 0x1c)) < iVar9) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
    }
  }
  return;
}

