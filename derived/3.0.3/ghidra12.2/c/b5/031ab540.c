
void FUN_031ab540(long param_1,uint param_2,int param_3,uint param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *local_90;
  undefined4 local_88;
  uint local_84;
  uint local_80;
  undefined2 local_7c;
  undefined8 local_7a;
  undefined8 local_70;
  undefined4 local_68;
  byte local_64;
  
  lVar11 = *(long *)(*(long *)(param_1 + 0x210) + 0x580);
  if (lVar11 != 0) {
    local_88 = *(undefined4 *)(*(long *)(param_1 + 600) + 8);
    local_7a = 0x101000001;
    local_70 = 0xc00000000;
    local_90 = PTR_DAT_04bc9c78 + 0x10;
    if ((int)param_2 < 0) {
      local_84 = 0;
      local_80 = 0;
    }
    else {
      local_84 = param_2;
      local_80 = param_2;
      if (-1 < param_3) {
        iVar15 = *(int *)(lVar11 + 0x2e8);
        iVar9 = 0;
        if (iVar15 != 0) {
          iVar9 = (int)param_2 / iVar15;
        }
        local_84 = iVar9 * iVar15 - iVar15 * param_3;
        local_84 = local_84 & ((int)local_84 >> 0x1f ^ 0xffffffffU);
      }
    }
    local_7c = 0x100;
    local_64 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_64) {
      local_64 = 0xff;
    }
    local_68 = 3;
    FUN_03864290(lVar11,&local_90);
    puVar6 = PTR_DAT_04bc4d98;
    puVar5 = PTR_DAT_04bc4d90;
    iVar15 = *(int *)(*(long *)(param_1 + 600) + 8);
    if (iVar15 != 0) {
      lVar17 = *(long *)(*(long *)(param_1 + 600) + 0x10);
      lVar16 = 0;
      lVar18 = (long)iVar15 << 3;
      puVar1 = PTR_DAT_04bc4da0 + 0x10;
      do {
        iVar15 = (int)lVar16;
        if (iVar15 < *(int *)(lVar11 + 0x3d4)) {
          iVar9 = *(int *)(lVar11 + 0x430) - *(int *)(lVar11 + 0x438);
          if ((*(byte *)(lVar11 + 1000) >> 1 & 1) != 0) {
            uVar2 = *(uint *)(lVar11 + 0x434);
            uVar12 = 0;
            if ((int)uVar2 < iVar9) {
              uVar12 = ~uVar2;
            }
            if (iVar9 < 0) {
              uVar12 = uVar2 + 1;
            }
            iVar9 = uVar12 + iVar9;
          }
          iVar3 = *(int *)(lVar11 + 0x2e8);
          iVar4 = 0;
          if (iVar3 != 0) {
            iVar4 = iVar15 / iVar3;
          }
          uVar2 = *(uint *)(lVar11 + 0x208);
          uVar12 = iVar15 + ((iVar4 - iVar9) * iVar3 - iVar4 * iVar3);
          bVar8 = (int)uVar12 < 0;
          bVar7 = (int)uVar2 <= (int)uVar12;
          if (bVar8 || bVar7) {
            uVar12 = 0xffffffff;
          }
          if ((((bVar8 || bVar7) || (int)uVar2 <= (int)uVar12) || uVar2 < uVar12) ||
              ((!bVar8 && !bVar7) && (int)uVar12 < (int)uVar2) && uVar2 == uVar12)
          goto LAB_031ab714;
          puVar14 = *(undefined8 **)(*(long *)(lVar11 + 0x210) + (ulong)uVar12 * 8);
        }
        else {
LAB_031ab714:
          puVar14 = (undefined8 *)0x0;
        }
        uVar13 = *(undefined8 *)(lVar17 + lVar16 * 8);
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          *(undefined **)puVar5 = puVar1;
          __cxa_guard_release(puVar6);
        }
        if (puVar14 == (undefined8 *)0x0) {
          puVar14 = (undefined8 *)0x0;
        }
        else {
          uVar10 = (**(code **)*puVar14)(puVar14,puVar5);
          if ((uVar10 & 1) == 0) {
            puVar14 = (undefined8 *)0x0;
          }
        }
        uVar12 = 0xffffffff;
        if (iVar15 < *(int *)(lVar11 + 0x3d4)) {
          iVar9 = *(int *)(lVar11 + 0x430) - *(int *)(lVar11 + 0x438);
          if ((*(byte *)(lVar11 + 1000) >> 1 & 1) != 0) {
            uVar2 = *(uint *)(lVar11 + 0x434);
            uVar12 = 0;
            if ((int)uVar2 < iVar9) {
              uVar12 = ~uVar2;
            }
            if (iVar9 < 0) {
              uVar12 = uVar2 + 1;
            }
            iVar9 = uVar12 + iVar9;
          }
          iVar3 = *(int *)(lVar11 + 0x2e8);
          iVar4 = 0;
          if (iVar3 != 0) {
            iVar4 = iVar15 / iVar3;
          }
          uVar12 = iVar15 + ((iVar4 - iVar9) * iVar3 - iVar4 * iVar3);
          if (*(int *)(lVar11 + 0x208) <= (int)uVar12 || 0x7fffffff < uVar12) {
            uVar12 = 0xffffffff;
          }
        }
        FUN_031ab8cc(param_1,puVar14,uVar13,uVar12);
        lVar16 = lVar16 + 1;
        lVar18 = lVar18 + -8;
      } while (lVar18 != 0);
      if (0 < *(int *)(*(long *)(param_1 + 600) + 8)) {
        bVar7 = *(int *)(lVar11 + 0x2f8) == 0 || *(int *)(lVar11 + 0x208) == 0;
        if ((param_4 & 1) == 0) {
          if (bVar7) {
            return;
          }
          if (*(long *)(lVar11 + 0x270) == 0) {
            return;
          }
          if (*(long *)(*(long *)(lVar11 + 0x270) + 8) == 0) {
            return;
          }
          if ((*(long *)(lVar11 + 0x480) != 0) && (*(int *)(*(long *)(lVar11 + 0x480) + 0x14) == -1)
             ) {
            return;
          }
          if (*(long *)(lVar11 + 0x2d8) == 0) {
            return;
          }
          if (*(int *)(lVar11 + 0x3d8) < 1) {
            return;
          }
          if (*(int *)(lVar11 + 0x3d4) == 0) {
            return;
          }
          if (*(int *)(lVar11 + 0x298) == 2) {
            return;
          }
          uVar13 = 2;
        }
        else {
          if (bVar7) {
            return;
          }
          if (*(long *)(lVar11 + 0x270) == 0) {
            return;
          }
          if (*(long *)(*(long *)(lVar11 + 0x270) + 8) == 0) {
            return;
          }
          if ((*(long *)(lVar11 + 0x480) != 0) && (*(int *)(*(long *)(lVar11 + 0x480) + 0x14) == -1)
             ) {
            return;
          }
          if (*(long *)(lVar11 + 0x2d8) == 0) {
            return;
          }
          if (*(int *)(lVar11 + 0x3d8) < 1) {
            return;
          }
          if (*(int *)(lVar11 + 0x3d4) == 0) {
            return;
          }
          if (1 < *(uint *)(lVar11 + 0x298)) {
            return;
          }
          uVar13 = 3;
          *(undefined4 *)(lVar11 + 0x2e4) = 0;
        }
        FUN_03ebb160(lVar11 + 0x290,uVar13);
      }
    }
  }
  return;
}

