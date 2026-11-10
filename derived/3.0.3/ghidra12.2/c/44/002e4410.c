
undefined8 FUN_002e4410(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
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
  undefined1 auStack_88 [16];
  undefined4 local_78;
  ErrorResultVariant aEStack_74 [12];
  undefined1 auStack_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0x154) == 2) {
    lVar5 = *(long *)(*(long *)(param_1 + 0xe0) + 8);
    if (lVar5 != *(long *)(param_1 + 0xe0)) {
      do {
        lVar3 = *(long *)(param_1 + 0xe8);
        if ((*(uint *)(lVar3 + 0xc) == 0) || (*(uint *)(lVar3 + 0xc) <= *(uint *)(lVar3 + 8)))
        break;
        plVar6 = *(long **)(*(long *)(lVar3 + 0x10) + (ulong)*(uint *)(lVar3 + 8) * 8);
        uVar4 = (**(code **)(*plVar6 + 0x80))(plVar6);
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        FUN_002e3d40(uVar4,lVar5 + 0x10,plVar6);
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != *(long *)(param_1 + 0xe0));
    }
    uVar4 = *(undefined8 *)(param_1 + 0x2c0);
    local_58 = (ulong)local_58._4_4_ << 0x20;
    local_78 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_78);
    FUN_002296c4(auStack_138,&local_58);
    FUN_00220f8c(uVar4,auStack_138);
    plVar6 = *(long **)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    if (plVar6[2] != 0) {
      lVar5 = *plVar6;
      plVar7 = (long *)plVar6[1];
      lVar3 = *plVar7;
      *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar5 + 8);
      **(long **)(lVar5 + 8) = lVar3;
      plVar6[2] = 0;
      while (plVar7 != plVar6) {
        plVar8 = (long *)plVar7[1];
        (**(code **)plVar7[2])();
        FUN_00187e4c(plVar7);
        plVar7 = plVar8;
      }
    }
    plVar6 = *(long **)(param_1 + 0xf0);
    if (plVar6[2] != 0) {
      lVar5 = *plVar6;
      plVar7 = (long *)plVar6[1];
      lVar3 = *plVar7;
      *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar5 + 8);
      **(long **)(lVar5 + 8) = lVar3;
      plVar6[2] = 0;
      while (plVar7 != plVar6) {
        plVar7 = (long *)plVar7[1];
        FUN_00187e4c();
      }
    }
    FUN_001984a0(param_1 + 0x140);
    return 1;
  }
  if (*(int *)(param_1 + 0x154) != 3) {
    return 0;
  }
  local_58 = *(undefined8 *)(param_1 + 0x198);
  uStack_50 = *(undefined8 *)(param_1 + 0x1a0);
  local_48 = *(undefined8 *)(param_1 + 0x1a8);
  iVar2 = (int)local_58;
  if (iVar2 < -0x7ffcff1e) {
    if (iVar2 < -0x7ffcff31) {
      if (iVar2 == -0x7ffefffc) {
        uVar4 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xac5a;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
        FUN_002296c4(auStack_98,&local_78);
        puVar1 = auStack_98;
        goto LAB_002e48dc;
      }
      if (iVar2 == -0x7ffefff6) {
        uVar4 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0x10c07;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
        FUN_002296c4(auStack_68,&local_78);
        puVar1 = auStack_68;
        goto LAB_002e48dc;
      }
    }
    else {
      if (iVar2 == -0x7ffcff31) {
        uVar4 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xa44f;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
        FUN_002296c4(auStack_88,&local_78);
        puVar1 = auStack_88;
        goto LAB_002e48dc;
      }
      if (iVar2 == -0x7ffcff2e) {
        uVar4 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xc406;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
        FUN_002296c4(auStack_a8,&local_78);
        puVar1 = auStack_a8;
        goto LAB_002e48dc;
      }
    }
LAB_002e47ac:
    local_38 = FUN_0018774c(&local_58);
    local_118 = 0xe437;
    local_78 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_114,(Result *)&local_78);
    FUN_002296c4(&local_78,&local_118);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)&local_118,(ErrorCode *)&local_38);
    FUN_0022b434(&local_78,&local_118);
    uVar4 = *(undefined8 *)(param_1 + 0x2c0);
    FUN_002296c4(auStack_128,&local_78);
    puVar1 = auStack_128;
  }
  else {
    switch(iVar2) {
    case -0x7f97ffeb:
      uVar4 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa472;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
      FUN_002296c4(auStack_d8,&local_78);
      puVar1 = auStack_d8;
      break;
    case -0x7f97ffea:
      uVar4 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa473;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
      FUN_002296c4(auStack_e8,&local_78);
      puVar1 = auStack_e8;
      break;
    case -0x7f97ffe9:
      uVar4 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa474;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
      FUN_002296c4(auStack_f8,&local_78);
      puVar1 = auStack_f8;
      break;
    case -0x7f97ffe8:
      uVar4 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa475;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
      FUN_002296c4(auStack_108,&local_78);
      puVar1 = auStack_108;
      break;
    default:
      if (iVar2 == -0x7ffcff1e) {
        uVar4 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xa471;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
        FUN_002296c4(auStack_b8,&local_78);
        puVar1 = auStack_b8;
        break;
      }
      if (iVar2 == -0x7ffaffff) {
        uVar4 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xc406;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
        FUN_002296c4(auStack_c8,&local_78);
        puVar1 = auStack_c8;
        break;
      }
      goto LAB_002e47ac;
    }
  }
LAB_002e48dc:
  FUN_00220ff8(uVar4,puVar1);
  plVar6 = *(long **)(param_1 + 0xe0);
  if (plVar6[2] != 0) {
    lVar5 = *plVar6;
    plVar7 = (long *)plVar6[1];
    lVar3 = *plVar7;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar5 + 8);
    **(long **)(lVar5 + 8) = lVar3;
    plVar6[2] = 0;
    while (plVar7 != plVar6) {
      plVar8 = (long *)plVar7[1];
      (**(code **)plVar7[2])();
      FUN_00187e4c(plVar7);
      plVar7 = plVar8;
    }
  }
  plVar6 = *(long **)(param_1 + 0xf0);
  if (plVar6[2] != 0) {
    lVar5 = *plVar6;
    plVar7 = (long *)plVar6[1];
    lVar3 = *plVar7;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar5 + 8);
    **(long **)(lVar5 + 8) = lVar3;
    plVar6[2] = 0;
    while (plVar7 != plVar6) {
      plVar7 = (long *)plVar7[1];
      FUN_00187e4c();
    }
  }
  FUN_001984a0(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  return 1;
}

