
undefined8 FUN_002e5070(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
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
    lVar7 = *(long *)(*(long *)(param_1 + 0xe0) + 8);
    if (lVar7 != *(long *)(param_1 + 0xe0)) {
      do {
        lVar4 = *(long *)(param_1 + 0xe8);
        if ((*(uint *)(lVar4 + 0xc) == 0) || (*(uint *)(lVar4 + 0xc) <= *(uint *)(lVar4 + 8)))
        break;
        plVar6 = *(long **)(*(long *)(lVar4 + 0x10) + (ulong)*(uint *)(lVar4 + 8) * 8);
        uVar5 = (**(code **)(*plVar6 + 0x80))(plVar6);
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        FUN_002e3d40(uVar5,lVar7 + 0x10,plVar6);
        lVar7 = *(long *)(lVar7 + 8);
      } while (lVar7 != *(long *)(param_1 + 0xe0));
    }
    uVar5 = *(undefined8 *)(param_1 + 0x2c0);
    local_58 = (ulong)local_58._4_4_ << 0x20;
    local_78 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_78);
    FUN_002296c4(auStack_138,&local_58);
    FUN_00220f8c(uVar5,auStack_138);
    plVar6 = *(long **)(param_1 + 0xe0);
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
    goto LAB_002e554c;
  }
  if (*(int *)(param_1 + 0x154) != 3) {
    return 0;
  }
  local_58 = *(long *)(param_1 + 0x198);
  uStack_50 = *(undefined8 *)(param_1 + 0x1a0);
  local_48 = *(undefined8 *)(param_1 + 0x1a8);
  iVar3 = (int)local_58;
  if (iVar3 < -0x7ffcff1e) {
    if (iVar3 < -0x7ffcff31) {
      if (iVar3 == -0x7ffefffc) {
        uVar5 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xac5a;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
        FUN_002296c4(auStack_98,&local_78);
        puVar2 = auStack_98;
      }
      else if (iVar3 == -0x7ffefff6) {
        uVar5 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0x10c07;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
        FUN_002296c4(auStack_68,&local_78);
        puVar2 = auStack_68;
      }
      else {
LAB_002e53b8:
        local_38 = FUN_0018774c(&local_58);
        local_118 = 0xe437;
        local_78 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_114,(Result *)&local_78);
        FUN_002296c4(&local_78,&local_118);
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)&local_118,(ErrorCode *)&local_38);
        FUN_0022b434(&local_78,&local_118);
        uVar5 = *(undefined8 *)(param_1 + 0x2c0);
        FUN_002296c4(auStack_128,&local_78);
        puVar2 = auStack_128;
      }
    }
    else if (iVar3 == -0x7ffcff31) {
      uVar5 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa44f;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
      FUN_002296c4(auStack_88,&local_78);
      puVar2 = auStack_88;
    }
    else {
      if (iVar3 != -0x7ffcff2e) goto LAB_002e53b8;
      uVar5 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xc406;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
      FUN_002296c4(auStack_a8,&local_78);
      puVar2 = auStack_a8;
    }
  }
  else {
    switch(iVar3) {
    case -0x7f97ffeb:
      uVar5 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa472;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
      FUN_002296c4(auStack_d8,&local_78);
      puVar2 = auStack_d8;
      break;
    case -0x7f97ffea:
      uVar5 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa473;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
      FUN_002296c4(auStack_e8,&local_78);
      puVar2 = auStack_e8;
      break;
    case -0x7f97ffe9:
      uVar5 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa474;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
      FUN_002296c4(auStack_f8,&local_78);
      puVar2 = auStack_f8;
      break;
    case -0x7f97ffe8:
      uVar5 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa475;
      local_118 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
      FUN_002296c4(auStack_108,&local_78);
      puVar2 = auStack_108;
      break;
    default:
      if (iVar3 == -0x7ffcff1e) {
        uVar5 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xa471;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
        FUN_002296c4(auStack_b8,&local_78);
        puVar2 = auStack_b8;
      }
      else {
        if (iVar3 != -0x7ffaffff) goto LAB_002e53b8;
        uVar5 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xc406;
        local_118 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_118);
        FUN_002296c4(auStack_c8,&local_78);
        puVar2 = auStack_c8;
      }
    }
  }
  FUN_00220ff8(uVar5,puVar2);
  plVar6 = *(long **)(param_1 + 0xe0);
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
LAB_002e554c:
  FUN_001984a0(param_1 + 0x140);
  return 1;
}

