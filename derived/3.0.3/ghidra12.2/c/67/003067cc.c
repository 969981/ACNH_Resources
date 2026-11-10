
undefined8 FUN_003067cc(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
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
  undefined1 auStack_40 [16];
  undefined8 local_28;
  
  lVar3 = *(long *)(param_1 + 0x58);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x28) != '\0')) {
    local_78 = 0;
    local_58 = CONCAT44(local_58._4_4_,0x6c05);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_78);
    FUN_002296c4(auStack_40,&local_58);
    FUN_00220ff8(lVar3,auStack_40);
    *(undefined8 *)(param_1 + 0x58) = 0;
    iVar2 = *(int *)(param_1 + 0x74);
    goto joined_r0x00306b6c;
  }
  if (*(int *)(param_1 + 0x74) == 2) {
    local_58 = (ulong)local_58._4_4_ << 0x20;
    local_78 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_78);
    FUN_002296c4(auStack_128,&local_58);
    FUN_00220f8c(lVar3,auStack_128);
  }
  else {
    if (*(int *)(param_1 + 0x74) != 3) {
      return 5;
    }
    local_58 = *(long *)(param_1 + 0xb8);
    uStack_50 = *(undefined8 *)(param_1 + 0xc0);
    local_48 = *(undefined8 *)(param_1 + 200);
    iVar2 = (int)local_58;
    if (iVar2 < -0x7ffcff1e) {
      if (iVar2 == -0x7ffefffc) {
        local_108 = 0;
        local_78 = 0xac5a;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_108);
        FUN_002296c4(auStack_88,&local_78);
        puVar1 = auStack_88;
      }
      else if (iVar2 == -0x7ffefff6) {
        local_108 = 0;
        local_78 = 0x10c07;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_108);
        FUN_002296c4(auStack_68,&local_78);
        puVar1 = auStack_68;
      }
      else if (iVar2 == -0x7ffcff2e) {
        local_108 = 0;
        local_78 = 0xc406;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_108);
        FUN_002296c4(auStack_98,&local_78);
        puVar1 = auStack_98;
      }
      else {
LAB_00306a30:
        local_28 = FUN_0018774c(&local_58);
        local_108 = 0xe437;
        local_78 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_104,(Result *)&local_78);
        FUN_002296c4(&local_78,&local_108);
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)&local_108,(ErrorCode *)&local_28);
        FUN_0022b434(&local_78,&local_108);
        lVar3 = *(long *)(param_1 + 0x58);
        FUN_002296c4(auStack_118,&local_78);
        puVar1 = auStack_118;
      }
    }
    else {
      switch(iVar2) {
      case -0x7f97ffeb:
        local_108 = 0;
        local_78 = 0xa472;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_108);
        FUN_002296c4(auStack_c8,&local_78);
        puVar1 = auStack_c8;
        break;
      case -0x7f97ffea:
        local_108 = 0;
        local_78 = 0xa473;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_108);
        FUN_002296c4(auStack_d8,&local_78);
        puVar1 = auStack_d8;
        break;
      case -0x7f97ffe9:
        local_108 = 0;
        local_78 = 0xa474;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_108);
        FUN_002296c4(auStack_e8,&local_78);
        puVar1 = auStack_e8;
        break;
      case -0x7f97ffe8:
        local_108 = 0;
        local_78 = 0xa475;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_108);
        FUN_002296c4(auStack_f8,&local_78);
        puVar1 = auStack_f8;
        break;
      default:
        if (iVar2 == -0x7ffcff1e) {
          local_108 = 0;
          local_78 = 0xa471;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_108);
          FUN_002296c4(auStack_a8,&local_78);
          puVar1 = auStack_a8;
        }
        else {
          if (iVar2 != -0x7ffaffff) goto LAB_00306a30;
          local_108 = 0;
          local_78 = 0xc406;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_108);
          FUN_002296c4(auStack_b8,&local_78);
          puVar1 = auStack_b8;
        }
      }
    }
    FUN_00220ff8(lVar3,puVar1);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_001984a0(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x74);
joined_r0x00306b6c:
  if (iVar2 == 1) {
    FUN_00197980(param_1 + 0x60);
  }
  FUN_001984a0(param_1 + 0x60);
  if ((*(int **)(param_1 + 0x58) != (int *)0x0) && (**(int **)(param_1 + 0x58) == 1)) {
    FUN_00221064();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return 1;
}

