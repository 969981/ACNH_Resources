
undefined8 FUN_01f591f0(long param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  char *pcVar18;
  undefined8 uVar19;
  uint local_e4;
  char *local_e0;
  long local_d8;
  undefined1 local_d0;
  byte local_cf;
  undefined4 local_c4;
  undefined4 local_c0 [2];
  undefined1 auStack_b8 [8];
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  char *local_88;
  undefined1 local_80;
  byte local_7f;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 local_64;
  byte local_60;
  undefined7 uStack_5f;
  undefined1 auStack_58 [8];
  undefined1 auStack_38 [8];
  
  lVar14 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar14 + 0x378) == 0xe) {
    return 0;
  }
  if (*(int *)(lVar14 + 0x378) == 0x10) {
    return 0;
  }
  if ((*(int *)(lVar14 + 0x360) == 0xe) || (*(int *)(lVar14 + 0x360) == 0x10)) {
    if ((*(int *)(lVar14 + 0x360) == 0xe) &&
       ((*(int *)(lVar14 + 0x4b8) != 0 && (*(int *)(lVar14 + 0x378) == 0x23)))) {
      local_78 = (char *)((ulong)local_78._4_4_ << 0x20);
      local_90 = (char *)((ulong)local_90._4_4_ << 0x20);
      FUN_01e5a930(0x40000000,lVar14,0,PTR_DAT_04bb2150,&local_78,&local_90,PTR_DAT_04bc1600,6);
      *(uint *)(*(long *)(param_1 + 8) + 0x69c) =
           *(uint *)(*(long *)(param_1 + 8) + 0x69c) & 0xffffffef;
      return 0;
    }
    if (*(int *)(lVar14 + 0x360) != 0x10) {
      return 1;
    }
    if (*(int *)(lVar14 + 0x4b8) == 0) {
      return 1;
    }
    if (*(int *)(lVar14 + 0x378) == 0x23) {
      local_78 = (char *)((ulong)local_78._4_4_ << 0x20);
      local_90 = (char *)((ulong)local_90._4_4_ << 0x20);
      FUN_01e5a930(0x40000000,lVar14,0,PTR_DAT_04bb2150,&local_78,&local_90,PTR_DAT_04bc1600,6);
      *(uint *)(*(long *)(param_1 + 8) + 0x69c) =
           *(uint *)(*(long *)(param_1 + 8) + 0x69c) & 0xffffffef;
      return 0;
    }
    return 1;
  }
  uVar3 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
  if (9 < uVar3) {
    return 0;
  }
  if ((&DAT_053fee41)[(ulong)uVar3 * 0xba0] == '\0') {
    return 0;
  }
  local_78 = (char *)CONCAT44(local_78._4_4_,(&DAT_053fe830)[(ulong)uVar3 * 0x2e8]);
  if ((&DAT_053fe830)[(ulong)uVar3 * 0x2e8] != 0) {
    return 0;
  }
  puVar1 = (undefined4 *)(param_1 + 0xae90);
  plVar15 = (long *)FUN_016debb0();
  (**(code **)(*plVar15 + 0x348))(auStack_38);
  uVar16 = FUN_0277d9a8(auStack_38);
  if ((uVar16 & 1) == 0) {
    bVar8 = false;
    bVar7 = false;
  }
  else {
    FUN_007b0de0(&local_78,auStack_38);
    local_e0._0_4_ = 0xe;
    local_90._0_4_ = FUN_007b0ea4(&local_78,&local_e0);
    bVar7 = (int)local_90 != 4;
    FUN_007b0de0(&local_78,auStack_38);
    local_e0 = (char *)CONCAT44(local_e0._4_4_,0x11);
    iVar10 = FUN_007b0ea4(&local_78,&local_e0);
    local_90 = (char *)CONCAT44(local_90._4_4_,iVar10);
    bVar8 = iVar10 != 4;
  }
  plVar15 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar15 + 0x370))(auStack_58);
  uVar16 = FUN_0277d9a8(auStack_58);
  if ((uVar16 & 1) == 0) {
    uVar11 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
    if (3 < uVar11) {
      uVar11 = 0;
      goto LAB_01f59550;
    }
  }
  else {
    FUN_01ad5d04(&local_78,auStack_58);
    uVar11 = FUN_01ad6a30(&local_78,0x14);
    uVar12 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
    if (3 < uVar12) {
LAB_01f59550:
      uVar12 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
      if ((uVar12 & 0xfffffffe) == 4) {
        if ((bVar7 || (uVar11 & 1) != 0) || *(uint *)(param_1 + 0xad38) == 3) {
          return 0;
        }
        pcVar18 = (char *)FUN_0265c3e0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
        if (pcVar18 == (char *)0x0) {
          return 0;
        }
        uVar16 = FUN_021ded20();
        if ((uVar16 & 1) != 0) {
          plVar15 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
          (**(code **)(*plVar15 + 0x2d8))(&local_78);
          if ((short)local_78 == -2) {
            lVar14 = *(long *)(param_1 + 8);
            uVar11 = *(uint *)(lVar14 + 0x288);
            *(undefined4 *)(lVar14 + 0x288) = *(undefined4 *)(lVar14 + 0x28c);
            uVar11 = uVar11 ^ uVar11 << 0xb;
            *(undefined4 *)(lVar14 + 0x28c) = *(undefined4 *)(lVar14 + 0x290);
            uVar12 = *(uint *)(lVar14 + 0x294);
            *(uint *)(lVar14 + 0x290) = uVar12;
            uVar11 = uVar11 >> 8 ^ uVar12 >> 0x13 ^ uVar11 ^ uVar12;
            *(uint *)(lVar14 + 0x294) = uVar11;
            uVar12 = *(uint *)(param_1 + 0xad38);
            uVar16 = (ulong)uVar12;
            if (3 < uVar12) {
              uVar16 = 0;
            }
            if ((uint)(&DAT_04101d10)[uVar16] <= (uint)((ulong)uVar11 * 100 >> 0x20)) {
              FUN_01ee18a4(&local_78,0xffffffff);
              FUN_021df2d0(&local_90,*(long *)(param_1 + 8) + 0x3e0);
              local_e0 = (char *)((ulong)local_e0 & 0xffffffff00000000);
              local_78 = local_90;
              local_60 = local_60 | 1;
              FUN_021df470(&local_90,*(long *)(param_1 + 8) + 0x3e0);
              local_e0 = (char *)CONCAT44(local_e0._4_4_,1);
              local_70 = local_90;
              *(undefined2 *)(param_1 + 0xae98) = (undefined2)local_90;
              *(undefined1 *)(param_1 + 0xae9a) = local_90._2_1_;
              *(undefined1 *)(param_1 + 0xae9b) = local_90._3_1_;
              *(uint *)(param_1 + 0xae9c) = local_90._4_4_;
              *(short *)puVar1 = (short)local_78;
              *(undefined2 *)(param_1 + 0xaea0) = (undefined2)local_68;
              *(undefined4 *)(param_1 + 0xaea4) = local_64;
              *(undefined1 *)(param_1 + 0xae92) = local_78._2_1_;
              *(undefined1 *)(param_1 + 0xaea2) = local_68._2_1_;
              *(undefined1 *)(param_1 + 0xaea3) = local_68._3_1_;
              *(undefined1 *)(param_1 + 0xae93) = local_78._3_1_;
              *(ulong *)(param_1 + 0xaea8) = CONCAT71(uStack_5f,local_60) | 2;
              *(uint *)(param_1 + 0xae94) = local_78._4_4_;
              local_60 = local_60 | 2;
              FUN_01e5b718(*(undefined8 *)(param_1 + 0x10),&local_78);
              local_90 = (char *)CONCAT44(local_90._4_4_,4);
              *(uint *)(*(long *)(param_1 + 8) + 0x69c) =
                   *(uint *)(*(long *)(param_1 + 8) + 0x69c) | 0x10;
              if (*(long *)(*(long *)(param_1 + 8) + 0x690) != 0) {
                local_80 = 0;
                local_88 = pcVar18;
                if (*(long *)(pcVar18 + 0x28) == 0) {
                  local_7f = 0;
                }
                else {
                  puVar17 = *(undefined8 **)(*(long *)(pcVar18 + 0x28) + 0x10);
                  local_7f = 0;
                  if (puVar17 != (undefined8 *)0x0) {
                    local_7f = (**(code **)*puVar17)();
                  }
                }
                local_7f = local_7f & 1;
                local_90 = PTR_DAT_04bb67a0 + 0x10;
                uVar19 = FUN_0135d92c(&local_90);
                local_e0 = (char *)CONCAT44(local_e0._4_4_,0x12);
                FUN_0269b050(uVar19,&local_e0,1);
                uVar19 = FUN_0135d92c(&local_90);
                FUN_026b8eb4(uVar19,&local_78,uVar3);
                uVar19 = FUN_0135d92c(&local_90);
                FUN_026b8f58(uVar19,&local_70,uVar3);
                uVar19 = FUN_0135d92c(&local_90);
                FUN_026b8ffc(uVar19,&local_68,uVar3);
                FUN_02640184(&local_90);
              }
              return 1;
            }
          }
        }
        uVar19 = *(undefined8 *)(param_1 + 0x10);
        local_68 = CONCAT31(local_68._1_3_,1);
        local_70 = pcVar18;
        if (*(long **)(pcVar18 + 0x28) == (long *)0x0) {
          uVar9 = 0;
        }
        else {
          puVar17 = (undefined8 *)**(long **)(pcVar18 + 0x28);
          uVar9 = 0;
          if (puVar17 != (undefined8 *)0x0) {
            uVar9 = (**(code **)*puVar17)();
          }
        }
        local_68 = CONCAT22(local_68._2_2_,CONCAT11(uVar9,(undefined1)local_68)) & 0xffff01ff;
        local_78 = PTR_DAT_04bb67a0 + 0x10;
        FUN_026b1730(&local_90,*(long *)(pcVar18 + 0x10) + *(long *)(pcVar18 + 8));
        FUN_01e5b3e0(uVar19,&local_90);
        FUN_02640184(&local_78);
        lVar14 = *(long *)(param_1 + 8);
LAB_01f599c8:
        *(uint *)(lVar14 + 0x69c) = *(uint *)(lVar14 + 0x69c) | 0x10;
        return 1;
      }
      if (bVar8) {
        return 0;
      }
      local_78 = PTR_DAT_04bb2020 + 0x10;
      local_70 = "EquipChristmasWear";
      iVar10 = FUN_0265c700(uVar3,&local_78);
      if (iVar10 != 0) {
        return 0;
      }
      local_98 = (char *)0xfffe;
      FUN_0277d4ac(&local_98);
      local_a0 = (char *)0xfffe;
      FUN_0277d4ac(&local_a0);
      local_a8 = 0xfffe;
      FUN_0277d4ac(&local_a8);
      plVar15 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
      (**(code **)(*plVar15 + 0x2f0))(local_b0);
      plVar15 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
      (**(code **)(*plVar15 + 0x2d8))(auStack_b8);
      plVar15 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
      (**(code **)(*plVar15 + 0x2e0))(local_c0);
      uVar4 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x508);
      lVar14 = FUN_0265c3e0(uVar4);
      if (lVar14 == 0) {
        return 0;
      }
      local_80 = 0;
      local_88 = (char *)lVar14;
      if (*(long *)(lVar14 + 0x28) == 0) {
        local_7f = 0;
      }
      else {
        puVar17 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 0x10);
        local_7f = 0;
        if (puVar17 != (undefined8 *)0x0) {
          local_7f = (**(code **)*puVar17)();
        }
      }
      puVar6 = PTR_DAT_04bb67a0;
      local_7f = local_7f & 1;
      local_90 = PTR_DAT_04bb67a0 + 0x10;
      local_c4 = 1;
      uVar19 = FUN_0135d92c(&local_90);
      uVar16 = FUN_0269b5c0(uVar19,&local_98,&local_a0,&local_a8,&local_c4,0);
      if ((uVar16 & 1) != 0) {
        FUN_01ee18a4(&local_78,0xffffffff);
        uVar16 = FUN_0277d7b4(&local_98,local_b0);
        if ((uVar16 & 1) == 0) {
          local_e0 = (char *)((ulong)local_e0 & 0xffffffff00000000);
          local_78 = local_98;
          local_60 = local_60 | 1;
        }
        uVar16 = FUN_0277d7b4(&local_a0,auStack_b8);
        if ((uVar16 & 1) == 0) {
          local_70 = local_a0;
          local_e0 = (char *)CONCAT44(local_e0._4_4_,1);
          local_60 = local_60 | 2;
        }
        uVar16 = FUN_0277d7b4(&local_a8,local_c0);
        if ((uVar16 & 1) == 0) {
          local_68 = (int)local_a8;
          local_64 = local_a8._4_4_;
          local_e0 = (char *)CONCAT44(local_e0._4_4_,2);
          local_60 = local_60 | 4;
        }
        if ((local_60 & 7) != 0) {
          *puVar1 = (undefined4)local_78;
          *(uint *)(param_1 + 0xae94) = local_78._4_4_;
          *(char **)(param_1 + 0xae98) = local_70;
          *(uint *)(param_1 + 0xaea0) = local_68;
          *(undefined4 *)(param_1 + 0xaea4) = local_64;
          *(ulong *)(param_1 + 0xaea8) = CONCAT71(uStack_5f,local_60);
          FUN_01e5b718(*(undefined8 *)(param_1 + 0x10),&local_78);
          local_e0 = (char *)CONCAT44(local_e0._4_4_,4);
          *(uint *)(*(long *)(param_1 + 8) + 0x69c) =
               *(uint *)(*(long *)(param_1 + 8) + 0x69c) | 0x10;
          if (*(long *)(*(long *)(param_1 + 8) + 0x690) != 0) {
            local_d0 = 0;
            local_d8 = lVar14;
            if (*(long *)(lVar14 + 0x28) == 0) {
              local_cf = 0;
            }
            else {
              puVar17 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 0x10);
              local_cf = 0;
              if (puVar17 != (undefined8 *)0x0) {
                local_cf = (**(code **)*puVar17)();
              }
            }
            local_cf = local_cf & 1;
            local_e0 = puVar6 + 0x10;
            uVar19 = FUN_0135d92c(&local_e0);
            FUN_0269b050(uVar19,&local_c4,1);
            uVar19 = FUN_0135d92c(&local_e0);
            FUN_026b8eb4(uVar19,&local_78,uVar4);
            uVar19 = FUN_0135d92c(&local_e0);
            FUN_026b8f58(uVar19,&local_70,uVar4);
            uVar19 = FUN_0135d92c(&local_e0);
            FUN_026b8ffc(uVar19,&local_68,uVar4);
            FUN_02640184(&local_e0);
          }
          FUN_02640184(&local_90);
          return 1;
        }
      }
      goto LAB_01f59d60;
    }
    if ((uVar11 & 1) != 0) {
      FUN_01e5b3e0(*(undefined8 *)(param_1 + 0x10),PTR_DAT_04bb37e0);
      lVar14 = *(long *)(param_1 + 8);
      goto LAB_01f599c8;
    }
  }
  if (!(bool)(bVar8 | bVar7)) {
    return 0;
  }
  local_c4 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x508);
  local_88 = (char *)FUN_0265c3e0();
  if (local_88 == (char *)0x0) {
    return 0;
  }
  local_80 = 0;
  if (*(long *)((long)local_88 + 0x28) == 0) {
    local_7f = 0;
  }
  else {
    puVar17 = *(undefined8 **)(*(long *)((long)local_88 + 0x28) + 0x10);
    local_7f = 0;
    if (puVar17 != (undefined8 *)0x0) {
      local_7f = (**(code **)*puVar17)();
    }
  }
  local_7f = local_7f & 1;
  local_e0 = (char *)0xfffe;
  local_90 = PTR_DAT_04bb67a0 + 0x10;
  FUN_0277d4ac(&local_e0);
  local_98 = (char *)0xfffe;
  FUN_0277d4ac(&local_98);
  local_a0 = (char *)0xfffe;
  FUN_0277d4ac(&local_a0);
  local_e4 = FUN_021b3420(&DAT_053fe348,&local_c4,0);
  uVar19 = FUN_0135d92c(&local_90);
  uVar16 = FUN_0269b5c0(uVar19,&local_e0,&local_98,&local_a0,&local_e4,0);
  if ((uVar16 & 1) != 0) {
    lVar14 = FUN_0135d92c(&local_90);
    bVar5 = *(byte *)(lVar14 + 0x1315b);
    FUN_007b0de0(&local_78,&local_e0);
    local_b0[0] = 0xe;
    iVar10 = FUN_007b0ea4(&local_78,local_b0);
    local_a8._0_4_ = iVar10;
    FUN_007b0de0(&local_78,&local_e0);
    local_b0[0] = 0x11;
    iVar13 = FUN_007b0ea4(&local_78,local_b0);
    local_a8 = CONCAT44(local_a8._4_4_,iVar13);
    if (bVar5 == local_e4) {
      bVar8 = (bool)(bVar8 ^ 1);
      if (iVar13 == 4) {
        bVar8 = true;
      }
      bVar2 = false;
      if (iVar10 != 4) {
        bVar2 = bVar7;
      }
      if ((bVar2) || (!bVar8)) {
        uVar19 = 0;
        goto LAB_01f59a70;
      }
    }
    plVar15 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar15 + 0x2f0))(&local_a8);
    plVar15 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar15 + 0x2d8))(local_b0);
    plVar15 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar15 + 0x2e0))(auStack_b8);
    if (*(long *)(*(long *)(param_1 + 8) + 0x690) != 0) {
      uVar19 = FUN_0135d92c(&local_90);
      FUN_0269b050(uVar19,&local_e4,1);
      uVar19 = FUN_0135d92c(&local_90);
      FUN_026b8eb4(uVar19,&local_e0,local_c4);
      uVar19 = FUN_0135d92c(&local_90);
      FUN_026b8f58(uVar19,&local_98,local_c4);
      uVar19 = FUN_0135d92c(&local_90);
      FUN_026b8ffc(uVar19,&local_a0,local_c4);
    }
    FUN_01ee18a4(&local_78,0xffffffff);
    uVar16 = FUN_0277d7b4(&local_e0,&local_a8);
    if ((uVar16 & 1) == 0) {
      local_c0[0] = 0;
      local_78 = local_e0;
      local_60 = local_60 | 1;
    }
    uVar16 = FUN_0277d7b4(&local_98,local_b0);
    if ((uVar16 & 1) == 0) {
      local_70 = local_98;
      local_c0[0] = 1;
      local_60 = local_60 | 2;
    }
    uVar16 = FUN_0277d7b4(&local_a0,auStack_b8);
    if ((uVar16 & 1) == 0) {
      local_68 = (undefined4)local_a0;
      local_64 = local_a0._4_4_;
      local_c0[0] = 2;
      local_60 = local_60 | 4;
    }
    if ((local_60 & 7) != 0) {
      *puVar1 = (undefined4)local_78;
      *(uint *)(param_1 + 0xae94) = local_78._4_4_;
      *(char **)(param_1 + 0xae98) = local_70;
      *(uint *)(param_1 + 0xaea0) = local_68;
      *(undefined4 *)(param_1 + 0xaea4) = local_64;
      *(ulong *)(param_1 + 0xaea8) = CONCAT71(uStack_5f,local_60);
      FUN_01e5b718(*(undefined8 *)(param_1 + 0x10),&local_78);
      uVar19 = 1;
      local_c0[0] = 4;
      *(uint *)(*(long *)(param_1 + 8) + 0x69c) = *(uint *)(*(long *)(param_1 + 8) + 0x69c) | 0x10;
LAB_01f59a70:
      FUN_02640184(&local_90);
      return uVar19;
    }
  }
LAB_01f59d60:
  FUN_02640184(&local_90);
  return 0;
}

