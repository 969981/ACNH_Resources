
undefined8 FUN_01f5165c(long param_1)

{
  byte bVar1;
  ulong *puVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined4 local_b0 [2];
  undefined1 auStack_a8 [8];
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  undefined7 uStack_67;
  int local_60 [2];
  undefined4 local_58 [2];
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_34;
  
  puVar2 = (ulong *)(param_1 + 0xaff8);
  if ((*(byte *)(param_1 + 0xad5a) >> 1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0xb011) = 0x1e;
    return 0;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  local_80 = CONCAT44(local_80._4_4_,0xe);
  if ((((*(int *)(lVar9 + 0x378) == 0xe) ||
       (local_80 = CONCAT44(local_80._4_4_,0x10), *(int *)(lVar9 + 0x378) == 0x10)) ||
      (local_80 = CONCAT44(local_80._4_4_,0xe), *(int *)(lVar9 + 0x360) == 0xe)) ||
     (local_80 = CONCAT44(local_80._4_4_,0x10), *(int *)(lVar9 + 0x360) == 0x10)) {
    if ((*(int *)(lVar9 + 0x360) == 0xe && *(int *)(lVar9 + 0x4b8) != 0) &&
       (*(int *)(lVar9 + 0x378) == 0x23)) {
      local_80 = (ulong)local_80._4_4_ << 0x20;
      local_58[0] = 0;
      FUN_01e5a930(0x40000000,lVar9,0,PTR_DAT_04bb2150,&local_80,local_58,PTR_DAT_04bc1600,6);
      lVar9 = *(long *)(param_1 + 8);
    }
    else {
      if (*(int *)(lVar9 + 0x360) != 0x10) {
        return 1;
      }
      if (*(int *)(lVar9 + 0x4b8) == 0) {
        return 1;
      }
      if (*(int *)(lVar9 + 0x378) != 0x23) {
        return 1;
      }
      local_80 = (ulong)local_80._4_4_ << 0x20;
      local_58[0] = 0;
      FUN_01e5a930(0x40000000,lVar9,0,PTR_DAT_04bb2150,&local_80,local_58,PTR_DAT_04bc1600,6);
      lVar9 = *(long *)(param_1 + 8);
    }
    *(uint *)(lVar9 + 0x69c) = *(uint *)(lVar9 + 0x69c) & 0xffffffef;
    return 1;
  }
  bVar1 = *(char *)(param_1 + 0xb011) + 1;
  *(byte *)(param_1 + 0xb011) = bVar1;
  if (0x1e < bVar1) {
    lVar9 = *(long *)(param_1 + 8);
    *(undefined1 *)(param_1 + 0xb011) = 0;
    if (((*(uint *)(lVar9 + 0x69c) & 0x30) != 0) && (*(int *)(param_1 + 0x77b0) != 0x29)) {
      local_80 = CONCAT44(local_80._4_4_,4);
      *(uint *)(lVar9 + 0x69c) = *(uint *)(lVar9 + 0x69c) & 0xffffffef;
      lVar9 = *(long *)(param_1 + 8);
    }
    plVar10 = (long *)FUN_016debb0(lVar9);
    (**(code **)(*plVar10 + 0x348))(local_58);
    uVar11 = FUN_0277d9a8(local_58);
    if ((uVar11 & 1) == 0) {
      bVar6 = false;
    }
    else {
      FUN_007b0de0(&local_80,local_58);
      local_88 = CONCAT44(local_88._4_4_,0xe);
      local_60[0] = FUN_007b0ea4(&local_80,&local_88);
      bVar6 = local_60[0] != 4;
    }
    puVar3 = (undefined2 *)(param_1 + 0xae92);
    plVar10 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar10 + 0x370))(local_60);
    uVar11 = FUN_0277d9a8(local_60);
    if ((uVar11 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      FUN_01ad5d04(&local_80,local_60);
      uVar7 = FUN_01ad6a30(&local_80,0x14);
    }
    puVar5 = PTR_DAT_04bb30a0;
    uVar8 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
    if (uVar8 < 4) {
      if ((bVar6) || (*(char *)(param_1 + 0xb010) != '\0')) {
        local_88 = 0xfffe;
        FUN_0277d4ac(&local_88);
        local_90 = 0xfffe;
        FUN_0277d4ac(&local_90);
        local_98 = 0xfffe;
        FUN_0277d4ac(&local_98);
        plVar10 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
        (**(code **)(*plVar10 + 0x2f0))(local_a0);
        plVar10 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
        (**(code **)(*plVar10 + 0x2d8))(auStack_a8);
        plVar10 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
        (**(code **)(*plVar10 + 0x2e0))(local_b0);
        local_38 = 0x23;
        local_36 = 8;
        FUN_020fd3a0(&local_38,*(long *)(param_1 + 8) + 0x3e0);
        local_80 = local_80 & 0xffffffff00000000;
        uVar12 = FUN_016debb0(*(undefined8 *)(param_1 + 8));
        uVar11 = FUN_021e0730(&local_88,&local_90,&local_98,&local_80,&local_38,uVar12);
        if ((uVar11 & 1) != 0) {
          FUN_01ee18a4(&local_80,0xffffffff);
          uVar11 = FUN_0277d7b4(&local_88,local_a0);
          if ((uVar11 & 1) == 0) {
            local_34 = 0;
            local_80 = local_88;
            local_68 = local_68 | 1;
          }
          uVar11 = FUN_0277d7b4(&local_90,auStack_a8);
          if ((uVar11 & 1) == 0) {
            local_78 = (undefined2)local_90;
            uStack_76 = (undefined1)((ulong)local_90 >> 0x10);
            uStack_75 = (undefined1)((ulong)local_90 >> 0x18);
            uStack_74 = local_90._4_4_;
            local_34 = 1;
            local_68 = local_68 | 2;
          }
          uVar11 = FUN_0277d7b4(&local_98,local_b0);
          if ((uVar11 & 1) == 0) {
            local_70 = (undefined4)local_98;
            local_6c = local_98._4_4_;
            local_34 = 2;
            local_68 = local_68 | 4;
          }
          if ((local_68 & 7) != 0) {
            *(undefined2 *)(param_1 + 0xae90) = (undefined2)local_80;
            *puVar3 = local_80._2_2_;
            *(ulong *)(param_1 + 0xae98) =
                 CONCAT44(uStack_74,CONCAT13(uStack_75,CONCAT12(uStack_76,local_78)));
            *(uint *)(param_1 + 0xae94) = local_80._4_4_;
            *(undefined4 *)(param_1 + 0xaea0) = local_70;
            *(undefined4 *)(param_1 + 0xaea4) = local_6c;
            *(ulong *)(param_1 + 0xaea8) = CONCAT71(uStack_67,local_68);
            FUN_01e5b718(*(undefined8 *)(param_1 + 0x10),&local_80);
            lVar9 = *(long *)(param_1 + 8);
            goto LAB_01f51e14;
          }
        }
      }
    }
    else {
      uVar8 = FUN_00a86724(*(undefined8 *)puVar5);
      if ((uVar8 & 0xfffffffe) == 4) {
        if ((!bVar6 && (uVar7 & 1) == 0) && *(int *)(param_1 + 0xad38) != 3) {
          FUN_01ee18a4(&local_80,0xffffffff);
          FUN_021df2d0(&local_88,*(long *)(param_1 + 8) + 0x3e0);
          local_90 = (ulong)local_90._4_4_ << 0x20;
          local_80 = local_88;
          local_68 = local_68 | 1;
          FUN_021df470(&local_88,*(long *)(param_1 + 8) + 0x3e0);
          local_90 = CONCAT44(local_90._4_4_,1);
          local_78 = (undefined2)local_88;
          uStack_76 = local_88._2_1_;
          uStack_75 = local_88._3_1_;
          uStack_74 = local_88._4_4_;
          *(undefined2 *)(param_1 + 0xae98) = (undefined2)local_88;
          *(undefined1 *)(param_1 + 0xae9a) = local_88._2_1_;
          *(undefined1 *)(param_1 + 0xae9b) = local_88._3_1_;
          *(undefined4 *)(param_1 + 0xae9c) = local_88._4_4_;
          *(undefined2 *)(param_1 + 0xae90) = (undefined2)local_80;
          *(undefined2 *)(param_1 + 0xaea0) = (undefined2)local_70;
          *(undefined4 *)(param_1 + 0xaea4) = local_6c;
          *(undefined1 *)puVar3 = local_80._2_1_;
          *(undefined1 *)(param_1 + 0xaea2) = local_70._2_1_;
          *(undefined1 *)(param_1 + 0xaea3) = local_70._3_1_;
          *(undefined1 *)(param_1 + 0xae93) = local_80._3_1_;
          *(ulong *)(param_1 + 0xaea8) = CONCAT71(uStack_67,local_68) | 2;
          *(uint *)(param_1 + 0xae94) = local_80._4_4_;
          local_68 = local_68 | 2;
          FUN_01e5b718(*(undefined8 *)(param_1 + 0x10),&local_80);
          lVar9 = *(long *)(param_1 + 8);
LAB_01f51e14:
          *(uint *)(lVar9 + 0x69c) = *(uint *)(lVar9 + 0x69c) | 0x10;
          *(undefined1 *)(param_1 + 0xb010) = 0;
          return 1;
        }
      }
      else if (*(char *)(param_1 + 0xb010) == '\0') {
        if (*(short *)puVar2 == -2) {
          local_80 = 0xfffe;
          FUN_0277d4ac(&local_80);
          local_88 = 0xfffe;
          FUN_0277d4ac(&local_88);
          local_90 = 0xfffe;
          FUN_0277d4ac(&local_90);
          plVar10 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
          (**(code **)(*plVar10 + 0x2f0))(&local_98);
          plVar10 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
          (**(code **)(*plVar10 + 0x2d8))(local_a0);
          plVar10 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
          (**(code **)(*plVar10 + 0x2e0))(auStack_a8);
          local_34 = CONCAT13(local_34._3_1_,0x80023);
          FUN_020fd3a0(&local_34,*(long *)(param_1 + 8) + 0x3e0);
          local_b0[0] = 1;
          uVar12 = FUN_016debb0(*(undefined8 *)(param_1 + 8));
          uVar11 = FUN_021e0730(&local_80,&local_88,&local_90,local_b0,&local_34,uVar12);
          if ((uVar11 & 1) != 0) {
            *(undefined4 *)puVar2 = (undefined4)local_80;
            *(uint *)(param_1 + 0xaffc) = local_80._4_4_;
            *(undefined4 *)(param_1 + 0xb000) = (undefined4)local_88;
            *(undefined4 *)(param_1 + 0xb004) = local_88._4_4_;
            *(undefined4 *)(param_1 + 0xb008) = (undefined4)local_90;
            *(uint *)(param_1 + 0xb00c) = local_90._4_4_;
          }
        }
        uVar11 = FUN_0277dedc(puVar2);
        if ((uVar11 & 1) == 0) {
          plVar10 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
          (**(code **)(*plVar10 + 0x2f0))(&local_88);
          plVar10 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
          (**(code **)(*plVar10 + 0x2d8))(&local_90);
          plVar10 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
          (**(code **)(*plVar10 + 0x2e0))(&local_98);
          FUN_01ee18a4(&local_80,0xffffffff);
          uVar11 = FUN_0277d7b4(puVar2,&local_88);
          if ((uVar11 & 1) == 0) {
            local_80 = *puVar2;
            local_a0[0] = 0;
            local_68 = local_68 | 1;
          }
          uVar11 = FUN_0277d7b4(param_1 + 0xb000,&local_90);
          if ((uVar11 & 1) == 0) {
            uVar4 = *(undefined4 *)(param_1 + 0xb000);
            uStack_74 = *(undefined4 *)(param_1 + 0xb004);
            local_78 = (undefined2)uVar4;
            uStack_76 = (undefined1)((uint)uVar4 >> 0x10);
            uStack_75 = (undefined1)((uint)uVar4 >> 0x18);
            local_a0[0] = 1;
            local_68 = local_68 | 2;
          }
          uVar11 = FUN_0277d7b4(param_1 + 0xb008,&local_98);
          if ((uVar11 & 1) == 0) {
            local_70 = *(undefined4 *)(param_1 + 0xb008);
            local_6c = *(undefined4 *)(param_1 + 0xb00c);
            local_a0[0] = 2;
            local_68 = local_68 | 4;
          }
          if ((local_68 & 7) != 0) {
            *(undefined2 *)(param_1 + 0xae90) = (undefined2)local_80;
            *puVar3 = local_80._2_2_;
            *(ulong *)(param_1 + 0xae98) =
                 CONCAT44(uStack_74,CONCAT13(uStack_75,CONCAT12(uStack_76,local_78)));
            *(uint *)(param_1 + 0xae94) = local_80._4_4_;
            *(undefined4 *)(param_1 + 0xaea0) = local_70;
            *(undefined4 *)(param_1 + 0xaea4) = local_6c;
            *(ulong *)(param_1 + 0xaea8) = CONCAT71(uStack_67,local_68);
            FUN_01e5b718(*(undefined8 *)(param_1 + 0x10),&local_80);
            *(uint *)(*(long *)(param_1 + 8) + 0x69c) =
                 *(uint *)(*(long *)(param_1 + 8) + 0x69c) | 0x10;
            *(undefined1 *)(param_1 + 0xb010) = 1;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

