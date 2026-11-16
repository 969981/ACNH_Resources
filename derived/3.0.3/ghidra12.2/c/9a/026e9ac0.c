
uint FUN_026e9ac0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  long local_50;
  byte local_48 [4];
  uint local_44;
  
  FUN_026e85f0();
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  if (*(long *)puVar1 == 0) {
LAB_026e9b28:
    if (((DAT_05572650 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05572650), iVar3 != 0)) {
      DAT_05572648 = *(undefined4 *)PTR_DAT_04bb37e0;
      DAT_0557264c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      __cxa_guard_release(&DAT_05572650);
    }
    lVar5 = *(long *)puVar1;
    puVar6 = (undefined4 *)(param_1 + 0x8b0);
    uVar2 = FUN_0277d6c4(puVar6);
    lVar8 = *(long *)puVar1;
    if (lVar8 == 0) {
LAB_026e9cb0:
      puVar7 = &DAT_05572648;
    }
    else {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if (*(uint *)(lVar5 + 0x1d8) <= uVar2) goto LAB_026e9cb0;
      puVar7 = &DAT_05572648;
      if (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0) {
        local_58 = *(undefined4 *)(param_1 + 0x8b0);
        local_50 = 0;
        local_60 = PTR_DAT_04bc0510 + 0x10;
        local_54 = *(undefined4 *)(param_1 + 0x8b4);
        uVar2 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar1 != 0) {
          lVar5 = *(long *)(lVar8 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            lVar5 = *(long *)PTR_DAT_04bc0428;
            uVar2 = FUN_0277d6c4(puVar6);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
            if (uVar2 < *(uint *)(lVar5 + 0x1d8)) {
              lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8);
              if (lVar5 != 0) {
                local_50 = lVar5;
              }
            }
          }
        }
        local_48[0] = 0;
        local_48[1] = 0;
        FUN_01adab50(&local_60,local_48);
        uVar2 = 0;
        do {
          local_44 = uVar2;
          if ((local_44 != 0) && (local_44 < 0xe)) {
            uVar2 = local_44 + 7;
            if (-1 < (int)local_44) {
              uVar2 = local_44;
            }
            if (((uint)((int)uVar2 >> 3) < 2) &&
               ((local_48[(uint)((int)uVar2 >> 3)] >> (ulong)(local_44 & 7) & 1) != 0)) {
              if (local_44 != 2) {
                puVar6 = &DAT_05572648;
              }
              goto LAB_026e9cc4;
            }
          }
          uVar2 = local_44 + 1;
        } while (local_44 + 1 != 0xe);
        puVar6 = &DAT_05572648;
LAB_026e9cc4:
        lVar8 = *(long *)puVar1;
        puVar7 = puVar6;
      }
    }
    uVar2 = FUN_0277d6c4(puVar7);
    if (*(long *)puVar1 != 0) {
      lVar5 = *(long *)(lVar8 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) goto LAB_026ea208;
    }
    if (((DAT_05572660 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05572660), iVar3 != 0)) {
      DAT_05572658 = *(undefined4 *)PTR_DAT_04bb37e0;
      DAT_0557265c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      __cxa_guard_release(&DAT_05572660);
    }
    lVar5 = *(long *)puVar1;
    puVar6 = (undefined4 *)(param_1 + 0x8b8);
    uVar2 = FUN_0277d6c4(puVar6);
    lVar8 = *(long *)puVar1;
    if (lVar8 == 0) {
LAB_026e9e90:
      puVar7 = &DAT_05572658;
    }
    else {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if (*(uint *)(lVar5 + 0x1d8) <= uVar2) goto LAB_026e9e90;
      puVar7 = &DAT_05572658;
      if (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0) {
        local_58 = *(undefined4 *)(param_1 + 0x8b8);
        local_50 = 0;
        local_60 = PTR_DAT_04bc0510 + 0x10;
        local_54 = *(undefined4 *)(param_1 + 0x8bc);
        uVar2 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar1 != 0) {
          lVar5 = *(long *)(lVar8 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            lVar5 = *(long *)PTR_DAT_04bc0428;
            uVar2 = FUN_0277d6c4(puVar6);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
            if (uVar2 < *(uint *)(lVar5 + 0x1d8)) {
              lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8);
              if (lVar5 != 0) {
                local_50 = lVar5;
              }
            }
          }
        }
        local_48[0] = 0;
        local_48[1] = 0;
        FUN_01adab50(&local_60,local_48);
        uVar2 = 0;
        do {
          local_44 = uVar2;
          if ((local_44 != 0) && (local_44 < 0xe)) {
            uVar2 = local_44 + 7;
            if (-1 < (int)local_44) {
              uVar2 = local_44;
            }
            if (((uint)((int)uVar2 >> 3) < 2) &&
               ((local_48[(uint)((int)uVar2 >> 3)] >> (ulong)(local_44 & 7) & 1) != 0)) {
              if (local_44 != 3) {
                puVar6 = &DAT_05572658;
              }
              goto LAB_026e9ea4;
            }
          }
          uVar2 = local_44 + 1;
        } while (local_44 + 1 != 0xe);
        puVar6 = &DAT_05572658;
LAB_026e9ea4:
        lVar8 = *(long *)puVar1;
        puVar7 = puVar6;
      }
    }
    uVar2 = FUN_0277d6c4(puVar7);
    if (*(long *)puVar1 != 0) {
      lVar5 = *(long *)(lVar8 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) goto LAB_026ea208;
    }
    FUN_026e8d10(param_1);
    lVar5 = *(long *)puVar1;
    uVar2 = FUN_0277d6c4();
    if (*(long *)puVar1 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) goto LAB_026ea208;
    }
    if (((DAT_05572680 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05572680), iVar3 != 0)) {
      DAT_05572678 = *(undefined4 *)PTR_DAT_04bb37e0;
      DAT_0557267c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      __cxa_guard_release(&DAT_05572680);
    }
    lVar5 = *(long *)puVar1;
    puVar6 = (undefined4 *)(param_1 + 0x1170);
    uVar2 = FUN_0277d6c4(puVar6);
    lVar8 = *(long *)puVar1;
    if (lVar8 == 0) {
LAB_026ea0d0:
      puVar7 = &DAT_05572678;
    }
    else {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if (*(uint *)(lVar5 + 0x1d8) <= uVar2) goto LAB_026ea0d0;
      puVar7 = &DAT_05572678;
      if (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0) {
        local_50 = 0;
        local_58 = *(undefined4 *)(param_1 + 0x1170);
        local_60 = PTR_DAT_04bc0510 + 0x10;
        local_54 = *(undefined4 *)(param_1 + 0x1174);
        uVar2 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar1 != 0) {
          lVar5 = *(long *)(lVar8 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            lVar5 = *(long *)PTR_DAT_04bc0428;
            uVar2 = FUN_0277d6c4(puVar6);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
            if (uVar2 < *(uint *)(lVar5 + 0x1d8)) {
              lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8);
              if (lVar5 != 0) {
                local_50 = lVar5;
              }
            }
          }
        }
        local_48[0] = 0;
        local_48[1] = 0;
        FUN_01adab50(&local_60,local_48);
        uVar2 = 0;
        do {
          local_44 = uVar2;
          if ((local_44 != 0) && (local_44 < 0xe)) {
            uVar2 = local_44 + 7;
            if (-1 < (int)local_44) {
              uVar2 = local_44;
            }
            if (((uint)((int)uVar2 >> 3) < 2) &&
               ((local_48[(uint)((int)uVar2 >> 3)] >> (ulong)(local_44 & 7) & 1) != 0)) {
              if (local_44 != 6) {
                puVar6 = &DAT_05572678;
              }
              goto LAB_026ea0e4;
            }
          }
          uVar2 = local_44 + 1;
        } while (local_44 + 1 != 0xe);
        puVar6 = &DAT_05572678;
LAB_026ea0e4:
        lVar8 = *(long *)puVar1;
        puVar7 = puVar6;
      }
    }
    uVar2 = FUN_0277d6c4(puVar7);
    if (*(long *)puVar1 != 0) {
      lVar5 = *(long *)(lVar8 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) goto LAB_026ea208;
    }
    if (((DAT_05572690 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05572690), iVar3 != 0)) {
      DAT_05572688 = *(undefined4 *)PTR_DAT_04bb37e0;
      DAT_0557268c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      __cxa_guard_release(&DAT_05572690);
    }
    lVar5 = *(long *)puVar1;
    puVar6 = (undefined4 *)(param_1 + 0x1178);
    uVar2 = FUN_0277d6c4(puVar6);
    lVar8 = *(long *)puVar1;
    if (lVar8 == 0) {
LAB_026ea1b0:
      puVar7 = &DAT_05572688;
    }
    else {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if (*(uint *)(lVar5 + 0x1d8) <= uVar2) goto LAB_026ea1b0;
      puVar7 = &DAT_05572688;
      if (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0) {
        FUN_01ad5d04(&local_60,puVar6);
        iVar3 = FUN_01adaaa0(&local_60);
        lVar8 = *(long *)puVar1;
        if (iVar3 != 7) {
          puVar6 = &DAT_05572688;
        }
        puVar7 = puVar6;
      }
    }
    uVar2 = FUN_0277d6c4(puVar7);
    if (*(long *)puVar1 != 0) {
      lVar5 = *(long *)(lVar8 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) goto LAB_026ea208;
    }
    FUN_026e9470(param_1);
    uVar4 = FUN_0277d9a8();
    if ((uVar4 & 1) == 0) {
      FUN_026e96a0(param_1);
      uVar2 = FUN_0277d9a8();
      goto LAB_026ea20c;
    }
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_026e9b28;
  }
LAB_026ea208:
  uVar2 = 1;
LAB_026ea20c:
  return uVar2 & 1;
}

