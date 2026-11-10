
undefined8 FUN_002d7c78(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined4 local_108;
  ErrorResultVariant aEStack_104 [12];
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
  
  iVar4 = *(int *)(param_1 + 0x154);
  if (iVar4 == 1) {
    return 0;
  }
  if (iVar4 == 2) {
    uVar5 = FUN_0030a004(param_1 + 0x2e0);
    FUN_002d6500(uVar5,*(undefined8 *)(param_1 + 0xa8),param_1 + 0x2e0);
    lVar6 = *(long *)(*(long *)(param_1 + 0xa8) + 0x10);
    *(long *)(param_1 + 8) = lVar6;
    puVar1 = PTR_DAT_04bcb8d8;
    lVar2 = FUN_002bf8c0(*(undefined8 *)PTR_DAT_04bcb8d8);
    uVar5 = *(undefined8 *)puVar1;
    *(bool *)(param_1 + 0x10) = lVar6 == lVar2;
    lVar6 = *(long *)(*(long *)(param_1 + 0xa8) + 0x18);
    lVar2 = FUN_002bf8c0(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x2c0);
    local_58 = (ulong)local_58._4_4_ << 0x20;
    local_78 = 0;
    *(bool *)(param_1 + 0x2c8) = lVar6 == lVar2;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_78);
    FUN_002296c4(auStack_128,&local_58);
    FUN_00220f8c(uVar5,auStack_128);
    goto LAB_002d8098;
  }
  if (iVar4 == 3) {
    local_58 = *(long *)(param_1 + 0x198);
    uStack_50 = *(undefined8 *)(param_1 + 0x1a0);
    local_48 = *(undefined8 *)(param_1 + 0x1a8);
    iVar4 = (int)local_58;
    if (iVar4 < -0x7ffcff1e) {
      if (iVar4 == -0x7ffefffc) {
        uVar5 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xac5a;
        local_108 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_108);
        FUN_002296c4(auStack_88,&local_78);
        puVar3 = auStack_88;
      }
      else if (iVar4 == -0x7ffcff8d) {
        uVar5 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0x6c4b;
        local_108 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_108);
        FUN_002296c4(auStack_68,&local_78);
        puVar3 = auStack_68;
      }
      else if (iVar4 == -0x7ffcff2e) {
        uVar5 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xc406;
        local_108 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_108);
        FUN_002296c4(auStack_98,&local_78);
        puVar3 = auStack_98;
      }
      else {
LAB_002d7f60:
        local_38 = FUN_0018774c(&local_58);
        local_108 = 0xe437;
        local_78 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_104,(Result *)&local_78);
        FUN_002296c4(&local_78,&local_108);
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)&local_108,(ErrorCode *)&local_38);
        FUN_0022b434(&local_78,&local_108);
        uVar5 = *(undefined8 *)(param_1 + 0x2c0);
        FUN_002296c4(auStack_118,&local_78);
        puVar3 = auStack_118;
      }
    }
    else {
      switch(iVar4) {
      case -0x7f97ffeb:
        uVar5 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xa472;
        local_108 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_108);
        FUN_002296c4(auStack_c8,&local_78);
        puVar3 = auStack_c8;
        break;
      case -0x7f97ffea:
        uVar5 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xa473;
        local_108 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_108);
        FUN_002296c4(auStack_d8,&local_78);
        puVar3 = auStack_d8;
        break;
      case -0x7f97ffe9:
        uVar5 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xa474;
        local_108 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_108);
        FUN_002296c4(auStack_e8,&local_78);
        puVar3 = auStack_e8;
        break;
      case -0x7f97ffe8:
        uVar5 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xa475;
        local_108 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_108);
        FUN_002296c4(auStack_f8,&local_78);
        puVar3 = auStack_f8;
        break;
      default:
        if (iVar4 == -0x7ffcff1e) {
          uVar5 = *(undefined8 *)(param_1 + 0x2c0);
          local_78 = 0xa471;
          local_108 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_108);
          FUN_002296c4(auStack_a8,&local_78);
          puVar3 = auStack_a8;
        }
        else {
          if (iVar4 != -0x7ffaffff) goto LAB_002d7f60;
          uVar5 = *(undefined8 *)(param_1 + 0x2c0);
          local_78 = 0xc406;
          local_108 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_108);
          FUN_002296c4(auStack_b8,&local_78);
          puVar3 = auStack_b8;
        }
      }
    }
  }
  else {
    if (*(ulong *)(DAT_04c5fbb0 + 0x30) <= *(ulong *)(param_1 + 0x2d8)) {
      return 0;
    }
    FUN_00197980(param_1 + 0x140);
    uVar5 = *(undefined8 *)(param_1 + 0x2c0);
    local_58 = CONCAT44(local_58._4_4_,0xac5a);
    local_78 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_78);
    FUN_002296c4(auStack_138,&local_58);
    puVar3 = auStack_138;
  }
  FUN_00220ff8(uVar5,puVar3);
LAB_002d8098:
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  FUN_00313854(*(undefined8 *)(param_1 + 0xa8));
  FUN_001984a0(param_1 + 0x140);
  return 1;
}

