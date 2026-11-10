
undefined8 FUN_002d81a0(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined4 local_128;
  ErrorResultVariant aEStack_124 [12];
  undefined1 auStack_118 [16];
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
  
  if (*(int *)(param_1 + 0x154) == 2) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x98) + 8);
    if (lVar7 != *(long *)(param_1 + 0x98)) {
      do {
        lVar4 = *(long *)(param_1 + 0xa0);
        if ((*(ushort *)(lVar4 + 10) == 0) || (*(ushort *)(lVar4 + 10) <= *(ushort *)(lVar4 + 8)))
        break;
        plVar6 = *(long **)(*(long *)(lVar4 + 0x10) + (ulong)*(ushort *)(lVar4 + 8) * 8);
        uVar5 = (**(code **)(*plVar6 + 0x50))(plVar6);
        *(short *)(lVar4 + 8) = *(short *)(lVar4 + 8) + 1;
        FUN_002d6500(uVar5,lVar7 + 0x10,plVar6);
        FUN_0030a3bc(plVar6,0);
        local_68 = 0x2000000000000;
        local_60 = local_60 & 0xffffffff00000000;
        (**(code **)(*plVar6 + 0x58))(plVar6,&local_68);
        lVar7 = *(long *)(lVar7 + 8);
      } while (lVar7 != *(long *)(param_1 + 0x98));
    }
    uVar5 = *(undefined8 *)(param_1 + 0x2c0);
    local_68 = local_68 & 0xffffffff00000000;
    local_88 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_68 + 4),(Result *)&local_88);
    FUN_002296c4(auStack_148,&local_68);
    FUN_00220f8c(uVar5,auStack_148);
    plVar6 = *(long **)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    if (plVar6[2] != 0) {
      lVar7 = *plVar6;
      plVar1 = (long *)plVar6[1];
      lVar4 = *plVar1;
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar7 + 8);
      **(long **)(lVar7 + 8) = lVar4;
      plVar6[2] = 0;
      while (plVar1 != plVar6) {
        plVar8 = (long *)plVar1[1];
        (**(code **)plVar1[2])();
        FUN_00187e4c(plVar1);
        plVar1 = plVar8;
      }
    }
    plVar6 = *(long **)(param_1 + 0x88);
    if (plVar6[2] != 0) {
      lVar7 = *plVar6;
      plVar1 = (long *)plVar6[1];
      lVar4 = *plVar1;
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar7 + 8);
      **(long **)(lVar7 + 8) = lVar4;
      plVar6[2] = 0;
      while (plVar1 != plVar6) {
        plVar8 = (long *)plVar1[1];
        (**(code **)plVar1[2])();
        FUN_00187e4c(plVar1);
        plVar1 = plVar8;
      }
    }
    goto LAB_002d8758;
  }
  if (*(int *)(param_1 + 0x154) != 3) {
    return 0;
  }
  local_68 = *(ulong *)(param_1 + 0x198);
  local_60 = *(ulong *)(param_1 + 0x1a0);
  local_58 = *(undefined8 *)(param_1 + 0x1a8);
  iVar3 = (int)local_68;
  if (iVar3 < -0x7ffcff1e) {
    if (iVar3 < -0x7ffcff31) {
      if (iVar3 == -0x7ffefffc) {
        uVar5 = *(undefined8 *)(param_1 + 0x2c0);
        local_88 = 0xac5a;
        local_128 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_128);
        FUN_002296c4(auStack_a8,&local_88);
        puVar2 = auStack_a8;
      }
      else if (iVar3 == -0x7ffefff6) {
        uVar5 = *(undefined8 *)(param_1 + 0x2c0);
        local_88 = 0x10c07;
        local_128 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_128);
        FUN_002296c4(auStack_78,&local_88);
        puVar2 = auStack_78;
      }
      else {
LAB_002d8564:
        local_48 = FUN_0018774c(&local_68);
        local_128 = 0xe437;
        local_88 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_124,(Result *)&local_88);
        FUN_002296c4(&local_88,&local_128);
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)&local_128,(ErrorCode *)&local_48);
        FUN_0022b434(&local_88,&local_128);
        uVar5 = *(undefined8 *)(param_1 + 0x2c0);
        FUN_002296c4(auStack_138,&local_88);
        puVar2 = auStack_138;
      }
    }
    else if (iVar3 == -0x7ffcff31) {
      uVar5 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xa44f;
      local_128 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_128);
      FUN_002296c4(auStack_98,&local_88);
      puVar2 = auStack_98;
    }
    else {
      if (iVar3 != -0x7ffcff2e) goto LAB_002d8564;
      uVar5 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xc406;
      local_128 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_128);
      FUN_002296c4(auStack_b8,&local_88);
      puVar2 = auStack_b8;
    }
  }
  else {
    switch(iVar3) {
    case -0x7f97ffeb:
      uVar5 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xa472;
      local_128 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_128);
      FUN_002296c4(auStack_e8,&local_88);
      puVar2 = auStack_e8;
      break;
    case -0x7f97ffea:
      uVar5 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xa473;
      local_128 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_128);
      FUN_002296c4(auStack_f8,&local_88);
      puVar2 = auStack_f8;
      break;
    case -0x7f97ffe9:
      uVar5 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xa474;
      local_128 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_128);
      FUN_002296c4(auStack_108,&local_88);
      puVar2 = auStack_108;
      break;
    case -0x7f97ffe8:
      uVar5 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xa475;
      local_128 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_128);
      FUN_002296c4(auStack_118,&local_88);
      puVar2 = auStack_118;
      break;
    default:
      if (iVar3 == -0x7ffcff1e) {
        uVar5 = *(undefined8 *)(param_1 + 0x2c0);
        local_88 = 0xa471;
        local_128 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_128);
        FUN_002296c4(auStack_c8,&local_88);
        puVar2 = auStack_c8;
      }
      else {
        if (iVar3 != -0x7ffaffff) goto LAB_002d8564;
        uVar5 = *(undefined8 *)(param_1 + 0x2c0);
        local_88 = 0xc406;
        local_128 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_128);
        FUN_002296c4(auStack_d8,&local_88);
        puVar2 = auStack_d8;
      }
    }
  }
  FUN_00220ff8(uVar5,puVar2);
  plVar6 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  if (plVar6[2] != 0) {
    lVar7 = *plVar6;
    plVar1 = (long *)plVar6[1];
    lVar4 = *plVar1;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar7 + 8);
    **(long **)(lVar7 + 8) = lVar4;
    plVar6[2] = 0;
    while (plVar1 != plVar6) {
      plVar8 = (long *)plVar1[1];
      (**(code **)plVar1[2])();
      FUN_00187e4c(plVar1);
      plVar1 = plVar8;
    }
  }
  plVar6 = *(long **)(param_1 + 0x88);
  if (plVar6[2] != 0) {
    lVar7 = *plVar6;
    plVar1 = (long *)plVar6[1];
    lVar4 = *plVar1;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar7 + 8);
    **(long **)(lVar7 + 8) = lVar4;
    plVar6[2] = 0;
    while (plVar1 != plVar6) {
      plVar8 = (long *)plVar1[1];
      (**(code **)plVar1[2])();
      FUN_00187e4c(plVar1);
      plVar1 = plVar8;
    }
  }
LAB_002d8758:
  FUN_001984a0(param_1 + 0x140);
  return 1;
}

