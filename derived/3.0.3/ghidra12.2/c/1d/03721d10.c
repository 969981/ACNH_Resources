
/* WARNING: Removing unreachable block (ram,0x037220e0) */
/* WARNING: Removing unreachable block (ram,0x03721f64) */
/* WARNING: Removing unreachable block (ram,0x03722020) */
/* WARNING: Removing unreachable block (ram,0x03722174) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff48 : 0x037220e4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_03721d10(long param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ushort *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 local_c0;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [15];
  undefined1 local_95;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  uint local_64;
  
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if (lVar12 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar12 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar7 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  puVar1 = local_b8;
  iVar7 = *(int *)(puVar16 + 7);
  if (DAT_05ac0a90 == iVar7) {
    lVar12 = 0;
  }
  else if (DAT_05ac0aa0 == iVar7) {
    lVar12 = 1;
  }
  else if (DAT_05ac0ab0 == iVar7) {
    lVar12 = 2;
  }
  else if (DAT_05ac0ac0 == iVar7) {
    lVar12 = 3;
  }
  else if (DAT_05ac0ad0 == iVar7) {
    lVar12 = 4;
  }
  else if (DAT_05ac0ae0 == iVar7) {
    lVar12 = 5;
  }
  else if (DAT_05ac0af0 == iVar7) {
    lVar12 = 6;
  }
  else if (DAT_05ac0b00 == iVar7) {
    lVar12 = 7;
  }
  else if (DAT_05ac0b10 == iVar7) {
    lVar12 = 8;
  }
  else {
    if (DAT_05ac0b20 != iVar7) {
      return;
    }
    lVar12 = 9;
  }
  local_6c = (&DAT_05ac0a94)[lVar12 * 4];
  *(undefined8 *)(param_1 + 0x1460) = 0;
  *(undefined4 *)(param_1 + 0x1468) = 0;
  puVar5 = PTR_DAT_04bc3a48;
  lVar12 = *(long *)PTR_DAT_04bb4960;
  if (lVar12 == 0) goto LAB_03722138;
  local_70 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x1460);
  local_68 = 0;
  local_64 = local_6c;
  local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
  puVar6 = local_b8;
  local_c0 = (undefined *)0x0;
  local_b8._4_4_ = SUB84(puVar1,4);
  switch(local_6c) {
  case 0:
    uVar15 = 1;
    goto LAB_03721f4c;
  case 1:
    local_c0 = (undefined *)0x300000002;
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,4);
    puVar6 = local_b8;
    break;
  case 2:
    local_c0 = (undefined *)0x600000005;
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,10);
    puVar6 = local_b8;
    break;
  case 3:
    local_c0 = (undefined *)0x900000007;
    break;
  case 4:
    uVar15 = 8;
LAB_03721f4c:
    local_c0 = (undefined *)(ulong)uVar15;
  }
  local_b8 = puVar6;
  local_74 = (int)local_c0;
  uVar8 = FUN_036ae7e0(lVar12,&local_74);
  puVar1 = local_b8;
  uVar13 = (ulong)local_70;
  local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
  puVar6 = local_b8;
  local_c0 = (undefined *)0x0;
  if (2 < local_70) {
    uVar13 = 0;
  }
  puVar2[uVar13] = uVar8;
  local_70 = 1;
  local_68 = 1;
  local_64 = local_6c;
  local_b8._4_4_ = SUB84(puVar1,4);
  switch(local_6c) {
  case 0:
    uVar15 = 1;
    goto LAB_0372200c;
  case 1:
    local_c0 = (undefined *)0x300000002;
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,4);
    puVar6 = local_b8;
    break;
  case 2:
    local_c0 = (undefined *)0x600000005;
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,10);
    puVar6 = local_b8;
    break;
  case 3:
    local_c0 = (undefined *)0x900000007;
    break;
  case 4:
    uVar15 = 8;
LAB_0372200c:
    local_c0 = (undefined *)(ulong)uVar15;
  }
  local_b8 = puVar6;
  local_74 = local_c0._4_4_;
  uVar8 = FUN_036ae7e0(lVar12,&local_74);
  puVar1 = local_b8;
  uVar13 = (ulong)local_70;
  local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
  puVar6 = local_b8;
  local_c0 = (undefined *)0x0;
  if (2 < local_70) {
    uVar13 = 0;
  }
  puVar2[uVar13] = uVar8;
  local_70 = 2;
  local_68 = 2;
  local_64 = local_6c;
  local_b8._4_4_ = SUB84(puVar1,4);
  switch(local_6c) {
  case 0:
    uVar15 = 1;
    goto LAB_037220c8;
  case 1:
    local_c0 = (undefined *)0x300000002;
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,4);
    puVar6 = local_b8;
    break;
  case 2:
    local_c0 = (undefined *)0x600000005;
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,10);
    puVar6 = local_b8;
    break;
  case 3:
    local_c0 = (undefined *)0x900000007;
    break;
  case 4:
    uVar15 = 8;
LAB_037220c8:
    local_c0 = (undefined *)(ulong)uVar15;
  }
  local_b8 = puVar6;
  local_74 = local_b8._0_4_;
  uVar8 = FUN_036ae7e0(lVar12,&local_74);
  uVar13 = (ulong)local_70;
  local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
  if (2 < local_70) {
    uVar13 = 0;
  }
  puVar2[uVar13] = uVar8;
  uVar13 = FUN_03773250(&local_c0);
  if ((((uVar13 & 1) != 0) &&
      (((puVar14 = *(ushort **)puVar5, puVar14 == (ushort *)0x0 || ((*puVar14 & 1) == 0)) &&
       (local_6c == 0)))) && ((int)local_c0 == 0)) {
    *puVar2 = 1;
  }
LAB_03722138:
  puVar14 = *(ushort **)puVar5;
  if ((puVar14 != (ushort *)0x0) && ((*puVar14 & 1) != 0)) {
    lVar12 = *(long *)PTR_DAT_04bc1530;
    if (lVar12 == 0) {
      return;
    }
    lVar9 = 0;
    puVar1 = PTR_DAT_04bb2ab0 + 0x10;
    do {
      lVar17 = *(long *)(lVar12 + 0x38 + lVar9);
      if ((*(long **)(lVar17 + 0x11a0) == (long *)0x0) ||
         (puVar16 = (undefined8 *)**(long **)(lVar17 + 0x11a0), puVar16 == (undefined8 *)0x0)) {
        uVar13 = 0;
      }
      else {
        uVar13 = (**(code **)*puVar16)();
        uVar13 = uVar13 & 0xffffffff;
      }
      puVar3 = (undefined2 *)(*(long *)(lVar17 + 0x1188) + *(long *)(lVar17 + 0x1180));
      uVar15 = (uint)*(byte *)(puVar3 + 1);
      local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar15);
      if (local_6c == uVar15) {
        local_a8 = 0x10;
        *(undefined4 *)((ulong)&local_c0 | 1) = 0;
        *(undefined1 *)((undefined4 *)((ulong)&local_c0 | 1) + 1) = 0;
        local_95 = 0;
        local_a4[0] = 0;
        local_80 = 0;
        local_7c = 0;
        local_90 = 0xffffffff;
        local_88 = 0xffffffff00000000;
        local_b8 = puVar1;
        local_b0 = local_a4;
        FUN_0376b510(&local_b8,*puVar3);
        lVar4 = *(long *)(lVar17 + 0x1188) + *(long *)(lVar17 + 0x1180);
        uVar15 = (uint)*(ushort *)(lVar4 + 6);
        if (0x14 < uVar15) {
          uVar15 = 0;
        }
        local_90 = CONCAT44(uVar15,(undefined4)local_90);
        local_64 = (uint)*(byte *)(lVar4 + 4);
        if (2 < local_64) {
          local_64 = 0;
        }
        local_88 = CONCAT44(local_64,(uint)*(byte *)(lVar4 + 2));
        local_c0 = (undefined *)
                   ((CONCAT71((int7)((ulong)local_c0 >> 8),*(byte *)(lVar4 + 3) >> 1) ^ 0xff) &
                   0xffffffffffffff01);
        FUN_03724440(param_1,&local_c0);
        FUN_037289d0(param_1,&local_b8,0);
      }
      if ((((uVar13 & 1) != 0) && (*(long *)(lVar17 + 0x11a0) != 0)) &&
         (puVar16 = *(undefined8 **)(*(long *)(lVar17 + 0x11a0) + 8), puVar16 != (undefined8 *)0x0))
      {
        (**(code **)*puVar16)();
      }
      lVar9 = lVar9 + 8;
    } while (lVar9 != 0x50);
    return;
  }
  lVar12 = *(long *)PTR_DAT_04bb46b0;
  if (lVar12 == 0) {
    lVar12 = 0;
    lVar9 = lRam0000000000000450;
  }
  else {
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,1);
    if (((*(byte *)(lVar12 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar9 = (**(code **)(**(long **)(*(long *)(lVar12 + 0x10) + 0x188) + 0x30))();
    }
    else {
      lVar9 = 0;
    }
    lVar12 = 0;
    if (lVar9 != 0) {
      lVar12 = lVar9 + 0xa8;
    }
    lVar9 = *(long *)(lVar12 + 0x450);
  }
  if (lVar9 == 0) {
    uVar13 = 0;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar13 = 0;
      plVar10 = *(long **)(lVar9 + 0x20);
    }
    else {
      uVar13 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      uVar13 = uVar13 & 0xffffffff;
      if (*(long *)(lVar12 + 0x450) == 0) goto LAB_03722380;
      plVar10 = *(long **)(*(long *)(lVar12 + 0x450) + 0x20);
    }
    if (plVar10 != (long *)0x0) {
      local_c0 = *(undefined **)(lVar12 + 0x430);
      local_b8 = *(undefined **)(lVar12 + 0x438);
      local_b0 = (undefined1 *)0x297e8;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_c0);
    }
  }
LAB_03722380:
  uVar11 = FUN_028ec6e0(*(long *)(lVar12 + 0x438) + *(long *)(lVar12 + 0x430),&local_6c);
  if ((((uVar13 & 1) != 0) && (*(long *)(lVar12 + 0x450) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar12 + 0x450) + 0x18), puVar16 != (undefined8 *)0x0)) {
    (**(code **)*puVar16)();
  }
  if ((uVar11 & 1) != 0) {
    *(uint *)(&DAT_00001230 + param_1) = *(uint *)(&DAT_00001230 + param_1) | 0x4000;
  }
  local_c0 = &DAT_04b46068;
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,local_6c);
  local_b0 = (undefined1 *)param_1;
  FUN_0376ec70(&local_c0);
  return;
}

