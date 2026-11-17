
int FUN_02e992d0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  puVar3 = PTR_DAT_04bb43c0;
  iVar8 = -1;
  uVar4 = *(uint *)(param_1 + 0x1c1f8);
  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x1c1e0))) {
    lVar7 = param_1 + 0x1c1d0;
    uVar2 = uVar4 + 1 & 3;
    if (2 < uVar4) {
      uVar4 = uVar4 + 1 & 0xfffffffc;
      do {
        uVar4 = uVar4 - 4;
        lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 8) + 8);
      } while (uVar4 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      lVar7 = *(long *)(lVar7 + 8);
    }
    iVar8 = -1;
    if ((lVar7 != 0) && (lVar7 = lVar7 - *(int *)(param_1 + 0x1c1e4), lVar7 != 0)) {
      iVar8 = *(int *)(lVar7 + 0x270);
    }
  }
  local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar8);
  if (iVar8 - 8U < 2) {
    piVar5 = (int *)(**(code **)(*(long *)(param_1 + 0x1ee50) + 0x18))();
    iVar8 = *piVar5 + 1;
  }
  else if ((iVar8 == 0x91) || (iVar8 != 0x78)) {
    piVar5 = (int *)(**(code **)(*(long *)(param_1 + 0x1ee50) + 0x18))();
    iVar8 = *piVar5;
  }
  else if (*(int *)(param_1 + 0x1eb10) == 0) {
    iVar8 = 0;
  }
  else {
    puVar10 = *(undefined8 **)(param_1 + 0x1eb18);
    lVar7 = (long)*(int *)(param_1 + 0x1eb10) << 3;
    iVar8 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    do {
      puVar9 = (undefined4 *)*puVar10;
      uVar4 = FUN_0277d6c4(puVar9);
      lVar11 = *(long *)puVar3;
      if (lVar11 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          local_70 = *puVar9;
          local_6c = puVar9[1];
          local_68 = 0;
          local_78 = puVar1;
          uVar4 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar3 != 0) {
            lVar6 = *(long *)(lVar11 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              lVar6 = *(long *)PTR_DAT_04bc0428;
              uVar4 = FUN_0277d6c4(puVar9);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
              if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
                 (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8), lVar6 != 0)) {
                local_68 = lVar6;
              }
            }
          }
          uVar4 = FUN_01af7d10(&local_78);
          lVar11 = *(long *)puVar3;
          iVar8 = iVar8 + (uVar4 & 1);
        }
      }
      puVar10 = puVar10 + 1;
      lVar7 = lVar7 + -8;
      lVar6 = lVar11;
    } while (lVar7 != 0);
  }
  return iVar8;
}

