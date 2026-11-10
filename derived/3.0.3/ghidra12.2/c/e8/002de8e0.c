
undefined8 FUN_002de8e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined4 local_140;
  ErrorResultVariant aEStack_13c [12];
  undefined8 local_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined4 local_68;
  ErrorResultVariant aEStack_64 [12];
  undefined1 auStack_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar1 = param_1 + 0x140;
  if (*(int *)(param_1 + 0x154) == 2) {
    uVar7 = *(undefined8 *)(param_1 + 0x2c0);
    local_48 = local_48 & 0xffffffff00000000;
    local_68 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_68);
    FUN_002296c4(auStack_160,&local_48);
    FUN_00220f8c(uVar7,auStack_160);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    plVar6 = *(long **)(param_1 + 0x128);
    if (plVar6[2] != 0) {
      lVar2 = *plVar6;
      plVar8 = (long *)plVar6[1];
      lVar5 = *plVar8;
      *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar2 + 8);
      **(long **)(lVar2 + 8) = lVar5;
      plVar6[2] = 0;
      while (plVar8 != plVar6) {
        plVar8 = (long *)plVar8[1];
        FUN_00187e4c();
      }
    }
    goto LAB_002dee94;
  }
  if (*(int *)(param_1 + 0x154) != 3) {
    if (*(ulong *)(DAT_04c5fbb0 + 0x30) <= *(ulong *)(param_1 + 0x2d8)) {
      return 0;
    }
    FUN_00197980(lVar1);
    uVar7 = *(undefined8 *)(param_1 + 0x2c0);
    local_48 = CONCAT44(local_48._4_4_,0xac5a);
    local_68 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_68);
    FUN_002296c4(auStack_170,&local_48);
    FUN_00220ff8(uVar7,auStack_170);
    plVar6 = *(long **)(param_1 + 0x128);
    if (plVar6[2] != 0) {
      lVar2 = *plVar6;
      plVar8 = (long *)plVar6[1];
      lVar5 = *plVar8;
      *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar2 + 8);
      **(long **)(lVar2 + 8) = lVar5;
      plVar6[2] = 0;
      while (plVar8 != plVar6) {
        plVar8 = (long *)plVar8[1];
        FUN_00187e4c();
      }
    }
    FUN_001984a0(lVar1);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    return 1;
  }
  local_48 = *(ulong *)(param_1 + 0x198);
  uStack_40 = *(undefined8 *)(param_1 + 0x1a0);
  local_38 = *(undefined8 *)(param_1 + 0x1a8);
  iVar4 = (int)local_48;
  if (iVar4 < -0x7ffcff2e) {
    if (iVar4 == -0x7ffefffc) {
      uVar7 = *(undefined8 *)(param_1 + 0x2c0);
      local_68 = 0xac5a;
      local_140 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_140);
      FUN_002296c4(auStack_b8,&local_68);
      puVar3 = auStack_b8;
    }
    else if (iVar4 == -0x7ffefff6) {
      uVar7 = *(undefined8 *)(param_1 + 0x2c0);
      local_140 = 0;
      local_68 = 0x10c07;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_140);
      FUN_002296c4(auStack_a8,&local_68);
      puVar3 = auStack_a8;
    }
    else {
      if (iVar4 != -0x7ffcff8d) goto switchD_002deb7c_caseD_800300d3;
      uVar7 = *(undefined8 *)(param_1 + 0x2c0);
      local_68 = 0x6c4b;
      local_140 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_140);
      FUN_002296c4(auStack_58,&local_68);
      puVar3 = auStack_58;
    }
  }
  else {
    switch(iVar4) {
    case -0x7ffcff2e:
      uVar7 = *(undefined8 *)(param_1 + 0x2c0);
      local_68 = 0xc406;
      local_140 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_140);
      FUN_002296c4(auStack_c8,&local_68);
      puVar3 = auStack_c8;
      break;
    case -0x7ffcff2d:
    case -0x7ffcff2b:
    case -0x7ffcff2a:
    case -0x7ffcff28:
    case -0x7ffcff26:
    case -0x7ffcff25:
    case -0x7ffcff24:
    case -0x7ffcff23:
    case -0x7ffcff22:
    case -0x7ffcff21:
    case -0x7ffcff20:
    case -0x7ffcff1f:
switchD_002deb7c_caseD_800300d3:
      local_130 = FUN_0018774c(&local_48);
      local_140 = 0xe437;
      local_68 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_13c,(Result *)&local_68);
      FUN_002296c4(&local_68,&local_140);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)&local_140,(ErrorCode *)&local_130);
      FUN_0022b434(&local_68,&local_140);
      uVar7 = *(undefined8 *)(param_1 + 0x2c0);
      FUN_002296c4(auStack_150,&local_68);
      puVar3 = auStack_150;
      break;
    case -0x7ffcff2c:
      uVar7 = *(undefined8 *)(param_1 + 0x2c0);
      local_68 = 0x10c08;
      local_140 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_140);
      FUN_002296c4(auStack_88,&local_68);
      puVar3 = auStack_88;
      break;
    case -0x7ffcff29:
      uVar7 = *(undefined8 *)(param_1 + 0x2c0);
      local_68 = 0x10c08;
      local_140 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_140);
      FUN_002296c4(auStack_98,&local_68);
      puVar3 = auStack_98;
      break;
    case -0x7ffcff27:
      uVar7 = *(undefined8 *)(param_1 + 0x2c0);
      local_68 = 0xac5a;
      local_140 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_140);
      FUN_002296c4(auStack_78,&local_68);
      puVar3 = auStack_78;
      break;
    case -0x7ffcff1e:
      uVar7 = *(undefined8 *)(param_1 + 0x2c0);
      local_68 = 0xa471;
      local_140 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_140);
      FUN_002296c4(auStack_d8,&local_68);
      puVar3 = auStack_d8;
      break;
    default:
      switch(iVar4) {
      case -0x7f97ffeb:
        uVar7 = *(undefined8 *)(param_1 + 0x2c0);
        local_68 = 0xa472;
        local_140 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_140);
        FUN_002296c4(auStack_f8,&local_68);
        puVar3 = auStack_f8;
        break;
      case -0x7f97ffea:
        uVar7 = *(undefined8 *)(param_1 + 0x2c0);
        local_68 = 0xa473;
        local_140 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_140);
        FUN_002296c4(auStack_108,&local_68);
        puVar3 = auStack_108;
        break;
      case -0x7f97ffe9:
        uVar7 = *(undefined8 *)(param_1 + 0x2c0);
        local_68 = 0xa474;
        local_140 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_140);
        FUN_002296c4(auStack_118,&local_68);
        puVar3 = auStack_118;
        break;
      case -0x7f97ffe8:
        uVar7 = *(undefined8 *)(param_1 + 0x2c0);
        local_68 = 0xa475;
        local_140 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_140);
        FUN_002296c4(auStack_128,&local_68);
        puVar3 = auStack_128;
        break;
      default:
        if (iVar4 != -0x7ffaffff) goto switchD_002deb7c_caseD_800300d3;
        uVar7 = *(undefined8 *)(param_1 + 0x2c0);
        local_68 = 0xc406;
        local_140 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_140);
        FUN_002296c4(auStack_e8,&local_68);
        puVar3 = auStack_e8;
      }
    }
  }
  FUN_00220ff8(uVar7,puVar3);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  plVar6 = *(long **)(param_1 + 0x128);
  if (plVar6[2] != 0) {
    lVar2 = *plVar6;
    plVar8 = (long *)plVar6[1];
    lVar5 = *plVar8;
    *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar5;
    plVar6[2] = 0;
    while (plVar8 != plVar6) {
      plVar8 = (long *)plVar8[1];
      FUN_00187e4c();
    }
  }
LAB_002dee94:
  FUN_001984a0(lVar1);
  return 1;
}

