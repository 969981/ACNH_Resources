
undefined8 FUN_002d6b00(long param_1,undefined4 *param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined4 local_1b0;
  ErrorResultVariant aEStack_1ac [12];
  undefined8 local_1a0;
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
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
  int local_88;
  ErrorResultVariant aEStack_84 [12];
  undefined1 auStack_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if (*(int *)(param_1 + 0x154) == 2) {
    lVar8 = *(long *)(param_1 + 0xa8);
    memset((void *)(param_1 + 0x568),0,0x20);
    lVar11 = *(long *)(lVar8 + 0xa8);
    if (lVar11 != *(long *)(lVar8 + 0xb0)) {
      uVar7 = 0;
      do {
        puVar4 = (undefined1 *)(lVar11 + uVar7);
        *(undefined1 *)(param_1 + 0x568 + uVar7) = *puVar4;
        if (0x1e < uVar7) break;
        uVar7 = uVar7 + 1;
      } while (puVar4 + 1 != *(undefined1 **)(lVar8 + 0xb0));
    }
    local_68 = (ulong)local_68._4_4_ << 0x20;
    local_88 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_68 + 4),(Result *)&local_88);
    FUN_002296c4(&local_88,&local_68);
    if (local_88 == 0) {
      lVar6 = *(long *)(param_1 + 0xa8);
      lVar11 = *(long *)(lVar6 + 0x10);
      lVar8 = *(long *)(lVar6 + 0x18);
      if (*(int *)(param_1 + 0x558) == *(int *)(lVar6 + 0xc)) {
        bVar1 = *(long *)(param_1 + 0x560) != 0 && *(long *)(param_1 + 0x560) != lVar11;
      }
      else {
        bVar1 = false;
      }
      lVar6 = FUN_002bf8c0(DAT_04c611a0);
      uVar9 = DAT_04c611a0;
      *(bool *)(param_1 + 0x2c8) = lVar6 == lVar8;
      lVar8 = FUN_002bf8c0(uVar9);
      bVar2 = lVar8 == lVar11;
      *(bool *)(param_1 + 0x10) = bVar2;
      if ((!bVar2) || (*(char *)(param_1 + 0x2c8) != '\0')) {
        if (*(char *)(param_1 + 0x2c8) != '\0' && lVar8 != lVar11) {
          bVar1 = true;
        }
        if (!bVar1) {
          *(long *)(param_1 + 8) = lVar11;
          *(bool *)param_3 = bVar2;
          *param_2 = *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0xc);
          FUN_0030a004(param_1 + 0x2e0);
          lVar11 = FUN_002e9aec(*(undefined8 *)(DAT_04c60f48 + 8),
                                *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0xc));
          if (lVar11 != 0) {
            FUN_002e87a0();
          }
          bVar3 = FUN_002d6840(*(long *)(param_1 + 0xa8) + 200,param_1 + 0x550);
          uVar9 = *(undefined8 *)(param_1 + 0x2c0);
          *(byte *)(param_1 + 0x554) = bVar3 & 1;
          local_68 = local_68 & 0xffffffff00000000;
          local_1b0 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((long)&local_68 + 4),(Result *)&local_1b0);
          FUN_002296c4(auStack_1f0,&local_68);
          FUN_00220f8c(uVar9,auStack_1f0);
          plVar10 = *(long **)(param_1 + 0x128);
          *(undefined8 *)(param_1 + 0x2c0) = 0;
          if (plVar10[2] != 0) {
            lVar11 = *plVar10;
            plVar12 = (long *)plVar10[1];
            lVar8 = *plVar12;
            *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar11 + 8);
            **(long **)(lVar11 + 8) = lVar8;
            plVar10[2] = 0;
            while (plVar12 != plVar10) {
              plVar12 = (long *)plVar12[1];
              FUN_00187e4c();
            }
          }
          FUN_00313854(*(undefined8 *)(param_1 + 0xa8));
          lVar11 = *(long *)(param_1 + 0xb0);
          FUN_00202558(lVar11 + 0x10,*(undefined8 *)(lVar11 + 0x18));
          *(undefined8 **)(lVar11 + 0x10) = (undefined8 *)(lVar11 + 0x18);
          *(undefined8 *)(lVar11 + 0x18) = 0;
          *(undefined8 *)(lVar11 + 0x20) = 0;
          FUN_00313854(*(undefined8 *)(param_1 + 0x80));
          plVar10 = *(long **)(param_1 + 0x88);
          if (plVar10[2] != 0) {
            lVar11 = *plVar10;
            plVar12 = (long *)plVar10[1];
            lVar8 = *plVar12;
            *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar11 + 8);
            **(long **)(lVar11 + 8) = lVar8;
            plVar10[2] = 0;
            while (plVar12 != plVar10) {
              plVar13 = (long *)plVar12[1];
              (**(code **)plVar12[2])();
              FUN_00187e4c(plVar12);
              plVar12 = plVar13;
            }
          }
          goto LAB_002d7518;
        }
      }
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      local_68 = CONCAT44(local_68._4_4_,0x6c5b);
      local_1b0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_68 + 4),(Result *)&local_1b0);
      FUN_002296c4(auStack_1e0,&local_68);
      FUN_00220ff8(uVar9,auStack_1e0);
      plVar10 = *(long **)(param_1 + 0x128);
      *(undefined8 *)(param_1 + 0x2c0) = 0;
      if (plVar10[2] != 0) {
        lVar11 = *plVar10;
        plVar12 = (long *)plVar10[1];
        lVar8 = *plVar12;
        *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar11 + 8);
        **(long **)(lVar11 + 8) = lVar8;
        plVar10[2] = 0;
        while (plVar12 != plVar10) {
          plVar12 = (long *)plVar12[1];
          FUN_00187e4c();
        }
      }
      FUN_00313854(*(undefined8 *)(param_1 + 0xa8));
      lVar11 = *(long *)(param_1 + 0xb0);
      FUN_00202558(lVar11 + 0x10,*(undefined8 *)(lVar11 + 0x18));
      *(undefined8 **)(lVar11 + 0x10) = (undefined8 *)(lVar11 + 0x18);
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(undefined8 *)(lVar11 + 0x20) = 0;
      FUN_00313854(*(undefined8 *)(param_1 + 0x80));
      plVar10 = *(long **)(param_1 + 0x88);
      if (plVar10[2] != 0) {
        lVar11 = *plVar10;
        plVar12 = (long *)plVar10[1];
        lVar8 = *plVar12;
        *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar11 + 8);
        **(long **)(lVar11 + 8) = lVar8;
        plVar10[2] = 0;
        while (plVar12 != plVar10) {
          plVar13 = (long *)plVar12[1];
          (**(code **)plVar12[2])();
          FUN_00187e4c(plVar12);
          plVar12 = plVar13;
        }
      }
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      FUN_002296c4(auStack_1d0,&local_88);
      FUN_00220ff8(uVar9,auStack_1d0);
      plVar10 = *(long **)(param_1 + 0x128);
      *(undefined8 *)(param_1 + 0x2c0) = 0;
      if (plVar10[2] != 0) {
        lVar11 = *plVar10;
        plVar12 = (long *)plVar10[1];
        lVar8 = *plVar12;
        *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar11 + 8);
        **(long **)(lVar11 + 8) = lVar8;
        plVar10[2] = 0;
        while (plVar12 != plVar10) {
          plVar12 = (long *)plVar12[1];
          FUN_00187e4c();
        }
      }
      FUN_00313854(*(undefined8 *)(param_1 + 0xa8));
      lVar11 = *(long *)(param_1 + 0xb0);
      FUN_00202558(lVar11 + 0x10,*(undefined8 *)(lVar11 + 0x18));
      *(undefined8 **)(lVar11 + 0x10) = (undefined8 *)(lVar11 + 0x18);
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(undefined8 *)(lVar11 + 0x20) = 0;
      FUN_00313854(*(undefined8 *)(param_1 + 0x80));
      plVar10 = *(long **)(param_1 + 0x88);
      if (plVar10[2] != 0) {
        lVar11 = *plVar10;
        plVar12 = (long *)plVar10[1];
        lVar8 = *plVar12;
        *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar11 + 8);
        **(long **)(lVar11 + 8) = lVar8;
        plVar10[2] = 0;
        while (plVar12 != plVar10) {
          plVar13 = (long *)plVar12[1];
          (**(code **)plVar12[2])();
          FUN_00187e4c(plVar12);
          plVar12 = plVar13;
        }
      }
    }
    goto LAB_002d7518;
  }
  if (*(int *)(param_1 + 0x154) != 3) {
    return 0;
  }
  local_68 = *(ulong *)(param_1 + 0x198);
  uStack_60 = *(undefined8 *)(param_1 + 0x1a0);
  local_58 = *(undefined8 *)(param_1 + 0x1a8);
  iVar5 = (int)local_68;
  if (iVar5 < -0x7ffaffff) {
    switch(iVar5) {
    case -0x7ffcff38:
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0x6c4c;
      local_1b0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_1b0);
      FUN_002296c4(auStack_b8,&local_88);
      puVar4 = auStack_b8;
      break;
    case -0x7ffcff37:
    case -0x7ffcff36:
    case -0x7ffcff35:
    case -0x7ffcff34:
    case -0x7ffcff30:
    case -0x7ffcff2f:
    case -0x7ffcff2d:
    case -0x7ffcff2b:
    case -0x7ffcff2a:
    case -0x7ffcff27:
    case -0x7ffcff24:
    case -0x7ffcff23:
    case -0x7ffcff22:
    case -0x7ffcff21:
    case -0x7ffcff20:
    case -0x7ffcff1f:
switchD_002d6b78_caseD_800300c9:
      local_1a0 = FUN_0018774c(&local_68);
      local_1b0 = 0xe437;
      local_88 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_1ac,(Result *)&local_88);
      FUN_002296c4(&local_88,&local_1b0);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)&local_1b0,(ErrorCode *)&local_1a0);
      FUN_0022b434(&local_88,&local_1b0);
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      FUN_002296c4(auStack_1c0,&local_88);
      puVar4 = auStack_1c0;
      break;
    case -0x7ffcff33:
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0x6c4d;
      local_1b0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_1b0);
      FUN_002296c4(auStack_c8,&local_88);
      puVar4 = auStack_c8;
      break;
    case -0x7ffcff32:
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0x6c4e;
      local_1b0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_1b0);
      FUN_002296c4(auStack_d8,&local_88);
      puVar4 = auStack_d8;
      break;
    case -0x7ffcff31:
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xa44f;
      local_1b0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_1b0);
      FUN_002296c4(auStack_a8,&local_88);
      puVar4 = auStack_a8;
      break;
    case -0x7ffcff2e:
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xc406;
      local_1b0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_1b0);
      FUN_002296c4(auStack_138,&local_88);
      puVar4 = auStack_138;
      break;
    case -0x7ffcff2c:
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0x6c54;
      local_1b0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_1b0);
      FUN_002296c4(auStack_78,&local_88);
      puVar4 = auStack_78;
      break;
    case -0x7ffcff29:
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0x6c54;
      local_1b0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_1b0);
      FUN_002296c4(auStack_118,&local_88);
      puVar4 = auStack_118;
      break;
    case -0x7ffcff28:
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      local_1b0 = 0;
      local_88 = 0x10c08;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_1b0);
      FUN_002296c4(auStack_108,&local_88);
      puVar4 = auStack_108;
      break;
    case -0x7ffcff26:
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0x6c55;
      local_1b0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_1b0);
      FUN_002296c4(auStack_f8,&local_88);
      puVar4 = auStack_f8;
      break;
    case -0x7ffcff25:
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0x6c53;
      local_1b0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_1b0);
      FUN_002296c4(auStack_e8,&local_88);
      puVar4 = auStack_e8;
      break;
    case -0x7ffcff1e:
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xa471;
      local_1b0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_1b0);
      FUN_002296c4(auStack_148,&local_88);
      puVar4 = auStack_148;
      break;
    default:
      if (iVar5 == -0x7ffefffc) {
        uVar9 = *(undefined8 *)(param_1 + 0x2c0);
        local_88 = 0xac5a;
        local_1b0 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_1b0);
        FUN_002296c4(auStack_128,&local_88);
        puVar4 = auStack_128;
      }
      else {
        if (iVar5 != -0x7ffefff6) goto switchD_002d6b78_caseD_800300c9;
        uVar9 = *(undefined8 *)(param_1 + 0x2c0);
        local_88 = 0x10c07;
        local_1b0 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_1b0);
        FUN_002296c4(auStack_98,&local_88);
        puVar4 = auStack_98;
      }
    }
  }
  else {
    switch(iVar5) {
    case -0x7f97ffeb:
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xa472;
      local_1b0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_1b0);
      FUN_002296c4(auStack_168,&local_88);
      puVar4 = auStack_168;
      break;
    case -0x7f97ffea:
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xa473;
      local_1b0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_1b0);
      FUN_002296c4(auStack_178,&local_88);
      puVar4 = auStack_178;
      break;
    case -0x7f97ffe9:
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xa474;
      local_1b0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_1b0);
      FUN_002296c4(auStack_188,&local_88);
      puVar4 = auStack_188;
      break;
    case -0x7f97ffe8:
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xa475;
      local_1b0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_1b0);
      FUN_002296c4(auStack_198,&local_88);
      puVar4 = auStack_198;
      break;
    default:
      if (iVar5 != -0x7ffaffff) goto switchD_002d6b78_caseD_800300c9;
      uVar9 = *(undefined8 *)(param_1 + 0x2c0);
      local_88 = 0xc406;
      local_1b0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_1b0);
      FUN_002296c4(auStack_158,&local_88);
      puVar4 = auStack_158;
    }
  }
  FUN_00220ff8(uVar9,puVar4);
  plVar10 = *(long **)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  if (plVar10[2] != 0) {
    lVar11 = *plVar10;
    plVar12 = (long *)plVar10[1];
    lVar8 = *plVar12;
    *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar11 + 8);
    **(long **)(lVar11 + 8) = lVar8;
    plVar10[2] = 0;
    while (plVar12 != plVar10) {
      plVar12 = (long *)plVar12[1];
      FUN_00187e4c();
    }
  }
  FUN_00313854(*(undefined8 *)(param_1 + 0xa8));
  lVar11 = *(long *)(param_1 + 0xb0);
  FUN_00202558(lVar11 + 0x10,*(undefined8 *)(lVar11 + 0x18));
  *(undefined8 **)(lVar11 + 0x10) = (undefined8 *)(lVar11 + 0x18);
  *(undefined8 *)(lVar11 + 0x18) = 0;
  *(undefined8 *)(lVar11 + 0x20) = 0;
  FUN_00313854(*(undefined8 *)(param_1 + 0x80));
  plVar10 = *(long **)(param_1 + 0x88);
  if (plVar10[2] != 0) {
    lVar11 = *plVar10;
    plVar12 = (long *)plVar10[1];
    lVar8 = *plVar12;
    *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar11 + 8);
    **(long **)(lVar11 + 8) = lVar8;
    plVar10[2] = 0;
    while (plVar12 != plVar10) {
      plVar13 = (long *)plVar12[1];
      (**(code **)plVar12[2])();
      FUN_00187e4c(plVar12);
      plVar12 = plVar13;
    }
  }
LAB_002d7518:
  FUN_002d4cc0(*(undefined8 *)(param_1 + 0xb8));
  FUN_001984a0(param_1 + 0x140);
  *(undefined1 *)(param_1 + 0x555) = 0;
  *(undefined4 *)(param_1 + 0x558) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  return 1;
}

