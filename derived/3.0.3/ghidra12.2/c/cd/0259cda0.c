
void FUN_0259cda0(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  int *piVar16;
  long lVar17;
  uint local_124;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  uint local_c4;
  int local_c0 [2];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c0[0] = 0;
  local_c0[1] = 0;
  local_b8 = 0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar7 = FUN_026f40f0();
  if (lVar7 == 0) {
    return;
  }
  lVar14 = *(long *)(lVar7 + 0x28);
  if (lVar14 == 0) {
    local_124 = 0;
  }
  else {
    if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
      local_124 = 0;
      plVar8 = *(long **)(lVar14 + 0x20);
    }
    else {
      local_124 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      if (*(long *)(lVar7 + 0x28) == 0) goto LAB_0259ce68;
      plVar8 = *(long **)(*(long *)(lVar7 + 0x28) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_100 = *(long *)(lVar7 + 8);
      uStack_f8 = *(undefined8 *)(lVar7 + 0x10);
      local_f0 = 0x47430;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_100);
    }
  }
LAB_0259ce68:
  lVar17 = 0;
  lVar14 = *(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8);
  pcVar1 = (char *)(lVar14 + 0x110);
  lVar14 = lVar14 + 0x46f70;
  do {
    uVar13 = *(uint *)(lVar14 + lVar17 * 4);
    pcVar4 = pcVar1 + (ulong)uVar13 * 0x3c8;
    if (299 < uVar13) {
      pcVar4 = pcVar1;
    }
    if (*pcVar4 == '\0') break;
    local_c4 = 6;
    uVar13 = *(uint *)(lVar14 + lVar17 * 4);
    pcVar4 = pcVar1 + (ulong)uVar13 * 0x3c8;
    if (299 < uVar13) {
      pcVar4 = pcVar1;
    }
    if (pcVar4[0x5c] == '\x01') {
      local_c4 = 2;
    }
    else if (pcVar4[0x5c] == '\0') {
      if (*(byte *)(param_1 + 0x18) < 8) {
        local_100 = CONCAT71(local_100._1_7_,*(byte *)(param_1 + 0x18));
        lVar9 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_100,1);
      }
      else if (*(int *)(param_1 + 0x1c) == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        if (DAT_05574040 != 0) {
          lVar9 = FUN_026eec4c();
        }
      }
      if ((*(long **)(lVar9 + 0x17bb0) == (long *)0x0) ||
         (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x17bb0), puVar10 == (undefined8 *)0x0)) {
        uVar11 = 0;
      }
      else {
        uVar11 = (**(code **)*puVar10)();
        uVar11 = uVar11 & 0xffffffff;
      }
      uVar13 = *(uint *)(lVar14 + lVar17 * 4);
      pcVar4 = pcVar1 + (ulong)uVar13 * 0x3c8;
      if (299 < uVar13) {
        pcVar4 = pcVar1;
      }
      piVar16 = (int *)(pcVar4 + 4);
      uVar12 = FUN_027ae998(piVar16,pcVar4 + 0x60);
      if ((uVar12 & 1) == 0) {
        uVar13 = (uint)(byte)pcVar4[0x5c];
        local_100 = CONCAT44(local_100._4_4_,uVar13);
        if (uVar13 == 1) {
          piVar16 = (int *)(pcVar4 + 8);
        }
        else if (uVar13 != 0) {
          piVar16 = (int *)0x0;
        }
        piVar3 = (int *)(*(long *)(lVar9 + 0x17b98) + *(long *)(lVar9 + 0x17b90));
        if (((short)piVar16[1] == 0) || ((short)piVar3[1] == 0)) {
          if (*piVar16 != *piVar3) goto LAB_0259d0e4;
        }
        else if ((*piVar16 != *piVar3) ||
                ((*(long *)(piVar3 + 1) != *(long *)(piVar16 + 1) ||
                 *(long *)(piVar3 + 3) != *(long *)(piVar16 + 3)) || piVar3[5] != piVar16[5])) {
LAB_0259d0e4:
          uVar13 = *(uint *)(lVar14 + lVar17 * 4);
          pcVar4 = pcVar1 + (ulong)uVar13 * 0x3c8;
          if (299 < uVar13) {
            pcVar4 = pcVar1;
          }
          if (*(long *)(pcVar4 + 0x380) != 0) {
            local_c4 = 4;
            goto joined_r0x0259d174;
          }
          pcVar2 = pcVar4 + 4;
          if (pcVar4[0x5c] != '\0') {
            pcVar2 = (char *)0x0;
          }
          if ((*(int *)(pcVar2 + 0x1c) == piVar3[7]) &&
             ((*(long *)(piVar3 + 8) == *(long *)(pcVar2 + 0x20) &&
              *(long *)(piVar3 + 10) == *(long *)(pcVar2 + 0x28)) &&
              piVar3[0xc] == *(int *)(pcVar2 + 0x30))) goto LAB_0259d05c;
        }
        local_c4 = 1;
      }
      else {
LAB_0259d05c:
        local_c4 = 3;
      }
joined_r0x0259d174:
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x17bb0) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x17bb0) + 8), puVar10 != (undefined8 *)0x0))
      {
        (**(code **)*puVar10)();
      }
    }
    else {
      uVar11 = FUN_027ae510(pcVar4 + 4);
      if ((uVar11 & 1) == 0) {
        uVar13 = *(uint *)(lVar14 + lVar17 * 4);
        pcVar4 = pcVar1 + (ulong)uVar13 * 0x3c8;
        if (299 < uVar13) {
          pcVar4 = pcVar1;
        }
        if (pcVar4[0x5c] == '\x02') {
          FUN_027af340(&local_100,pcVar4 + 4);
          puVar15 = (uint *)PTR_DAT_04bb8aa0;
          iVar6 = (int)local_100;
        }
        else {
          if (((DAT_04f292d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04f292d0), iVar6 != 0))
          {
            FUN_00dd5f80(&DAT_04f292c0);
            __cxa_guard_release(&DAT_04f292d0);
          }
          puVar15 = &DAT_04f292c0;
          if ((int)DAT_04f292c0 < 1) {
            iVar6 = 0;
            local_100 = (ulong)local_100._4_4_ << 0x20;
          }
          else {
            uVar11 = 0;
            do {
              if (*(int *)(DAT_04f292c8 + uVar11 * 4) == 0) goto LAB_0259cfe8;
              uVar11 = uVar11 + 1;
            } while (DAT_04f292c0 != uVar11);
            uVar11 = 0;
LAB_0259cfe8:
            puVar15 = &DAT_04f292c0;
            iVar6 = (int)uVar11;
            local_100 = CONCAT44(local_100._4_4_,iVar6);
          }
        }
        if ((DAT_04f292d0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_04f292d0);
          puVar15 = &DAT_04f292c0;
          if (iVar5 != 0) {
            FUN_00dd5f80(&DAT_04f292c0);
            __cxa_guard_release(&DAT_04f292d0);
            puVar15 = &DAT_04f292c0;
          }
        }
        if (0 < (int)*puVar15) {
          uVar11 = 0;
          do {
            if (*(int *)(*(long *)(puVar15 + 2) + uVar11 * 4) == 1) goto LAB_0259d1ec;
            uVar11 = uVar11 + 1;
          } while (*puVar15 != uVar11);
        }
        uVar11 = 0xffffffff;
LAB_0259d1ec:
        if (iVar6 == (int)uVar11) {
          local_c4 = 5;
        }
        iVar6 = (int)local_100;
        puVar15 = (uint *)PTR_DAT_04bb8aa0;
        if ((*PTR_DAT_04bb8aa8 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_04f292d0);
          puVar15 = &DAT_04f292c0;
          if (iVar5 != 0) {
            FUN_00dd5f80(&DAT_04f292c0);
            __cxa_guard_release(&DAT_04f292d0);
            puVar15 = &DAT_04f292c0;
          }
        }
        if (0 < (int)*puVar15) {
          uVar11 = 0;
          do {
            if (*(int *)(*(long *)(puVar15 + 2) + uVar11 * 4) == 0x51) goto LAB_0259d24c;
            uVar11 = uVar11 + 1;
          } while (*puVar15 != uVar11);
        }
        uVar11 = 0xffffffff;
LAB_0259d24c:
        local_c4 = 5;
        if (iVar6 != (int)uVar11) {
          local_c4 = 6;
        }
      }
      else {
        local_c4 = 5;
      }
    }
    local_c0[0] = local_c0[0] + 1;
    uVar13 = *(uint *)(lVar14 + lVar17 * 4);
    piVar16 = local_c0 + (ulong)local_c4 * 3;
    if (6 < local_c4) {
      piVar16 = local_c0;
    }
    *piVar16 = *piVar16 + 1;
    pcVar4 = pcVar1 + (ulong)uVar13 * 0x3c8;
    if (299 < uVar13) {
      pcVar4 = pcVar1;
    }
    if (*pcVar4 != '\x04') {
      local_c0[1] = local_c0[1] + 1;
      piVar16 = (int *)(((ulong)local_c0 | 4) + (ulong)local_c4 * 0xc);
      if (6 < local_c4) {
        piVar16 = (int *)((ulong)local_c0 | 4);
      }
      *piVar16 = *piVar16 + 1;
    }
    if (pcVar4[1] != '\0') {
      local_b8 = CONCAT44(local_b8._4_4_,(int)local_b8 + 1);
      piVar16 = local_c0 + (ulong)local_c4 * 3 + 2;
      if (6 < local_c4) {
        piVar16 = local_c0 + 2;
      }
      *piVar16 = *piVar16 + 1;
    }
    lVar17 = lVar17 + 1;
  } while (lVar17 != 300);
  FUN_006d8678(&local_100,"Count_%s_%s",&DAT_04a85800,&DAT_04a85870);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)local_c0[0]);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",&DAT_04a85800,s_Unread_04a85875);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)local_c0[1]);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",&DAT_04a85800,s_Favorite_04a8587d);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)(int)local_b8);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",s_Villager_04a85805,&DAT_04a85870);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)local_b8._4_4_);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",s_Villager_04a85805,s_Unread_04a85875);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)(int)local_b0);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",s_Villager_04a85805,s_Favorite_04a8587d);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)local_b0._4_4_);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",&DAT_04a8580f,&DAT_04a85870);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)(int)local_a8);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",&DAT_04a8580f,s_Unread_04a85875);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)local_a8._4_4_);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",&DAT_04a8580f,s_Favorite_04a8587d);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)(int)local_a0);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",&DAT_04a85814,&DAT_04a85870);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)local_a0._4_4_);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",&DAT_04a85814,s_Unread_04a85875);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)(int)local_98);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",&DAT_04a85814,s_Favorite_04a8587d);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)local_98._4_4_);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",s_Friend_04a8581a,&DAT_04a85870);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)(int)local_90);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",s_Friend_04a8581a,s_Unread_04a85875);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)local_90._4_4_);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",s_Friend_04a8581a,s_Favorite_04a8587d);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)(int)local_88);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",s_Nintendo_04a85822,&DAT_04a85870);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)local_88._4_4_);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",s_Nintendo_04a85822,s_Unread_04a85875);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)(int)local_80);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",s_Nintendo_04a85822,s_Favorite_04a8587d);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)local_80._4_4_);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",s_SystemOther_04a8582c,&DAT_04a85870);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)(int)local_78);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",s_SystemOther_04a8582c,s_Unread_04a85875);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)local_78._4_4_);
  }
  FUN_006d8678(&local_100,"Count_%s_%s",s_SystemOther_04a8582c,s_Favorite_04a8587d);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_100,(long)local_70);
  }
  if ((((local_124 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 0x18), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return;
}

