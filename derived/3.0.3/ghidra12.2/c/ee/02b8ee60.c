
/* WARNING: Removing unreachable block (ram,0x02b8ef08) */
/* WARNING: Removing unreachable block (ram,0x02b8eec0) */
/* WARNING: Removing unreachable block (ram,0x02b8ee9c) */
/* WARNING: Removing unreachable block (ram,0x02b8eee4) */
/* WARNING: Removing unreachable block (ram,0x02b8ef2c) */

uint FUN_02b8ee60(uint param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint *puVar8;
  int *piVar9;
  short sVar10;
  short sVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  char cVar15;
  uint uVar16;
  uint local_40 [2];
  long local_38;
  uint local_2c;
  uint local_28;
  int local_24;
  
  if (param_1 == 0x1e) {
    uVar16 = 0;
  }
  else {
    if ((((DAT_05641c34 == param_1) || (DAT_05641c38 == param_1)) || (DAT_05641c3c == param_1)) ||
       ((DAT_05641c40 == param_1 || (DAT_05641c44 == param_1)))) {
      local_24 = 5;
      local_40[0] = param_1;
      local_28 = param_1;
      uVar5 = FUN_02b900e0(&local_24,param_1);
      if (((uVar5 & 1) != 0) && ((local_24 != 5 && (lVar6 = FUN_03776680(), lVar6 != 0)))) {
        if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
           (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar7 == (undefined8 *)0x0)) {
          uVar16 = (uint)*(ushort *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x4018);
        }
        else {
          uVar5 = (**(code **)*puVar7)();
          uVar16 = (uint)*(ushort *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x4018);
          if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
             (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar7 != (undefined8 *)0x0))
          {
            (**(code **)*puVar7)();
          }
        }
        puVar4 = PTR_DAT_04bb5c78;
        puVar3 = PTR_DAT_04bb5c70;
        if (uVar16 != 0xffff) {
          lVar6 = *(long *)PTR_DAT_04bb5008;
          uVar13 = uVar16 - *(ushort *)(lVar6 + 0x17f0);
          if (((uVar13 < *(uint *)(lVar6 + 0x17d0)) &&
              (puVar12 = *(uint **)(*(long *)(lVar6 + 0x17d8) + (long)(int)uVar13 * 8),
              puVar12 != (uint *)0x0)) && (uVar13 = *puVar12, uVar13 != 0)) {
            cVar15 = *PTR_DAT_04bb5c70;
            do {
              if (cVar15 == '\0') {
                cVar15 = '\x01';
                *(undefined8 *)puVar4 = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                *puVar3 = 1;
                *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                uVar13 = *puVar12;
              }
              else {
                uVar2 = *(uint *)(puVar4 + 4);
                if (-1 < (int)uVar2) {
                  sVar11 = 0;
                  if ((short *)((ulong)uVar2 + (long)puVar12) != (short *)0x0) {
                    sVar11 = *(short *)((ulong)uVar2 + (long)puVar12);
                  }
                  goto LAB_02b8f0f8;
                }
                if (uVar2 != 0xffffffff) break;
              }
              puVar8 = (uint *)(ulong)uVar13;
              sVar11 = 0;
              if ((puVar8 == (uint *)0x0) || (puVar12 == puVar8)) goto LAB_02b8f0f8;
              lVar1 = 0xc;
              if (*(char *)((long)puVar12 + (10 - (long)puVar8)) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar12 + (lVar1 - (long)puVar8);
              if (lVar1 == 0) break;
              uVar5 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar8));
              *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
              sVar11 = 0;
              if (uVar5 == 0) goto LAB_02b8f0f8;
              piVar9 = (int *)(lVar1 + 4);
              while (piVar9[-1] != 0xc1577d) {
                piVar9 = piVar9 + 2;
                uVar5 = uVar5 - 1;
                if (uVar5 == 0) {
                  sVar11 = 0;
                  goto LAB_02b8f0f8;
                }
              }
              sVar11 = 0;
              iVar14 = 0;
              if (*piVar9 != -1) {
                iVar14 = *piVar9;
              }
              *(int *)(puVar4 + 4) = iVar14;
              uVar13 = *puVar12;
              if (uVar13 == 0) goto LAB_02b8f0f8;
            } while( true );
          }
          sVar11 = 0;
LAB_02b8f0f8:
          puVar4 = PTR_DAT_04bc4698;
          puVar3 = PTR_DAT_04bc4690;
          cVar15 = *PTR_DAT_04bc4690;
          uVar13 = 0;
          do {
            local_40[0] = uVar13;
            if (local_40[0] != 0) {
              if ((int)*(uint *)(lVar6 + 0x1e0) < 1) {
                if (((*(long *)(lVar6 + 0xd0) != 0) &&
                    (puVar12 = *(uint **)(*(long *)(lVar6 + 0xd0) + 8), puVar12 != (uint *)0x0)) &&
                   (((*(uint *)(lVar6 + 0xe8) <= local_40[0] ||
                     (*(char *)(*(long *)(lVar6 + 0xf0) + (long)(int)local_40[0]) != '\0')) &&
                    (((local_40[0] < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))))
                   ) {
                  iVar14 = 0xc;
                  if (*(char *)((long)puVar12 + 10) != '\0') {
                    iVar14 = 0x1c;
                  }
                  puVar12 = (uint *)((ulong)(puVar12[1] * local_40[0] + (uint)(ushort)puVar12[2] * 8
                                            + iVar14) + (long)puVar12);
                  goto joined_r0x02b8f294;
                }
              }
              else if (local_40[0] < *(uint *)(lVar6 + 0x1e0)) {
                uVar13 = local_40[0];
                if (*(uint *)(lVar6 + 0x1d0) <= local_40[0]) {
                  uVar13 = 0;
                }
                puVar12 = *(uint **)(*(long *)(lVar6 + 0x1d8) + (ulong)uVar13 * 8);
joined_r0x02b8f294:
                if (puVar12 != (uint *)0x0) {
                  uVar13 = *puVar12;
                  if (uVar13 != 0) {
                    while( true ) {
                      if (cVar15 == '\0') {
                        cVar15 = '\x01';
                        *(undefined8 *)puVar4 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                        *puVar3 = 1;
                        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                        *(undefined4 *)(puVar4 + 0x18) = 0xffffffff;
                        uVar13 = *puVar12;
                      }
                      else {
                        uVar2 = *(uint *)(puVar4 + 0x18);
                        if (-1 < (int)uVar2) {
                          sVar10 = 0;
                          if ((short *)((ulong)uVar2 + (long)puVar12) != (short *)0x0) {
                            sVar10 = *(short *)((ulong)uVar2 + (long)puVar12);
                          }
                          goto LAB_02b8f228;
                        }
                        if (uVar2 != 0xffffffff) break;
                      }
                      puVar8 = (uint *)(ulong)uVar13;
                      if ((puVar8 == (uint *)0x0) || (puVar12 == puVar8)) break;
                      lVar1 = 0xc;
                      if (*(char *)((long)puVar12 + (10 - (long)puVar8)) != '\0') {
                        lVar1 = 0x1c;
                      }
                      lVar1 = (long)puVar12 + (lVar1 - (long)puVar8);
                      if (lVar1 == 0) break;
                      uVar5 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar8));
                      *(undefined4 *)(puVar4 + 0x18) = 0xfffffffe;
                      if (uVar5 == 0) break;
                      piVar9 = (int *)(lVar1 + 4);
                      while (piVar9[-1] != 0x54706054) {
                        piVar9 = piVar9 + 2;
                        uVar5 = uVar5 - 1;
                        if (uVar5 == 0) goto LAB_02b8f224;
                      }
                      iVar14 = 0;
                      if (*piVar9 != -1) {
                        iVar14 = *piVar9;
                      }
                      *(int *)(puVar4 + 0x18) = iVar14;
                      uVar13 = *puVar12;
                      if (uVar13 == 0) break;
                    }
                  }
LAB_02b8f224:
                  sVar10 = 0;
LAB_02b8f228:
                  local_2c = local_40[0];
                  if (sVar10 == sVar11) goto LAB_02b8f2b0;
                }
              }
            }
            uVar13 = 0x27;
            if ((int)local_40[0] < 0x27) {
              uVar13 = local_40[0] + 1;
            }
          } while (uVar13 != 0x27);
          local_2c = 0;
LAB_02b8f2b0:
          if (local_2c == local_28) {
            return uVar16;
          }
          FUN_02b72930(local_40);
          if (local_38 == 0) {
            return uVar16;
          }
          uVar16 = FUN_02b72fd0(local_40);
          return uVar16;
        }
      }
    }
    uVar16 = 0xffff;
  }
  return uVar16;
}

