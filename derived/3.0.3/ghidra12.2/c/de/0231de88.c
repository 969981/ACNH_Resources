
void FUN_0231de88(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  uint *puVar12;
  ushort uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *local_88;
  char *pcStack_80;
  undefined **local_78;
  char *local_70;
  uint *local_68;
  
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  if (7 < *pbVar1) {
    return;
  }
  uVar6 = FUN_02582d8c(pbVar1,1);
  puVar3 = PTR_DAT_04bb4fb8;
  if (7 < uVar6) {
    return;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d4) == '\0') {
    return;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d6) == '\0') {
    return;
  }
  uVar6 = FUN_02582d8c(pbVar1,1);
  puVar4 = PTR_DAT_04bb43c0;
  if (7 < uVar6) {
    return;
  }
  lVar14 = *(long *)puVar3;
  if (*(char *)(lVar14 + (ulong)uVar6 * 0x13f0 + 0x13d4) == '\0') {
    return;
  }
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(param_2);
  puVar3 = PTR_DAT_04bb2020;
  lVar15 = *(long *)puVar4;
  if (lVar15 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_68 = (uint *)0x0;
      local_70 = (char *)*param_2;
      local_78 = &PTR_FUN_04a36b50;
      uVar7 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar4 != 0) {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar15 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(param_2);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if (uVar7 < *(uint *)(lVar15 + 0x1d8)) {
            puVar12 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8);
            if (puVar12 != (uint *)0x0) {
              local_68 = puVar12;
            }
          }
        }
      }
      uVar10 = FUN_01af0020(&local_78);
      if ((uVar10 & 1) != 0) {
        iVar8 = FUN_01af02d0(&local_78);
        goto LAB_0231e2b4;
      }
      local_88 = (undefined *)CONCAT44(local_88._4_4_,0x59);
      if (local_68 == (uint *)0x0) goto LAB_0231e1a8;
      uVar7 = *local_68;
      uVar13 = 0;
      if ((uVar7 != 0) && (local_68 != (uint *)(ulong)uVar7)) {
        puVar12 = (uint *)((long)local_68 - (long)(ulong)uVar7);
        uVar13 = 0;
        if (*puVar12 != 0) {
          uVar7 = puVar12[1];
          if ((uVar7 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar12 + lVar15 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar15 != 0) {
              uVar2 = 0;
              if ((ulong)uVar7 != 0) {
                uVar2 = (uint)((ulong)((long)local_68 - lVar15) / (ulong)uVar7);
              }
              if (*puVar12 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar13 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar13 < 0xbd))
              goto LAB_0231e0e8;
            }
          }
          uVar13 = 0;
        }
      }
LAB_0231e0e8:
      if (uVar13 == 0x59) {
        iVar8 = FUN_01aedd20(&local_78);
        goto LAB_0231e2b4;
      }
      uVar7 = *local_68;
      if ((uVar7 == 0) || (local_68 == (uint *)(ulong)uVar7)) {
LAB_0231e1a8:
        uVar10 = FUN_01ad673c(&local_78);
        if ((uVar10 & 1) == 0) {
          if (local_68 != (uint *)0x0) {
            uVar7 = *local_68;
            iVar8 = 1;
            if ((uVar7 != 0) && (local_68 != (uint *)(ulong)uVar7)) {
              puVar12 = (uint *)((long)local_68 - (long)(ulong)uVar7);
              if ((*puVar12 != 0) &&
                 ((uVar7 = puVar12[1], uVar7 != 0 && ((ulong)(ushort)puVar12[2] != 0)))) {
                lVar15 = 0xc;
                if (*(char *)((long)puVar12 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar12 + lVar15 + (ulong)(ushort)puVar12[2] * 8;
                if (lVar15 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar2 = (uint)((ulong)((long)local_68 - lVar15) / (ulong)uVar7);
                  }
                  if (*puVar12 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_05326ec0) &&
                     (*(short *)(DAT_05326ec8 + (long)(int)uVar2 * 2) == 2)) {
                    lVar15 = FUN_0251e98c(1);
                    piVar11 = (int *)(**(code **)(*(long *)(lVar15 + 0x2cb0) + 0xf0))
                                               (lVar15 + 0x2cb0);
                    iVar8 = *piVar11;
                  }
                }
              }
            }
            goto LAB_0231e2b4;
          }
          goto LAB_0231e2b0;
        }
      }
      else {
        puVar12 = (uint *)((long)local_68 - (long)(ulong)uVar7);
        if ((*puVar12 == 0) ||
           ((uVar7 = puVar12[1], uVar7 == 0 || ((ulong)(ushort)puVar12[2] == 0))))
        goto LAB_0231e1a8;
        lVar15 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar12 + lVar15 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar15 == 0) goto LAB_0231e1a8;
        uVar2 = 0;
        if ((ulong)uVar7 != 0) {
          uVar2 = (uint)((ulong)((long)local_68 - lVar15) / (ulong)uVar7);
        }
        if (*puVar12 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((DAT_05326ec0 <= uVar2) || (*(short *)(DAT_05326ec8 + (long)(int)uVar2 * 2) != 1))
        goto LAB_0231e1a8;
      }
      lVar15 = FUN_0251e98c(1);
      piVar11 = (int *)(**(code **)(*(long *)(lVar15 + 0x2c80) + 0xf0))(lVar15 + 0x2c80);
      iVar8 = *piVar11;
      local_88 = puVar3 + 0x10;
      pcStack_80 = "PlayerDoneEating";
      FUN_0274bfe8(pbVar1,&local_88,1);
      goto LAB_0231e2b4;
    }
  }
LAB_0231e2b0:
  iVar8 = 1;
LAB_0231e2b4:
  local_78 = (undefined **)(puVar3 + 0x10);
  local_70 = "TodayFortune";
  puVar12 = (uint *)(lVar14 + (ulong)uVar6 * 0x13f0 + 8);
  iVar9 = FUN_0274bce0(pbVar1,&local_78);
  iVar8 = iVar8 << (iVar9 == 7);
  if (iVar9 == 8) {
    iVar9 = iVar8 + 2;
    if (-2 < iVar8) {
      iVar9 = iVar8 + 1;
    }
    iVar8 = iVar9 >> 1;
    if (iVar8 < 2) {
      iVar8 = 1;
    }
  }
  uVar7 = *puVar12 + iVar8;
  bVar5 = false;
  if (DAT_0537d558 != 0) {
    if (*(long *)(DAT_0537d558 + 0x28) == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = *(int *)(DAT_0537d558 + 0x80) == 1;
    }
  }
  if (9 < (int)uVar7) {
    uVar7 = 10;
  }
  *(bool *)(lVar14 + (ulong)uVar6 * 0x13f0 + 0xc) = bVar5;
  *puVar12 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  return;
}

