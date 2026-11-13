
void FUN_01343124(long param_1)

{
  uint *puVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong *puVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  undefined2 *puVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined4 uVar22;
  undefined2 local_88;
  undefined2 local_86;
  undefined4 local_84;
  undefined2 local_80;
  undefined2 local_7e;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (DAT_04c487d4 == -1) {
    return;
  }
  local_78 = local_78 & 0xffffffff00000000;
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 & 1) == 0) {
    return;
  }
  uVar9 = FUN_0375f6e0();
  if ((uVar9 & 1) == 0) {
    uVar9 = FUN_016cf9f0();
    if ((uVar9 & 1) == 0) {
      return;
    }
    lVar10 = FUN_016c7ab8();
  }
  else {
    lVar10 = FUN_03776f00();
  }
  if (lVar10 == 0) {
    return;
  }
  lVar19 = *(long *)(lVar10 + 0x140);
  if (lVar19 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar19 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      lVar19 = *(long *)(lVar10 + 0x140);
      uVar9 = uVar9 & 0xffffffff;
      if (lVar19 == 0) goto LAB_01343220;
    }
    plVar12 = *(long **)(lVar19 + 0x20);
    if (plVar12 != (long *)0x0) {
      local_78 = *(ulong *)(lVar10 + 0x120);
      uStack_70 = *(undefined8 *)(lVar10 + 0x128);
      local_68 = 0x24;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
    }
  }
LAB_01343220:
  lVar19 = *(long *)(lVar10 + 0x120);
  lVar2 = *(long *)(lVar10 + 0x128);
  puVar11 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x3c8) + 0xf0))(param_1 + 0x3c8);
  uVar20 = *puVar11;
  local_7e = 0;
  local_7c = 0;
  local_80 = (undefined2)uVar20;
  FUN_0277d4ac(&local_80);
  local_7e = (undefined2)((ulong)uVar20 >> 0x10);
  local_7c = (undefined4)((ulong)uVar20 >> 0x20);
  FUN_0285a8b0(lVar2 + lVar19,&local_80);
  if ((*(long *)(lVar10 + 0x140) != 0) &&
     (plVar12 = *(long **)(*(long *)(lVar10 + 0x140) + 0x20), plVar12 != (long *)0x0)) {
    local_78 = *(ulong *)(lVar10 + 0x120);
    uStack_70 = *(undefined8 *)(lVar10 + 0x128);
    local_68 = 0x24;
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
  }
  lVar19 = *(long *)(lVar10 + 0x120);
  lVar2 = *(long *)(lVar10 + 0x128);
  puVar11 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x430) + 0xf0))(param_1 + 0x430);
  uVar20 = *puVar11;
  local_86 = 0;
  local_84 = 0;
  local_88 = (undefined2)uVar20;
  FUN_0277d4ac(&local_88);
  local_86 = (undefined2)((ulong)uVar20 >> 0x10);
  local_84 = (undefined4)((ulong)uVar20 >> 0x20);
  FUN_0285aa40(lVar2 + lVar19,&local_88);
  if ((*(long *)(lVar10 + 0x140) != 0) &&
     (plVar12 = *(long **)(*(long *)(lVar10 + 0x140) + 0x20), plVar12 != (long *)0x0)) {
    local_78 = *(ulong *)(lVar10 + 0x120);
    uStack_70 = *(undefined8 *)(lVar10 + 0x128);
    local_68 = 0x24;
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
  }
  lVar19 = *(long *)(lVar10 + 0x120);
  lVar2 = *(long *)(lVar10 + 0x128);
  puVar13 = (ulong *)(**(code **)(*(long *)(param_1 + 0x498) + 0xf0))(param_1 + 0x498);
  uVar21 = *puVar13;
  local_78 = uVar21 & 0xffff;
  FUN_0277d4ac(&local_78);
  local_78 = CONCAT44((int)(uVar21 >> 0x20),
                      CONCAT13((char)(uVar21 >> 0x18),
                               CONCAT12((char)(uVar21 >> 0x10),(undefined2)local_78)));
  FUN_0285a720(lVar2 + lVar19,&local_78);
  if ((*(long *)(lVar10 + 0x140) != 0) &&
     (plVar12 = *(long **)(*(long *)(lVar10 + 0x140) + 0x20), plVar12 != (long *)0x0)) {
    local_78 = *(undefined8 *)(lVar10 + 0x120);
    uStack_70 = *(undefined8 *)(lVar10 + 0x128);
    local_68 = 0x24;
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
  }
  lVar19 = *(long *)(lVar10 + 0x120);
  lVar2 = *(long *)(lVar10 + 0x128);
  puVar14 = (undefined1 *)(**(code **)(*(long *)(param_1 + 0x4d0) + 0xf0))(param_1 + 0x4d0);
  *(undefined1 *)(lVar2 + lVar19 + 0x1e) = *puVar14;
  if ((*(long *)(lVar10 + 0x140) != 0) &&
     (plVar12 = *(long **)(*(long *)(lVar10 + 0x140) + 0x20), plVar12 != (long *)0x0)) {
    local_78 = *(undefined8 *)(lVar10 + 0x120);
    uStack_70 = *(undefined8 *)(lVar10 + 0x128);
    local_68 = 0x24;
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
  }
  lVar19 = *(long *)(lVar10 + 0x120);
  lVar2 = *(long *)(lVar10 + 0x128);
  puVar14 = (undefined1 *)(**(code **)(*(long *)(param_1 + 0x500) + 0xf0))(param_1 + 0x500);
  *(undefined1 *)(lVar2 + lVar19 + 0x1f) = *puVar14;
  if ((*(long *)(lVar10 + 0x140) != 0) &&
     (plVar12 = *(long **)(*(long *)(lVar10 + 0x140) + 0x20), plVar12 != (long *)0x0)) {
    local_78 = *(undefined8 *)(lVar10 + 0x120);
    uStack_70 = *(undefined8 *)(lVar10 + 0x128);
    local_68 = 0x24;
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
  }
  lVar19 = *(long *)(lVar10 + 0x120);
  lVar2 = *(long *)(lVar10 + 0x128);
  puVar14 = (undefined1 *)(**(code **)(*(long *)(param_1 + 0x530) + 0xf0))(param_1 + 0x530);
  *(undefined1 *)(lVar2 + lVar19 + 0x20) = *puVar14;
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar10 + 0x140) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x140) + 0x18), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  if ((*(long *)(lVar10 + 0x3a8) == 0) ||
     (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x3a8) + 0x10), puVar11 == (undefined8 *)0x0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = (**(code **)*puVar11)();
    uVar8 = uVar8 ^ 1;
  }
  pbVar15 = (byte *)(**(code **)(*(long *)(param_1 + 0x590) + 0xf0))(param_1 + 0x590);
  bVar3 = *pbVar15;
  pbVar15 = (byte *)(**(code **)(*(long *)(param_1 + 0x5c0) + 0xf0))(param_1 + 0x5c0);
  bVar4 = *pbVar15;
  if ((*(long *)(lVar10 + 0x3a8) != 0) &&
     (plVar12 = *(long **)(*(long *)(lVar10 + 0x3a8) + 0x20), plVar12 != (long *)0x0)) {
    local_78 = *(undefined8 *)(lVar10 + 0x388);
    uStack_70 = *(undefined8 *)(lVar10 + 0x390);
    local_68 = 0x14;
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
  }
  pbVar15 = (byte *)(*(long *)(lVar10 + 0x390) + *(long *)(lVar10 + 0x388));
  puVar16 = (undefined2 *)(**(code **)(*(long *)(param_1 + 0x5f0) + 0xf0))(param_1 + 0x5f0);
  uVar6 = *puVar16;
  puVar16 = (undefined2 *)(**(code **)(*(long *)(param_1 + 0x620) + 0xf0))(param_1 + 0x620);
  uVar7 = *puVar16;
  pbVar17 = (byte *)(**(code **)(*(long *)(param_1 + 0x650) + 0xf0))(param_1 + 0x650);
  bVar5 = *pbVar17;
  puVar18 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x680) + 0xf0))(param_1 + 0x680);
  uVar22 = *puVar18;
  local_78 = CONCAT44(local_78._4_4_,(uint)bVar3);
  *pbVar15 = bVar3;
  *(undefined2 *)(pbVar15 + 4) = uVar6;
  *(undefined2 *)(pbVar15 + 6) = uVar7;
  pbVar15[2] = bVar5;
  *(undefined4 *)(pbVar15 + 8) = uVar22;
  pbVar15[0xc] = 0;
  pbVar15[0xd] = 0;
  pbVar15[0xe] = 0;
  pbVar15[0xf] = 0;
  pbVar15[0x10] = 0;
  pbVar15[0x11] = 0;
  pbVar15[1] = bVar4;
  if ((((uVar8 & 1) == 0) && (*(long *)(lVar10 + 0x3a8) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x3a8) + 0x18), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  return;
}

