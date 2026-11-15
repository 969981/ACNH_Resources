
undefined8 FUN_01f40720(long *param_1,long param_2,long param_3,undefined1 *param_4)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined4 local_c4;
  undefined *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_54;
  
  lVar9 = param_1[2];
  if (*(int *)(lVar9 + 0x360) == 0x14) {
    if (*(int *)(lVar9 + 0x4b8) == 0) {
      return 0;
    }
    if (*(int *)(lVar9 + 0x378) != 0x23) {
      return 0;
    }
  }
  if (*(int *)(lVar9 + 0x360) == 0x16) {
    if (*(int *)(lVar9 + 0x4b8) == 0) {
      return 0;
    }
    if (*(int *)(lVar9 + 0x378) != 0x23) {
      return 0;
    }
  }
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0x18);
  if (*(int *)(lVar9 + 0x360) == 0x18) {
    if (*(int *)(lVar9 + 0x4b8) == 0) {
      return 0;
    }
    if (*(int *)(lVar9 + 0x378) != 0x23) {
      return 0;
    }
  }
  if ((*(byte *)((long)param_1 + 0xad5a) >> 2 & 1) != 0) {
    return 0;
  }
  lVar9 = (**(code **)(*param_1 + 0x3a0))(param_1);
  if (*(int *)(lVar9 + 0xe4) != 0) {
    iVar5 = (**(code **)(*param_1 + 1000))(param_1);
    if (iVar5 != 0) {
      return 0;
    }
    goto LAB_01f40d24;
  }
  if (*(int *)(lVar9 + 0xdc) == 1) {
    iVar5 = *(int *)(lVar9 + 0x168);
    if (iVar5 != 2) {
      if (iVar5 == 1) {
        if ((*(int *)(lVar9 + 0x170) == 2) ||
           ((*(char *)(lVar9 + 0x16c) == '\0' && (0x707 < *(int *)(lVar9 + 0x160)))))
        goto LAB_01f40b14;
      }
      else if (iVar5 == 0) {
        if ((*(int *)(lVar9 + 0x164) <= *(int *)(lVar9 + 0x15c)) || (*(int *)(lVar9 + 0x170) == 2))
        goto LAB_01f40b14;
        if (*(char *)(lVar9 + 0x16c) == '\0') {
          iVar5 = *(int *)(lVar9 + 0x164) * 2;
          if (iVar5 < 0x709) {
            iVar5 = 0x708;
          }
          if (iVar5 <= *(int *)(lVar9 + 0x160)) goto LAB_01f40b14;
        }
      }
LAB_01f40bb0:
      if ((*(int *)(lVar9 + 0x84) == 2) && (*(int *)(param_1[1] + 0x750) == 0)) {
        return 0;
      }
      goto LAB_01f40bd4;
    }
    if (*(int *)(lVar9 + 0x170) != 2) {
      if (*(char *)(lVar9 + 0x16c) == '\0') {
        iVar5 = *(int *)(lVar9 + 0x164) * 2;
        if (iVar5 < 0x709) {
          iVar5 = 0x708;
        }
        if (iVar5 <= *(int *)(lVar9 + 0x160)) goto LAB_01f40b14;
      }
      goto LAB_01f40bb0;
    }
LAB_01f40b14:
    (**(code **)(*param_1 + 1000))(param_1);
    uVar8 = (**(code **)(*param_1 + 0x380))(param_1);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(lVar9 + 0x14c) != 3) {
        iVar5 = *(int *)(lVar9 + 0xf0);
        (**(code **)(*param_1 + 0x358))(&local_c0,param_1);
        if (iVar5 == (int)local_b8) {
          FUN_01e640c8(param_3,lVar9 + 0xe8);
          return 1;
        }
      }
LAB_01f40d24:
      (**(code **)(*param_1 + 0x358))(&local_c0,param_1);
      *(undefined8 *)(param_3 + 8) = local_b8;
      *(undefined4 *)(param_3 + 0x1c) = local_a4;
      *(undefined4 *)(param_3 + 0x10) = local_b0;
      *(undefined4 *)(param_3 + 0x60) = (undefined4)local_60;
      *(ulong *)(param_3 + 0x14) = CONCAT44(uStack_a8,uStack_ac);
      *(undefined4 *)(param_3 + 0x30) = (undefined4)local_90;
      *(undefined4 *)(param_3 + 0x34) = local_90._4_4_;
      *(undefined4 *)(param_3 + 0x40) = (undefined4)local_80;
      *(undefined4 *)(param_3 + 0x44) = local_80._4_4_;
      *(undefined4 *)(param_3 + 0x48) = local_78;
      *(ulong *)(param_3 + 0x4c) = CONCAT44(uStack_70,local_74);
      *(undefined1 *)(param_3 + 0x54) = local_6c;
      *(undefined4 *)(param_3 + 0x58) = (undefined4)local_68;
      *(undefined4 *)(param_3 + 0x5c) = local_68._4_4_;
      *(undefined4 *)(param_3 + 100) = local_60._4_4_;
      *(undefined1 *)(param_3 + 0x68) = local_58;
      *(undefined4 *)(param_3 + 0x6c) = local_54;
      return 1;
    }
    local_b0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    local_a4 = 0;
    local_6c = 0;
    local_c0 = PTR_DAT_04bc1558 + 0x10;
    local_b8 = 0;
    local_a0 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_98 = PTR_DAT_04bb2010 + 0x10;
    local_90 = 0;
    local_80 = 0;
    local_78 = 0;
    local_74 = 0xffffffff;
    uStack_70 = 0xffffffff;
    local_68 = 0xfffe;
    puStack_88 = puStack_98;
    FUN_0277d4ac(&local_68);
    local_c4 = 8;
  }
  else {
    if (*(int *)(lVar9 + 0xdc) == 0) {
      lVar6 = (**(code **)(*param_1 + 0x3a0))(param_1);
      if ((param_2 != 0) && (*(int *)(lVar6 + 0x10) == 0)) {
        *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 0x10);
        *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
        *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_2 + 0x30);
        *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_2 + 0x34);
        *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_2 + 0x40);
        *(undefined4 *)(param_3 + 0x44) = *(undefined4 *)(param_2 + 0x44);
        *(undefined4 *)(param_3 + 0x48) = *(undefined4 *)(param_2 + 0x48);
        uVar10 = *(undefined8 *)(param_2 + 0x4c);
        *(undefined1 *)(param_3 + 0x54) = *(undefined1 *)(param_2 + 0x54);
        *(undefined8 *)(param_3 + 0x4c) = uVar10;
        *(undefined2 *)(param_3 + 0x58) = *(undefined2 *)(param_2 + 0x58);
        *(undefined1 *)(param_3 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
        *(undefined1 *)(param_3 + 0x5b) = *(undefined1 *)(param_2 + 0x5b);
        *(undefined4 *)(param_3 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
        *(undefined4 *)(param_3 + 0x60) = *(undefined4 *)(param_2 + 0x60);
        *(undefined4 *)(param_3 + 100) = *(undefined4 *)(param_2 + 100);
        *(undefined1 *)(param_3 + 0x68) = *(undefined1 *)(param_2 + 0x68);
        lVar6 = *(long *)PTR_DAT_04bb3968;
        *(undefined4 *)(param_3 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
        piVar7 = (int *)(**(code **)(*(long *)(lVar6 + 0x19f8) + 0xf0))(lVar6 + 0x19f8);
        iVar5 = *piVar7;
        plVar1 = (long *)(lVar6 + 0x19c8);
        piVar7 = (int *)(**(code **)(*(long *)(lVar6 + 0x19c8) + 0xf0))(plVar1);
        iVar2 = *piVar7;
        iVar11 = 0;
        if (*(long *)(lVar9 + 0x418) != 0) {
          iVar11 = *(int *)(*(long *)(lVar9 + 0x418) + 0x10);
        }
        piVar7 = (int *)(**(code **)(*plVar1 + 0xf0))(plVar1);
        lVar9 = param_1[1];
        iVar12 = *piVar7;
        uVar3 = *(uint *)(lVar9 + 0x288);
        *(undefined4 *)(lVar9 + 0x288) = *(undefined4 *)(lVar9 + 0x28c);
        uVar3 = uVar3 ^ uVar3 << 0xb;
        *(undefined4 *)(lVar9 + 0x28c) = *(undefined4 *)(lVar9 + 0x290);
        uVar4 = *(uint *)(lVar9 + 0x294);
        *(uint *)(lVar9 + 0x290) = uVar4;
        uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
        *(uint *)(lVar9 + 0x294) = uVar3;
        *(bool *)(param_3 + 0x68) =
             ((float)(uVar3 >> 9 | 0x3f800000) + -1.0) * 100.0 <
             (float)(iVar11 * (iVar5 - iVar2)) / 100.0 + (float)iVar12;
        return 1;
      }
      if (*(int *)((long)param_1 + 0xe62c) < 0x2d) {
        return 0;
      }
      FUN_01e26938(&local_c0);
      local_c4 = 2;
      FUN_01e26d20(&local_c0,&local_c4);
      *(undefined8 *)(param_3 + 8) = local_b8;
      *(undefined4 *)(param_3 + 0x1c) = local_a4;
      *(undefined4 *)(param_3 + 0x10) = local_b0;
      *(ulong *)(param_3 + 0x14) = CONCAT44(uStack_a8,uStack_ac);
      *(undefined4 *)(param_3 + 0x30) = (undefined4)local_90;
      *(undefined4 *)(param_3 + 0x34) = local_90._4_4_;
      *(undefined4 *)(param_3 + 0x40) = (undefined4)local_80;
      *(undefined4 *)(param_3 + 0x44) = local_80._4_4_;
      *(undefined4 *)(param_3 + 0x48) = local_78;
      *(ulong *)(param_3 + 0x4c) = CONCAT44(uStack_70,local_74);
      *(undefined1 *)(param_3 + 0x54) = local_6c;
      goto LAB_01f40cac;
    }
LAB_01f40bd4:
    if (*(int *)((long)param_1 + 0xe62c) < 0x2d) {
      return 0;
    }
    local_b0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    local_a4 = 0;
    local_6c = 0;
    local_c0 = PTR_DAT_04bc1558 + 0x10;
    local_b8 = 0;
    local_a0 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_98 = PTR_DAT_04bb2010 + 0x10;
    local_90 = 0;
    local_80 = 0;
    local_78 = 0;
    local_74 = 0xffffffff;
    uStack_70 = 0xffffffff;
    local_68 = 0xfffe;
    puStack_88 = puStack_98;
    FUN_0277d4ac(&local_68);
    local_c4 = 2;
  }
  local_54 = 0;
  local_58 = 0;
  local_60 = 0x3bf800000;
  FUN_01e26d20(&local_c0,&local_c4);
  *(undefined8 *)(param_3 + 8) = local_b8;
  *(undefined4 *)(param_3 + 0x1c) = local_a4;
  *(undefined4 *)(param_3 + 0x10) = local_b0;
  *(ulong *)(param_3 + 0x14) = CONCAT44(uStack_a8,uStack_ac);
  *(undefined4 *)(param_3 + 0x30) = (undefined4)local_90;
  *(undefined4 *)(param_3 + 0x34) = local_90._4_4_;
  *(undefined4 *)(param_3 + 0x40) = (undefined4)local_80;
  *(undefined4 *)(param_3 + 0x44) = local_80._4_4_;
  *(undefined4 *)(param_3 + 0x48) = local_78;
  *(undefined1 *)(param_3 + 0x54) = local_6c;
  *(ulong *)(param_3 + 0x4c) = CONCAT44(uStack_70,local_74);
LAB_01f40cac:
  *(undefined4 *)(param_3 + 0x58) = (undefined4)local_68;
  *(undefined4 *)(param_3 + 0x5c) = local_68._4_4_;
  *(undefined4 *)(param_3 + 100) = local_60._4_4_;
  *(undefined4 *)(param_3 + 0x60) = (undefined4)local_60;
  *(undefined1 *)(param_3 + 0x68) = local_58;
  *(undefined4 *)(param_3 + 0x6c) = local_54;
  *param_4 = 0;
  return 1;
}

