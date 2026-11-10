
undefined8 FUN_002d94c0(long param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined4 local_138;
  ErrorResultVariant aEStack_134 [12];
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
  int local_78;
  ErrorResultVariant aEStack_74 [12];
  undefined1 auStack_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0x154) == 2) {
    lVar5 = *(long *)(param_1 + 0xa8);
    memset((void *)(param_1 + 0x568),0,0x20);
    lVar8 = *(long *)(lVar5 + 0xa8);
    if (lVar8 != *(long *)(lVar5 + 0xb0)) {
      uVar4 = 0;
      do {
        puVar2 = (undefined1 *)(lVar8 + uVar4);
        *(undefined1 *)(param_1 + 0x568 + uVar4) = *puVar2;
        if (0x1e < uVar4) break;
        uVar4 = uVar4 + 1;
      } while (puVar2 + 1 != *(undefined1 **)(lVar5 + 0xb0));
    }
    local_58 = (ulong)local_58._4_4_ << 0x20;
    local_78 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_78);
    FUN_002296c4(&local_78,&local_58);
    if (local_78 == 0) {
      lVar8 = FUN_002bf8c0(DAT_04c611a0);
      uVar6 = DAT_04c611a0;
      *(bool *)(param_1 + 0x2c8) = lVar8 == *(long *)(*(long *)(param_1 + 0xa8) + 0x18);
      lVar8 = FUN_002bf8c0(uVar6);
      bVar1 = lVar8 == *(long *)(*(long *)(param_1 + 0xa8) + 0x10);
      *(bool *)(param_1 + 0x10) = bVar1;
      if ((bVar1) && (*(char *)(param_1 + 0x2c8) != '\0')) {
        *(long *)(param_1 + 8) = lVar8;
        *param_2 = *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0xc);
        FUN_0030a004(param_1 + 0x2e0);
        lVar8 = FUN_002e9aec(*(undefined8 *)(DAT_04c60f48 + 8),
                             *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0xc));
        if (lVar8 != 0) {
          FUN_002e87a0();
        }
        uVar6 = *(undefined8 *)(param_1 + 0x2c0);
        local_58 = local_58 & 0xffffffff00000000;
        local_138 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_138);
        FUN_002296c4(auStack_178,&local_58);
        FUN_00220f8c(uVar6,auStack_178);
        plVar7 = *(long **)(param_1 + 0x128);
        *(undefined8 *)(param_1 + 0x2c0) = 0;
        if (plVar7[2] != 0) {
          lVar8 = *plVar7;
          plVar10 = (long *)plVar7[1];
          lVar5 = *plVar10;
          *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar8 + 8);
          **(long **)(lVar8 + 8) = lVar5;
          plVar7[2] = 0;
          while (plVar10 != plVar7) {
            plVar10 = (long *)plVar10[1];
            FUN_00187e4c();
          }
        }
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x2c0);
        local_58 = CONCAT44(local_58._4_4_,0x6c5b);
        local_138 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_138);
        FUN_002296c4(auStack_168,&local_58);
        FUN_00220ff8(uVar6,auStack_168);
        plVar7 = *(long **)(param_1 + 0x128);
        *(undefined8 *)(param_1 + 0x2c0) = 0;
        if (plVar7[2] != 0) {
          lVar8 = *plVar7;
          plVar10 = (long *)plVar7[1];
          lVar5 = *plVar10;
          *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar8 + 8);
          **(long **)(lVar8 + 8) = lVar5;
          plVar7[2] = 0;
          while (plVar10 != plVar7) {
            plVar10 = (long *)plVar10[1];
            FUN_00187e4c();
          }
        }
      }
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x2c0);
      local_138 = 0;
      local_58 = CONCAT44(local_58._4_4_,0x10c08);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_138);
      FUN_002296c4(auStack_158,&local_58);
      FUN_00220ff8(uVar6,auStack_158);
      plVar7 = *(long **)(param_1 + 0x128);
      *(undefined8 *)(param_1 + 0x2c0) = 0;
      if (plVar7[2] != 0) {
        lVar8 = *plVar7;
        plVar10 = (long *)plVar7[1];
        lVar5 = *plVar10;
        *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar8 + 8);
        **(long **)(lVar8 + 8) = lVar5;
        plVar7[2] = 0;
        while (plVar10 != plVar7) {
          plVar10 = (long *)plVar10[1];
          FUN_00187e4c();
        }
      }
    }
    FUN_002d4ed0(*(undefined8 *)(param_1 + 0xc0));
    lVar8 = *(long *)(param_1 + 0xb0);
    puVar9 = (undefined8 *)(lVar8 + 0x18);
    FUN_00202558(lVar8 + 0x10,*puVar9);
    *(undefined8 *)(lVar8 + 0x20) = 0;
    *(undefined8 **)(lVar8 + 0x10) = puVar9;
    goto LAB_002d9bb4;
  }
  if (*(int *)(param_1 + 0x154) != 3) {
    return 0;
  }
  local_58 = *(ulong *)(param_1 + 0x198);
  uStack_50 = *(undefined8 *)(param_1 + 0x1a0);
  local_48 = *(undefined8 *)(param_1 + 0x1a8);
  iVar3 = (int)local_58;
  if (iVar3 < -0x7ffaffff) {
    switch(iVar3) {
    case -0x7ffcff31:
      uVar6 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa44f;
      local_138 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_138);
      FUN_002296c4(auStack_98,&local_78);
      puVar2 = auStack_98;
      break;
    case -0x7ffcff30:
    case -0x7ffcff2f:
    case -0x7ffcff2d:
    case -0x7ffcff2b:
    case -0x7ffcff2a:
    case -0x7ffcff28:
    case -0x7ffcff27:
    case -0x7ffcff26:
    case -0x7ffcff25:
    case -0x7ffcff24:
    case -0x7ffcff23:
    case -0x7ffcff22:
    case -0x7ffcff21:
    case -0x7ffcff20:
    case -0x7ffcff1f:
switchD_002d9534_caseD_800300d0:
      local_38 = FUN_0018774c(&local_58);
      local_138 = 0xe437;
      local_78 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_134,(Result *)&local_78);
      FUN_002296c4(&local_78,&local_138);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)&local_138,(ErrorCode *)&local_38);
      FUN_0022b434(&local_78,&local_138);
      uVar6 = *(undefined8 *)(param_1 + 0x2c0);
      FUN_002296c4(auStack_148,&local_78);
      puVar2 = auStack_148;
      break;
    case -0x7ffcff2e:
      uVar6 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xc406;
      local_138 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_138);
      FUN_002296c4(auStack_c8,&local_78);
      puVar2 = auStack_c8;
      break;
    case -0x7ffcff2c:
      uVar6 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0x6c54;
      local_138 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_138);
      FUN_002296c4(auStack_68,&local_78);
      puVar2 = auStack_68;
      break;
    case -0x7ffcff29:
      uVar6 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0x6c54;
      local_138 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_138);
      FUN_002296c4(auStack_a8,&local_78);
      puVar2 = auStack_a8;
      break;
    case -0x7ffcff1e:
      uVar6 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa471;
      local_138 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_138);
      FUN_002296c4(auStack_d8,&local_78);
      puVar2 = auStack_d8;
      break;
    default:
      if (iVar3 == -0x7ffefffc) {
        uVar6 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xac5a;
        local_138 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_138);
        FUN_002296c4(auStack_b8,&local_78);
        puVar2 = auStack_b8;
      }
      else {
        if (iVar3 != -0x7ffefff6) goto switchD_002d9534_caseD_800300d0;
        uVar6 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0x10c07;
        local_138 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_138);
        FUN_002296c4(auStack_88,&local_78);
        puVar2 = auStack_88;
      }
    }
  }
  else {
    switch(iVar3) {
    case -0x7f97ffeb:
      uVar6 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa472;
      local_138 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_138);
      FUN_002296c4(auStack_f8,&local_78);
      puVar2 = auStack_f8;
      break;
    case -0x7f97ffea:
      uVar6 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa473;
      local_138 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_138);
      FUN_002296c4(auStack_108,&local_78);
      puVar2 = auStack_108;
      break;
    case -0x7f97ffe9:
      uVar6 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa474;
      local_138 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_138);
      FUN_002296c4(auStack_118,&local_78);
      puVar2 = auStack_118;
      break;
    case -0x7f97ffe8:
      uVar6 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa475;
      local_138 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_138);
      FUN_002296c4(auStack_128,&local_78);
      puVar2 = auStack_128;
      break;
    default:
      if (iVar3 != -0x7ffaffff) goto switchD_002d9534_caseD_800300d0;
      uVar6 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xc406;
      local_138 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_138);
      FUN_002296c4(auStack_e8,&local_78);
      puVar2 = auStack_e8;
    }
  }
  FUN_00220ff8(uVar6,puVar2);
  plVar7 = *(long **)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  if (plVar7[2] != 0) {
    lVar8 = *plVar7;
    plVar10 = (long *)plVar7[1];
    lVar5 = *plVar10;
    *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar8 + 8);
    **(long **)(lVar8 + 8) = lVar5;
    plVar7[2] = 0;
    while (plVar10 != plVar7) {
      plVar10 = (long *)plVar10[1];
      FUN_00187e4c();
    }
  }
  FUN_002d4ed0(*(undefined8 *)(param_1 + 0xc0));
  lVar8 = *(long *)(param_1 + 0xb0);
  puVar9 = (undefined8 *)(lVar8 + 0x18);
  FUN_00202558(lVar8 + 0x10,*puVar9);
  *(undefined8 **)(lVar8 + 0x10) = puVar9;
  *(undefined8 *)(lVar8 + 0x20) = 0;
LAB_002d9bb4:
  *puVar9 = 0;
  FUN_00313854(*(undefined8 *)(param_1 + 0x80));
  FUN_00313854(*(undefined8 *)(param_1 + 0xa8));
  FUN_001984a0(param_1 + 0x140);
  return 1;
}

