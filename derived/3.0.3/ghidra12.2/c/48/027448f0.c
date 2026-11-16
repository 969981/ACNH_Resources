
void FUN_027448f0(byte *param_1,ushort *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  long lVar9;
  byte bVar10;
  byte *pbVar11;
  char cVar12;
  uint *puVar13;
  ulong uVar14;
  int *piVar15;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar5 = PTR_DAT_04bb2208;
  lVar9 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_3 + 0x18))(param_3);
  local_28 = FUN_006bd550(param_3[1],0);
  lVar9 = FUN_027457e0(lVar9 + 0xca0,&local_28);
  if (lVar9 == 0) {
LAB_02744ad0:
    pbVar11 = PTR_DAT_04bb32e0;
  }
  else {
    lVar9 = *(long *)puVar5;
    (**(code **)(*param_3 + 0x18))(param_3);
    local_24 = FUN_006bd550(param_3[1],0);
    puVar8 = (uint *)FUN_027457e0(lVar9 + 0xca0,&local_24);
    puVar7 = PTR_DAT_04bb63a8;
    puVar6 = PTR_DAT_04bb63a0;
    puVar5 = PTR_DAT_04bb32e0;
    if (puVar8 == (uint *)0x0) {
      pbVar11 = PTR_DAT_04bb32e0;
      goto LAB_02744c18;
    }
    if (*puVar8 != 0) {
      cVar12 = *PTR_DAT_04bb63a0;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar2 = *puVar8;
        }
        else {
          uVar2 = *(uint *)(puVar7 + 8);
          if (-1 < (int)uVar2) {
            if (((ushort *)((ulong)uVar2 + (long)puVar8) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar8), uVar3 < 0x80)) {
              param_2 = param_2 + uVar3;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
          uVar2 = *puVar8;
        }
        if ((uVar2 == 0) || (puVar13 = (uint *)(ulong)uVar2, puVar8 == puVar13)) break;
        lVar9 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar8 + (lVar9 - (long)puVar13);
        if (lVar9 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
        *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar15 = (int *)(lVar9 + 4);
        while (piVar15[-1] != 0x54706054) {
          piVar15 = piVar15 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_02744a8c;
        }
        iVar1 = 0;
        if (*piVar15 != -1) {
          iVar1 = *piVar15;
        }
        *(int *)(puVar7 + 8) = iVar1;
        if (*puVar8 == 0) break;
      } while( true );
    }
LAB_02744a8c:
    uVar3 = *param_2;
    if ((uVar3 & 1) == 0) {
      if ((uVar3 >> 1 & 1) == 0) {
        if ((uVar3 >> 2 & 1) == 0) {
          if ((uVar3 >> 3 & 1) == 0) {
            if ((uVar3 >> 4 & 1) == 0) {
              if ((uVar3 >> 5 & 1) == 0) {
                if ((uVar3 >> 6 & 1) == 0) {
                  if ((uVar3 >> 7 & 1) == 0) {
                    if ((uVar3 >> 8 & 1) == 0) {
                      if ((uVar3 >> 9 & 1) == 0) {
                        if ((uVar3 >> 10 & 1) == 0) {
                          if ((uVar3 >> 0xb & 1) == 0) {
                            if ((uVar3 >> 0xc & 1) == 0) {
                              if ((uVar3 >> 0xd & 1) == 0) {
                                if ((uVar3 >> 0xe & 1) == 0) {
                                  if (-1 < (short)uVar3) goto LAB_02744ad0;
                                  bVar10 = 0xf;
                                }
                                else {
                                  bVar10 = 0xe;
                                }
                              }
                              else {
                                bVar10 = 0xd;
                              }
                            }
                            else {
                              bVar10 = 0xc;
                            }
                          }
                          else {
                            bVar10 = 0xb;
                          }
                        }
                        else {
                          bVar10 = 10;
                        }
                      }
                      else {
                        bVar10 = 9;
                      }
                    }
                    else {
                      bVar10 = 8;
                    }
                  }
                  else {
                    bVar10 = 7;
                  }
                }
                else {
                  bVar10 = 6;
                }
              }
              else {
                bVar10 = 5;
              }
            }
            else {
              bVar10 = 4;
            }
          }
          else {
            bVar10 = 3;
          }
        }
        else {
          bVar10 = 2;
        }
      }
      else {
        bVar10 = 1;
      }
    }
    else {
      bVar10 = 0;
    }
    if ((7 < (byte)*PTR_DAT_04bb5038) || (pbVar11 = PTR_DAT_04bb5038, bVar10 != *PTR_DAT_04bb5038))
    {
      bVar4 = PTR_DAT_04bb5038[1];
      if ((7 < bVar4) || (pbVar11 = PTR_DAT_04bb5038 + 1, bVar10 != bVar4)) {
        bVar4 = PTR_DAT_04bb5038[2];
        if ((7 < bVar4) || (pbVar11 = PTR_DAT_04bb5038 + 2, bVar10 != bVar4)) {
          bVar4 = PTR_DAT_04bb5038[3];
          if ((7 < bVar4) || (pbVar11 = PTR_DAT_04bb5038 + 3, bVar10 != bVar4)) {
            bVar4 = PTR_DAT_04bb5038[4];
            if ((7 < bVar4) || (pbVar11 = PTR_DAT_04bb5038 + 4, bVar10 != bVar4)) {
              bVar4 = PTR_DAT_04bb5038[5];
              if ((7 < bVar4) || (pbVar11 = PTR_DAT_04bb5038 + 5, bVar10 != bVar4)) {
                bVar4 = PTR_DAT_04bb5038[6];
                if ((7 < bVar4) || (pbVar11 = PTR_DAT_04bb5038 + 6, bVar10 != bVar4)) {
                  bVar4 = PTR_DAT_04bb5038[7];
                  pbVar11 = PTR_DAT_04bb5038 + 7;
                  if (bVar10 != bVar4 || 7 < bVar4) {
                    pbVar11 = puVar5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02744c18:
  bVar10 = *pbVar11;
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  *param_1 = bVar10;
  return;
}

