
void FUN_01530c60(undefined8 param_1,long param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ushort *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  int iVar11;
  uint *puVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined **local_1c0;
  undefined8 *puStack_1b8;
  undefined **local_1b0;
  undefined8 *puStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [127];
  undefined1 local_11d;
  undefined1 *local_118;
  char *local_110;
  int local_108;
  char local_104 [127];
  undefined1 local_85;
  undefined **local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  uint *local_70;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_3);
  lVar14 = *(long *)puVar2;
  if (lVar14 == 0) {
    return;
  }
  lVar15 = *(long *)(lVar15 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if (*(uint *)(lVar15 + 0x1d8) <= uVar5) {
    return;
  }
  if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return;
  }
  local_70 = (uint *)0x0;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  local_80 = &PTR_FUN_04a36b50;
  uVar5 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar2 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_3);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
         (puVar12 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar12 != (uint *)0x0)) {
        local_70 = puVar12;
      }
    }
  }
  if (((DAT_0520f370 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0520f370), iVar6 != 0)) {
    DAT_0520f368 = 0;
    __cxa_guard_release(&DAT_0520f370);
  }
  if (((DAT_0520f380 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0520f380), iVar6 != 0)) {
    DAT_0520f378 = 1;
    __cxa_guard_release(&DAT_0520f380);
  }
  iVar6 = FUN_01ad7260(&local_80);
  if (iVar6 != 0) {
    local_85 = 0;
    local_108 = 0x80;
    local_110 = local_104;
    local_104[0] = '\0';
    local_118 = &DAT_048fc708;
    FUN_01afe3e0(&local_80,&local_118);
    lVar14 = FUN_0074f690(param_1,&local_118);
    if (lVar14 != 0) {
      if (DAT_0520f368 < 0xc) {
        puStack_1a8 = (undefined8 *)(&PTR_s_mReBody_049a7730)[DAT_0520f368];
      }
      else {
        puStack_1a8 = &DAT_0407ebb1;
      }
      lVar15 = *(long *)(param_2 + 0x1150);
      local_1b0 = &PTR_LAB_048f9770;
      if ((lVar15 != 0) && (uVar5 = *(uint *)(lVar15 + 0x30), 0 < (int)uVar5)) {
        uVar16 = 0;
        lVar7 = lVar14;
        do {
          lVar7 = FUN_01664b40(lVar7,**(undefined8 **)(*(long *)(lVar15 + 0x38) + uVar16 * 8),
                               &local_1b0,lVar14,0);
          uVar16 = uVar16 + 1;
        } while (uVar5 != uVar16);
      }
    }
  }
  iVar6 = FUN_01afcfa0(&local_80);
  if (iVar6 != 0) {
    iVar6 = FUN_01afcfa0(&local_80);
    if (((iVar6 == 0) || (puVar8 = (ushort *)FUN_01afd600(&local_80), puVar8 == (ushort *)0x0)) ||
       ((*puVar8 & 0x18) != 0x10)) {
      iVar6 = FUN_01afcfa0(&local_80);
      if (((iVar6 == 0) || (puVar8 = (ushort *)FUN_01afd600(&local_80), puVar8 == (ushort *)0x0)) ||
         ((*puVar8 & 0x18) != 8)) {
        local_85 = 0;
        local_108 = 0x80;
        local_110 = local_104;
        local_104[0] = '\0';
        local_118 = &DAT_048fc708;
        FUN_01afeef4(&local_80,&local_118);
        lVar14 = FUN_0074f690(param_1,&local_118);
        if (lVar14 != 0) {
          if (DAT_0520f378 < 0xc) {
            puStack_1a8 = (undefined8 *)(&PTR_s_mReBody_049a7730)[DAT_0520f378];
          }
          else {
            puStack_1a8 = &DAT_0407ebb1;
          }
          lVar15 = *(long *)(param_2 + 0x1150);
          local_1b0 = &PTR_LAB_048f9770;
          if ((lVar15 != 0) && (uVar5 = *(uint *)(lVar15 + 0x30), 0 < (int)uVar5)) {
            uVar16 = 0;
            lVar7 = lVar14;
            do {
              lVar7 = FUN_01664b40(lVar7,**(undefined8 **)(*(long *)(lVar15 + 0x38) + uVar16 * 8),
                                   &local_1b0,lVar14,0);
              uVar16 = uVar16 + 1;
            } while (uVar5 != uVar16);
          }
        }
      }
      else {
        local_85 = 0;
        local_110 = local_104;
        local_108 = 0x80;
        local_104[0] = '\0';
        local_118 = &DAT_048fc708;
        FUN_01afeef4(&local_80,&local_118);
        local_1a0 = 0x80;
        puStack_1a8 = (undefined8 *)local_19c;
        local_11d = 0;
        local_19c[0] = 0;
        local_1b0 = (undefined **)&DAT_048fc708;
        FUN_01aff000(&local_80,&local_1b0);
        lVar14 = FUN_0074f690(param_1,&local_118);
        lVar15 = FUN_0074f690(param_1,&local_1b0);
        if ((lVar14 != 0) && (lVar15 != 0)) {
          if (DAT_0520f378 < 0xc) {
            puStack_1b8 = (undefined8 *)(&PTR_s_mReBody_049a7730)[DAT_0520f378];
          }
          else {
            puStack_1b8 = &DAT_0407ebb1;
          }
          lVar17 = *(long *)(param_2 + 0x1150);
          local_1c0 = &PTR_LAB_048f9770;
          lVar7 = lVar15;
          if ((lVar17 != 0) && (uVar5 = *(uint *)(lVar17 + 0x30), 0 < (int)uVar5)) {
            uVar16 = 0;
            do {
              lVar7 = FUN_01664b40(lVar7,**(undefined8 **)(*(long *)(lVar17 + 0x38) + uVar16 * 8),
                                   &local_1c0,lVar14,0);
              uVar16 = uVar16 + 1;
            } while (uVar5 != uVar16);
          }
          if (DAT_0520f378 < 0xc) {
            puStack_1b8 = (undefined8 *)(&PTR_s_mReBody_049a7730)[DAT_0520f378];
          }
          else {
            puStack_1b8 = &DAT_0407ebb1;
          }
          lVar14 = *(long *)(param_2 + 0x1150);
          local_1c0 = &PTR_LAB_048f9770;
          if ((lVar14 != 0) && (uVar5 = *(uint *)(lVar14 + 0x30), 0 < (int)uVar5)) {
            uVar16 = 0;
            do {
              lVar7 = FUN_01664b40(lVar7,**(undefined8 **)(*(long *)(lVar14 + 0x38) + uVar16 * 8),
                                   &local_1c0,lVar15,0);
              uVar16 = uVar16 + 1;
            } while (uVar5 != uVar16);
          }
        }
      }
    }
    else {
      bVar4 = true;
      lVar14 = *(long *)(*(long *)(param_2 + 0x48) + 0x78);
      if (((lVar14 != 0) && (**(char **)(param_2 + 0x280) != '\0')) &&
         (lVar14 = FUN_0074f690(lVar14,param_2 + 0x278), lVar14 != 0)) {
        if ((*(long *)(lVar14 + 8) == 0) ||
           (lVar14 = *(long *)(*(long *)(lVar14 + 8) + 0x20), lVar14 == 0)) {
          lVar14 = 0;
        }
        else {
          (**(code **)(DAT_0520f188 + 0x18))(&DAT_0520f188);
          lVar14 = FUN_038fe510(lVar14,DAT_0520f190);
        }
        bVar4 = lVar14 == 0;
      }
      local_85 = 0;
      local_108 = 0x80;
      local_110 = local_104;
      local_104[0] = '\0';
      local_118 = &DAT_048fc708;
      FUN_01afeef4(&local_80,&local_118);
      lVar14 = FUN_0074f690(param_1,&local_118);
      if (lVar14 != 0) {
        if (DAT_0520f378 < 0xc) {
          puStack_1a8 = (undefined8 *)(&PTR_s_mReBody_049a7730)[DAT_0520f378];
        }
        else {
          puStack_1a8 = &DAT_0407ebb1;
        }
        lVar15 = *(long *)(param_2 + 0x1150);
        local_1b0 = &PTR_LAB_048f9770;
        if ((lVar15 != 0) && (uVar5 = *(uint *)(lVar15 + 0x30), 0 < (int)uVar5)) {
          uVar16 = 0;
          lVar7 = lVar14;
          do {
            lVar7 = FUN_01664b40(lVar7,**(undefined8 **)(*(long *)(lVar15 + 0x38) + uVar16 * 8),
                                 &local_1b0,lVar14,0);
            uVar16 = uVar16 + 1;
          } while (uVar5 != uVar16);
        }
        if (((bVar4) && (*(long *)(DAT_05231900 + 0x570) != 0)) &&
           (*(long *)(param_2 + 0x1150) != 0)) {
          FUN_039a9540(*(long *)(param_2 + 0x1150),*(long *)(DAT_05231900 + 0x570),&DAT_0520f188);
        }
      }
    }
  }
  if (((local_70 == (uint *)0x0) || (uVar5 = *local_70, uVar5 == 0)) ||
     (local_70 == (uint *)(ulong)uVar5)) {
LAB_01531338:
    uVar16 = FUN_01ae8b58(&local_80);
    if ((uVar16 & 1) == 0) {
      return;
    }
  }
  else {
    puVar12 = (uint *)((long)local_70 - (long)(ulong)uVar5);
    if (*puVar12 == 0) goto LAB_01531338;
    uVar5 = puVar12[1];
    if ((uVar5 == 0) || ((ulong)(ushort)puVar12[2] == 0)) {
LAB_015312cc:
      if ((*puVar12 != 0) && ((uVar5 = puVar12[1], uVar5 != 0 && ((ulong)(ushort)puVar12[2] != 0))))
      {
        lVar14 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar12 + lVar14 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar14 != 0) {
          uVar1 = 0;
          if ((ulong)uVar5 != 0) {
            uVar1 = (uint)((ulong)((long)local_70 - lVar14) / (ulong)uVar5);
          }
          if (*puVar12 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
             (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) == 0xaf))
          goto LAB_01531344;
        }
      }
      goto LAB_01531338;
    }
    lVar14 = 0xc;
    if (*(char *)((long)puVar12 + 10) != '\0') {
      lVar14 = 0x1c;
    }
    lVar14 = (long)puVar12 + lVar14 + (ulong)(ushort)puVar12[2] * 8;
    if (lVar14 == 0) goto LAB_015312cc;
    uVar1 = 0;
    if ((ulong)uVar5 != 0) {
      uVar1 = (uint)((ulong)((long)local_70 - lVar14) / (ulong)uVar5);
    }
    if (*puVar12 <= uVar1) {
      uVar1 = 0xffffffff;
    }
    if ((DAT_05326ec0 <= uVar1) || (*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) != 0xad))
    goto LAB_015312cc;
  }
LAB_01531344:
  local_85 = 0;
  local_108 = 0x80;
  local_110 = local_104;
  local_104[0] = '\0';
  local_118 = &DAT_048fc708;
  uVar16 = FUN_01ae8b58(&local_80);
  pcVar13 = local_110;
  if ((uVar16 & 1) == 0) goto LAB_015315bc;
  if (((local_70 != (uint *)0x0) && (uVar5 = *local_70, uVar5 != 0)) &&
     (local_70 != (uint *)(ulong)uVar5)) {
    puVar12 = (uint *)((long)local_70 - (long)(ulong)uVar5);
    if (((*puVar12 == 0) || (uVar5 = puVar12[1], uVar5 == 0)) || ((ulong)(ushort)puVar12[2] == 0))
    goto LAB_0153146c;
    lVar14 = 0xc;
    if (*(char *)((long)puVar12 + 10) != '\0') {
      lVar14 = 0x1c;
    }
    lVar14 = (long)puVar12 + lVar14 + (ulong)(ushort)puVar12[2] * 8;
    if (lVar14 == 0) goto LAB_0153146c;
    uVar1 = 0;
    if ((ulong)uVar5 != 0) {
      uVar1 = (uint)((ulong)((long)local_70 - lVar14) / (ulong)uVar5);
    }
    if (*puVar12 <= uVar1) {
      uVar1 = 0xffffffff;
    }
    if ((DAT_05326ec0 <= uVar1) || (*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) != 0xad))
    goto LAB_0153146c;
    (**(code **)(DAT_0520f178 + 0x18))(&DAT_0520f178);
    pcVar9 = DAT_0520f180;
    if (pcVar13 == DAT_0520f180) goto LAB_015315bc;
    (**(code **)(DAT_0520f178 + 0x18))(&DAT_0520f178);
    lVar14 = 0;
    do {
      if (DAT_0520f180[lVar14] == '\0') goto LAB_01531590;
      if (DAT_0520f180[lVar14 + 1] == '\0') goto LAB_01531584;
      if (DAT_0520f180[lVar14 + 2] == '\0') goto LAB_0153158c;
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
LAB_0153157c:
    lVar14 = 0;
    goto LAB_01531590;
  }
LAB_0153146c:
  iVar6 = FUN_01ad78cc(&local_80);
  pcVar13 = local_110;
  local_1b0 = (undefined **)CONCAT44(local_1b0._4_4_,iVar6);
  if ((iVar6 == 0x47) || (iVar6 == 0x1b)) {
    if (local_110 == "mTool_Alb") goto LAB_015315bc;
    pcVar9 = "mTool_Alb";
    bVar3 = SBORROW4(local_108,9);
    iVar6 = local_108 + -9;
    bVar4 = local_108 == 9;
    iVar11 = 9;
LAB_015314f0:
    if (bVar4 || iVar6 < 0 != bVar3) {
      iVar11 = local_108 + -1;
    }
    memcpy(local_110,pcVar9,(long)iVar11);
    pcVar13 = pcVar13 + iVar11;
    goto LAB_015315b8;
  }
  if (iVar6 == 0xc) {
    if (local_110 != "mUmbrella_Alb") {
      pcVar9 = "mUmbrella_Alb";
      bVar3 = SBORROW4(local_108,0xd);
      iVar6 = local_108 + -0xd;
      bVar4 = local_108 == 0xd;
      iVar11 = 0xd;
      goto LAB_015314f0;
    }
  }
  else {
    (**(code **)(DAT_0520f168 + 0x18))(&DAT_0520f168);
    pcVar9 = DAT_0520f170;
    if (pcVar13 != DAT_0520f170) {
      (**(code **)(DAT_0520f168 + 0x18))(&DAT_0520f168);
      lVar14 = 0;
      do {
        if (DAT_0520f170[lVar14] == '\0') goto LAB_01531590;
        if (DAT_0520f170[lVar14 + 1] == '\0') goto LAB_01531584;
        if (DAT_0520f170[lVar14 + 2] == '\0') goto LAB_0153158c;
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
      goto LAB_0153157c;
    }
  }
  goto LAB_015315bc;
LAB_01531584:
  lVar14 = lVar14 + 1;
  goto LAB_01531590;
LAB_0153158c:
  lVar14 = lVar14 + 2;
LAB_01531590:
  iVar6 = (int)lVar14;
  if (local_108 <= (int)lVar14) {
    iVar6 = local_108 + -1;
  }
  memcpy(pcVar13,pcVar9,(long)iVar6);
  pcVar13 = pcVar13 + iVar6;
LAB_015315b8:
  *pcVar13 = '\0';
LAB_015315bc:
  if (((local_70 != (uint *)0x0) && (uVar5 = *local_70, uVar5 != 0)) &&
     (local_70 != (uint *)(ulong)uVar5)) {
    puVar12 = (uint *)((long)local_70 - (long)(ulong)uVar5);
    if (((*puVar12 != 0) && (uVar5 = puVar12[1], uVar5 != 0)) && ((ulong)(ushort)puVar12[2] != 0)) {
      lVar14 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar12 + lVar14 + (ulong)(ushort)puVar12[2] * 8;
      if (lVar14 != 0) {
        uVar1 = 0;
        if ((ulong)uVar5 != 0) {
          uVar1 = (uint)((ulong)((long)local_70 - lVar14) / (ulong)uVar5);
        }
        if (*puVar12 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((uVar1 < DAT_05326ec0) && (*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) == 0xaf)) {
          iVar6 = FUN_01ad78cc(&local_80);
          pcVar13 = local_110;
          local_1b0 = (undefined **)CONCAT44(local_1b0._4_4_,iVar6);
          if (iVar6 == 1) {
            if (local_110 == "mCap_Alb") goto LAB_015316cc;
            pcVar9 = "mCap_Alb";
            bVar3 = SBORROW4(local_108,8);
            iVar6 = local_108 + -8;
            bVar4 = local_108 == 8;
            iVar11 = 8;
          }
          else {
            if (local_110 == "mTops_Alb") goto LAB_015316cc;
            pcVar9 = "mTops_Alb";
            bVar3 = SBORROW4(local_108,9);
            iVar6 = local_108 + -9;
            bVar4 = local_108 == 9;
            iVar11 = 9;
          }
          if (bVar4 || iVar6 < 0 != bVar3) {
            iVar11 = local_108 + -1;
          }
          memcpy(local_110,pcVar9,(long)iVar11);
          pcVar13[iVar11] = '\0';
        }
      }
    }
  }
LAB_015316cc:
  if (*local_110 != '\0') {
    local_11d = 0;
    local_1a0 = 0x80;
    puStack_1a8 = (undefined8 *)local_19c;
    local_19c[0] = 0;
    local_1b0 = (undefined **)&DAT_048fc708;
    uVar16 = FUN_01b08dd0(&local_80,&local_1b0);
    if (((uVar16 & 1) != 0) && (lVar14 = FUN_0074f690(param_1,&local_1b0), lVar14 != 0)) {
      if ((*(long *)(lVar14 + 8) == 0) ||
         ((*(long *)(*(long *)(lVar14 + 8) + 0x20) == 0 || (lVar14 = FUN_038fde10(), lVar14 == 0))))
      {
        uVar10 = 0;
      }
      else {
        uVar10 = **(undefined8 **)(lVar14 + 0x28);
      }
      if (*(long *)(param_2 + 0x1150) != 0) {
        FUN_039a9540(*(long *)(param_2 + 0x1150),uVar10,&local_118);
      }
    }
  }
  return;
}

