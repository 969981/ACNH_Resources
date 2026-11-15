
void FUN_0202ed50(long param_1)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  byte *pbVar15;
  int local_78;
  int local_74;
  byte local_70 [4];
  byte local_6c [12];
  int local_48;
  byte local_44 [4];
  
  lVar12 = *(long *)PTR_DAT_04bb46b0;
  if (lVar12 != 0) {
    puVar13 = *(undefined8 **)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
      lVar12 = (**(code **)(*(long *)*puVar13 + 0x38))();
      if (lVar12 == 0) {
        return;
      }
      lVar12 = lVar12 + 0x70;
    }
    else {
      if (puVar13 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar13[0x26] == (long *)0x0) {
        return;
      }
      lVar12 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
      if (lVar12 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar12 + 0xe6ea0) == (long *)0x0) ||
       (puVar13 = (undefined8 *)**(long **)(lVar12 + 0xe6ea0), puVar13 == (undefined8 *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)*puVar13)();
      uVar8 = uVar8 & 0xffffffff;
    }
    lVar1 = *(long *)(lVar12 + 0xe6e88) + *(long *)(lVar12 + 0xe6e80);
    if ((*(char *)(lVar1 + 0x2f) == '\x02') &&
       ((*(char *)(lVar1 + 0x2e) == '\x01' || (uVar9 = FUN_0284aa24(lVar1), (uVar9 & 1) != 0)))) {
      FUN_02507c6c(local_6c,1,1,0,0);
      puVar5 = PTR_DAT_04bb5038;
      puVar4 = PTR_DAT_04bb4f78;
      if (local_6c[0] < 8) {
        do {
          local_70[0] = local_6c[0];
          lVar10 = FUN_025830c0(*(undefined8 *)puVar4,local_70,1);
          if (lVar10 != 0) {
            if ((*(long **)(lVar10 + 0x17f68) == (long *)0x0) ||
               (puVar13 = (undefined8 *)**(long **)(lVar10 + 0x17f68), puVar13 == (undefined8 *)0x0)
               ) {
              uVar9 = 0;
            }
            else {
              uVar9 = (**(code **)*puVar13)();
              uVar9 = uVar9 & 0xffffffff;
            }
            piVar2 = (int *)(*(long *)(lVar12 + 0xe6e88) + *(long *)(lVar12 + 0xe6e80));
            piVar3 = (int *)(*(long *)(lVar10 + 0x17f50) + *(long *)(lVar10 + 0x17f48));
            if ((*piVar2 == *piVar3) &&
               ((*(long *)(piVar3 + 1) == *(long *)(piVar2 + 1) &&
                *(long *)(piVar3 + 3) == *(long *)(piVar2 + 3)) && piVar3[5] == piVar2[5])) {
              local_78 = 0;
              if (local_6c[0] < 8) {
                local_44[0] = local_6c[0];
                iVar7 = FUN_02582fe0(local_44);
                if (iVar7 != -1) {
                  local_48 = 0;
                  uVar11 = FUN_02b5e950(&local_48,iVar7);
                  if ((uVar11 & 1) != 0) {
                    local_74 = local_48;
                    lVar14 = *(long *)PTR_DAT_04bb2720;
                    if (lVar14 == 0) {
                      puVar13 = &DAT_055c04a0;
                    }
                    else {
                      puVar13 = &DAT_055c04a0;
                      if (*(long *)(lVar14 + 0x330) != 0) {
                        puVar13 = (undefined8 *)
                                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                            (*(long **)PTR_DAT_04bb2640,
                                             *(undefined4 *)(lVar14 + 0x338));
                        iVar7 = FUN_006bd550(*puVar13,0);
                        puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
                        if (iVar7 != 0x758f7eaf) {
                          puVar13 = &DAT_055c04a0;
                        }
                      }
                    }
                    uVar11 = FUN_02b5f400(&local_78,*(undefined4 *)(puVar13 + 7));
                    if (((uVar11 & 1) != 0) && (local_74 == local_78)) {
                      *(int *)(param_1 + 0x115f8) = (int)*(char *)(lVar1 + 0x2c);
                    }
                  }
                }
              }
              if ((((uVar9 & 1) != 0) && (*(long *)(lVar10 + 0x17f68) != 0)) &&
                 (puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x17f68) + 8),
                 puVar13 != (undefined8 *)0x0)) {
                (**(code **)*puVar13)();
              }
              break;
            }
            if ((((uVar9 & 1) != 0) && (*(long *)(lVar10 + 0x17f68) != 0)) &&
               (puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x17f68) + 8),
               puVar13 != (undefined8 *)0x0)) {
              (**(code **)*puVar13)();
            }
          }
          bVar6 = local_6c[0];
          uVar9 = (ulong)local_6c[0];
          if ((7 < local_6c[0]) || (uVar9 + 1 == 8)) break;
          pbVar15 = puVar5 + uVar9 + 1;
          uVar11 = FUN_02507924(local_6c,pbVar15);
          if ((uVar11 & 1) == 0) {
            if (uVar9 + 2 == 8) break;
            pbVar15 = puVar5 + uVar9 + 2;
            uVar11 = FUN_02507924(local_6c,pbVar15);
            if ((uVar11 & 1) == 0) {
              if (uVar9 + 3 == 8) break;
              pbVar15 = puVar5 + uVar9 + 3;
              uVar11 = FUN_02507924(local_6c,pbVar15);
              if ((uVar11 & 1) == 0) {
                if (uVar9 + 4 == 8) break;
                pbVar15 = puVar5 + uVar9 + 4;
                uVar11 = FUN_02507924(local_6c,pbVar15);
                if ((uVar11 & 1) == 0) {
                  if (uVar9 + 5 == 8) break;
                  pbVar15 = puVar5 + uVar9 + 5;
                  uVar11 = FUN_02507924(local_6c,pbVar15);
                  if ((uVar11 & 1) == 0) {
                    if (uVar9 + 6 == 8) break;
                    pbVar15 = puVar5 + uVar9 + 6;
                    uVar11 = FUN_02507924(local_6c,pbVar15);
                    if ((uVar11 & 1) == 0) {
                      if (uVar9 + 7 == 8) break;
                      pbVar15 = puVar5 + uVar9 + 7;
                      uVar11 = FUN_02507924(local_6c,pbVar15);
                      if ((uVar11 & 1) == 0) {
                        if (bVar6 == 0) break;
                        pbVar15 = puVar5 + uVar9 + 8;
                        FUN_02507924(local_6c,pbVar15);
                      }
                    }
                  }
                }
              }
            }
          }
          if (7 < *pbVar15) break;
          local_6c[0] = *pbVar15;
        } while( true );
      }
    }
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar12 + 0xe6ea0) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0xe6ea0) + 8), puVar13 != (undefined8 *)0x0))
    {
      (**(code **)*puVar13)();
    }
  }
  return;
}

