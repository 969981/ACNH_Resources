
/* WARNING: Removing unreachable block (ram,0x03776ff0) */

long FUN_03776f00(void)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined *local_30;
  undefined2 local_28;
  
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
  if (iVar7 == -0x7975b8e8 || iVar7 == -0x3e092032) {
    if (iVar7 == -0x7975b8e8) {
      uVar9 = 0;
    }
    else {
      if (iVar7 != -0x3e092032) goto LAB_03777220;
      uVar9 = 1;
    }
    local_30 = PTR_DAT_04bb7648 + 0x10;
    local_28 = *DAT_05ab5ea8;
    lVar8 = FUN_03775a30(&local_30);
    if (lVar8 == 0) {
      return 0;
    }
    lVar8 = lVar8 + 0x380;
    lVar10 = lVar8 + (ulong)uVar9 * 0x658;
    bVar2 = 1 < uVar9;
LAB_037770cc:
    if (bVar2) {
      lVar10 = lVar8;
    }
  }
  else {
    if (iVar7 == 0x10cdc40c) {
      lVar8 = 0;
      if (DAT_05574040 != 0) {
        local_30 = (undefined *)CONCAT44(local_30._4_4_,1);
        if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
          lVar10 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
        }
        else {
          lVar10 = 0;
        }
        lVar8 = 0;
        if (lVar10 != 0) {
          lVar8 = lVar10 + 0x5d3cb0;
        }
      }
      lVar10 = 0;
      if (lVar8 != 0) {
        lVar10 = lVar8 + 0x230;
      }
      return lVar10;
    }
    if (DAT_05ac0a90 == iVar7) {
      piVar11 = &DAT_05ac0a94;
      lVar8 = 0;
LAB_03777034:
      iVar7 = *piVar11;
      uVar9 = (&DAT_05ac0a98)[lVar8 * 4];
      local_30 = (undefined *)CONCAT44(local_30._4_4_,iVar7);
      if ((iVar7 != 5) && (iVar7 != 6)) {
        lVar8 = FUN_03776400();
        if (lVar8 == 0) {
          return 0;
        }
        lVar8 = lVar8 + 0x70;
        lVar10 = lVar8 + (ulong)uVar9 * 0x658;
        bVar2 = 2 < uVar9;
        goto LAB_037770cc;
      }
    }
    else if ((((((DAT_05ac0aa0 == iVar7) || (DAT_05ac0ab0 == iVar7)) || (DAT_05ac0ac0 == iVar7)) ||
              ((DAT_05ac0ad0 == iVar7 || (DAT_05ac0ae0 == iVar7)))) ||
             ((DAT_05ac0af0 == iVar7 || ((DAT_05ac0b00 == iVar7 || (DAT_05ac0b10 == iVar7)))))) ||
            (DAT_05ac0b20 == iVar7)) {
      bVar2 = DAT_05ac0aa0 != iVar7;
      bVar3 = DAT_05ac0ab0 == iVar7;
      piVar1 = &DAT_05ac0ab4;
      if (!bVar3) {
        piVar1 = &DAT_05ac0ac4;
      }
      lVar8 = 2;
      if (!bVar3) {
        lVar8 = 3;
      }
      piVar11 = &DAT_05ac0aa4;
      if (DAT_05ac0aa0 == iVar7) {
        lVar8 = 1;
      }
      else {
        piVar11 = piVar1;
      }
      bVar4 = DAT_05ac0ac0 == iVar7;
      bVar5 = DAT_05ac0ad0 != iVar7;
      piVar1 = &DAT_05ac0ad4;
      if (bVar5) {
        piVar1 = &DAT_05ac0ae4;
      }
      lVar10 = 4;
      if (bVar5) {
        lVar10 = 5;
      }
      if (!bVar4 && (!bVar3 && bVar2)) {
        lVar8 = lVar10;
        piVar11 = piVar1;
      }
      bVar6 = DAT_05ac0af0 != iVar7;
      piVar1 = &DAT_05ac0af4;
      if (bVar6) {
        piVar1 = &DAT_05ac0b04;
      }
      lVar10 = 6;
      if (bVar6) {
        lVar10 = 7;
      }
      if (DAT_05ac0ae0 != iVar7 && (bVar5 && (!bVar4 && (!bVar3 && bVar2)))) {
        lVar8 = lVar10;
        piVar11 = piVar1;
      }
      piVar1 = &DAT_05ac0b14;
      if (DAT_05ac0b10 != iVar7) {
        piVar1 = &DAT_05ac0b24;
      }
      lVar10 = 8;
      if (DAT_05ac0b10 != iVar7) {
        lVar10 = 9;
      }
      if (!(DAT_05ac0b00 == iVar7 ||
           (!bVar6 || (DAT_05ac0ae0 == iVar7 || (!bVar5 || (bVar4 || (bVar3 || !bVar2))))))) {
        piVar11 = piVar1;
        lVar8 = lVar10;
        if ((DAT_05ac0b10 != iVar7) && (DAT_05ac0b20 != iVar7)) goto LAB_03777220;
      }
      goto LAB_03777034;
    }
LAB_03777220:
    lVar10 = 0;
  }
  return lVar10;
}

