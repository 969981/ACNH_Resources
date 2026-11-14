
void FUN_01c003f0(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined ***pppuVar5;
  bool bVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined2 local_170;
  undefined2 uStack_16e;
  undefined4 uStack_16c;
  undefined ***local_168;
  undefined8 local_160;
  char *local_158;
  undefined *puStack_150;
  undefined *local_148;
  undefined *puStack_140;
  undefined *local_138;
  undefined *puStack_130;
  char *local_128;
  undefined8 uStack_120;
  undefined *local_118;
  undefined *local_110;
  int local_108;
  undefined local_104 [5];
  undefined1 local_ff;
  undefined1 local_e5;
  undefined *local_e0;
  undefined1 *puStack_d8;
  undefined **local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  int local_6c;
  
  local_6c = FUN_021d5df0(param_2);
  puVar4 = PTR_DAT_04bb2120;
  puVar18 = PTR_DAT_04bb2028;
  puStack_c8 = PTR_DAT_04bb2020 + 0x10;
  local_b0 = PTR_DAT_04bb2120;
  uStack_a8 = 0;
  local_80 = PTR_DAT_04bb2120;
  uStack_78 = 0;
  local_d0 = &PTR_LAB_04a3e588;
  local_c0 = PTR_DAT_04bb2120;
  local_90 = &DAT_040e4c75;
  local_a0 = 0;
  puStack_b8 = puStack_c8;
  puStack_98 = puStack_c8;
  puStack_88 = puStack_c8;
  if (local_6c == 2) {
    uVar12 = 0x44;
    local_a0 = 0x4400000000;
LAB_01c00bc8:
    uVar14 = 0xffffffff;
    lVar16 = *(long *)PTR_DAT_04bb26a8;
    goto LAB_01c00bd4;
  }
  if (local_6c == 1) {
    puStack_140._0_4_ = (uint)(uint3)puStack_140;
    puStack_d8 = (undefined1 *)param_2[1];
    local_e0 = PTR_DAT_04bb2020 + 0x10;
    local_168 = (undefined ***)((long)&local_160 + 4);
    local_160 = (undefined *)CONCAT35(local_160._5_3_,0x20);
    puVar2 = PTR_DAT_04bb2028 + 0x10;
    local_170 = SUB82(puVar2,0);
    uStack_16e = (undefined2)((ulong)puVar2 >> 0x10);
    uStack_16c = (undefined4)((ulong)puVar2 >> 0x20);
    if (puStack_d8 == &DAT_04076b39) {
LAB_01c008a8:
      uVar7 = 0x426c7567;
LAB_01c00a08:
      local_160 = (undefined *)CONCAT44(uVar7,0x20);
      local_158 = (char *)((ulong)local_158 & 0xffffffffffffff00);
    }
    else {
      uVar14 = 0;
      bVar6 = true;
      do {
        if (puStack_d8[uVar14] != (&DAT_04076b39)[uVar14]) break;
        if (puStack_d8[uVar14] == '\0') {
          if (bVar6) goto LAB_01c008a8;
          break;
        }
        bVar6 = uVar14 < 0x80000;
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x80001);
      if (puStack_d8 == &DAT_040b536f) {
LAB_01c00900:
        uVar7 = 0x416c7474;
        goto LAB_01c00a08;
      }
      uVar14 = 0;
      bVar6 = true;
      do {
        if (puStack_d8[uVar14] != (&DAT_040b536f)[uVar14]) break;
        if (puStack_d8[uVar14] == '\0') {
          if (bVar6) goto LAB_01c00900;
          break;
        }
        bVar6 = uVar14 < 0x80000;
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x80001);
      if (puStack_d8 == &DAT_040ff1ff) {
LAB_01c009ac:
        uVar7 = 0x426c7474;
        goto LAB_01c00a08;
      }
      uVar14 = 0;
      bVar6 = true;
      do {
        if (puStack_d8[uVar14] != (&DAT_040ff1ff)[uVar14]) break;
        if (puStack_d8[uVar14] == '\0') {
          if (bVar6) goto LAB_01c009ac;
          break;
        }
        bVar6 = uVar14 < 0x80000;
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x80001);
      if (puStack_d8 == &DAT_0408be95) {
LAB_01c00a00:
        uVar7 = 0x426b6b74;
        goto LAB_01c00a08;
      }
      uVar14 = 0;
      bVar6 = true;
      do {
        if (puStack_d8[uVar14] != (&DAT_0408be95)[uVar14]) break;
        if (puStack_d8[uVar14] == '\0') {
          if (bVar6) goto LAB_01c00a00;
          break;
        }
        bVar6 = uVar14 < 0x80000;
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x80001);
      FUN_021d7aa0(&local_170,&local_e0);
    }
    puVar2 = PTR_DAT_04bb2a08 + 0x10;
    uVar12 = 0xffffffff;
    do {
      uVar1 = uVar12 + 1;
      local_e5 = 0;
      local_108 = 0x20;
      puVar10 = (&PTR_DAT_04a3e840)[uVar1];
      local_110 = local_104;
      if (local_104 != puVar10) {
        lVar16 = 0;
        do {
          if (puVar10[lVar16] == '\0') {
LAB_01c00ab4:
            iVar11 = (int)lVar16;
joined_r0x01c00ab8:
            if (0x1f < iVar11) {
              iVar11 = 0x1f;
            }
            goto LAB_01c00ac0;
          }
          if (puVar10[lVar16 + 1] == '\0') {
            lVar16 = lVar16 + 1;
            goto LAB_01c00ab4;
          }
          if (puVar10[lVar16 + 2] == '\0') {
            iVar11 = (int)lVar16 + 2;
            goto joined_r0x01c00ab8;
          }
          lVar16 = lVar16 + 3;
        } while (lVar16 != 0x80001);
        iVar11 = 0;
LAB_01c00ac0:
        local_118 = puVar2;
        memcpy(local_104,puVar10,(long)iVar11);
        local_104[iVar11] = 0;
      }
      local_118 = puVar18 + 0x10;
      (**(code **)(CONCAT44(uStack_16c,CONCAT22(uStack_16e,local_170)) + 0x18))(&local_170);
      (**(code **)(CONCAT44(uStack_16c,CONCAT22(uStack_16e,local_170)) + 0x18))(&local_170);
      pppuVar5 = local_168;
      (**(code **)(local_118 + 0x18))(&local_118);
      if (pppuVar5 == (undefined ***)local_110) {
LAB_01c00b9c:
        local_a0 = CONCAT44(uVar12,(undefined4)local_a0);
        if (uVar12 != 0x16) goto LAB_01c00bc8;
        uVar12 = 0x5c;
        goto LAB_01c00bbc;
      }
      uVar14 = 0;
      bVar6 = true;
      do {
        if (*(char *)((long)local_168 + uVar14) != local_110[uVar14]) break;
        if (*(char *)((long)local_168 + uVar14) == '\0') {
          if (bVar6) goto LAB_01c00b9c;
          break;
        }
        if (*(char *)((long)local_168 + uVar14 + 1) != local_110[uVar14 + 1]) break;
        if (*(char *)((long)local_168 + uVar14 + 1) == '\0') goto LAB_01c00b9c;
        if (*(char *)((long)local_168 + uVar14 + 2) != local_110[uVar14 + 2]) break;
        if (*(char *)((long)local_168 + uVar14 + 2) == '\0') goto LAB_01c00b9c;
        bVar6 = uVar14 < 0x7fffe;
        uVar14 = uVar14 + 3;
      } while (uVar14 != 0x80001);
      uVar12 = uVar1;
    } while (uVar1 != 0x68);
    uVar12 = 0x23;
LAB_01c00bbc:
    local_a0 = CONCAT44(uVar12,(undefined4)local_a0);
    goto LAB_01c00bc8;
  }
  if (local_6c != 0) {
    pcVar15 = "Doubutsugo_Aneki";
    puVar18 = PTR_DAT_04bb2020;
    goto LAB_01c00c28;
  }
  local_108 = 6;
  local_110 = local_104;
  local_ff = 0;
  local_104[0] = 0;
  local_118 = PTR_DAT_04bb4a20 + 0x10;
  lVar16 = *(long *)PTR_DAT_04bb4138;
  if (lVar16 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar7 = FUN_006bd550(param_2[1],0);
    local_170 = (undefined2)uVar7;
    uStack_16e = (undefined2)((uint)uVar7 >> 0x10);
    lVar16 = FUN_0079e770(lVar16,&local_170);
    puVar18 = local_110;
    if (lVar16 != 0) {
      (**(code **)(*param_2 + 0x18))(param_2);
      if (puVar18 != (undefined *)param_2[1]) {
        iVar11 = 3;
        if (local_108 < 4) {
          iVar11 = local_108 + -1;
        }
        memcpy(puVar18,(undefined *)param_2[1],(long)iVar11);
        puVar18[iVar11] = 0;
      }
    }
  }
  puVar18 = (undefined *)((long)&local_160 + 4);
  puVar2 = PTR_DAT_04bb2a08 + 0x10;
  puVar10 = PTR_DAT_04bb2028 + 0x10;
  uVar12 = 0xffffffff;
  do {
    uVar1 = uVar12 + 1;
    puStack_140._0_4_ = (uint)(uint3)puStack_140;
    local_160 = (undefined *)CONCAT44(local_160._4_4_,0x20);
    puVar9 = (&PTR_DAT_04a3e840)[uVar1];
    local_170 = SUB82(puVar2,0);
    uStack_16e = (undefined2)((ulong)puVar2 >> 0x10);
    uStack_16c = (undefined4)((ulong)puVar2 >> 0x20);
    local_168 = (undefined ***)puVar18;
    if (puVar18 != puVar9) {
      lVar16 = 0;
      do {
        if (puVar9[lVar16] == '\0') {
LAB_01c00684:
          iVar11 = (int)lVar16;
joined_r0x01c00688:
          if (0x1f < iVar11) {
            iVar11 = 0x1f;
          }
          goto LAB_01c00690;
        }
        if (puVar9[lVar16 + 1] == '\0') {
          lVar16 = lVar16 + 1;
          goto LAB_01c00684;
        }
        if (puVar9[lVar16 + 2] == '\0') {
          iVar11 = (int)lVar16 + 2;
          goto joined_r0x01c00688;
        }
        lVar16 = lVar16 + 3;
      } while (lVar16 != 0x80001);
      iVar11 = 0;
LAB_01c00690:
      memcpy(puVar18,puVar9,(long)iVar11);
      puVar18[iVar11] = 0;
    }
    local_170 = SUB82(puVar10,0);
    uStack_16e = (undefined2)((ulong)puVar10 >> 0x10);
    uStack_16c = (undefined4)((ulong)puVar10 >> 0x20);
    (**(code **)(local_118 + 0x18))(&local_118);
    (**(code **)(local_118 + 0x18))(&local_118);
    puVar9 = local_110;
    (**(code **)(CONCAT44(uStack_16c,CONCAT22(uStack_16e,local_170)) + 0x18))(&local_170);
    if ((undefined ***)puVar9 == local_168) {
LAB_01c0076c:
      local_a0 = CONCAT44(uVar12,(undefined4)local_a0);
      break;
    }
    uVar14 = 0;
    bVar6 = true;
    do {
      if (local_110[uVar14] != *(char *)((long)local_168 + uVar14)) break;
      if (local_110[uVar14] == '\0') {
        if (bVar6) goto LAB_01c0076c;
        break;
      }
      if (local_110[uVar14 + 1] != *(char *)((long)local_168 + uVar14 + 1)) break;
      if (local_110[uVar14 + 1] == '\0') goto LAB_01c0076c;
      if (local_110[uVar14 + 2] != *(char *)((long)local_168 + uVar14 + 2)) break;
      if (local_110[uVar14 + 2] == '\0') goto LAB_01c0076c;
      bVar6 = uVar14 < 0x7fffe;
      uVar14 = uVar14 + 3;
    } while (uVar14 != 0x80001);
    uVar12 = uVar1;
  } while (uVar1 != 0x68);
  uVar17 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar7 = FUN_006bd550(param_2[1],0);
  local_170 = (undefined2)uVar7;
  uStack_16e = (undefined2)((uint)uVar7 >> 0x10);
  puVar8 = (uint *)FUN_0079e770(uVar17,&local_170);
  if (puVar8 == (uint *)0x0) {
    pcVar15 = "Doubutsugo_Aneki";
    puVar18 = PTR_DAT_04bb2020;
    goto LAB_01c00c28;
  }
  uVar12 = *puVar8;
  if (uVar12 == 0 || puVar8 == (uint *)(ulong)uVar12) {
LAB_01c007c0:
    uVar12 = 0;
  }
  else {
    puVar13 = (uint *)((long)puVar8 - (long)(ulong)uVar12);
    if (((*puVar13 == 0) || (uVar12 = puVar13[1], uVar12 == 0)) || ((ulong)(ushort)puVar13[2] == 0))
    goto LAB_01c007c0;
    lVar16 = 0xc;
    if (*(char *)((long)puVar13 + 10) != '\0') {
      lVar16 = 0x1c;
    }
    lVar16 = (long)puVar13 + lVar16 + (ulong)(ushort)puVar13[2] * 8;
    if (lVar16 == 0) goto LAB_01c007c0;
    uVar1 = 0;
    if ((ulong)uVar12 != 0) {
      uVar1 = (uint)((ulong)((long)puVar8 - lVar16) / (ulong)uVar12);
    }
    if (*puVar13 <= uVar1) {
      uVar1 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bb6a50 <= uVar1) goto LAB_01c007c0;
    uVar12 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bb6a50 + 8) + (long)(int)uVar1 * 2);
    if (7 < uVar12) {
      uVar12 = 0;
    }
  }
  local_118 = (undefined *)CONCAT44(local_118._4_4_,uVar12);
  switch(uVar12) {
  case 0:
    uVar14 = 0;
    local_a0 = (ulong)local_a0._4_4_ << 0x20;
    goto LAB_01c00990;
  case 1:
    uVar14 = 1;
    break;
  case 2:
    uVar14 = 2;
    break;
  case 3:
    uVar14 = 3;
    break;
  case 4:
    uVar14 = 4;
    break;
  case 5:
    uVar14 = 5;
    break;
  case 6:
    uVar14 = 6;
    break;
  case 7:
    uVar14 = 7;
    break;
  default:
    uVar14 = local_a0 & 0xffffffff;
    goto LAB_01c00990;
  }
  local_a0 = CONCAT44(local_a0._4_4_,(int)uVar14);
LAB_01c00990:
  lVar16 = *(long *)PTR_DAT_04bb26a8;
  uVar12 = local_a0._4_4_;
LAB_01c00bd4:
  puVar18 = PTR_DAT_04bb2020;
  uStack_16e = 0xffff;
  local_170 = 0xffff;
  uStack_16c = 0;
  local_168._0_4_ = 0;
  FUN_029b41c4(lVar16 + 0xb4598,&local_170,0,uVar12,uVar14);
  local_118 = (undefined *)CONCAT44(local_118._4_4_,CONCAT22(uStack_16e,local_170));
  nn::os::LockMutex((MutexType *)(lVar16 + 0xb6088));
  lVar3 = lVar16 + 0xb45a0 + ((ulong)local_118 & 0xffffffff) * 0x20;
  if (8 < (uint)local_118) {
    lVar3 = lVar16 + 0xb45a0;
  }
  pcVar15 = *(char **)(lVar3 + 0x18);
  nn::os::UnlockMutex((MutexType *)(lVar16 + 0xb6088));
LAB_01c00c28:
  local_160 = puVar18 + 0x10;
  local_168 = &local_d0;
  local_170 = 0;
  local_148 = puVar4;
  local_138 = puVar4;
  local_128 = "DoubutsugoObject";
  uStack_120 = 0;
  local_158 = pcVar15;
  puStack_150 = local_160;
  puStack_140 = local_160;
  puStack_130 = local_160;
  FUN_038387b8(param_1 + 0x188,&local_170);
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  return;
}

