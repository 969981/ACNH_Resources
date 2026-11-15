
void FUN_02207940(void)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  char *pcStack_80;
  uint local_74;
  undefined8 local_70;
  char *pcStack_68;
  
  puVar4 = PTR_DAT_04bb2020;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "HarvestProgress";
  iVar7 = FUN_0273ea30(&local_70);
  uVar17 = 0;
  uVar18 = 0;
  do {
    local_74 = uVar17;
    lVar9 = FUN_0265c2a0(uVar17);
    if (lVar9 != 0) {
      local_70 = puVar4 + 0x10;
      local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar17);
      pcStack_68 = "HarvestPlazaHandTool";
      FUN_021be8c0(&local_88,&local_70,0);
      local_88._0_2_ = (ushort)(byte)uVar17;
      local_70._6_2_ = (ushort)((ulong)local_70 >> 0x30) & 0xff00;
      local_70 = (undefined *)CONCAT26(local_70._6_2_,0xff0000000000);
      if (-1 < DAT_053d1370) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1370,&local_70,&local_88,2,0);
      }
      if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
         (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar10 == (undefined8 *)0x0)) {
        uVar11 = 0;
      }
      else {
        uVar11 = (**(code **)*puVar10)();
        uVar11 = uVar11 & 0xffffffff;
      }
      local_88 = puVar4 + 0x10;
      pcStack_80 = "SeasonEventPlace";
      sVar6 = FUN_02196ed0(&local_74,&local_88);
      if (sVar6 == 0) {
        pbVar2 = (byte *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
        uVar16 = (ulong)*pbVar2;
        if (((uVar16 < 0x23) && (pbVar2[1] <= (byte)PTR_DAT_04bc27f0[uVar16])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar16 * 4) >> (ulong)(pbVar2[1] & 0x1f) & 1) != 0)) {
          pcStack_90 = "AbandonedHouse";
          local_98 = puVar4 + 0x10;
          iVar8 = FUN_02749340(pbVar2 + 0x1267c,&local_98);
          if (iVar8 < 2) {
            pcStack_68 = "MoveInCompletion";
            local_70 = puVar4 + 0x10;
            iVar8 = FUN_02749340(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x1267c,&local_70)
            ;
            if (iVar8 != 0) {
              uVar18 = 1 << (ulong)(uVar17 & 0x1f) | uVar18;
            }
          }
        }
      }
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
        (**(code **)*puVar10)();
      }
    }
    puVar5 = PTR_DAT_04bb39d8;
    uVar17 = uVar17 + 1;
  } while (uVar17 != 10);
  uVar17 = uVar18 - (uVar18 >> 1 & 0x55555555);
  uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
  uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
  uVar17 = uVar17 + (uVar17 >> 8);
  uVar17 = uVar17 + (uVar17 >> 0x10) & 0x3f;
  if (iVar7 == 0) {
    local_88._0_4_ = 1;
    iVar7 = -1;
    if (4 < uVar17) goto LAB_02207c04;
  }
  else if (iVar7 == 4) {
    if (4 < uVar17) {
      local_88._0_4_ = 4;
      iVar7 = -4;
      goto LAB_02207c04;
    }
    local_88._0_4_ = 3;
    iVar7 = -3;
  }
  else {
    if (4 < uVar17) {
      local_88._0_4_ = 3;
      iVar7 = -3;
LAB_02207c04:
      local_88 = (undefined *)CONCAT44(iVar7 + uVar17,(undefined4)local_88);
      goto LAB_02207c0c;
    }
    local_88._0_4_ = 2;
    iVar7 = -2;
  }
  local_88 = (undefined *)CONCAT44(iVar7 + uVar17,(undefined4)local_88);
  if (uVar17 == 0) {
    return;
  }
LAB_02207c0c:
  do {
    uVar13 = uVar18 - (uVar18 >> 1 & 0x55555555);
    uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
    uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
    uVar13 = uVar13 + (uVar13 >> 8);
    uVar13 = uVar13 + (uVar13 >> 0x10);
    uVar15 = uVar13 & 0x3f;
    if ((uVar13 & 0x3f) == 0) {
      return;
    }
    puVar12 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar5);
    uVar13 = *puVar12 ^ *puVar12 << 0xb;
    uVar14 = puVar12[3];
    *puVar12 = puVar12[1];
    puVar12[1] = puVar12[2];
    uVar13 = uVar13 >> 8 ^ uVar14 >> 0x13 ^ uVar13 ^ uVar14;
    uVar3 = -((int)uVar13 >> 0x1f);
    puVar12[2] = uVar14;
    puVar12[3] = uVar13;
    piVar19 = (int *)((long)&local_88 + (ulong)uVar3 * 4);
    iVar7 = *piVar19;
    if (iVar7 < 1) {
      piVar19 = (int *)((long)&local_88 + (ulong)(~uVar13 >> 0x1f) * 4);
      iVar7 = *piVar19;
      if (iVar7 < 1) {
        return;
      }
      puVar12 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar5);
      uVar3 = puVar12[3];
      uVar14 = *puVar12 ^ *puVar12 << 0xb;
      *puVar12 = puVar12[1];
      puVar12[1] = puVar12[2];
      uVar14 = uVar14 >> 8 ^ uVar3 >> 0x13 ^ uVar14 ^ uVar3;
      puVar12[2] = uVar3;
      puVar12[3] = uVar14;
      uVar14 = (uint)((ulong)uVar14 * (ulong)(uVar15 - 1) >> 0x20);
      if (uVar14 < uVar15) {
        if (uVar18 == 0) {
          uVar15 = 0xffffffff;
        }
        else {
          iVar8 = uVar14 + 2;
          uVar15 = uVar18;
          do {
            iVar8 = iVar8 + -1;
            if (iVar8 < 2) {
              uVar15 = uVar15 - 1 & (uVar15 ^ 0xffffffff);
              uVar15 = uVar15 - (uVar15 >> 1 & 0x55555555);
              uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
              uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
              uVar15 = uVar15 + (uVar15 >> 8);
              uVar15 = uVar15 + (uVar15 >> 0x10) & 0x3f;
              goto LAB_02207ee4;
            }
            uVar15 = uVar15 - 1 & uVar15;
          } while (uVar15 != 0);
          uVar15 = 0xffffffff;
        }
LAB_02207ee4:
        local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar15);
        iVar8 = 1;
        if (-1 < (int)uVar13) {
          iVar8 = 2;
        }
        goto LAB_02207efc;
      }
      iVar8 = 1;
      if (-1 < (int)uVar13) {
        iVar8 = 2;
      }
LAB_02207dd4:
      local_98 = (undefined *)CONCAT44(local_98._4_4_,0xffffffff);
      local_70 = puVar4 + 0x10;
      pcStack_68 = "HarvestPlazaHandTool";
      FUN_021be8c0(&local_98,&local_70,iVar8);
      local_98 = (undefined *)CONCAT71(CONCAT61(local_98._2_6_,(char)iVar8),0xff);
      local_70._6_2_ = (ushort)((ulong)local_70 >> 0x30) & 0xff00;
      local_70 = (undefined *)CONCAT26(local_70._6_2_,0xff0000000000);
      if (-1 < DAT_053d1370) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1370,&local_70,&local_98,2,0);
      }
    }
    else {
      puVar12 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar5);
      uVar14 = puVar12[3];
      uVar13 = *puVar12 ^ *puVar12 << 0xb;
      *puVar12 = puVar12[1];
      puVar12[1] = puVar12[2];
      uVar13 = uVar13 >> 8 ^ uVar14 >> 0x13 ^ uVar13 ^ uVar14;
      puVar12[2] = uVar14;
      puVar12[3] = uVar13;
      uVar13 = (uint)((ulong)uVar13 * (ulong)(uVar15 - 1) >> 0x20);
      if (uVar15 <= uVar13) {
        iVar8 = uVar3 + 1;
        goto LAB_02207dd4;
      }
      if (uVar18 != 0) {
        iVar8 = uVar13 + 2;
        uVar13 = uVar18;
        do {
          iVar8 = iVar8 + -1;
          if (iVar8 < 2) {
            uVar13 = uVar13 - 1 & (uVar13 ^ 0xffffffff);
            uVar13 = uVar13 - (uVar13 >> 1 & 0x55555555);
            uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
            uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
            uVar13 = uVar13 + (uVar13 >> 8);
            uVar15 = uVar13 + (uVar13 >> 0x10) & 0x3f;
            goto LAB_02207e80;
          }
          uVar13 = uVar13 - 1 & uVar13;
        } while (uVar13 != 0);
      }
      uVar15 = 0xffffffff;
LAB_02207e80:
      iVar8 = uVar3 + 1;
      local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar15);
LAB_02207efc:
      local_70 = puVar4 + 0x10;
      pcStack_68 = "HarvestPlazaHandTool";
      FUN_021be8c0(&local_98,&local_70,iVar8);
      local_98._0_2_ = CONCAT11((char)iVar8,(char)uVar15);
      local_70._6_2_ = (ushort)((ulong)local_70 >> 0x30) & 0xff00;
      local_70 = (undefined *)CONCAT26(local_70._6_2_,0xff0000000000);
      if (-1 < DAT_053d1370) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1370,&local_70,&local_98,2,0);
      }
      if (uVar15 < 10) {
        uVar18 = uVar18 & (1 << (ulong)(uVar15 & 0x1f) ^ 0xffffffffU);
      }
    }
    uVar13 = uVar17 - 1;
    *piVar19 = iVar7 + -1;
    bVar1 = (int)uVar17 < 1;
    uVar17 = uVar13;
    if (uVar13 == 0 || bVar1) {
      return;
    }
  } while( true );
}

