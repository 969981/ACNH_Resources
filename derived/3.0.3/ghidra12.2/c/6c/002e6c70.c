
undefined8 FUN_002e6c70(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined4 local_118;
  ErrorResultVariant aEStack_114 [12];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined4 local_88;
  ErrorResultVariant aEStack_84 [12];
  undefined1 auStack_78 [16];
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  iVar4 = *(int *)(param_1 + 0x154);
  if (iVar4 == 1) {
    return 0;
  }
  lVar1 = param_1 + 0x140;
  if (iVar4 == 2) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x98) + 8);
    if (lVar5 != *(long *)(param_1 + 0x98)) {
      do {
        lVar9 = *(long *)(param_1 + 0xa0);
        if ((*(ushort *)(lVar9 + 10) == 0) || (*(ushort *)(lVar9 + 10) <= *(ushort *)(lVar9 + 8)))
        break;
        plVar6 = *(long **)(*(long *)(lVar9 + 0x10) + (ulong)*(ushort *)(lVar9 + 8) * 8);
        uVar7 = (**(code **)(*plVar6 + 0x50))(plVar6);
        *(short *)(lVar9 + 8) = *(short *)(lVar9 + 8) + 1;
        FUN_002d6500(uVar7,lVar5 + 0x10,plVar6);
        FUN_0030a3bc(plVar6,0);
        local_68 = 0x2000000000000;
        local_60 = local_60 & 0xffffffff00000000;
        (**(code **)(*plVar6 + 0x58))(plVar6,&local_68);
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != *(long *)(param_1 + 0x98));
    }
    uVar7 = *(undefined8 *)(param_1 + 0x2c0);
    local_68 = local_68 & 0xffffffff00000000;
    local_88 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_68 + 4),(Result *)&local_88);
    FUN_002296c4(auStack_138,&local_68);
    FUN_00220f8c(uVar7,auStack_138);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    FUN_001984a0(lVar1);
    plVar6 = *(long **)(param_1 + 0x98);
    if (plVar6[2] == 0) {
      return 1;
    }
    lVar1 = *plVar6;
    plVar2 = (long *)plVar6[1];
    lVar5 = *plVar2;
    *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar5;
    plVar6[2] = 0;
    while (plVar2 != plVar6) {
      plVar8 = (long *)plVar2[1];
      (**(code **)plVar2[2])();
      FUN_00187e4c(plVar2);
      plVar2 = plVar8;
    }
    return 1;
  }
  if (iVar4 != 3) {
    if (*(ulong *)(DAT_04c5fbb0 + 0x30) <= *(ulong *)(param_1 + 0x2d8)) {
      return 0;
    }
    FUN_00197980(lVar1);
    uVar7 = *(undefined8 *)(param_1 + 0x2c0);
    local_68 = CONCAT44(local_68._4_4_,0xac5a);
    local_88 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_68 + 4),(Result *)&local_88);
    FUN_002296c4(auStack_148,&local_68);
    FUN_00220ff8(uVar7,auStack_148);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    FUN_001984a0(lVar1);
    plVar6 = *(long **)(param_1 + 0x98);
    if (plVar6[2] == 0) {
      return 1;
    }
    lVar1 = *plVar6;
    plVar2 = (long *)plVar6[1];
    lVar5 = *plVar2;
    *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar5;
    plVar6[2] = 0;
    while (plVar2 != plVar6) {
      plVar8 = (long *)plVar2[1];
      (**(code **)plVar2[2])();
      FUN_00187e4c(plVar2);
      plVar2 = plVar8;
    }
    return 1;
  }
  local_68 = *(undefined8 *)(param_1 + 0x198);
  local_60 = *(undefined8 *)(param_1 + 0x1a0);
  local_58 = *(undefined8 *)(param_1 + 0x1a8);
  iVar4 = (int)local_68;
  if (iVar4 < -0x7ffcff1e) {
    if (iVar4 == -0x7ffefffc) {
      uVar7 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xac5a;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_118);
      FUN_002296c4(auStack_98,&local_88);
      puVar3 = auStack_98;
      goto LAB_002e7190;
    }
    if (iVar4 == -0x7ffcff8d) {
      uVar7 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0x6c4b;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_118);
      FUN_002296c4(auStack_78,&local_88);
      puVar3 = auStack_78;
      goto LAB_002e7190;
    }
    if (iVar4 == -0x7ffcff2e) {
      uVar7 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xc406;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_118);
      FUN_002296c4(auStack_a8,&local_88);
      puVar3 = auStack_a8;
      goto LAB_002e7190;
    }
LAB_002e7060:
    local_48 = FUN_0018774c(&local_68);
    local_118 = 0xe437;
    local_88 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_114,(Result *)&local_88);
    FUN_002296c4(&local_88,&local_118);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)&local_118,(ErrorCode *)&local_48);
    FUN_0022b434(&local_88,&local_118);
    uVar7 = *(undefined8 *)(param_1 + 0x2c0);
    FUN_002296c4(auStack_128,&local_88);
    puVar3 = auStack_128;
  }
  else {
    switch(iVar4) {
    case -0x7f97ffeb:
      uVar7 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xa472;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_118);
      FUN_002296c4(auStack_d8,&local_88);
      puVar3 = auStack_d8;
      break;
    case -0x7f97ffea:
      uVar7 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xa473;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_118);
      FUN_002296c4(auStack_e8,&local_88);
      puVar3 = auStack_e8;
      break;
    case -0x7f97ffe9:
      uVar7 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xa474;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_118);
      FUN_002296c4(auStack_f8,&local_88);
      puVar3 = auStack_f8;
      break;
    case -0x7f97ffe8:
      uVar7 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xa475;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_118);
      FUN_002296c4(auStack_108,&local_88);
      puVar3 = auStack_108;
      break;
    default:
      if (iVar4 == -0x7ffcff1e) {
        uVar7 = *(undefined8 *)(param_1 + 0x2c0);
        local_88 = 0xa471;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_118);
        FUN_002296c4(auStack_b8,&local_88);
        puVar3 = auStack_b8;
        break;
      }
      if (iVar4 == -0x7ffaffff) {
        uVar7 = *(undefined8 *)(param_1 + 0x2c0);
        local_88 = 0xc406;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_118);
        FUN_002296c4(auStack_c8,&local_88);
        puVar3 = auStack_c8;
        break;
      }
      goto LAB_002e7060;
    }
  }
LAB_002e7190:
  FUN_00220ff8(uVar7,puVar3);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  FUN_001984a0(lVar1);
  plVar6 = *(long **)(param_1 + 0x98);
  if (plVar6[2] != 0) {
    lVar1 = *plVar6;
    plVar2 = (long *)plVar6[1];
    lVar5 = *plVar2;
    *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar5;
    plVar6[2] = 0;
    while (plVar2 != plVar6) {
      plVar8 = (long *)plVar2[1];
      (**(code **)plVar2[2])();
      FUN_00187e4c(plVar2);
      plVar2 = plVar8;
    }
  }
  return 1;
}

