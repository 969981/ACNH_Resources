
/* WARNING: Removing unreachable block (ram,0x01342254) */
/* WARNING: Removing unreachable block (ram,0x01342194) */
/* WARNING: Removing unreachable block (ram,0x01342240) */
/* WARNING: Removing unreachable block (ram,0x013423c8) */
/* WARNING: Removing unreachable block (ram,0x013423d8) */
/* WARNING: Removing unreachable block (ram,0x013421ac) */
/* WARNING: Removing unreachable block (ram,0x013423fc) */
/* WARNING: Removing unreachable block (ram,0x01342410) */

void FUN_01342080(undefined8 param_1,long param_2,long param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint *puVar10;
  undefined *puVar11;
  ushort *puVar12;
  uint *puVar13;
  ulong uVar14;
  char cVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
  undefined **local_88;
  int local_80;
  int iStack_7c;
  undefined4 local_74;
  uint local_70;
  undefined8 local_6c;
  byte local_64;
  
  puVar11 = PTR_DAT_04bbbde0;
  if ((((param_2 != 0) && (param_3 != 0)) &&
      (uVar1 = (*(int *)(param_2 + 0x2c) - *(int *)(param_2 + 0x1c)) + 1, 0 < (int)uVar1)) &&
     (uVar2 = (*(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x18)) + 1, 0 < (int)uVar2)) {
    uVar18 = 0;
    do {
      if ((long)uVar18 < (long)param_5) {
        uVar17 = 0;
        do {
          lVar8 = DAT_0519d040;
          if (((long)uVar17 < (long)param_4) &&
             (lVar3 = uVar17 + uVar18 * uVar2, lVar3 < param_5 * param_4)) {
            puVar12 = (ushort *)(param_3 + lVar3 * 0xe);
            local_70 = 0;
            if (*puVar12 != 0xffff) {
              local_70 = (uint)*puVar12;
            }
            uVar9 = local_70 - *(ushort *)(DAT_0519d040 + 0x408);
            if (((uVar9 < *(uint *)(DAT_0519d040 + 1000)) &&
                (puVar13 = *(uint **)(*(long *)(DAT_0519d040 + 0x3f0) + (long)(int)uVar9 * 8),
                puVar13 != (uint *)0x0)) && (uVar9 = *puVar13, uVar9 != 0)) {
              cVar15 = DAT_05160171;
              do {
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  *PTR_DAT_04bbbdd8 = 1;
                  *(undefined8 *)(puVar11 + 0xa0) = 0xffffffffffffffff;
                  *(undefined8 *)puVar11 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x88) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x90) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x98) = 0xffffffffffffffff;
                  uVar9 = *puVar13;
                }
                else if ((-1 < *(int *)(puVar11 + 0x20)) || (*(int *)(puVar11 + 0x20) != -1)) break;
                puVar10 = (uint *)(ulong)uVar9;
                if ((puVar10 == (uint *)0x0) || (puVar13 == puVar10)) break;
                lVar7 = 0xc;
                if (*(char *)((long)puVar13 + (10 - (long)puVar10)) != '\0') {
                  lVar7 = 0x1c;
                }
                lVar7 = (long)puVar13 + (lVar7 - (long)puVar10);
                if (lVar7 == 0) break;
                uVar14 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar10));
                *(undefined4 *)(puVar11 + 0x20) = 0xfffffffe;
                if (uVar14 == 0) break;
                piVar16 = (int *)(lVar7 + 4);
                while (piVar16[-1] != -0x38cc5589) {
                  piVar16 = piVar16 + 2;
                  uVar14 = uVar14 - 1;
                  if (uVar14 == 0) goto LAB_0134239c;
                }
                iVar6 = 0;
                if (*piVar16 != -1) {
                  iVar6 = *piVar16;
                }
                *(int *)(puVar11 + 0x20) = iVar6;
                uVar9 = *puVar13;
                if (uVar9 == 0) break;
              } while( true );
            }
LAB_0134239c:
            bVar5 = (byte)puVar12[2];
            if (3 < bVar5) {
              bVar5 = 0;
            }
            local_74 = 1;
            uVar9 = 0;
            if (puVar12[3] != 0xffff) {
              uVar9 = (uint)puVar12[3];
            }
            uVar9 = uVar9 - *(ushort *)(lVar8 + 0x408);
            if (((uVar9 < *(uint *)(lVar8 + 1000)) &&
                (puVar13 = *(uint **)(*(long *)(lVar8 + 0x3f0) + (long)(int)uVar9 * 8),
                puVar13 != (uint *)0x0)) && (uVar9 = *puVar13, uVar9 != 0)) {
              cVar15 = DAT_05160171;
              do {
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  *PTR_DAT_04bbbdd8 = 1;
                  *(undefined8 *)(puVar11 + 0xa0) = 0xffffffffffffffff;
                  *(undefined8 *)puVar11 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x88) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x90) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar11 + 0x98) = 0xffffffffffffffff;
                  uVar9 = *puVar13;
                }
                else if ((-1 < *(int *)(puVar11 + 0x20)) || (*(int *)(puVar11 + 0x20) != -1)) break;
                puVar10 = (uint *)(ulong)uVar9;
                if ((puVar10 == (uint *)0x0) || (puVar13 == puVar10)) break;
                lVar8 = 0xc;
                if (*(char *)((long)puVar13 + (10 - (long)puVar10)) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar13 + (lVar8 - (long)puVar10);
                if (lVar8 == 0) break;
                uVar14 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar10));
                *(undefined4 *)(puVar11 + 0x20) = 0xfffffffe;
                if (uVar14 == 0) break;
                piVar16 = (int *)(lVar8 + 4);
                while (piVar16[-1] != -0x38cc5589) {
                  piVar16 = piVar16 + 2;
                  uVar14 = uVar14 - 1;
                  if (uVar14 == 0) goto LAB_0134254c;
                }
                iVar6 = 0;
                if (*piVar16 != -1) {
                  iVar6 = *piVar16;
                }
                *(int *)(puVar11 + 0x20) = iVar6;
                uVar9 = *puVar13;
                if (uVar9 == 0) break;
              } while( true );
            }
LAB_0134254c:
            bVar4 = (byte)puVar12[5];
            if (3 < bVar4) {
              bVar4 = 0;
            }
            local_64 = *(byte *)(param_3 + lVar3 * 0xe + 0xc);
            local_6c = (ulong)CONCAT11(bVar4,bVar5);
            if (4 < local_64) {
              local_64 = 0;
            }
            local_80 = *(int *)(param_2 + 0x18) + (int)uVar17;
            iStack_7c = *(int *)(param_2 + 0x1c) + (int)uVar18;
            local_88 = &PTR_FUN_048f9730;
            FUN_01309ff0(param_2,&local_70,&local_88);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar2);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar1);
  }
  return;
}

