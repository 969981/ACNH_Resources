
undefined8 FUN_002dd40c(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
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
  undefined1 auStack_88 [16];
  undefined4 local_78;
  ErrorResultVariant aEStack_74 [12];
  undefined1 auStack_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 auStack_40 [16];
  undefined8 local_28;
  
  iVar2 = *(int *)(param_1 + 0x154);
  if (iVar2 == 3) {
    local_58 = *(long *)(param_1 + 0x198);
    uStack_50 = *(undefined8 *)(param_1 + 0x1a0);
    local_48 = *(undefined8 *)(param_1 + 0x1a8);
    iVar2 = (int)local_58;
    if (iVar2 < -0x7ffcff1e) {
      if (iVar2 < -0x7ffcff8d) {
        if (iVar2 == -0x7ffefffc) {
          uVar3 = *(undefined8 *)(param_1 + 0x2c0);
          local_78 = 0xac5a;
          local_128 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_128);
          FUN_002296c4(auStack_a8,&local_78);
          puVar1 = auStack_a8;
        }
        else if (iVar2 == -0x7ffefff6) {
          uVar3 = *(undefined8 *)(param_1 + 0x2c0);
          local_78 = 0x10c07;
          local_128 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_128);
          FUN_002296c4(auStack_68,&local_78);
          puVar1 = auStack_68;
        }
        else {
LAB_002dd74c:
          local_28 = FUN_0018774c(&local_58);
          local_128 = 0xe437;
          local_78 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_124,(Result *)&local_78);
          FUN_002296c4(&local_78,&local_128);
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)&local_128,(ErrorCode *)&local_28);
          FUN_0022b434(&local_78,&local_128);
          uVar3 = *(undefined8 *)(param_1 + 0x2c0);
          FUN_002296c4(auStack_138,&local_78);
          puVar1 = auStack_138;
        }
      }
      else if (iVar2 == -0x7ffcff8d) {
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0x6c4b;
        local_128 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_128);
        FUN_002296c4(auStack_88,&local_78);
        puVar1 = auStack_88;
      }
      else if (iVar2 == -0x7ffcff2e) {
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xc406;
        local_128 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_128);
        FUN_002296c4(auStack_b8,&local_78);
        puVar1 = auStack_b8;
      }
      else {
        if (iVar2 != -0x7ffcff27) goto LAB_002dd74c;
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xac5a;
        local_128 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_128);
        FUN_002296c4(auStack_98,&local_78);
        puVar1 = auStack_98;
      }
    }
    else {
      switch(iVar2) {
      case -0x7f97ffeb:
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xa472;
        local_128 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_128);
        FUN_002296c4(auStack_e8,&local_78);
        puVar1 = auStack_e8;
        break;
      case -0x7f97ffea:
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xa473;
        local_128 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_128);
        FUN_002296c4(auStack_f8,&local_78);
        puVar1 = auStack_f8;
        break;
      case -0x7f97ffe9:
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xa474;
        local_128 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_128);
        FUN_002296c4(auStack_108,&local_78);
        puVar1 = auStack_108;
        break;
      case -0x7f97ffe8:
        uVar3 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xa475;
        local_128 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_128);
        FUN_002296c4(auStack_118,&local_78);
        puVar1 = auStack_118;
        break;
      default:
        if (iVar2 == -0x7ffcff1e) {
          uVar3 = *(undefined8 *)(param_1 + 0x2c0);
          local_78 = 0xa471;
          local_128 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_128);
          FUN_002296c4(auStack_c8,&local_78);
          puVar1 = auStack_c8;
        }
        else {
          if (iVar2 != -0x7ffaffff) goto LAB_002dd74c;
          uVar3 = *(undefined8 *)(param_1 + 0x2c0);
          local_78 = 0xc406;
          local_128 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_128);
          FUN_002296c4(auStack_d8,&local_78);
          puVar1 = auStack_d8;
        }
      }
    }
  }
  else {
    if (iVar2 == 2) {
      uVar3 = *(undefined8 *)(param_1 + 0x2c0);
      local_58 = (ulong)local_58._4_4_ << 0x20;
      local_78 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_78);
      FUN_002296c4(auStack_148,&local_58);
      FUN_00220f8c(uVar3,auStack_148);
      goto LAB_002dd580;
    }
    if ((iVar2 != 1) || (*(ulong *)(DAT_04c5fbb0 + 0x30) <= *(ulong *)(param_1 + 0x2d8))) {
      return 0;
    }
    FUN_00197980(param_1 + 0x140);
    uVar3 = *(undefined8 *)(param_1 + 0x2c0);
    local_58 = CONCAT44(local_58._4_4_,0xac5a);
    local_78 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_78);
    FUN_002296c4(auStack_40,&local_58);
    puVar1 = auStack_40;
  }
  FUN_00220ff8(uVar3,puVar1);
LAB_002dd580:
  FUN_001984a0(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  return 1;
}

