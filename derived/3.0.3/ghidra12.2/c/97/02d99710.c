
int FUN_02d99710(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  puVar4 = PTR_DAT_04bb43c0;
  iVar9 = -1;
  uVar5 = *(uint *)(param_1 + 0x1c260);
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x1c248))) {
    lVar8 = param_1 + 0x1c238;
    uVar2 = uVar5 + 1 & 3;
    if (2 < uVar5) {
      uVar5 = uVar5 + 1 & 0xfffffffc;
      do {
        uVar5 = uVar5 - 4;
        lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(lVar8 + 8) + 8) + 8) + 8);
      } while (uVar5 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      lVar8 = *(long *)(lVar8 + 8);
    }
    iVar9 = -1;
    if ((lVar8 != 0) && (lVar8 = lVar8 - *(int *)(param_1 + 0x1c24c), lVar8 != 0)) {
      iVar9 = *(int *)(lVar8 + 0x270);
    }
  }
  local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar9);
  if (iVar9 - 8U < 2) {
    piVar6 = (int *)(**(code **)(*(long *)(param_1 + 0x1e4d0) + 0x18))();
    iVar9 = *piVar6 + 1;
  }
  else if (iVar9 == 0x6f) {
    if (*(int **)(param_1 + 0x108d90) == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = **(int **)(param_1 + 0x108d90);
    }
  }
  else if (iVar9 == 0x78) {
    iVar9 = 0;
    iVar3 = *(int *)(param_1 + 0x1c350);
    puVar11 = *(undefined8 **)(param_1 + 0x1c358);
    if (*(int *)(param_1 + 0x108b14) == 0) {
      if (iVar3 != 0) {
        lVar8 = (long)iVar3 << 3;
        puVar1 = PTR_DAT_04bc0510 + 0x10;
        lVar7 = *(long *)PTR_DAT_04bb43c0;
        do {
          puVar10 = (undefined4 *)*puVar11;
          uVar5 = FUN_0277d6c4(puVar10);
          lVar12 = *(long *)puVar4;
          if (lVar12 != 0) {
            lVar7 = *(long *)(lVar7 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
              local_70 = *puVar10;
              local_6c = puVar10[1];
              local_68 = 0;
              local_78 = puVar1;
              uVar5 = FUN_0277d6c4(&local_70);
              if (*(long *)puVar4 != 0) {
                lVar7 = *(long *)(lVar12 + 0x57e58);
                uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
                if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
                  lVar7 = *(long *)PTR_DAT_04bc0428;
                  uVar5 = FUN_0277d6c4(puVar10);
                  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
                  if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
                     (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8), lVar7 != 0
                     )) {
                    local_68 = lVar7;
                  }
                }
              }
              uVar5 = FUN_01af7d10(&local_78);
              lVar12 = *(long *)puVar4;
              iVar9 = iVar9 + (uVar5 & 1);
            }
          }
          puVar11 = puVar11 + 1;
          lVar8 = lVar8 + -8;
          lVar7 = lVar12;
        } while (lVar8 != 0);
      }
    }
    else if (iVar3 != 0) {
      lVar8 = (long)iVar3 << 3;
      do {
        uVar5 = FUN_02da4058(*puVar11);
        lVar8 = lVar8 + -8;
        iVar9 = iVar9 + (uVar5 & 1);
        puVar11 = puVar11 + 1;
      } while (lVar8 != 0);
    }
  }
  else {
    piVar6 = (int *)(**(code **)(*(long *)(param_1 + 0x1e4d0) + 0x18))();
    iVar9 = *piVar6;
  }
  return iVar9;
}

