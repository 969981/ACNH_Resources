
/* WARNING: Removing unreachable block (ram,0x01aedf84) */

void FUN_01aedf10(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined *puVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  uint local_88;
  undefined4 local_84;
  undefined **local_80;
  uint local_78;
  undefined4 uStack_74;
  uint *local_70;
  uint local_64;
  
  puVar6 = PTR_DAT_04bb43c0;
  if (0xffff < param_2) {
    *param_1 = 0xa48;
    FUN_0277d4ac(param_1);
    return;
  }
  local_80 = (undefined **)CONCAT44(local_80._4_4_,0x59);
  if (*(int *)(DAT_0532a840 + 0xb20) != 0) {
    puVar11 = *(undefined8 **)(DAT_0532a840 + 0xb28);
    puVar1 = puVar11 + *(int *)(DAT_0532a840 + 0xb20);
    do {
      local_80 = (undefined **)(ulong)(ushort)*(undefined4 *)*puVar11;
      FUN_0277d4ac(&local_80);
      lVar12 = *(long *)puVar6;
      uVar7 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar6 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          local_84 = 0;
          local_88 = *(uint *)*puVar11 & 0xffff;
          FUN_0277d4ac(&local_88);
          lVar13 = *(long *)puVar6;
          local_80 = &PTR_FUN_04a36b50;
          local_70 = (uint *)0x0;
          local_78 = local_88;
          uStack_74 = local_84;
          uVar7 = FUN_0277d6c4(&local_78);
          lVar12 = DAT_0532a768;
          if (*(long *)puVar6 == 0) {
LAB_01aee274:
            uVar7 = 0;
            local_88 = 0x59;
            local_64 = 0xbc;
          }
          else {
            lVar13 = *(long *)(lVar13 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((*(uint *)(lVar13 + 0x1d8) <= uVar7) ||
               (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
            goto LAB_01aee274;
            uVar7 = FUN_0277d6c4(&local_88);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
               (puVar14 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8),
               puVar14 == (uint *)0x0)) goto LAB_01aee274;
            local_64 = 0;
            local_88 = 0x59;
            uVar7 = *puVar14;
            if ((uVar7 != 0) && (puVar14 != (uint *)(ulong)uVar7)) {
              puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
              local_64 = 0;
              if (*puVar8 != 0) {
                uVar7 = puVar8[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                  lVar12 = 0xc;
                  if (*(char *)((long)puVar8 + 10) != '\0') {
                    lVar12 = 0x1c;
                  }
                  lVar12 = (long)puVar8 + lVar12 + (ulong)(ushort)puVar8[2] * 8;
                  if (lVar12 != 0) {
                    uVar3 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar3 = (uint)((ulong)((long)puVar14 - lVar12) / (ulong)uVar7);
                    }
                    if (*puVar8 <= uVar3) {
                      uVar3 = 0xffffffff;
                    }
                    if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_64 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                       local_64 < 0xbd)) goto LAB_01aee154;
                  }
                }
                local_64 = 0;
              }
            }
LAB_01aee154:
            local_70 = puVar14;
            if (local_64 == 0x59) {
              uVar7 = 0;
              if (*puVar14 != 0) {
                cVar5 = DAT_05326940;
                do {
                  if (cVar5 == '\0') {
                    cVar5 = '\x01';
                    *PTR_DAT_04bbfe88 = 1;
                    memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                  }
                  else {
                    if (-1 < (int)DAT_05326a30) {
                      uVar7 = 0;
                      if ((ushort *)((ulong)DAT_05326a30 + (long)puVar14) != (ushort *)0x0) {
                        uVar7 = (uint)*(ushort *)((ulong)DAT_05326a30 + (long)puVar14);
                      }
                      break;
                    }
                    if (DAT_05326a30 != 0xffffffff) goto LAB_01aee294;
                  }
                  puVar8 = (uint *)(ulong)*puVar14;
                  uVar7 = 0;
                  if ((*puVar14 == 0) || (puVar14 == puVar8)) break;
                  lVar12 = 0xc;
                  if (*(char *)((long)puVar14 + (10 - (long)puVar8)) != '\0') {
                    lVar12 = 0x1c;
                  }
                  lVar12 = (long)puVar14 + (lVar12 - (long)puVar8);
                  if (lVar12 == 0) goto LAB_01aee294;
                  uVar9 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar8));
                  *(undefined4 *)(PTR_DAT_04bbfe90 + 0xec) = 0xfffffffe;
                  if (uVar9 == 0) goto LAB_01aee294;
                  piVar10 = (int *)(lVar12 + 4);
                  while (piVar10[-1] != 0x718b024d) {
                    uVar7 = 0;
                    piVar10 = piVar10 + 2;
                    uVar9 = uVar9 - 1;
                    if (uVar9 == 0) goto LAB_01aee288;
                  }
                  uVar7 = 0;
                  iVar2 = 0;
                  if (*piVar10 != -1) {
                    iVar2 = *piVar10;
                  }
                  *(int *)(PTR_DAT_04bbfe90 + 0xec) = iVar2;
                  if (*puVar14 == 0) break;
                } while( true );
              }
            }
            else {
LAB_01aee294:
              uVar7 = 0;
            }
          }
LAB_01aee288:
          if (uVar7 == param_2) {
            uVar4 = *(undefined4 *)*puVar11;
            *(undefined2 *)((long)param_1 + 2) = 0;
            *(undefined4 *)((long)param_1 + 4) = 0;
            *(short *)param_1 = (short)uVar4;
            goto LAB_01aee2b4;
          }
        }
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar1);
  }
  *param_1 = 0xa48;
LAB_01aee2b4:
  FUN_0277d4ac(param_1);
  return;
}

