
void FUN_024fcbd0(uint *param_1,long param_2,uint param_3)

{
  uint *puVar1;
  ushort *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  ushort uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint local_58;
  uint local_54;
  
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) {
LAB_024fcd18:
    param_1[0] = 0xfffe;
    param_1[1] = 0;
    puVar9 = param_1 + 0xc;
    puVar9[0] = 0;
    puVar9[1] = 0;
    puVar1 = param_1 + 10;
    puVar1[0] = 0;
    puVar1[1] = 0;
    puVar8 = param_1 + 8;
    puVar8[0] = 0;
    puVar8[1] = 0;
    puVar11 = param_1 + 6;
    puVar11[0] = 0;
    puVar11[1] = 0;
    puVar12 = param_1 + 4;
    puVar12[0] = 0;
    puVar12[1] = 0;
    puVar13 = param_1 + 2;
    puVar13[0] = 0;
    puVar13[1] = 0;
    FUN_0277d4ac(param_1);
    puVar13[0] = 0xfffe;
    puVar13[1] = 0;
    FUN_0277d4ac(puVar13);
    puVar12[0] = 0xfffe;
    puVar12[1] = 0;
    FUN_0277d4ac(puVar12);
    puVar11[0] = 0xfffe;
    puVar11[1] = 0;
    FUN_0277d4ac(puVar11);
    puVar8[0] = 0xfffe;
    puVar8[1] = 0;
    FUN_0277d4ac(puVar8);
    puVar1[0] = 0xfffe;
    puVar1[1] = 0;
    FUN_0277d4ac(puVar1);
    puVar9[0] = 0xfffe;
    puVar9[1] = 0;
    FUN_0277d4ac(puVar9);
    return;
  }
  if ((int)*(uint *)(lVar3 + 0x1c0) < 1) {
    if ((((*(long *)(lVar3 + 0xb0) == 0) ||
         (puVar9 = *(uint **)(*(long *)(lVar3 + 0xb0) + 8), puVar9 == (uint *)0x0)) ||
        ((param_3 < *(uint *)(lVar3 + 200) &&
         (*(char *)(*(long *)(lVar3 + 0xd0) + (long)(int)param_3) == '\0')))) ||
       (((*puVar9 <= param_3 || (puVar9[1] == 0)) || ((ushort)puVar9[2] == 0)))) goto LAB_024fcd18;
    iVar4 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar4 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * param_3 + (uint)(ushort)puVar9[2] * 8 + iVar4) +
                     (long)puVar9);
  }
  else {
    if (*(uint *)(lVar3 + 0x1c0) <= param_3) goto LAB_024fcd18;
    if (*(uint *)(lVar3 + 0x1b0) <= param_3) {
      param_3 = 0;
    }
    puVar9 = *(uint **)(*(long *)(lVar3 + 0x1b8) + (ulong)param_3 * 8);
  }
  if (puVar9 == (uint *)0x0) goto LAB_024fcd18;
  uVar10 = 0xfffe;
  param_1[0] = 0xfffe;
  param_1[1] = 0;
  FUN_0277d4ac(param_1);
  param_1[2] = 0xfffe;
  param_1[3] = 0;
  FUN_0277d4ac();
  param_1[4] = 0xfffe;
  param_1[5] = 0;
  FUN_0277d4ac();
  param_1[6] = 0xfffe;
  param_1[7] = 0;
  FUN_0277d4ac();
  param_1[8] = 0xfffe;
  param_1[9] = 0;
  FUN_0277d4ac();
  param_1[10] = 0xfffe;
  param_1[0xb] = 0;
  FUN_0277d4ac();
  param_1[0xc] = 0xfffe;
  param_1[0xd] = 0;
  FUN_0277d4ac();
  puVar1 = (uint *)(ulong)*puVar9;
  if (*puVar9 != 0) {
    if ((DAT_054ecca0 & 1) == 0) {
      DAT_054ecca0 = 1;
      DAT_054eccc4 = 0xffffffff;
      DAT_054ecca4 = 0xffffffffffffffff;
      DAT_054eccac = 0xffffffffffffffff;
      DAT_054eccac._4_4_ = 0xffffffff;
      DAT_054eccb4 = 0xffffffffffffffff;
      DAT_054eccbc = 0xffffffffffffffff;
LAB_024fcddc:
      uVar5 = DAT_054eccac._4_4_;
      if (puVar9 != puVar1) {
        do {
          if (uVar5 != 0xffffffff) goto LAB_024fcde4;
          lVar3 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar1)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar9 + (lVar3 - (long)puVar1);
          if (lVar3 == 0) goto LAB_024fcde4;
          uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar1));
          DAT_054eccac = CONCAT44(0xfffffffe,(uint)DAT_054eccac);
          if (uVar7 == 0) goto LAB_024fcde4;
          puVar8 = (uint *)(lVar3 + 4);
          while (puVar8[-1] != 0x291a1b04) {
            puVar8 = puVar8 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_024fcde4;
          }
          uVar5 = *puVar8;
          uVar6 = 0;
          if (uVar5 != 0xffffffff) {
            uVar6 = uVar5;
          }
          DAT_054eccac = CONCAT44(uVar6,(uint)DAT_054eccac);
        } while ((int)uVar6 < 0);
        goto joined_r0x024fd178;
      }
    }
    else {
      uVar6 = DAT_054eccac._4_4_;
      if ((long)DAT_054eccac < 0) goto LAB_024fcddc;
joined_r0x024fd178:
      if ((ushort *)((long)puVar9 + (ulong)uVar6) != (ushort *)0x0) {
        uVar10 = *(ushort *)((long)puVar9 + (ulong)uVar6);
        goto LAB_024fcde8;
      }
    }
LAB_024fcde4:
    uVar10 = 0xfffe;
  }
LAB_024fcde8:
  local_58 = (uint)uVar10;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  *param_1 = local_58;
  param_1[1] = local_54;
  puVar1 = (uint *)(ulong)*puVar9;
  if (*puVar9 == 0) {
LAB_024fce5c:
    uVar10 = 0xfffe;
  }
  else {
    if ((DAT_054ecca0 & 1) == 0) {
      DAT_054ecca0 = 1;
      DAT_054eccc4 = 0xffffffff;
      DAT_054ecca4 = 0xffffffffffffffff;
      DAT_054eccac = 0xffffffffffffffff;
      DAT_054ecca4._0_4_ = 0xffffffff;
      DAT_054eccb4 = 0xffffffffffffffff;
      DAT_054eccbc = 0xffffffffffffffff;
LAB_024fce54:
      uVar6 = (uint)DAT_054ecca4;
      if (puVar9 != puVar1) {
        do {
          if (uVar6 != 0xffffffff) goto LAB_024fce5c;
          lVar3 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar1)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar9 + (lVar3 - (long)puVar1);
          if (lVar3 == 0) goto LAB_024fce5c;
          uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar1));
          DAT_054ecca4 = CONCAT44(DAT_054ecca4._4_4_,0xfffffffe);
          if (uVar7 == 0) goto LAB_024fce5c;
          puVar8 = (uint *)(lVar3 + 4);
          while (puVar8[-1] != 0x2b57b24a) {
            puVar8 = puVar8 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_024fce5c;
          }
          uVar6 = *puVar8;
          uVar5 = 0;
          if (uVar6 != 0xffffffff) {
            uVar5 = uVar6;
          }
          DAT_054ecca4 = CONCAT44(DAT_054ecca4._4_4_,uVar5);
        } while ((int)uVar5 < 0);
        puVar2 = (ushort *)((long)puVar9 + (ulong)uVar5);
        if (puVar2 != (ushort *)0x0) goto LAB_024fce28;
      }
      goto LAB_024fce5c;
    }
    if ((int)(uint)DAT_054ecca4 < 0) goto LAB_024fce54;
    puVar2 = (ushort *)((long)puVar9 + (DAT_054ecca4 & 0xffffffff));
    if (puVar2 == (ushort *)0x0) goto LAB_024fce5c;
LAB_024fce28:
    uVar10 = *puVar2;
  }
  local_58 = (uint)uVar10;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  param_1[2] = local_58;
  param_1[3] = local_54;
  puVar1 = (uint *)(ulong)*puVar9;
  if (*puVar9 == 0) {
LAB_024fced4:
    uVar10 = 0xfffe;
  }
  else {
    if ((DAT_054ecca0 & 1) == 0) {
      DAT_054ecca0 = 1;
      DAT_054eccc4 = 0xffffffff;
      DAT_054ecca4 = 0xffffffffffffffff;
      DAT_054eccac = 0xffffffffffffffff;
      DAT_054ecca4._4_4_ = 0xffffffff;
      DAT_054eccb4 = 0xffffffffffffffff;
      DAT_054eccbc = 0xffffffffffffffff;
LAB_024fcecc:
      uVar6 = DAT_054ecca4._4_4_;
      if (puVar9 != puVar1) {
        do {
          if (uVar6 != 0xffffffff) goto LAB_024fced4;
          lVar3 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar1)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar9 + (lVar3 - (long)puVar1);
          if (lVar3 == 0) goto LAB_024fced4;
          uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar1));
          DAT_054ecca4 = CONCAT44(0xfffffffe,(uint)DAT_054ecca4);
          if (uVar7 == 0) goto LAB_024fced4;
          puVar8 = (uint *)(lVar3 + 4);
          while (puVar8[-1] != 0x9403c267) {
            puVar8 = puVar8 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_024fced4;
          }
          uVar6 = *puVar8;
          uVar5 = 0;
          if (uVar6 != 0xffffffff) {
            uVar5 = uVar6;
          }
          DAT_054ecca4 = CONCAT44(uVar5,(uint)DAT_054ecca4);
        } while ((int)uVar5 < 0);
        puVar2 = (ushort *)((long)puVar9 + (ulong)uVar5);
        if (puVar2 != (ushort *)0x0) goto LAB_024fcea0;
      }
      goto LAB_024fced4;
    }
    if ((long)DAT_054ecca4 < 0) goto LAB_024fcecc;
    puVar2 = (ushort *)((long)puVar9 + (ulong)DAT_054ecca4._4_4_);
    if (puVar2 == (ushort *)0x0) goto LAB_024fced4;
LAB_024fcea0:
    uVar10 = *puVar2;
  }
  local_58 = (uint)uVar10;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  param_1[4] = local_58;
  param_1[5] = local_54;
  puVar1 = (uint *)(ulong)*puVar9;
  if (*puVar9 == 0) {
LAB_024fcf4c:
    uVar10 = 0xfffe;
  }
  else {
    if ((DAT_054ecca0 & 1) == 0) {
      DAT_054ecca0 = 1;
      DAT_054eccc4 = 0xffffffff;
      DAT_054ecca4 = 0xffffffffffffffff;
      DAT_054eccac = 0xffffffffffffffff;
      DAT_054eccbc._0_4_ = 0xffffffff;
      DAT_054eccb4 = 0xffffffffffffffff;
      DAT_054eccbc = 0xffffffffffffffff;
LAB_024fcf44:
      uVar6 = (uint)DAT_054eccbc;
      if (puVar9 != puVar1) {
        do {
          if (uVar6 != 0xffffffff) goto LAB_024fcf4c;
          lVar3 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar1)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar9 + (lVar3 - (long)puVar1);
          if (lVar3 == 0) goto LAB_024fcf4c;
          uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar1));
          DAT_054eccbc = CONCAT44(DAT_054eccbc._4_4_,0xfffffffe);
          if (uVar7 == 0) goto LAB_024fcf4c;
          puVar8 = (uint *)(lVar3 + 4);
          while (puVar8[-1] != 0x870f1e29) {
            puVar8 = puVar8 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_024fcf4c;
          }
          uVar6 = *puVar8;
          uVar5 = 0;
          if (uVar6 != 0xffffffff) {
            uVar5 = uVar6;
          }
          DAT_054eccbc = CONCAT44(DAT_054eccbc._4_4_,uVar5);
        } while ((int)uVar5 < 0);
        puVar2 = (ushort *)((long)puVar9 + (ulong)uVar5);
        if (puVar2 != (ushort *)0x0) goto LAB_024fcf18;
      }
      goto LAB_024fcf4c;
    }
    if ((int)(uint)DAT_054eccbc < 0) goto LAB_024fcf44;
    puVar2 = (ushort *)((long)puVar9 + (DAT_054eccbc & 0xffffffff));
    if (puVar2 == (ushort *)0x0) goto LAB_024fcf4c;
LAB_024fcf18:
    uVar10 = *puVar2;
  }
  local_58 = (uint)uVar10;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  param_1[6] = local_58;
  param_1[7] = local_54;
  puVar1 = (uint *)(ulong)*puVar9;
  if (*puVar9 == 0) {
LAB_024fcfc4:
    uVar10 = 0xfffe;
  }
  else {
    if ((DAT_054ecca0 & 1) == 0) {
      DAT_054ecca0 = 1;
      DAT_054eccc4 = 0xffffffff;
      DAT_054ecca4 = 0xffffffffffffffff;
      DAT_054eccac = 0xffffffffffffffff;
      DAT_054eccac._0_4_ = 0xffffffff;
      DAT_054eccb4 = 0xffffffffffffffff;
      DAT_054eccbc = 0xffffffffffffffff;
LAB_024fcfbc:
      uVar6 = (uint)DAT_054eccac;
      if (puVar9 != puVar1) {
        do {
          if (uVar6 != 0xffffffff) goto LAB_024fcfc4;
          lVar3 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar1)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar9 + (lVar3 - (long)puVar1);
          if (lVar3 == 0) goto LAB_024fcfc4;
          uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar1));
          DAT_054eccac = CONCAT44(DAT_054eccac._4_4_,0xfffffffe);
          if (uVar7 == 0) goto LAB_024fcfc4;
          puVar8 = (uint *)(lVar3 + 4);
          while (puVar8[-1] != 0xcc136eb5) {
            puVar8 = puVar8 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_024fcfc4;
          }
          uVar6 = *puVar8;
          uVar5 = 0;
          if (uVar6 != 0xffffffff) {
            uVar5 = uVar6;
          }
          DAT_054eccac = CONCAT44(DAT_054eccac._4_4_,uVar5);
        } while ((int)uVar5 < 0);
        puVar2 = (ushort *)((long)puVar9 + (ulong)uVar5);
        if (puVar2 != (ushort *)0x0) goto LAB_024fcf90;
      }
      goto LAB_024fcfc4;
    }
    if ((int)(uint)DAT_054eccac < 0) goto LAB_024fcfbc;
    puVar2 = (ushort *)((long)puVar9 + (DAT_054eccac & 0xffffffff));
    if (puVar2 == (ushort *)0x0) goto LAB_024fcfc4;
LAB_024fcf90:
    uVar10 = *puVar2;
  }
  local_58 = (uint)uVar10;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  param_1[8] = local_58;
  param_1[9] = local_54;
  puVar1 = (uint *)(ulong)*puVar9;
  if (*puVar9 == 0) {
LAB_024fd03c:
    uVar10 = 0xfffe;
  }
  else {
    if ((DAT_054ecca0 & 1) == 0) {
      DAT_054ecca0 = 1;
      DAT_054eccc4 = 0xffffffff;
      DAT_054ecca4 = 0xffffffffffffffff;
      DAT_054eccac = 0xffffffffffffffff;
      DAT_054eccb4._4_4_ = 0xffffffff;
      DAT_054eccb4 = 0xffffffffffffffff;
      DAT_054eccbc = 0xffffffffffffffff;
LAB_024fd034:
      uVar6 = DAT_054eccb4._4_4_;
      if (puVar9 != puVar1) {
        do {
          if (uVar6 != 0xffffffff) goto LAB_024fd03c;
          lVar3 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar1)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar9 + (lVar3 - (long)puVar1);
          if (lVar3 == 0) goto LAB_024fd03c;
          uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar1));
          DAT_054eccb4 = CONCAT44(0xfffffffe,(uint)DAT_054eccb4);
          if (uVar7 == 0) goto LAB_024fd03c;
          puVar8 = (uint *)(lVar3 + 4);
          while (puVar8[-1] != 0x39ed7f5a) {
            puVar8 = puVar8 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_024fd03c;
          }
          uVar6 = *puVar8;
          uVar5 = 0;
          if (uVar6 != 0xffffffff) {
            uVar5 = uVar6;
          }
          DAT_054eccb4 = CONCAT44(uVar5,(uint)DAT_054eccb4);
        } while ((int)uVar5 < 0);
        puVar2 = (ushort *)((long)puVar9 + (ulong)uVar5);
        if (puVar2 != (ushort *)0x0) goto LAB_024fd008;
      }
      goto LAB_024fd03c;
    }
    if ((long)DAT_054eccb4 < 0) goto LAB_024fd034;
    puVar2 = (ushort *)((long)puVar9 + (ulong)DAT_054eccb4._4_4_);
    if (puVar2 == (ushort *)0x0) goto LAB_024fd03c;
LAB_024fd008:
    uVar10 = *puVar2;
  }
  local_58 = (uint)uVar10;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  param_1[10] = local_58;
  param_1[0xb] = local_54;
  puVar1 = (uint *)(ulong)*puVar9;
  if (*puVar9 != 0) {
    if ((DAT_054ecca0 & 1) != 0) {
      if ((int)(uint)DAT_054eccb4 < 0) goto LAB_024fd0ac;
      puVar2 = (ushort *)((long)puVar9 + (DAT_054eccb4 & 0xffffffff));
      if (puVar2 == (ushort *)0x0) goto LAB_024fd0b4;
LAB_024fd080:
      uVar10 = *puVar2;
      goto LAB_024fd0b8;
    }
    DAT_054ecca0 = 1;
    DAT_054eccc4 = 0xffffffff;
    DAT_054ecca4 = 0xffffffffffffffff;
    DAT_054eccac = 0xffffffffffffffff;
    DAT_054eccb4._0_4_ = 0xffffffff;
    DAT_054eccb4 = 0xffffffffffffffff;
    DAT_054eccbc = 0xffffffffffffffff;
LAB_024fd0ac:
    uVar6 = (uint)DAT_054eccb4;
    if (puVar9 != puVar1) {
      do {
        if (uVar6 != 0xffffffff) goto LAB_024fd0b4;
        lVar3 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar1)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar9 + (lVar3 - (long)puVar1);
        if (lVar3 == 0) goto LAB_024fd0b4;
        uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar1));
        DAT_054eccb4 = CONCAT44(DAT_054eccb4._4_4_,0xfffffffe);
        if (uVar7 == 0) goto LAB_024fd0b4;
        puVar8 = (uint *)(lVar3 + 4);
        while (puVar8[-1] != 0xce827d47) {
          puVar8 = puVar8 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) goto LAB_024fd0b4;
        }
        uVar6 = *puVar8;
        uVar5 = 0;
        if (uVar6 != 0xffffffff) {
          uVar5 = uVar6;
        }
        DAT_054eccb4 = CONCAT44(DAT_054eccb4._4_4_,uVar5);
      } while ((int)uVar5 < 0);
      puVar2 = (ushort *)((long)puVar9 + (ulong)uVar5);
      if (puVar2 != (ushort *)0x0) goto LAB_024fd080;
    }
  }
LAB_024fd0b4:
  uVar10 = 0xfffe;
LAB_024fd0b8:
  local_58 = (uint)uVar10;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  param_1[0xc] = local_58;
  param_1[0xd] = local_54;
  return;
}

