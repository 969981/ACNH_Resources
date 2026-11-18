
undefined8 FUN_0376dea0(long *param_1,ulong param_2)

{
  uint *puVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  char *pcVar16;
  undefined8 uVar17;
  undefined *local_88;
  char *local_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  char local_64 [7];
  undefined1 local_5d;
  undefined1 local_45;
  
  if ((param_2 & 1) != 0) {
    lVar15 = *(long *)PTR_DAT_04bb4130;
    if (lVar15 != 0) {
      (**(code **)(*param_1 + 0x18))(param_1);
      uVar6 = FUN_006bd550(param_1[1],0);
      local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar6);
      lVar15 = FUN_0079e4d0(lVar15,&local_78);
      if (lVar15 != 0) {
        local_45 = 0;
        local_70 = local_64;
        local_68 = 0x20;
        local_64[0] = '\0';
        local_78 = PTR_DAT_04bb2028 + 0x10;
        FUN_021d7aa0(&local_78,param_1);
        local_88 = PTR_DAT_04bb2020 + 0x10;
        local_80 = "tkk";
        (**(code **)(local_78 + 0x18))(&local_78);
        (**(code **)(local_78 + 0x18))(&local_78);
        pcVar16 = local_70;
        (**(code **)(local_88 + 0x18))(&local_88);
        if (pcVar16 == local_80) {
LAB_0376dfd4:
          if ((*(uint *)PTR_DAT_04bba738 & 0xfffffffb) == 2) {
            return 7;
          }
        }
        else {
          uVar14 = 0;
          bVar3 = true;
          do {
            if (local_70[uVar14] != local_80[uVar14]) break;
            if (local_70[uVar14] == '\0') {
              if (bVar3) goto LAB_0376dfd4;
              break;
            }
            bVar3 = uVar14 < 0x80000;
            uVar14 = uVar14 + 1;
          } while (uVar14 != 0x80001);
        }
      }
    }
    lVar15 = *(long *)PTR_DAT_04bb4138;
    if (lVar15 != 0) {
      (**(code **)(*param_1 + 0x18))(param_1);
      uVar6 = FUN_006bd550(param_1[1],0);
      local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar6);
      lVar15 = FUN_0079e770(lVar15,&local_78);
      if (lVar15 != 0) {
        local_68 = 8;
        local_5d = 0;
        local_78 = PTR_DAT_04bb6a30 + 0x10;
        local_70 = local_64;
        (**(code **)(*param_1 + 0x18))(param_1);
        pcVar16 = (char *)param_1[1];
        if (local_64 != pcVar16) {
          (**(code **)(*param_1 + 0x18))(param_1);
          lVar15 = 0;
          do {
            if (*(char *)(param_1[1] + lVar15) == '\0') goto LAB_0376e0d0;
            lVar11 = param_1[1] + lVar15;
            if (*(char *)(lVar11 + 1) == '\0') {
              lVar15 = lVar15 + 1;
              goto LAB_0376e0d0;
            }
            if (*(char *)(lVar11 + 2) == '\0') {
              lVar15 = lVar15 + 2;
              goto LAB_0376e0d0;
            }
            lVar15 = lVar15 + 3;
          } while (lVar15 != 0x80001);
          lVar15 = 0;
LAB_0376e0d0:
          iVar7 = (int)lVar15;
          if ((int)local_68 <= (int)lVar15) {
            iVar7 = local_68 - 1;
          }
          memcpy(local_64,pcVar16,(long)iVar7);
          local_64[iVar7] = '\0';
        }
        local_78 = PTR_DAT_04bb3768 + 0x10;
        iVar7 = FUN_0376fa50(&local_78);
        if (iVar7 != -1) {
          return 0;
        }
      }
    }
  }
  local_78 = (undefined *)CONCAT53(local_78._3_5_,0x80023);
  FUN_020fd3a0(&local_78,param_1);
  uVar14 = (ulong)local_78 & 0xff;
  if (0x22 < uVar14) {
    return 0;
  }
  if ((byte)PTR_DAT_04bc27f0[uVar14] < local_78._1_1_) {
    return 0;
  }
  if ((*(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(local_78._1_1_ & 0x1f) & 1) == 0) {
    return 0;
  }
  uVar8 = FUN_021d7d60(&local_78);
  uVar14 = (ulong)uVar8;
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  pbVar13 = PTR_DAT_04bb32e0;
  if (lVar15 == 0) {
LAB_0376e230:
    if (*pbVar13 < 8) goto LAB_0376e29c;
LAB_0376e23c:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0376e294:
      pbVar13 = PTR_DAT_04bb5038;
      goto LAB_0376e29c;
    }
    lVar15 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar15 + 0x473);
    pbVar13 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar15 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar13 = (byte *)(lVar15 + 0x471);
      }
    }
    bVar4 = *pbVar13;
    if (7 < bVar4) goto LAB_0376e294;
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar13) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0376e230;
      }
      goto LAB_0376e23c;
    }
LAB_0376e29c:
    bVar4 = *pbVar13;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
  }
  if (uVar8 == 0xffffffff) {
    return 0;
  }
  if (7 < bVar4) {
    return 0;
  }
  local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar4);
  lVar15 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_78,1);
  if (lVar15 != 0) {
    if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar10 == (undefined8 *)0x0)) {
      uVar9 = 1;
    }
    else {
      uVar9 = (**(code **)*puVar10)();
      uVar9 = uVar9 ^ 1;
    }
    lVar11 = FUN_0265c8a0(uVar8,*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0xc154);
    if ((((uVar9 & 1) == 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
    if (lVar11 != 0) {
      if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
         (puVar10 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar10 == (undefined8 *)0x0)) {
        uVar12 = 0;
      }
      else {
        uVar12 = (**(code **)*puVar10)();
        uVar12 = uVar12 & 0xffffffff;
      }
      local_78 = PTR_DAT_04bb2020 + 0x10;
      local_70 = "HasAcquaintanceship";
      iVar7 = FUN_02746e10(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8) + 0x38,&local_78);
      if ((((uVar12 & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
        (**(code **)*puVar10)();
      }
      if (iVar7 == 0) {
        return 1;
      }
    }
  }
  puVar2 = PTR_DAT_04bb46b0;
  lVar15 = *(long *)PTR_DAT_04bb46b0;
  if (lVar15 != 0) {
    puVar10 = *(undefined8 **)(lVar15 + 0x10);
    if ((*(byte *)(lVar15 + 0x453) & 1) == 0) {
      lVar15 = (**(code **)(*(long *)*puVar10 + 0x38))();
      if (lVar15 != 0) {
        lVar15 = lVar15 + 0x70;
        goto LAB_0376e420;
      }
    }
    else if (((puVar10 != (undefined8 *)0x0) && ((long *)puVar10[0x26] != (long *)0x0)) &&
            (lVar15 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar15 != 0)) {
LAB_0376e420:
      local_70 = (char *)(lVar15 + 0xa8);
      local_68 = CONCAT31(local_68._1_3_,1);
      if ((*(long **)(lVar15 + 0xd0) == (long *)0x0) ||
         (puVar10 = (undefined8 *)**(long **)(lVar15 + 0xd0), puVar10 == (undefined8 *)0x0)) {
        bVar4 = 0;
      }
      else {
        bVar4 = (**(code **)*puVar10)();
      }
      local_68 = CONCAT22(local_68._2_2_,CONCAT11(bVar4,(undefined1)local_68)) & 0xffff01ff;
      local_78 = PTR_DAT_04bb4dc8 + 0x10;
      uVar9 = FUN_027df450(*(long *)(lVar15 + 0xb8) + *(long *)(lVar15 + 0xb0));
      if (uVar8 == uVar9) {
        uVar17 = 2;
LAB_0376e4ac:
        if ((bVar4 & 1) == 0) {
          return uVar17;
        }
        if (*(long *)(lVar15 + 0xd0) == 0) {
          return uVar17;
        }
        puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0xd0) + 8);
        if (puVar10 == (undefined8 *)0x0) {
          return uVar17;
        }
        (**(code **)*puVar10)();
        return uVar17;
      }
      uVar9 = FUN_027df9c0(*(long *)(lVar15 + 0xb8) + *(long *)(lVar15 + 0xb0));
      if (uVar8 == uVar9) {
        uVar17 = 3;
        goto LAB_0376e4ac;
      }
      FUN_02640184(&local_78);
    }
  }
  uVar12 = FUN_021eacf0(uVar14,0,1);
  if (((uVar12 & 1) != 0) && (uVar12 = FUN_0103fa0c(), (uVar12 & 1) != 0)) {
    return 4;
  }
  lVar15 = *(long *)puVar2;
  if (lVar15 != 0) {
    puVar10 = *(undefined8 **)(lVar15 + 0x10);
    if ((*(byte *)(lVar15 + 0x453) & 1) == 0) {
      lVar15 = (**(code **)(*(long *)*puVar10 + 0x38))();
      if (lVar15 == 0) goto LAB_0376e5c8;
      lVar15 = lVar15 + 0x70;
    }
    else if (((puVar10 == (undefined8 *)0x0) || ((long *)puVar10[0x26] == (long *)0x0)) ||
            (lVar15 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar15 == 0))
    goto LAB_0376e5c8;
    local_70 = (char *)(lVar15 + 0xe6f20);
    local_68 = CONCAT31(local_68._1_3_,1);
    if (*(long **)(lVar15 + 0xe6f48) == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar10 = (undefined8 *)**(long **)(lVar15 + 0xe6f48);
      uVar5 = 0;
      if (puVar10 != (undefined8 *)0x0) {
        uVar5 = (**(code **)*puVar10)();
      }
    }
    local_68 = CONCAT22(local_68._2_2_,CONCAT11(uVar5,(undefined1)local_68)) & 0xffff01ff;
    local_78 = PTR_DAT_04bb6ba0 + 0x10;
    lVar15 = *(long *)(lVar15 + 0xe6f30) + *(long *)(lVar15 + 0xe6f28);
    if ((uVar8 == (int)*(char *)(lVar15 + 0x2c)) && (*(char *)(lVar15 + 0x2f) != '\x03')) {
      FUN_02640184(&local_78);
      return 5;
    }
    FUN_02640184(&local_78);
  }
LAB_0376e5c8:
  if (((9 < uVar8) || ((&DAT_053fee41)[uVar14 * 0xba0] == '\0')) ||
     (((&DAT_053fede8)[uVar14 * 0x174] == 0 || (*(int *)((&DAT_053fede8)[uVar14 * 0x174] + 4) != 1))
     )) {
    return 0;
  }
  if ((param_2 & 1) != 0) {
    uVar6 = FUN_0376baa0(param_1);
    lVar15 = FUN_02685510();
    local_68 = CONCAT31(local_68._1_3_,1);
    local_70 = (char *)lVar15;
    if (*(long **)(lVar15 + 0x28) == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar10 = (undefined8 *)**(long **)(lVar15 + 0x28);
      uVar5 = 0;
      if (puVar10 != (undefined8 *)0x0) {
        uVar5 = (**(code **)*puVar10)();
      }
    }
    local_68 = CONCAT22(local_68._2_2_,CONCAT11(uVar5,(undefined1)local_68)) & 0xffff01ff;
    local_78 = PTR_DAT_04bb75f8 + 0x10;
    iVar7 = FUN_028eb6f0(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8),uVar6,0,0);
    FUN_02640184(&local_78);
    if (iVar7 != -1) {
      return 0;
    }
  }
  return 6;
}

