
void FUN_00826830(long param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined8 *puVar13;
  uint *puVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  ulong uVar17;
  byte local_78 [4];
  byte local_74 [4];
  byte local_70 [12];
  undefined4 local_64;
  
  if (0 < *(int *)(param_1 + 0xf8)) {
    lVar11 = 0;
    puVar13 = *(undefined8 **)(param_1 + 0x108);
    do {
      puVar15 = *(undefined8 **)(*(long *)(param_1 + 0x100) + lVar11 * 8);
      lVar11 = lVar11 + 1;
      *puVar15 = puVar13;
      *(undefined8 **)(param_1 + 0x108) = puVar15;
      puVar13 = puVar15;
    } while (lVar11 < *(int *)(param_1 + 0xf8));
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0x15c) != 0) {
    FUN_02507c6c(local_70,1,1,0,0);
    puVar6 = PTR_DAT_04bc1220;
    puVar5 = PTR_DAT_04bb5038;
    puVar4 = PTR_DAT_04bb27d0;
    if (local_70[0] < 8) {
      do {
        local_74[0] = local_70[0];
        iVar7 = FUN_02582fe0(local_74);
        if (iVar7 == -1) {
          local_78[0] = local_70[0];
          if (7 < local_70[0]) {
            local_78[0] = 0xff;
          }
          lVar11 = **(long **)puVar4;
          bVar2 = *(byte *)(lVar11 + 0x473);
          pcVar9 = puVar6;
          if ((long)(char)bVar2 != 0xffffffffffffffff) {
            puVar14 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
            if (7 < bVar2) {
              puVar14 = (uint *)(lVar11 + 0x48);
            }
            if ((*puVar14 & 8) != 0) {
              pcVar9 = (char *)(lVar11 + 0x472);
            }
          }
          cVar1 = *pcVar9;
          pcVar9 = (char *)FUN_02582a24(local_78);
          if ((((cVar1 == *pcVar9) && (uVar8 = FUN_02582d8c(local_78,2), uVar8 < 8)) &&
              (lVar11 = *(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0,
              *(char *)(lVar11 + 0x13d4) != '\0')) && (*(int *)(lVar11 + 0x13d0) == 1)) {
            bVar2 = *(byte *)(lVar11 + 0x13d5);
            iVar7 = *(int *)(param_1 + 0xf8);
            if (iVar7 != 0) {
              puVar13 = *(undefined8 **)(param_1 + 0x100);
              lVar11 = (long)iVar7 << 3;
              do {
                local_64 = 0;
                if (((((uint *)*puVar13)[1] & 1) != 0) && (*(uint *)*puVar13 == (uint)bVar2))
                goto LAB_00826b40;
                puVar13 = puVar13 + 1;
                lVar11 = lVar11 + -8;
              } while (lVar11 != 0);
            }
            if (iVar7 < *(int *)(param_1 + 0xfc)) {
              puVar14 = *(uint **)(param_1 + 0x108);
              if (puVar14 != (uint *)0x0) {
                *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)puVar14;
              }
              puVar14[0] = 0xffffffff;
              puVar14[1] = 0;
              if (*(int *)(param_1 + 0xf8) < *(int *)(param_1 + 0xfc)) {
                *(uint **)(*(long *)(param_1 + 0x100) + (long)*(int *)(param_1 + 0xf8) * 8) =
                     puVar14;
                *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
              }
              *puVar14 = (uint)bVar2;
              local_64 = 0;
              puVar14[1] = puVar14[1] | 1;
            }
          }
        }
        else {
          iVar3 = *(int *)(param_1 + 0xf8);
          if (iVar3 != 0) {
            puVar13 = *(undefined8 **)(param_1 + 0x100);
            lVar11 = (long)iVar3 << 3;
            do {
              local_64 = 0;
              if (((((int *)*puVar13)[1] & 1U) == 0) && (*(int *)*puVar13 == iVar7))
              goto LAB_00826b40;
              puVar13 = puVar13 + 1;
              lVar11 = lVar11 + -8;
            } while (lVar11 != 0);
          }
          if (iVar3 < *(int *)(param_1 + 0xfc)) {
            piVar12 = *(int **)(param_1 + 0x108);
            if (piVar12 != (int *)0x0) {
              *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)piVar12;
            }
            piVar12[0] = -1;
            piVar12[1] = 0;
            if (*(int *)(param_1 + 0xf8) < *(int *)(param_1 + 0xfc)) {
              *(int **)(*(long *)(param_1 + 0x100) + (long)*(int *)(param_1 + 0xf8) * 8) = piVar12;
              *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
            }
            *piVar12 = iVar7;
            local_64 = 0;
            piVar12[1] = piVar12[1] & 0xfffffffe;
          }
        }
LAB_00826b40:
        bVar2 = local_70[0];
        uVar17 = (ulong)local_70[0];
        if (7 < local_70[0]) {
          return;
        }
        if (uVar17 + 1 == 8) {
          return;
        }
        pbVar16 = puVar5 + uVar17 + 1;
        uVar10 = FUN_02507924(local_70,pbVar16);
        if ((uVar10 & 1) == 0) {
          if (uVar17 + 2 == 8) {
            return;
          }
          pbVar16 = puVar5 + uVar17 + 2;
          uVar10 = FUN_02507924(local_70,pbVar16);
          if ((uVar10 & 1) == 0) {
            if (uVar17 + 3 == 8) {
              return;
            }
            pbVar16 = puVar5 + uVar17 + 3;
            uVar10 = FUN_02507924(local_70,pbVar16);
            if ((uVar10 & 1) == 0) {
              if (uVar17 + 4 == 8) {
                return;
              }
              pbVar16 = puVar5 + uVar17 + 4;
              uVar10 = FUN_02507924(local_70,pbVar16);
              if ((uVar10 & 1) == 0) {
                if (uVar17 + 5 == 8) {
                  return;
                }
                pbVar16 = puVar5 + uVar17 + 5;
                uVar10 = FUN_02507924(local_70,pbVar16);
                if ((uVar10 & 1) == 0) {
                  if (uVar17 + 6 == 8) {
                    return;
                  }
                  pbVar16 = puVar5 + uVar17 + 6;
                  uVar10 = FUN_02507924(local_70,pbVar16);
                  if ((uVar10 & 1) == 0) {
                    if (uVar17 + 7 == 8) {
                      return;
                    }
                    pbVar16 = puVar5 + uVar17 + 7;
                    uVar10 = FUN_02507924(local_70,pbVar16);
                    if ((uVar10 & 1) == 0) {
                      if (bVar2 == 0) {
                        return;
                      }
                      pbVar16 = puVar5 + uVar17 + 8;
                      FUN_02507924(local_70,pbVar16);
                    }
                  }
                }
              }
            }
          }
        }
        local_70[0] = *pbVar16;
        if (7 < local_70[0]) {
          return;
        }
      } while( true );
    }
  }
  return;
}

