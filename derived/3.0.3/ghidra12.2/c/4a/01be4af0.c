
void FUN_01be4af0(long *param_1,uint param_2,int param_3,uint param_4,int param_5,undefined4 param_6
                 )

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  ulong uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *local_160;
  ushort *puStack_158;
  uint local_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined **local_130;
  undefined1 *puStack_128;
  undefined4 local_120;
  undefined1 local_11c [63];
  undefined1 local_dd;
  undefined **local_d8;
  undefined1 *puStack_d0;
  undefined4 local_c8;
  undefined1 local_c4 [63];
  undefined1 local_85;
  undefined *local_80;
  ushort *local_78;
  uint local_70;
  uint local_68;
  ushort *local_60;
  undefined4 local_54;
  int local_38;
  
  local_54 = param_6;
  puVar4 = (ushort *)(**(code **)(*param_1 + 0x10))();
  local_150 = (**(code **)(*param_1 + 0x20))(param_1);
  puVar1 = PTR_DAT_04bb2df8;
  local_14c = 0;
  local_148 = 0xffffffff;
  uStack_140 = 0xffffffff00000000;
  local_160 = PTR_DAT_04bb2df8 + 0x10;
  local_138 = 0xffffffff;
  local_120 = 0x40;
  puStack_128 = local_11c;
  local_dd = 0;
  local_11c[0] = 0;
  local_c8 = 0x40;
  local_85 = 0;
  local_c4[0] = 0;
  local_130 = &PTR_LAB_048fb9f8;
  puStack_d0 = local_c4;
  local_d8 = &PTR_LAB_048fb9f8;
  local_80 = PTR_DAT_04bb4ca0 + 0x10;
  if ((int)local_150 < 1) {
    local_78 = (ushort *)0x0;
    local_70 = 0;
  }
  else {
    puVar4[local_150 - 1] = 0;
    local_78 = puVar4;
    local_70 = local_150;
  }
  local_60 = puVar4;
  local_68 = local_150;
  if (puVar4 == (ushort *)0x0 || (int)local_150 < 1) {
    local_68 = 0;
    local_60 = (ushort *)0x0;
  }
  if (param_4 - 0xb < 0xfffffff6) {
    return;
  }
  if (param_5 == 0) {
    if (param_2 - 1 < 0xd) {
      local_38 = *(int *)(&DAT_04178224 + (long)(int)(param_2 - 1) * 4);
    }
    else {
      local_38 = 1;
    }
    if (4 < param_4) goto LAB_01be4c54;
LAB_01be4c68:
    if ((param_2 < 0xd) && ((1 << (ulong)(param_2 & 0x1f) & 0x1b44U) != 0)) {
      local_38 = 1;
    }
  }
  else {
    local_38 = param_5;
    if (param_4 < 5) goto LAB_01be4c68;
LAB_01be4c54:
    if (param_3 + 9999U < 19999) goto LAB_01be4c68;
  }
  puStack_158 = puVar4;
  (**(code **)(puVar1 + 0x48))(&local_160);
  FUN_038d1340(&local_80,&DAT_04169720,param_3);
  switch(local_54) {
  case 1:
    (**(code **)(local_80 + 0x18))(&local_80);
    lVar9 = 0;
    do {
      if (local_78[lVar9] == 0) goto LAB_01be4e3c;
      if (local_78[lVar9 + 1] == 0) {
        lVar9 = lVar9 + 1;
        goto LAB_01be4e3c;
      }
      if (local_78[lVar9 + 2] == 0) {
        lVar9 = lVar9 + 2;
        goto LAB_01be4e3c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_01be4e3c:
    if ((int)param_4 < 0) goto switchD_01be4cd8_default;
    uVar2 = (uint)lVar9;
    if ((int)param_4 < (int)uVar2) goto switchD_01be4cd8_default;
    FUN_01be5460(&local_160,0,param_4 - uVar2);
    uVar7 = param_4 - uVar2;
    if (uVar7 == 0) goto switchD_01be4cd8_default;
    if (~uVar2 + param_4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      do {
        uVar8 = uVar2;
        if (local_68 <= uVar2) {
          uVar8 = 0;
        }
        local_60[(int)uVar8] = 0x20;
        iVar3 = 0;
        if (uVar2 + 1 < local_68) {
          iVar3 = uVar2 + 1;
        }
        uVar2 = uVar2 + 2;
        local_60[iVar3] = 0x20;
      } while (uVar2 != (uVar7 & 0xfffffffe));
    }
    if ((uVar7 & 1) == 0) goto switchD_01be4cd8_default;
    uVar6 = 0x20;
    break;
  case 2:
    uVar2 = (**(code **)(local_160 + 0x20))(&local_160);
    if (param_4 <= uVar2) {
      uVar2 = param_4;
    }
    (**(code **)(local_80 + 0x18))(&local_80);
    uVar11 = 0;
    do {
      if (local_78[uVar11] == 0) goto LAB_01be4e7c;
      if (local_78[uVar11 + 1] == 0) {
        uVar11 = uVar11 + 1;
        goto LAB_01be4e7c;
      }
      if (local_78[uVar11 + 2] == 0) {
        uVar11 = uVar11 + 2;
        goto LAB_01be4e7c;
      }
      uVar11 = uVar11 + 3;
    } while (uVar11 != 0x80001);
    uVar11 = 0;
LAB_01be4e7c:
    uVar7 = (uint)uVar11;
    if (uVar7 <= uVar2 && uVar2 - uVar7 != 0) {
      uVar8 = uVar7 + 1;
      if ((uVar2 - uVar7 & 1) != 0) {
        if (local_68 <= uVar7) {
          uVar7 = 0;
        }
        local_60[(int)uVar7] = 0x20;
        uVar11 = (ulong)uVar8;
      }
      while (uVar2 != uVar8) {
        uVar8 = (uint)uVar11;
        uVar7 = uVar8;
        if (local_68 <= uVar8) {
          uVar7 = 0;
        }
        local_60[(int)uVar7] = 0x20;
        iVar3 = 0;
        if (uVar8 + 1 < local_68) {
          iVar3 = uVar8 + 1;
        }
        uVar8 = uVar8 + 2;
        uVar11 = (ulong)uVar8;
        local_60[iVar3] = 0x20;
      }
    }
    goto LAB_01be4f6c;
  case 3:
    if (param_3 < 0) goto switchD_01be4cd8_default;
    (**(code **)(local_80 + 0x18))(&local_80);
    lVar9 = 0;
    do {
      if (local_78[lVar9] == 0) goto LAB_01be5128;
      if (local_78[lVar9 + 1] == 0) {
        lVar9 = lVar9 + 1;
        goto LAB_01be5128;
      }
      if (local_78[lVar9 + 2] == 0) {
        lVar9 = lVar9 + 2;
        goto LAB_01be5128;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_01be5128:
    if ((int)param_4 < 0) goto switchD_01be4cd8_default;
    uVar2 = (uint)lVar9;
    if ((int)param_4 < (int)uVar2) goto switchD_01be4cd8_default;
    FUN_01be5460(&local_160,0,param_4 - uVar2);
    uVar7 = param_4 - uVar2;
    if (uVar7 == 0) goto switchD_01be4cd8_default;
    if (~uVar2 + param_4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      do {
        uVar8 = uVar2;
        if (local_68 <= uVar2) {
          uVar8 = 0;
        }
        local_60[(int)uVar8] = 0x30;
        iVar3 = 0;
        if (uVar2 + 1 < local_68) {
          iVar3 = uVar2 + 1;
        }
        uVar2 = uVar2 + 2;
        local_60[iVar3] = 0x30;
      } while (uVar2 != (uVar7 & 0xfffffffe));
    }
    if ((uVar7 & 1) == 0) goto switchD_01be4cd8_default;
    uVar6 = 0x30;
    break;
  case 4:
    uVar2 = (**(code **)(local_160 + 0x20))(&local_160);
    if (param_4 <= uVar2) {
      uVar2 = param_4;
    }
    (**(code **)(local_80 + 0x18))(&local_80);
    uVar11 = 0;
    do {
      if (local_78[uVar11] == 0) goto LAB_01be4efc;
      if (local_78[uVar11 + 1] == 0) {
        uVar11 = uVar11 + 1;
        goto LAB_01be4efc;
      }
      if (local_78[uVar11 + 2] == 0) {
        uVar11 = uVar11 + 2;
        goto LAB_01be4efc;
      }
      uVar11 = uVar11 + 3;
    } while (uVar11 != 0x80001);
    uVar11 = 0;
LAB_01be4efc:
    uVar7 = (uint)uVar11;
    if (uVar7 <= uVar2 && uVar2 - uVar7 != 0) {
      uVar8 = uVar7 + 1;
      if ((uVar2 - uVar7 & 1) != 0) {
        if (local_68 <= uVar7) {
          uVar7 = 0;
        }
        local_60[(int)uVar7] = 0x30;
        uVar11 = (ulong)uVar8;
      }
      while (uVar2 != uVar8) {
        uVar8 = (uint)uVar11;
        uVar7 = uVar8;
        if (local_68 <= uVar8) {
          uVar7 = 0;
        }
        local_60[(int)uVar7] = 0x30;
        iVar3 = 0;
        if (uVar8 + 1 < local_68) {
          iVar3 = uVar8 + 1;
        }
        uVar8 = uVar8 + 2;
        uVar11 = (ulong)uVar8;
        local_60[iVar3] = 0x30;
      }
    }
LAB_01be4f6c:
    uVar6 = 0;
    break;
  default:
    goto switchD_01be4cd8_default;
  }
  if (local_68 <= uVar2) {
    uVar2 = 0;
  }
  local_60[(int)uVar2] = uVar6;
switchD_01be4cd8_default:
  if (local_38 - 2U < 3) {
    (**(code **)(local_80 + 0x18))(&local_80);
    lVar9 = 0;
    uVar2 = 0xffffffff;
    do {
      if (local_78[lVar9] == 0) {
LAB_01be4ffc:
        uVar2 = ~(uint)lVar9;
        break;
      }
      if (local_78[lVar9 + 1] == 0) {
        lVar9 = lVar9 + 1;
        goto LAB_01be4ffc;
      }
      if (local_78[lVar9 + 2] == 0) {
        lVar9 = lVar9 + 2;
        goto LAB_01be4ffc;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    iVar3 = (**(code **)(local_160 + 0x20))(&local_160);
    puVar4 = local_60;
    uVar7 = local_68 + ~(iVar3 + uVar2);
    if (local_68 < iVar3 + uVar2) {
      uVar7 = 0xffffffff;
    }
    uVar11 = (ulong)uVar7;
    if (local_68 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      if (*local_60 - 0x30 < 10) {
        uVar10 = 0;
      }
      else {
        uVar5 = 0;
        uVar2 = 0xffffffff;
        do {
          uVar10 = uVar5 + 1;
          if (local_68 == (uint)uVar10) goto LAB_01be509c;
          uVar5 = uVar10 & 0xffffffff;
        } while (9 < *(ushort *)
                      ((long)local_60 +
                      (-(uVar10 >> 0x1f & 1) & 0xfffffffe00000000 | uVar10 * 2 & 0x1fffffffe)) -
                     0x30);
      }
      uVar2 = (local_68 - iVar3) + (uint)uVar10;
      if (local_68 < iVar3 + ~(uint)uVar10) {
        uVar2 = 0xffffffff;
      }
    }
LAB_01be509c:
    if (uVar2 != uVar7) {
      uVar8 = 0;
      uVar5 = (ulong)uVar7;
      do {
        if ((*(ushort *)((long)puVar4 + (-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1)) -
             0x30 < 10) && (uVar8 = uVar8 + 1, 2 < uVar8)) {
          FUN_01be5460(&local_160,uVar5,1);
          uVar8 = 0;
          puVar4[(int)uVar11] = (ushort)(0xa0002e002c >> (((ulong)(local_38 - 2U) & 3) << 4));
        }
        uVar5 = uVar11 + 0xffffffff;
        uVar11 = uVar5 & 0xffffffff;
      } while (uVar2 != (uint)uVar5);
    }
  }
  return;
}

