
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030bf100(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 local_98;
  undefined *puStack_90;
  char *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined4 local_6c;
  undefined2 local_68;
  
  puVar2 = PTR_DAT_04bb2020;
  if (((DAT_056eb158 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_056eb158), iVar7 != 0)) {
    DAT_056eb118 = puVar2 + 0x10;
    DAT_056eb120 = "*SelectLoop";
    DAT_056eb130 = &DAT_0407ebb1;
    DAT_056eb140 = "*EfInvalid";
    DAT_056eb150 = &DAT_0407ebb1;
    DAT_056eb128 = DAT_056eb118;
    DAT_056eb138 = DAT_056eb118;
    DAT_056eb148 = DAT_056eb118;
    __cxa_guard_release(&DAT_056eb158);
  }
  if (((DAT_056eb170 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_056eb170), iVar7 != 0)) {
    _DAT_056eb160 = 0x200000002;
    DAT_056eb168 = &DAT_056eb118;
    __cxa_guard_release(&DAT_056eb170);
  }
  uVar5 = DAT_056eb164;
  uVar15 = (ulong)DAT_056eb164;
  if (0 < (int)DAT_056eb164) {
    uVar8 = FUN_03c68d44(param_2,DAT_056eb168,DAT_056eb168 + (ulong)(1 < DAT_056eb160) * 2);
    *(undefined8 *)(param_1 + 0x390) = uVar8;
    if (uVar5 != 1) {
      uVar11 = (ulong)(int)DAT_056eb160;
      uVar17 = uVar11;
      if (uVar11 == 0 || DAT_056eb164 < 2) {
        uVar17 = 0;
      }
      lVar14 = 0;
      if (1 < uVar11 && DAT_056eb164 >= 2) {
        lVar14 = uVar11 + 1;
      }
      uVar8 = FUN_03c68d44(param_2,DAT_056eb168 + uVar17 * 2,DAT_056eb168 + lVar14 * 2);
      *(undefined8 *)(param_1 + 0x398) = uVar8;
      if (uVar5 != 2) {
        uVar17 = 2;
        do {
          iVar7 = DAT_056eb160 * (int)uVar17;
          bVar6 = _DAT_056eb160 >> 0x20 <= uVar17;
          lVar14 = (long)iVar7;
          if (DAT_056eb160 == 0 || bVar6) {
            lVar14 = 0;
          }
          lVar12 = (long)(iVar7 + 1);
          if (DAT_056eb160 < 2 || bVar6) {
            lVar12 = 0;
          }
          uVar8 = FUN_03c68d44(param_2,DAT_056eb168 + lVar14 * 2,DAT_056eb168 + lVar12 * 2);
          uVar17 = uVar17 + 1;
          *(undefined8 *)(param_1 + 0x390) = uVar8;
        } while (uVar15 != uVar17);
      }
    }
  }
  puVar4 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    puVar10 = malloc(0xa8);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar9 = (long *)(lVar14 + 8);
    if (lVar12 != 0) {
      plVar9 = (long *)(lVar12 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0xa8,8);
    }
  }
  FUN_03c5ba20(puVar10,2);
  *puVar10 = &PTR_FUN_04afd298;
  puVar10[0x11] = &PTR_LAB_04afd340;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  *(undefined2 *)(puVar10 + 4) = 1;
  *(undefined4 *)((long)puVar10 + 0x2c) = 0x80000000;
  *(undefined4 *)(puVar10 + 8) = 0;
  *(undefined4 *)((long)puVar10 + 0x24) = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  FUN_03c5bcd4(puVar10);
  if ((undefined8 *)puVar10[10] != puVar10 + 9) {
    lVar14 = (long)*(int *)((long)puVar10 + 0x5c);
    puVar16 = (undefined8 *)((long)puVar10[10] - lVar14);
    do {
      (**(code **)*puVar16)(puVar16,*(undefined4 *)((long)puVar10 + 0x24));
      puVar16 = (undefined8 *)(*(long *)((long)puVar16 + lVar14 + 8) - lVar14);
    } while (puVar16 != (undefined8 *)((long)(puVar10 + 9) - lVar14));
  }
  lVar14 = *(long *)(param_2 + 0x18);
  plVar13 = (long *)(lVar14 + 0x60);
  lVar12 = *plVar13;
  plVar9 = (long *)((long)*(int *)(lVar14 + 0x74) + (long)puVar10);
  *plVar13 = (long)plVar9;
  *plVar9 = lVar12;
  plVar9[1] = (long)plVar13;
  if (lVar12 != 0) {
    *(long **)(lVar12 + 8) = plVar9;
  }
  lVar12 = *(long *)puVar2;
  *(int *)(lVar14 + 0x70) = *(int *)(lVar14 + 0x70) + 1;
  if (lVar12 == 0) {
    plVar9 = malloc(0x10);
  }
  else {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar9 = (long *)(lVar12 + 8);
    if (lVar14 != 0) {
      plVar9 = (long *)(lVar14 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x10,0xfffffffc);
    }
  }
  *plVar9 = param_2;
  puVar3 = PTR_PTR_04bb2238;
  puVar10[3] = *(undefined8 *)(param_2 + 0x18);
  puVar1 = PTR_DAT_04bb2020;
  plVar9[1] = (long)puVar10;
  *(long **)(param_2 + 0x20) = plVar9;
  local_70 = 0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_6e = 1;
  puVar1 = puVar1 + 0x10;
  local_98 = 0;
  local_88 = "*EquipIn";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar9,1,0,&local_98);
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = "*EquipOut;<*EquipIn";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar9,0,1,&local_98);
  lVar14 = plVar9[1];
  if (*(long *)puVar2 == 0) {
    free(plVar9);
  }
  else {
    plVar13 = (long *)FUN_038cb610(*(long *)puVar2,plVar9);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x38))(plVar13,plVar9);
    }
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(long *)(param_1 + 0x388) = lVar14;
  if (*(long *)(param_1 + 0x318) == 0) {
    lVar14 = *(long *)puVar2;
    if (lVar14 == 0) {
      plVar9 = malloc(0x20);
    }
    else {
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      puVar10 = (undefined8 *)(lVar14 + 8);
      if (lVar12 != 0) {
        puVar10 = (undefined8 *)(lVar12 + 0xa8);
      }
      plVar9 = (long *)(**(code **)(*(long *)*puVar10 + 0x30))((long *)*puVar10,0x20,8);
    }
    plVar9[2] = (long)(plVar9 + 1);
    plVar9[3] = 0x20800000000;
    *plVar9 = (long)(PTR_DAT_04bc9cb0 + 0x10);
    plVar9[1] = (long)(plVar9 + 1);
    *(long **)(param_1 + 0x318) = plVar9;
  }
  FUN_03d83a48(param_1,param_2,param_3);
  return;
}

