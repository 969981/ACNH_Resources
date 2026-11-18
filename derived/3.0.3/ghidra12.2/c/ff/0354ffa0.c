
int FUN_0354ffa0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar10 = DAT_05ab5ea8;
  puVar5 = PTR_DAT_04bb43c0;
  iVar7 = -1;
  plVar1 = (long *)(param_1 + 0x1c370);
  uVar6 = *(uint *)(param_1 + 0x1c288);
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0x1c270))) {
    lVar9 = param_1 + 0x1c260;
    uVar3 = uVar6 + 1 & 3;
    if (2 < uVar6) {
      uVar6 = uVar6 + 1 & 0xfffffffc;
      do {
        uVar6 = uVar6 - 4;
        lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 8) + 8) + 8) + 8);
      } while (uVar6 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      lVar9 = *(long *)(lVar9 + 8);
    }
    iVar7 = -1;
    if ((lVar9 != 0) && (lVar9 = lVar9 - *(int *)(param_1 + 0x1c274), lVar9 != 0)) {
      iVar7 = *(int *)(lVar9 + 0x270);
    }
  }
  local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar7);
  if (iVar7 - 8U < 2) {
    piVar8 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
    iVar7 = *piVar8 + 1;
  }
  else if (iVar7 == 0x77) {
    iVar7 = 0;
    if (DAT_05ab5ea8 != 0) {
      iVar4 = *(int *)(*(long *)(*(long *)(param_1 + 0x228) + 0x570) + 0x2e8);
      if (DAT_05aed670 == 0) {
        puVar12 = &DAT_055c04a0;
      }
      else {
        puVar12 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar12 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar7 = FUN_006bd550(*puVar12,0);
          puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar7 != 0x758f7eaf) {
            puVar12 = &DAT_055c04a0;
          }
        }
      }
      iVar7 = *(int *)(puVar12 + 7);
      if ((((((DAT_05ac0a90 == iVar7) || (DAT_05ac0aa0 == iVar7)) || (DAT_05ac0ab0 == iVar7)) ||
           ((DAT_05ac0ac0 == iVar7 || (DAT_05ac0ad0 == iVar7)))) ||
          ((DAT_05ac0ae0 == iVar7 || ((DAT_05ac0af0 == iVar7 || (DAT_05ac0b00 == iVar7)))))) ||
         ((DAT_05ac0b10 == iVar7 || (DAT_05ac0b20 == iVar7)))) {
        piVar8 = (int *)FUN_036e50d0(lVar10);
      }
      else {
        piVar8 = (int *)(lVar10 + 0x40);
      }
      iVar7 = 0;
      if (iVar4 != 0) {
        iVar7 = (iVar4 + *piVar8 + -1) / iVar4;
      }
      iVar7 = iVar7 * iVar4;
    }
    piVar8 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
    iVar7 = *piVar8 + iVar7;
  }
  else if (iVar7 == 0x78) {
    iVar4 = *(int *)(param_1 + 0x108ec8);
    puVar12 = *(undefined8 **)(param_1 + 0x108ed0);
    if (*(int *)(param_1 + 0x23c) == 1) {
      iVar7 = 0;
      if (iVar4 != 0) {
        lVar10 = (long)iVar4 << 3;
        do {
          uVar6 = FUN_03551b90(*puVar12);
          lVar10 = lVar10 + -8;
          iVar7 = iVar7 + (uVar6 & 1);
          puVar12 = puVar12 + 1;
        } while (lVar10 != 0);
      }
    }
    else {
      iVar7 = 0;
      if (iVar4 != 0) {
        lVar10 = (long)iVar4 << 3;
        puVar2 = PTR_DAT_04bc0510 + 0x10;
        lVar9 = *(long *)PTR_DAT_04bb43c0;
        do {
          puVar11 = (undefined4 *)*puVar12;
          uVar6 = FUN_0277d6c4(puVar11);
          lVar13 = *(long *)puVar5;
          if (lVar13 != 0) {
            lVar9 = *(long *)(lVar9 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
              local_70 = *puVar11;
              local_6c = puVar11[1];
              local_68 = 0;
              local_78 = puVar2;
              uVar6 = FUN_0277d6c4(&local_70);
              if (*(long *)puVar5 != 0) {
                lVar9 = *(long *)(lVar13 + 0x57e58);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
                if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                  lVar9 = *(long *)PTR_DAT_04bc0428;
                  uVar6 = FUN_0277d6c4(puVar11);
                  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
                  if (uVar6 < *(uint *)(lVar9 + 0x1d8)) {
                    lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8);
                    if (lVar9 != 0) {
                      local_68 = lVar9;
                    }
                  }
                }
              }
              uVar6 = FUN_01af7d10(&local_78);
              lVar13 = *(long *)puVar5;
              iVar7 = iVar7 + (uVar6 & 1);
            }
          }
          puVar12 = puVar12 + 1;
          lVar10 = lVar10 + -8;
          lVar9 = lVar13;
        } while (lVar10 != 0);
      }
    }
  }
  else {
    piVar8 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
    iVar7 = *piVar8;
  }
  return iVar7;
}

