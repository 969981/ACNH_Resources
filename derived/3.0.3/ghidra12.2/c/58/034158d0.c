
/* WARNING: Type propagation algorithm not settling */

int FUN_034158d0(undefined8 *param_1,byte *param_2,byte param_3,int *param_4,undefined4 param_5,
                long *param_6)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  long *plVar18;
  uint uVar19;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  byte local_d4;
  undefined8 local_d0;
  byte local_c8;
  undefined *local_c0 [4];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  uint local_70;
  int local_6c;
  uint local_68;
  
  puVar5 = PTR_DAT_04bb27c0;
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  if (lVar13 == 0) {
LAB_03415a84:
    iVar8 = 2;
  }
  else {
    uVar19 = *(uint *)PTR_DAT_04bb32f8;
    if ((((uVar19 == 0) ||
         (plVar18 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                              ((ulong)(uVar19 >> 0x11) & 0x7ff8)), plVar18 == (long *)0x0)) ||
        ((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar18 + 0x46) != uVar19)) {
      plVar18 = (long *)0x0;
    }
    if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
      plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar13 = *(long *)puVar5;
      iVar8 = (**(code **)(*plVar10 + 0x60))();
      if (iVar8 < 0x11) {
        uVar19 = 1;
      }
      else {
        if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_034159b4;
        uVar19 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_034159b4:
      uVar19 = 0;
    }
    if (plVar18 == (long *)0x0) goto LAB_03415a84;
    lVar13 = plVar18[0x2a];
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar11 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bb3278);
    iVar8 = 2;
    uVar16 = 0;
    if ((int)lVar13 == 1) {
      uVar16 = uVar19;
    }
    if (((uVar11 & 1) != 0) && (uVar16 != 0)) {
      if (*(long *)puVar5 == 0) {
LAB_03415a8c:
        iVar8 = 0;
      }
      else {
        uVar19 = *(uint *)((long)plVar18 + 0x274);
        iVar8 = 0;
        if (uVar19 != 0) {
          plVar18 = *(long **)(*(long *)(*(long *)(*(long *)puVar5 + 0x1c0) + 8) +
                              ((ulong)(uVar19 >> 0x11) & 0x7ff8));
          if (((plVar18 != (long *)0x0) && ((*(uint *)(plVar18 + 0x49) >> 1 & 1) == 0)) &&
             (*(uint *)(plVar18 + 0x46) == uVar19)) {
            if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar8 != 0)) {
              *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb32c0);
            }
            uVar11 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bb32b8);
            if ((uVar11 & 1) != 0) {
              iVar8 = *(int *)((long)plVar18 + 0x315d4);
              goto LAB_03415a90;
            }
          }
          goto LAB_03415a8c;
        }
      }
LAB_03415a90:
      uVar19 = iVar8 + 0x20000000U >> 0x1e;
      iVar8 = uVar19 + 2;
      if (2 < uVar19 - 1) {
        iVar8 = 2;
      }
    }
  }
  puVar6 = PTR_DAT_04bb5ce0;
  local_e8 = CONCAT44(local_e8._4_4_,iVar8);
  if (iVar8 - 2U < 4) {
    local_70 = (&DAT_041022e0)[(int)(iVar8 - 2U)];
  }
  else {
    local_70 = 2;
  }
  lVar13 = *(long *)PTR_DAT_04bb5ce0;
  puVar15 = (undefined4 *)PTR_DAT_04bb37e0;
  if ((lVar13 != 0) && (*(char *)(lVar13 + 0xe9e) != '\0')) {
    puVar15 = (undefined4 *)(lVar13 + 0xe94);
  }
  local_78 = *puVar15;
  uStack_74 = puVar15[1];
  bVar7 = false;
  if ((lVar13 != 0) && (bVar7 = false, *(char *)(lVar13 + 0xe9e) != '\0')) {
    uVar11 = FUN_0277d7b4(&local_78,param_1);
    if ((uVar11 & 1) == 0) {
      bVar7 = false;
    }
    else {
      if (*(long *)puVar6 == 0) {
        uVar19 = 2;
      }
      else {
        uVar19 = *(uint *)(*(long *)puVar6 + 0xea0);
      }
      bVar7 = uVar19 == local_70;
    }
  }
  if (*param_4 == 2) {
    local_e8 = 0xfffe;
    FUN_0277d4ac(&local_e8);
    local_e0 = 0xfffe;
    FUN_0277d4ac(&local_e0);
    local_d0 = 0;
    local_c8 = 0;
    local_d4 = 0xff;
    local_c0[0] = PTR_DAT_04bbba70 + 0x10;
    local_a0 = 0;
    local_98 = 0xfffe;
    FUN_0277d4ac(&local_98);
    local_90 = 0xfffe;
    FUN_0277d4ac(&local_90);
    local_88 = *(undefined2 *)PTR_DAT_04bb3170;
LAB_03415c6c:
    local_7c = 0;
    local_80 = 0;
    local_84 = 0xffffffff;
    local_a0 = CONCAT44(local_a0._4_4_,4);
    lVar13 = *(long *)PTR_DAT_04bb2720;
    if (lVar13 == 0) {
      puVar17 = &DAT_055c04a0;
    }
    else {
      puVar17 = &DAT_055c04a0;
      if (*(long *)(lVar13 + 0x330) != 0) {
        puVar17 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
        iVar8 = FUN_006bd550(*puVar17,0);
        puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar8 != 0x758f7eaf) {
          puVar17 = &DAT_055c04a0;
        }
      }
    }
    local_d8 = *(undefined4 *)(puVar17 + 7);
    lVar13 = *(long *)PTR_DAT_04bb39b0;
    pbVar14 = PTR_DAT_04bb32e0;
    if (lVar13 == 0) {
LAB_03415d48:
      if (*pbVar14 < 8) goto LAB_03415db4;
LAB_03415d54:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_03415dac:
        pbVar14 = PTR_DAT_04bb5038;
        goto LAB_03415db4;
      }
      lVar13 = **(long **)PTR_DAT_04bb27d0;
      bVar4 = *(byte *)(lVar13 + 0x473);
      pbVar14 = PTR_DAT_04bb5038;
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
        if (7 < bVar4) {
          puVar2 = (uint *)(lVar13 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar14 = (byte *)(lVar13 + 0x471);
        }
      }
      local_d4 = *pbVar14;
      if (7 < local_d4) goto LAB_03415dac;
    }
    else {
      if (*(int *)(lVar13 + 0x15c) != 0) {
        pbVar14 = (byte *)(lVar13 + 0x158);
      }
      if (7 < *pbVar14) {
        if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_03415d48;
        }
        goto LAB_03415d54;
      }
LAB_03415db4:
      local_d4 = *pbVar14;
      if (7 < local_d4) {
        local_d4 = 0xff;
      }
    }
    if (7 < local_d4) {
      local_d4 = 0xff;
    }
    local_90 = CONCAT44(uStack_74,local_78);
  }
  else {
    local_e8 = 0xfffe;
    bVar1 = false;
    if (*param_4 != 1) {
      bVar1 = bVar7;
    }
    FUN_0277d4ac(&local_e8);
    local_e0 = 0xfffe;
    FUN_0277d4ac(&local_e0);
    local_d0 = 0;
    local_c8 = 0;
    local_d4 = 0xff;
    local_c0[0] = PTR_DAT_04bbba70 + 0x10;
    local_a0 = 0;
    local_98 = 0xfffe;
    FUN_0277d4ac(&local_98);
    local_90 = 0xfffe;
    FUN_0277d4ac(&local_90);
    local_80 = 0;
    local_7c = 0;
    local_88 = *(undefined2 *)PTR_DAT_04bb3170;
    local_84 = 0xffffffff;
    if (bVar1) goto LAB_03415c6c;
    local_98 = *param_1;
    local_90 = CONCAT44(uStack_74,local_78);
    local_a0 = CONCAT44(local_70,1);
    lVar13 = *(long *)PTR_DAT_04bb2720;
    if (lVar13 == 0) {
      puVar17 = &DAT_055c04a0;
    }
    else {
      puVar17 = &DAT_055c04a0;
      if (*(long *)(lVar13 + 0x330) != 0) {
        puVar17 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
        iVar8 = FUN_006bd550(*puVar17,0);
        puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar8 != 0x758f7eaf) {
          puVar17 = &DAT_055c04a0;
        }
      }
    }
    local_d8 = *(undefined4 *)(puVar17 + 7);
    local_d4 = *param_2;
    if (7 < local_d4) {
      local_d4 = 0xff;
    }
  }
  local_c8 = (param_3 ^ 0xff) & 1;
  local_7c = param_5;
  (**(code **)(*param_6 + 0x10))(param_6,local_c0);
  local_6c = FUN_0152352c(&local_e8);
  uVar19 = local_70;
  if (local_6c == 2) {
    return 2;
  }
  lVar13 = *(long *)PTR_DAT_04bbbc38;
  if (lVar13 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = *(int *)(lVar13 + 0xc);
  }
  if (local_68 != 0) {
    local_68 = local_70;
    if (local_70 < 4) {
      uVar12 = *(undefined8 *)(&DAT_04057aa0 + (long)(int)local_70 * 8);
    }
    else {
      uVar12 = 0x100000007;
    }
    if (lVar13 == 0) {
      return local_6c;
    }
    FUN_014e4e14(lVar13,uVar12,0x100);
    return local_6c;
  }
  lVar13 = *(long *)puVar5;
  if (lVar13 == 0) {
    return local_6c;
  }
  uVar16 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar16 == 0) ||
       (plVar18 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                            ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar18 == (long *)0x0)) ||
      ((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar18 + 0x46) != uVar16)) {
    plVar18 = (long *)0x0;
  }
  if ((*(int *)(lVar13 + 0x288) == 1) || (*(int *)(lVar13 + 0x288) == -1)) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)puVar5;
    iVar8 = (**(code **)(*plVar10 + 0x60))();
    if (iVar8 < 0x11) {
      uVar16 = 1;
      goto joined_r0x03416018;
    }
    if (*(uint *)(lVar13 + 0x5e8) < 5) {
      uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x03416018;
    }
  }
  uVar16 = 0;
joined_r0x03416018:
  if (plVar18 != (long *)0x0) {
    lVar13 = plVar18[0x2a];
    uVar3 = *(uint *)(plVar18 + 0x49);
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar9 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bb3278);
    if ((((int)lVar13 == 1) && ((uVar9 & uVar16) != 0)) && ((uVar3 >> 4 & 1) != 0)) {
      FUN_008fe940(plVar18,uVar19,0xffffffff);
    }
  }
  return local_6c;
}

