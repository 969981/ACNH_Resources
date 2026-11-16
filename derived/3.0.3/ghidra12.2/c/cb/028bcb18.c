
/* WARNING: Removing unreachable block (ram,0x028bd018) */
/* WARNING: Removing unreachable block (ram,0x028bcfd4) */
/* WARNING: Removing unreachable block (ram,0x028bcff4) */
/* WARNING: Removing unreachable block (ram,0x028bd048) */

void FUN_028bcb18(ulong param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 local_a0 [2];
  undefined8 *local_98;
  undefined8 local_90;
  char *local_88;
  long local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  uint local_5c;
  uint local_58;
  
  puVar1 = PTR_DAT_04bb46b0;
  lVar12 = *(long *)PTR_DAT_04bb46b0;
  if ((param_1 & 1) != 0) {
    if (lVar12 == 0) {
      return;
    }
    uVar2 = FUN_026ef5fc(lVar12);
    if (7 < uVar2) {
      return;
    }
    lVar12 = *(long *)puVar1;
    if (lVar12 == 0) {
      return;
    }
    puVar6 = *(undefined8 **)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
      lVar12 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar12 == 0) {
        return;
      }
      lVar12 = lVar12 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return;
      }
      lVar12 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar12 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar12 + 0xe7140) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar12 + 0xe7140), puVar6 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar6)();
      uVar3 = uVar3 ^ 1;
    }
    lVar13 = *(long *)(lVar12 + 0xe7128) + *(long *)(lVar12 + 0xe7120);
    plVar10 = (long *)(lVar13 + (ulong)uVar2 * 0x48);
    if (*plVar10 != 0 || plVar10[1] != 0) {
      lVar13 = lVar13 + (ulong)uVar2 * 0x48;
      local_90 = PTR_DAT_04bb2020 + 0x10;
      local_88 = "LE_PlayerVillager_MoveOut";
      lVar7 = *(long *)PTR_DAT_04bb49a0;
      local_a0[0] = FUN_006bd550("LE_PlayerVillager_MoveOut",0);
      uVar4 = FUN_01b5b650(lVar7 + 0x238,local_a0);
      FUN_01b5cf20(&local_90,uVar4,0,lVar13 + 0x2c,0);
      local_80 = *(undefined8 *)(lVar13 + 0x20);
      local_90 = *(undefined **)(lVar13 + 0x10);
      local_88 = *(char **)(lVar13 + 0x18);
      local_78 = CONCAT31(local_78._1_3_,*(undefined1 *)(lVar13 + 0x28));
      local_64 = (undefined4)*(undefined8 *)(lVar13 + 0x3c);
      uStack_60 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x3c) >> 0x20);
      local_6c = (undefined4)*(undefined8 *)(lVar13 + 0x34);
      uStack_68 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x34) >> 0x20);
      local_74 = (undefined4)*(undefined8 *)(lVar13 + 0x2c);
      uStack_70 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x2c) >> 0x20);
      local_5c = *(uint *)(lVar13 + 0x44);
      if (1 < local_5c) {
        local_5c = 0;
      }
      local_a0[0] = 1;
      local_98 = &local_90;
      local_58 = uVar2;
      FUN_0281cb30(local_a0);
    }
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (*(long *)(lVar12 + 0xe7140) == 0) {
      return;
    }
    puVar6 = *(undefined8 **)(*(long *)(lVar12 + 0xe7140) + 8);
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar6)();
    return;
  }
  if (lVar12 == 0) {
    return;
  }
  FUN_026f52ac(lVar12);
  FUN_026f66e0(lVar12);
  FUN_026f5394(lVar12);
  lVar13 = *(long *)(lVar12 + 0x10);
  if (lVar13 == 0) {
    lVar7 = 0;
  }
  else {
    if (*(int *)(lVar12 + 0x94) == 2) {
      lVar7 = 0;
LAB_028bcda4:
      lVar7 = *(long *)(lVar13 + lVar7 * 8 + 0x60);
      if (lVar7 == 0) goto LAB_028bcdb8;
      lVar7 = *(long *)(lVar7 + 0x20);
    }
    else {
      if (*(int *)(lVar12 + 0x9c) == 2) {
        lVar7 = 1;
        goto LAB_028bcda4;
      }
      if (*(int *)(lVar12 + 0xa4) == 2) {
        lVar7 = 2;
        goto LAB_028bcda4;
      }
      if (*(int *)(lVar12 + 0xac) == 2) {
        lVar7 = 3;
        goto LAB_028bcda4;
      }
      if (*(int *)(lVar12 + 0xb4) == 2) {
        lVar7 = 4;
        goto LAB_028bcda4;
      }
      if (*(int *)(lVar12 + 0xbc) == 2) {
        lVar7 = 5;
        goto LAB_028bcda4;
      }
      if (*(int *)(lVar12 + 0xc4) == 2) {
        lVar7 = 6;
        goto LAB_028bcda4;
      }
      if (*(int *)(lVar12 + 0xcc) == 2) {
        lVar7 = 7;
        goto LAB_028bcda4;
      }
LAB_028bcdb8:
      lVar7 = 0;
    }
    if (*(int *)(lVar12 + 0xd4) == 2) {
      lVar11 = 0;
    }
    else if (*(int *)(lVar12 + 0xdc) == 2) {
      lVar11 = 1;
    }
    else if (*(int *)(lVar12 + 0xe4) == 2) {
      lVar11 = 2;
    }
    else if (*(int *)(lVar12 + 0xec) == 2) {
      lVar11 = 3;
    }
    else if (*(int *)(lVar12 + 0xf4) == 2) {
      lVar11 = 4;
    }
    else if (*(int *)(lVar12 + 0xfc) == 2) {
      lVar11 = 5;
    }
    else if (*(int *)(lVar12 + 0x104) == 2) {
      lVar11 = 6;
    }
    else {
      if (*(int *)(lVar12 + 0x10c) != 2) goto LAB_028bce78;
      lVar11 = 7;
    }
    plVar10 = *(long **)(lVar13 + lVar11 * 8 + 0xa0);
    if (plVar10 != (long *)0x0) {
      lVar13 = (**(code **)(*plVar10 + 0x38))();
      goto LAB_028bce7c;
    }
  }
LAB_028bce78:
  lVar13 = 0;
LAB_028bce7c:
  if (((*(int *)(lVar12 + 0x114) == 2) && (*(long *)(lVar12 + 0x10) != 0)) &&
     (plVar10 = *(long **)(*(long *)(lVar12 + 0x10) + 0xe0), plVar10 != (long *)0x0)) {
    lVar11 = (**(code **)(*plVar10 + 0x30))();
  }
  else {
    lVar11 = 0;
  }
  if (((*(int *)(lVar12 + 0x11c) == 2) && (*(long *)(lVar12 + 0x10) != 0)) &&
     (plVar10 = *(long **)(*(long *)(lVar12 + 0x10) + 0xe8), plVar10 != (long *)0x0)) {
    lVar5 = (**(code **)(*plVar10 + 0x30))();
    lVar8 = *(long *)(lVar12 + 0x4c0);
  }
  else {
    lVar5 = 0;
    lVar8 = *(long *)(lVar12 + 0x4c0);
  }
  if ((lVar8 == 0) ||
     (plVar10 = *(long **)(*(long *)(lVar12 + 0x10) + 0x180), plVar10 == (long *)0x0)) {
    lVar8 = 0;
  }
  else {
    lVar8 = (**(code **)(*plVar10 + 0x30))();
  }
  if ((((lVar7 != 0) && (lVar13 != 0)) && (lVar11 != 0)) && ((lVar5 != 0 && (lVar8 != 0)))) {
    lVar9 = lVar7 + 0x194b0;
    if (*(long *)(lVar7 + 0x194b8) == 0) {
      lVar9 = *(long *)(*(long *)puVar1 + 0x20);
    }
    if ((*(long **)(lVar9 + 0x2c558) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar9 + 0x2c558), puVar6 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar6)();
      uVar2 = uVar2 ^ 1;
    }
    uVar3 = *(uint *)(*(long *)(lVar9 + 0x2c540) + *(long *)(lVar9 + 0x2c538));
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar9 + 0x2c558) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x2c558) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    if ((uVar3 & 1) == 0) {
      lVar12 = 0;
    }
    else {
      if (((*(byte *)(lVar12 + 0x50d) ^ 0xff) & 6) != 0) {
        return;
      }
      if (((*(byte *)(lVar12 + 0x50d) ^ 0xff) & 6) != 0) {
        return;
      }
      if (((*(byte *)(lVar12 + 0x50d) ^ 0xff) & 6) != 0) {
        return;
      }
      if (*(int *)(lVar12 + 0x124) != 2) {
        return;
      }
      local_90 = (undefined *)CONCAT44(local_90._4_4_,1);
      if (((*(byte *)(lVar12 + 0x50d) ^ 0xff) & 6) != 0) {
        return;
      }
      lVar12 = (**(code **)(**(long **)(*(long *)(lVar12 + 0x10) + 0x188) + 0x30))();
      if (lVar12 == 0) {
        return;
      }
    }
    uStack_70 = (undefined4)lVar12;
    local_6c = (undefined4)((ulong)lVar12 >> 0x20);
    uStack_68 = (undefined4)lVar8;
    local_64 = (undefined4)((ulong)lVar8 >> 0x20);
    local_78 = (undefined4)lVar5;
    local_74 = (undefined4)((ulong)lVar5 >> 0x20);
    local_90 = (undefined *)lVar7;
    local_88 = (char *)lVar13;
    local_80 = lVar11;
    FUN_02818bc0(&local_90);
  }
  return;
}

