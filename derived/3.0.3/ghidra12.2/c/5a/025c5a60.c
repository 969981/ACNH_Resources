
int FUN_025c5a60(long param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  uint *puVar12;
  char cVar13;
  long lVar14;
  uint uVar15;
  uint local_90;
  int local_8c;
  undefined *local_80;
  uint local_78;
  undefined4 uStack_74;
  uint *local_70;
  uint local_68;
  undefined4 local_64;
  
  if ((*(long **)(param_1 + 0x28) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(param_1 + 0x28), puVar6 == (undefined8 *)0x0)) {
    local_90 = 0;
  }
  else {
    local_90 = (**(code **)*puVar6)();
  }
  puVar4 = PTR_DAT_04bb43c0;
  local_8c = 0;
  uVar15 = 0;
  lVar2 = *(long *)(param_1 + 0x10) + *(long *)(param_1 + 8);
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  do {
    local_68 = uVar15 & 0xffff;
    local_64 = 0;
    FUN_0277d4ac(&local_68);
    lVar14 = *(long *)puVar4;
    uVar5 = FUN_0277d6c4(&local_68);
    lVar11 = *(long *)puVar4;
    if (lVar11 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_70 = (uint *)0x0;
        local_78 = local_68;
        uStack_74 = local_64;
        local_80 = puVar1;
        uVar5 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar4 == 0) {
LAB_025c5be4:
          puVar12 = (uint *)0x0;
        }
        else {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_025c5be4;
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(&local_68);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if (*(uint *)(lVar11 + 0x1d8) <= uVar5) goto LAB_025c5be4;
          puVar12 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8);
          if (puVar12 != (uint *)0x0) {
            local_70 = puVar12;
          }
        }
        uVar5 = FUN_01ad7260(&local_80);
        if ((((uVar5 & 0xff) != 0) && (puVar12 != (uint *)0x0)) && (uVar3 = *puVar12, uVar3 != 0)) {
          cVar13 = *PTR_DAT_04bbfe88;
          do {
            if (cVar13 == '\0') {
              cVar13 = '\x01';
              *PTR_DAT_04bbfe88 = 1;
              memset(PTR_DAT_04bbfe90,0xff,0x1ac);
              uVar3 = *puVar12;
            }
            else {
              if (-1 < (int)DAT_05326a64) {
                if (((short *)((ulong)DAT_05326a64 + (long)puVar12) != (short *)0x0) &&
                   (iVar7 = (int)*(short *)((ulong)DAT_05326a64 + (long)puVar12), iVar7 != -1)) {
                  iVar7 = iVar7 * 8;
                  if ((uVar5 & 0xff) == 1) {
                    iVar10 = 0;
                  }
                  else {
                    iVar10 = 0;
                    do {
                      uVar3 = iVar7 + iVar10;
                      if ((uVar3 >> 7 < 0x7d) &&
                         ((*(uint *)(lVar2 + (ulong)(uVar3 >> 5) * 4) & 1 << (ulong)(uVar3 & 0x1e))
                          != 0)) {
                        local_8c = local_8c + 1;
                      }
                      uVar3 = uVar3 + 1;
                      if ((uVar3 >> 7 < 0x7d) &&
                         ((*(uint *)(lVar2 + (ulong)(uVar3 >> 5) * 4) & 1 << (ulong)(uVar3 & 0x1f))
                          != 0)) {
                        local_8c = local_8c + 1;
                      }
                      iVar10 = iVar10 + 2;
                    } while ((uVar5 & 0xff) - (uVar5 & 1) != iVar10);
                  }
                  if ((((uVar5 & 1) != 0) && (uVar5 = iVar10 + iVar7, uVar5 >> 7 < 0x7d)) &&
                     ((*(uint *)(lVar2 + (ulong)(uVar5 >> 5) * 4) & 1 << (ulong)(uVar5 & 0x1f)) != 0
                     )) {
                    local_8c = local_8c + 1;
                  }
                }
                break;
              }
              if (DAT_05326a64 != 0xffffffff) break;
            }
            if (((ulong)uVar3 == 0) || (lVar11 = (long)puVar12 - (ulong)uVar3, lVar11 == 0)) break;
            lVar14 = 0xc;
            if (*(char *)(lVar11 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            if (lVar14 + lVar11 == 0) break;
            uVar8 = (ulong)*(ushort *)(lVar11 + 8);
            *(undefined4 *)(PTR_DAT_04bbfe90 + 0x120) = 0xfffffffe;
            if (uVar8 == 0) break;
            piVar9 = (int *)(lVar14 + lVar11 + 4);
            while (piVar9[-1] != -0x34a14cc1) {
              piVar9 = piVar9 + 2;
              uVar8 = uVar8 - 1;
              if (uVar8 == 0) goto LAB_025c5b00;
            }
            iVar7 = 0;
            if (*piVar9 != -1) {
              iVar7 = *piVar9;
            }
            *(int *)(PTR_DAT_04bbfe90 + 0x120) = iVar7;
            uVar3 = *puVar12;
            if (uVar3 == 0) break;
          } while( true );
        }
      }
    }
LAB_025c5b00:
    uVar15 = uVar15 + 1;
    if (uVar15 == 0x3a8b) {
      if ((((local_90 & 1) != 0) && (*(long *)(param_1 + 0x28) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
      return local_8c;
    }
  } while( true );
}

