
undefined8 FUN_002dc2c0(long param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined4 local_1d0;
  ErrorResultVariant aEStack_1cc [12];
  undefined8 local_1c0;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
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
  undefined1 auStack_88 [16];
  int local_78;
  ErrorResultVariant aEStack_74 [12];
  undefined1 auStack_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (*(int *)(param_1 + 0x154) == 2) {
    lVar7 = *(long *)(param_1 + 0xa8);
    memset((void *)(param_1 + 0x568),0,0x20);
    lVar4 = *(long *)(lVar7 + 0xa8);
    if (lVar4 != *(long *)(lVar7 + 0xb0)) {
      uVar6 = 0;
      do {
        puVar2 = (undefined1 *)(lVar4 + uVar6);
        *(undefined1 *)(param_1 + 0x568 + uVar6) = *puVar2;
        if (0x1e < uVar6) break;
        uVar6 = uVar6 + 1;
      } while (puVar2 + 1 != *(undefined1 **)(lVar7 + 0xb0));
    }
    local_58 = (ulong)local_58._4_4_ << 0x20;
    local_78 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_78);
    FUN_002296c4(&local_78,&local_58);
    if (local_78 == 0) {
      lVar5 = *(long *)(param_1 + 0xa8);
      lVar4 = *(long *)(lVar5 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x18);
      if (*(int *)(param_1 + 0x558) == *(int *)(lVar5 + 0xc)) {
        bVar1 = *(long *)(param_1 + 0x560) != 0 && *(long *)(param_1 + 0x560) != lVar4;
      }
      else {
        bVar1 = false;
      }
      lVar5 = FUN_002bf8c0(DAT_04c611a0);
      uVar8 = DAT_04c611a0;
      *(bool *)(param_1 + 0x2c8) = lVar5 == lVar7;
      lVar7 = FUN_002bf8c0(uVar8);
      *(bool *)(param_1 + 0x10) = lVar7 == lVar4;
      if (((lVar7 == lVar4) || (*(char *)(param_1 + 0x2c8) != '\0')) || (bVar1)) {
        uVar8 = *(undefined8 *)(param_1 + 0x2c0);
        local_58 = CONCAT44(local_58._4_4_,0x6c5b);
        local_1d0 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_1d0);
        FUN_002296c4(auStack_200,&local_58);
        FUN_00220ff8(uVar8,auStack_200);
        plVar9 = *(long **)(param_1 + 0x128);
        *(undefined8 *)(param_1 + 0x2c0) = 0;
        if (plVar9[2] != 0) {
          lVar4 = *plVar9;
          plVar10 = (long *)plVar9[1];
          lVar7 = *plVar10;
          *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar4 + 8);
          **(long **)(lVar4 + 8) = lVar7;
          plVar9[2] = 0;
          while (plVar10 != plVar9) {
            plVar10 = (long *)plVar10[1];
            FUN_00187e4c();
          }
        }
        goto LAB_002dcb24;
      }
      *(long *)(param_1 + 8) = lVar4;
      FUN_0030a004(param_1 + 0x2e0);
      lVar4 = FUN_002e9aec(*(undefined8 *)(DAT_04c60f48 + 8),
                           *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0xc));
      if (lVar4 != 0) {
        FUN_002e87a0();
      }
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_58 = local_58 & 0xffffffff00000000;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_1d0);
      FUN_002296c4(auStack_210,&local_58);
      FUN_00220f8c(uVar8,auStack_210);
      plVar9 = *(long **)(param_1 + 0x128);
      *(undefined8 *)(param_1 + 0x2c0) = 0;
      lVar4 = plVar9[2];
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_58 = CONCAT44(local_58._4_4_,0x10c08);
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_1d0);
      FUN_002296c4(auStack_1f0,&local_58);
      FUN_00220ff8(uVar8,auStack_1f0);
      plVar9 = *(long **)(param_1 + 0x128);
      *(undefined8 *)(param_1 + 0x2c0) = 0;
      lVar4 = plVar9[2];
    }
    if (lVar4 != 0) {
      lVar4 = *plVar9;
      plVar10 = (long *)plVar9[1];
      lVar7 = *plVar10;
      *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar4 + 8);
      **(long **)(lVar4 + 8) = lVar7;
      plVar9[2] = 0;
      while (plVar10 != plVar9) {
        plVar10 = (long *)plVar10[1];
        FUN_00187e4c();
      }
    }
    goto LAB_002dcb24;
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
    case -0x7ffcff8d:
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0x6c4b;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_98,&local_78);
      puVar2 = auStack_98;
      break;
    case -0x7ffcff8c:
    case -0x7ffcff8b:
    case -0x7ffcff8a:
    case -0x7ffcff89:
    case -0x7ffcff88:
    case -0x7ffcff87:
    case -0x7ffcff86:
    case -0x7ffcff85:
    case -0x7ffcff84:
    case -0x7ffcff83:
    case -0x7ffcff82:
    case -0x7ffcff81:
    case -0x7ffcff80:
    case -0x7ffcff7f:
    case -0x7ffcff7e:
    case -0x7ffcff7d:
    case -0x7ffcff7c:
    case -0x7ffcff7b:
    case -0x7ffcff7a:
    case -0x7ffcff79:
    case -0x7ffcff78:
    case -0x7ffcff77:
    case -0x7ffcff76:
    case -0x7ffcff75:
    case -0x7ffcff74:
    case -0x7ffcff73:
    case -0x7ffcff72:
    case -0x7ffcff71:
    case -0x7ffcff70:
    case -0x7ffcff6f:
    case -0x7ffcff6e:
    case -0x7ffcff6d:
    case -0x7ffcff6c:
    case -0x7ffcff6b:
    case -0x7ffcff6a:
    case -0x7ffcff69:
    case -0x7ffcff68:
    case -0x7ffcff67:
    case -0x7ffcff66:
    case -0x7ffcff65:
    case -0x7ffcff64:
    case -0x7ffcff63:
    case -0x7ffcff62:
    case -0x7ffcff61:
    case -0x7ffcff60:
    case -0x7ffcff5f:
    case -0x7ffcff5e:
    case -0x7ffcff5d:
    case -0x7ffcff5c:
    case -0x7ffcff5b:
    case -0x7ffcff5a:
    case -0x7ffcff59:
    case -0x7ffcff58:
    case -0x7ffcff57:
    case -0x7ffcff56:
    case -0x7ffcff55:
    case -0x7ffcff54:
    case -0x7ffcff53:
    case -0x7ffcff52:
    case -0x7ffcff51:
    case -0x7ffcff50:
    case -0x7ffcff4f:
    case -0x7ffcff4e:
    case -0x7ffcff4d:
    case -0x7ffcff4c:
    case -0x7ffcff4b:
    case -0x7ffcff4a:
    case -0x7ffcff49:
    case -0x7ffcff48:
    case -0x7ffcff47:
    case -0x7ffcff46:
    case -0x7ffcff45:
    case -0x7ffcff44:
    case -0x7ffcff43:
    case -0x7ffcff42:
    case -0x7ffcff41:
    case -0x7ffcff40:
    case -0x7ffcff3f:
    case -0x7ffcff3e:
    case -0x7ffcff3d:
    case -0x7ffcff3c:
    case -0x7ffcff3b:
    case -0x7ffcff3a:
    case -0x7ffcff39:
    case -0x7ffcff37:
    case -0x7ffcff36:
    case -0x7ffcff35:
    case -0x7ffcff34:
    case -0x7ffcff30:
    case -0x7ffcff2f:
    case -0x7ffcff2d:
    case -0x7ffcff27:
    case -0x7ffcff24:
    case -0x7ffcff23:
    case -0x7ffcff22:
    case -0x7ffcff21:
    case -0x7ffcff20:
    case -0x7ffcff1f:
switchD_002dc334_caseD_80030074:
      local_1c0 = FUN_0018774c(&local_58);
      local_1d0 = 0xe437;
      local_78 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_1cc,(Result *)&local_78);
      FUN_002296c4(&local_78,&local_1d0);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)&local_1d0,(ErrorCode *)&local_1c0);
      FUN_0022b434(&local_78,&local_1d0);
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      FUN_002296c4(auStack_1e0,&local_78);
      puVar2 = auStack_1e0;
      break;
    case -0x7ffcff38:
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0x6c4c;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_a8,&local_78);
      puVar2 = auStack_a8;
      break;
    case -0x7ffcff33:
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0x6c4d;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_b8,&local_78);
      puVar2 = auStack_b8;
      break;
    case -0x7ffcff32:
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0x6c4e;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_c8,&local_78);
      puVar2 = auStack_c8;
      break;
    case -0x7ffcff31:
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa44f;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_118,&local_78);
      puVar2 = auStack_118;
      break;
    case -0x7ffcff2e:
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xc406;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_158,&local_78);
      puVar2 = auStack_158;
      break;
    case -0x7ffcff2c:
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0x6c54;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_68,&local_78);
      puVar2 = auStack_68;
      break;
    case -0x7ffcff2b:
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0x6c51;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_d8,&local_78);
      puVar2 = auStack_d8;
      break;
    case -0x7ffcff2a:
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0x6c52;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_e8,&local_78);
      puVar2 = auStack_e8;
      break;
    case -0x7ffcff29:
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0x6c54;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_138,&local_78);
      puVar2 = auStack_138;
      break;
    case -0x7ffcff28:
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0x10c08;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_128,&local_78);
      puVar2 = auStack_128;
      break;
    case -0x7ffcff26:
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0x6c55;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_108,&local_78);
      puVar2 = auStack_108;
      break;
    case -0x7ffcff25:
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0x6c53;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_f8,&local_78);
      puVar2 = auStack_f8;
      break;
    case -0x7ffcff1e:
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa471;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_168,&local_78);
      puVar2 = auStack_168;
      break;
    default:
      if (iVar3 == -0x7ffefffc) {
        uVar8 = *(undefined8 *)(param_1 + 0x2c0);
        local_78 = 0xac5a;
        local_1d0 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
        FUN_002296c4(auStack_148,&local_78);
        puVar2 = auStack_148;
      }
      else {
        if (iVar3 != -0x7ffefff6) goto switchD_002dc334_caseD_80030074;
        uVar8 = *(undefined8 *)(param_1 + 0x2c0);
        local_1d0 = 0;
        local_78 = 0x10c07;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
        FUN_002296c4(auStack_88,&local_78);
        puVar2 = auStack_88;
      }
    }
  }
  else {
    switch(iVar3) {
    case -0x7f97ffeb:
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa472;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_188,&local_78);
      puVar2 = auStack_188;
      break;
    case -0x7f97ffea:
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa473;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_198,&local_78);
      puVar2 = auStack_198;
      break;
    case -0x7f97ffe9:
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa474;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_1a8,&local_78);
      puVar2 = auStack_1a8;
      break;
    case -0x7f97ffe8:
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xa475;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_1b8,&local_78);
      puVar2 = auStack_1b8;
      break;
    default:
      if (iVar3 != -0x7ffaffff) goto switchD_002dc334_caseD_80030074;
      uVar8 = *(undefined8 *)(param_1 + 0x2c0);
      local_78 = 0xc406;
      local_1d0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_1d0);
      FUN_002296c4(auStack_178,&local_78);
      puVar2 = auStack_178;
    }
  }
  FUN_00220ff8(uVar8,puVar2);
  plVar9 = *(long **)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  if (plVar9[2] != 0) {
    lVar4 = *plVar9;
    plVar10 = (long *)plVar9[1];
    lVar7 = *plVar10;
    *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar4 + 8);
    **(long **)(lVar4 + 8) = lVar7;
    plVar9[2] = 0;
    while (plVar10 != plVar9) {
      plVar10 = (long *)plVar10[1];
      FUN_00187e4c();
    }
  }
LAB_002dcb24:
  FUN_00313854(*(undefined8 *)(param_1 + 0xa8));
  FUN_002d4fd0(*(undefined8 *)(param_1 + 200));
  FUN_001984a0(param_1 + 0x140);
  *(undefined1 *)(param_1 + 0x555) = 0;
  *(undefined4 *)(param_1 + 0x558) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  return 1;
}

