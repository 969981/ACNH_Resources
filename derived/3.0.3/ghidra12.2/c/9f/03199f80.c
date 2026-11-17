
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_03199f80(ulong param_1,char *param_2,undefined4 param_3,byte *param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  byte bVar13;
  uint uVar14;
  undefined4 uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  char cVar19;
  undefined1 uVar20;
  uint uVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  char *pcVar26;
  short *psVar27;
  int iVar28;
  long *plVar29;
  ulong uVar30;
  byte local_ac [4];
  uint local_a8 [2];
  char *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  int local_64;
  
  *(undefined4 *)(param_1 + 0xc) = param_3;
  if (param_2 == (char *)0x0) {
    return param_1;
  }
  pcVar26 = param_2 + 4;
  FUN_027ae654(pcVar26,param_1 + 0x10);
  bVar13 = 0;
  if (param_2[0xcc] != '\0') {
    local_a0 = param_2 + 0xce;
    local_a8[0] = 0x30;
    (**(code **)(*(long *)(param_1 + 0x150) + 0x38))(param_1 + 0x150);
    local_80 = 0;
    uStack_78 = 0;
    local_88 = 0;
    local_70 = 1;
    local_6c = 0;
    puVar1 = PTR_DAT_04bc0cd8 + 0x10;
    local_90 = 0;
    local_98 = puVar1;
    FUN_02906b00(&local_98,param_1 + 0x150,local_a8);
    local_a0 = param_2 + 0x12e;
    local_a8[0] = 0xf0;
    (**(code **)(*(long *)(param_1 + 0x290) + 0x38))(param_1 + 0x290);
    local_70 = 1;
    local_80 = 0;
    uStack_78 = 0;
    local_6c = 0;
    local_90 = 0;
    local_88 = 0;
    local_98 = puVar1;
    FUN_02906b00(&local_98,param_1 + 0x290,local_a8);
    local_a0 = param_2 + 0x30e;
    local_a8[0] = 0x30;
    (**(code **)(*(long *)(param_1 + 0x550) + 0x38))(param_1 + 0x550);
    local_70 = 1;
    local_80 = 0;
    uStack_78 = 0;
    local_6c = 0;
    local_90 = 0;
    local_88 = 0;
    local_98 = puVar1;
    FUN_02906b00(&local_98,param_1 + 0x550,local_a8);
    bVar13 = param_2[0xcc];
  }
  *(byte *)(param_1 + 0xa60) = bVar13 ^ 1;
  bVar13 = FUN_027aebe8(param_2);
  *(byte *)(param_1 + 0xa61) = bVar13 & 1;
  *(bool *)(param_1 + 0xa62) = *param_2 == '\x04';
  *(char *)(param_1 + 0xa63) = param_2[1];
  psVar27 = (short *)(param_2 + 0xc0);
  if (*psVar27 == -2) {
    bVar12 = false;
  }
  else {
    bVar12 = param_2[0xcc] != '\0';
  }
  *(bool *)(param_1 + 0xa64) = bVar12;
  local_ac[0] = *param_4;
  if (7 < local_ac[0]) {
    local_ac[0] = 0xff;
  }
  lVar16 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_ac,1);
  uVar18 = 0;
  if (lVar16 != 0) {
    if (*(long **)(lVar16 + 0x17bb0) == (long *)0x0) {
      uVar18 = 0;
      if (param_2[0x5c] == '\0') goto LAB_0319a178;
LAB_0319a1c0:
      *(undefined1 *)(param_1 + 0xa6d) = 0;
    }
    else {
      puVar17 = (undefined8 *)**(long **)(lVar16 + 0x17bb0);
      uVar18 = 0;
      if (puVar17 != (undefined8 *)0x0) {
        uVar18 = (**(code **)*puVar17)();
      }
      if (param_2[0x5c] != '\0') goto LAB_0319a1c0;
LAB_0319a178:
      lVar2 = *(long *)(lVar16 + 0x17b98) + *(long *)(lVar16 + 0x17b90);
      if (*(int *)(param_2 + 0x20) != *(int *)(lVar2 + 0x1c)) goto LAB_0319a1c0;
      *(bool *)(param_1 + 0xa6d) =
           (*(long *)(lVar2 + 0x20) == *(long *)(param_2 + 0x24) &&
           *(long *)(lVar2 + 0x28) == *(long *)(param_2 + 0x2c)) &&
           *(int *)(lVar2 + 0x30) == *(int *)(param_2 + 0x34);
    }
    if (((uVar18 & 1) != 0) && (*(long *)(lVar16 + 0x17bb0) != 0)) {
      puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0x17bb0) + 8);
      uVar18 = 0;
      if (puVar17 != (undefined8 *)0x0) {
        uVar18 = (**(code **)*puVar17)();
      }
    }
  }
  if (*(char *)(param_1 + 0xa60) != '\0') {
    uVar18 = FUN_01c0bafc(param_1 + 0x690,psVar27,PTR_DAT_04bb2df0);
  }
  puVar1 = PTR_DAT_04bb43c0;
  if ((*psVar27 == -2) && (param_2[0xcc] != '\0')) {
    *(undefined4 *)(param_1 + 0xa78) = 0;
    cVar19 = param_2[0x5c];
joined_r0x0319a678:
    if (cVar19 != '\0') goto LAB_0319a67c;
LAB_0319a228:
    plVar29 = (long *)PTR_DAT_04bb46b0;
    bVar12 = false;
    if (*(long *)PTR_DAT_04bb46b0 != 0) {
      uVar18 = FUN_02705554(&local_98,1,1);
      if (local_98._4_4_ != 8) {
        iVar28 = (int)local_98;
        uVar14 = local_98._4_4_;
        do {
          if (*plVar29 == 0) {
            lVar16 = 0;
            plVar22 = _DAT_00000028;
            if (_DAT_00000028 != (long *)0x0) goto LAB_0319a39c;
LAB_0319a3c0:
            uVar18 = 0;
          }
          else {
            uVar21 = uVar14;
            if (7 < uVar14) {
              uVar21 = 0xffffffff;
            }
            lVar16 = FUN_026eec4c(*plVar29,uVar21);
            plVar22 = *(long **)(lVar16 + 0x28);
            if (*(long **)(lVar16 + 0x28) == (long *)0x0) goto LAB_0319a3c0;
LAB_0319a39c:
            uVar18 = 0;
            if ((undefined8 *)*plVar22 != (undefined8 *)0x0) {
              uVar18 = (*(code *)**(undefined8 **)*plVar22)();
            }
          }
          puVar1 = PTR_DAT_04bb46b0;
          lVar2 = *(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8);
          if ((*(int *)(lVar2 + 0xc154) == *(int *)(param_2 + 0x20)) &&
             ((*(long *)(param_2 + 0x24) == *(long *)(lVar2 + 0xc158) &&
              *(long *)(param_2 + 0x2c) == *(long *)(lVar2 + 0xc160)) &&
              *(int *)(param_2 + 0x34) == *(int *)(lVar2 + 0xc168))) {
            iVar10 = *(int *)(lVar2 + 0xc138);
            iVar11 = *(int *)(param_2 + 4);
            if ((*(short *)(lVar2 + 0xc13c) == 0) || (*(short *)(param_2 + 8) == 0)) {
              if (((uVar18 & 1) != 0) && (*(long *)(lVar16 + 0x28) != 0)) {
                puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0x28) + 8);
                uVar18 = 0;
                if (puVar17 != (undefined8 *)0x0) {
                  uVar18 = (**(code **)*puVar17)();
                }
              }
              plVar29 = (long *)PTR_DAT_04bb46b0;
              if (iVar10 == iVar11) {
LAB_0319a7ec:
                bVar12 = true;
                goto LAB_0319a69c;
              }
            }
            else {
              plVar29 = (long *)PTR_DAT_04bb46b0;
              if (iVar10 != iVar11) goto LAB_0319a408;
              lVar4 = *(long *)(param_2 + 8);
              lVar7 = *(long *)(param_2 + 0x10);
              iVar10 = *(int *)(param_2 + 0x18);
              lVar5 = *(long *)(lVar2 + 0xc13c);
              lVar8 = *(long *)(lVar2 + 0xc144);
              iVar11 = *(int *)(lVar2 + 0xc14c);
              if (((uVar18 & 1) != 0) && (*(long *)(lVar16 + 0x28) != 0)) {
                puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0x28) + 8);
                uVar18 = 0;
                if (puVar17 != (undefined8 *)0x0) {
                  uVar18 = (**(code **)*puVar17)();
                }
              }
              plVar29 = (long *)puVar1;
              if ((lVar4 == lVar5 && lVar7 == lVar8) && iVar10 == iVar11) goto LAB_0319a7ec;
            }
          }
          else {
LAB_0319a408:
            if ((uVar18 & 1) != 0) {
              if (*(long *)(lVar16 + 0x28) != 0) {
                puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0x28) + 8);
                uVar18 = 0;
                if (puVar17 != (undefined8 *)0x0) {
                  uVar18 = (**(code **)*puVar17)();
                }
              }
            }
          }
          if (uVar14 < 8) {
            lVar16 = *plVar29;
            if (lVar16 == 0) break;
            (**(code **)(*(long *)**(undefined8 **)(lVar16 + 0x10) + 0x18))();
            if ((iVar28 == 0) && ((*(byte *)(lVar16 + 0x453) & 1) != 0)) {
              uVar18 = (**(code **)(**(long **)(*(long *)(lVar16 + 0x10) + 0x130) + 0x18))();
            }
            else {
              lVar16 = (**(code **)(*(long *)**(undefined8 **)(lVar16 + 0x10) + 0x18))();
              uVar18 = lVar16 + 0x110;
            }
            if (uVar14 == 7) break;
            uVar23 = (ulong)uVar14;
            plVar22 = (long *)(uVar18 + (ulong)uVar14 * 0x48 + 0x1e3400);
            while ((6 < uVar23 || (plVar22[-1] == 0 && *plVar22 == 0))) {
              uVar23 = uVar23 + 1;
              plVar22 = plVar22 + 9;
              if (uVar23 == 7) goto LAB_0319a698;
            }
            uVar14 = (int)uVar23 + 1;
          }
        } while (uVar14 != 8);
      }
      goto LAB_0319a698;
    }
  }
  else {
    local_88 = 0;
    local_98 = PTR_DAT_04bc0510 + 0x10;
    local_90 = CONCAT44(*(undefined4 *)(param_2 + 0xc4),
                        CONCAT22(*(undefined2 *)(param_2 + 0xc2),*psVar27));
    lVar16 = *(long *)PTR_DAT_04bb43c0;
    uVar14 = FUN_0277d6c4(&local_90);
    if (*(long *)puVar1 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar14 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
        lVar16 = *(long *)PTR_DAT_04bc0428;
        uVar14 = FUN_0277d6c4(psVar27);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (uVar14 < *(uint *)(lVar16 + 0x1d8)) {
          lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar14 * 8);
          if (lVar16 != 0) {
            local_88 = lVar16;
          }
        }
      }
    }
    uVar18 = FUN_01b032d0(&local_98);
    local_a8[0] = local_90._3_1_ & 3;
    if ((uVar18 & 1) == 0) {
      local_a8[0] = 0;
    }
    uVar18 = FUN_01b032d0(&local_98);
    bVar13 = local_90._3_1_ >> 2 & 0xf;
    if ((uVar18 & 1) == 0) {
      bVar13 = 1;
    }
    if (local_a8[0] == 3) {
      if (bVar13 == 0xf) {
        uVar21 = 1;
      }
      else {
        local_64 = FUN_01b03610(bVar13);
        if (local_64 == 0) {
          uVar14 = 6;
          if (bVar13 != 10) {
            uVar14 = 3;
          }
          uVar21 = 5;
          if (bVar13 != 0xb) {
            uVar21 = uVar14;
          }
        }
        else {
          uVar21 = 4;
        }
      }
    }
    else if ((local_a8[0] == 2) || (uVar21 = 0, local_a8[0] == 1)) {
      uVar21 = local_a8[0];
    }
    *(uint *)(param_1 + 0xa78) = uVar21;
    uVar15 = FUN_01b036fc(&local_98);
    *(undefined4 *)(param_1 + 0xa7c) = uVar15;
    if ((*(int *)(param_1 + 0xa78) != 4) || (uVar18 = FUN_01b032d0(&local_98), (uVar18 & 1) == 0)) {
      uVar18 = 0;
      *(undefined4 *)(param_1 + 0xa80) = 0;
      cVar19 = param_2[0x5c];
      goto joined_r0x0319a678;
    }
    uVar23 = FUN_01b032d0(&local_98);
    uVar18 = 0;
    if (((uVar23 & 1) != 0) && ((local_90._3_1_ & 3) == 3)) {
      uVar18 = FUN_01b032d0(&local_98);
      bVar13 = local_90._3_1_ >> 2 & 0xf;
      if ((uVar18 & 1) == 0) {
        bVar13 = 1;
      }
      uVar18 = FUN_01b03610(bVar13);
    }
    *(int *)(param_1 + 0xa80) = (int)uVar18;
    cVar19 = param_2[0x5c];
    if (cVar19 == '\0') goto LAB_0319a228;
LAB_0319a67c:
    if (cVar19 == '\x01') {
      uVar18 = FUN_0265c0c0(pcVar26);
      bVar12 = uVar18 != 0;
    }
    else {
LAB_0319a698:
      bVar12 = false;
    }
  }
LAB_0319a69c:
  *(bool *)(param_1 + 0xa65) = bVar12;
  uVar23 = *(ulong *)(param_2 + 0x388);
  if (uVar23 == 0) {
LAB_0319a744:
    uVar20 = 0;
  }
  else {
    lVar16 = *(long *)PTR_DAT_04bb49f8;
    uVar14 = *(uint *)(lVar16 + 0x28);
    if (uVar14 == 0xffffffff) goto LAB_0319a744;
    if (*(uint *)(lVar16 + 8) <= uVar14) {
      uVar14 = 0;
    }
    lVar16 = *(long *)(lVar16 + 0x10) + (long)(int)uVar14 * 0x40;
    uVar20 = 0;
    if (*(char *)(lVar16 + 0x39) != '\0') {
      if (0 < (int)*(uint *)(lVar16 + 0x20)) {
        uVar24 = 0;
        uVar30 = (ulong)*(uint *)(lVar16 + 0x20);
        do {
          if (*(uint *)(lVar16 + 0x10) <= (uint)uVar24 || *(long *)(lVar16 + 0x18) == 0) break;
          uVar18 = nn::friends::Friend::GetAccountId();
          if (uVar18 == uVar23) {
            uVar20 = 1;
            goto LAB_0319a748;
          }
          uVar3 = (uVar30 & 0xffffffff00000000) + 0x100000000;
          uVar24 = uVar3 >> 0x20;
          iVar28 = (int)uVar30;
          uVar30 = uVar3 | uVar30 & 0xffffffff;
        } while ((int)(uVar3 >> 0x20) < iVar28);
      }
      goto LAB_0319a744;
    }
  }
LAB_0319a748:
  *(undefined1 *)(param_1 + 0xa66) = uVar20;
  if (param_2[0x5c] == '\x01') {
    *(undefined4 *)(param_1 + 0xa68) = 1;
  }
  else if (param_2[0x5c] == '\0') {
    *(undefined4 *)(param_1 + 0xa68) = 0;
    if (param_2[0x5c] != '\0') {
      if (param_2[0x5c] != '\x01') goto LAB_0319a7a8;
      pcVar26 = param_2 + 8;
    }
    uVar6 = *(undefined8 *)pcVar26;
    uVar9 = *(undefined8 *)(pcVar26 + 8);
    uVar25 = *(undefined8 *)(pcVar26 + 0x10);
    *(char *)(param_1 + 0x148) = pcVar26[0x18];
    *(undefined8 *)(param_1 + 0x130) = uVar6;
    *(undefined8 *)(param_1 + 0x138) = uVar9;
    *(undefined8 *)(param_1 + 0x140) = uVar25;
  }
  else {
    *(undefined4 *)(param_1 + 0xa68) = 2;
  }
LAB_0319a7a8:
  *(undefined1 *)(param_1 + 0xa6c) = 0;
  *(undefined2 *)(param_1 + 0xa6e) = *(undefined2 *)(param_2 + 0x36e);
  *(ulong *)(param_1 + 0xa70) = (ulong)*(uint *)(param_2 + 0x374);
  *(undefined1 *)(param_1 + 8) = 1;
  return uVar18;
}

