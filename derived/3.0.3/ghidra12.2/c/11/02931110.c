
/* WARNING: Removing unreachable block (ram,0x0293137c) */

undefined8 FUN_02931110(long param_1,undefined8 param_2,uint param_3,byte *param_4,int param_5)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined *puVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  undefined8 uVar12;
  short *psVar13;
  ulong uVar14;
  long lVar15;
  undefined4 uVar16;
  int local_94;
  short *local_90;
  long lStack_88;
  short *local_80;
  undefined8 local_78;
  undefined8 local_70;
  short **local_68;
  undefined4 *local_60;
  undefined4 local_38;
  byte local_34;
  
  puVar3 = PTR_DAT_04bb2720;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x330) == 0)) {
LAB_029311cc:
    lVar15 = 1;
    if ((int)param_3 < 0) goto LAB_02931224;
LAB_029311d4:
    if (param_5 != 0) goto LAB_02931224;
    lVar9 = FUN_0290c1e0(param_2);
    if (lVar9 == 0) goto LAB_02931578;
    psVar13 = *(short **)(lVar9 + 8);
    local_78 = 0;
    local_80 = psVar13;
    if (psVar13 != (short *)0x0) {
      uVar14 = FUN_03eaa5e0(psVar13);
      if ((uVar14 & 1) == 0) {
        psVar13 = (short *)0x0;
        local_80 = (short *)0x0;
        local_78 = 0;
      }
      else {
        uVar2 = *(uint *)(psVar13 + 6);
        uVar11 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
        if (*psVar13 != 0x5942) {
          uVar11 = uVar2;
        }
        if (uVar11 != 0) {
          local_78 = (long)psVar13 + (ulong)uVar11;
        }
      }
    }
    local_70._0_4_ = 8;
    (**(code **)(DAT_055cc298 + 0x18))(&DAT_055cc298);
    local_70 = (undefined **)((ulong)local_70._5_3_ << 0x28);
    uVar14 = FUN_03ea9450(&local_80,&local_70,DAT_055cc2a0);
    if ((uVar14 & 1) == 0) goto LAB_02931578;
    if (1 < local_70._4_1_ - 0xc0) {
      if (((local_70._4_1_ == 0xff) && (param_3 == 0)) && (psVar13 != (short *)0x0)) {
        local_90 = (short *)0x0;
        lStack_88 = 0;
      }
      goto LAB_02931578;
    }
    if (psVar13 == (short *)0x0) goto LAB_02931578;
    ppuVar1 = (undefined **)((long)psVar13 + ((ulong)local_70 & 0xffffffff));
    if (((ulong)*ppuVar1 & 0xfe) == 0xc0) {
      uVar11 = *(uint *)ppuVar1 >> 8;
      if (*psVar13 == 0x5942) {
        uVar11 = uVar11 & 0xff00 | *(uint *)ppuVar1 >> 0x18 | (uVar11 & 0xff) << 0x10;
      }
    }
    else {
      uVar11 = 0;
    }
    if (uVar11 < param_3) goto LAB_02931578;
    local_38 = 0;
    local_34 = 0;
    if (*(char *)ppuVar1 != -0x3f) {
      if (*(char *)ppuVar1 == -0x40) {
        local_68 = (short **)CONCAT71(local_68._1_7_,*psVar13 == 0x5942);
        local_70 = ppuVar1;
        uVar14 = FUN_03eaa544(&local_70,&local_38,param_3);
        if ((uVar14 & 1) != 0) goto LAB_029314a4;
      }
      goto LAB_02931578;
    }
    local_68 = (short **)CONCAT71(local_68._1_7_,*psVar13 == 0x5942);
    local_70 = ppuVar1;
    uVar14 = FUN_03eaa938(&local_70,&local_38,param_3);
    if ((uVar14 & 1) == 0) goto LAB_02931578;
LAB_029314a4:
    if (local_34 - 0xc0 < 2) {
      lStack_88 = (long)psVar13 + (ulong)local_38;
    }
    else {
      if (local_34 != 0xff) goto LAB_02931578;
      lStack_88 = 0;
    }
    local_38 = 0;
    local_90 = psVar13;
    uVar14 = FUN_029159f8(&local_70,&local_38,&local_94,&local_90,0);
    if ((uVar14 & 1) == 0) goto LAB_02931578;
    if (((*PTR_DAT_04bb3998 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c9acf0), iVar5 != 0))
    {
      FUN_00773950(&DAT_04c9ace0);
      __cxa_guard_release(&DAT_04c9acf0);
    }
    if (0 < (int)DAT_04c9ace0) {
      uVar14 = 0;
      do {
        if (*(int *)(DAT_04c9ace8 + uVar14 * 4) == local_94) goto LAB_0293153c;
        uVar14 = uVar14 + 1;
      } while (DAT_04c9ace0 != uVar14);
    }
    uVar14 = 0;
LAB_0293153c:
    if ((*DAT_055cdb40 != '\0') || (uVar8 = FUN_02930ce0(param_1,param_2,param_4), (uVar8 & 1) == 0)
       ) goto LAB_02931578;
    *(undefined ***)(param_1 + 0xa4) = local_70;
    *(uint *)(param_1 + 0xb0) = local_38;
    *(int *)(param_1 + 0xb4) = (int)uVar14;
    uVar16 = local_68._0_4_;
  }
  else {
    puVar6 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
    iVar5 = FUN_006bd550(*puVar6,0);
    if ((iVar5 != 0x758f7eaf) ||
       (((*(long *)puVar3 == 0 || (lVar9 = *(long *)(*(long *)puVar3 + 0x330), lVar9 == 0)) ||
        (lVar9 = *(long *)(lVar9 + 0x238), lVar9 == 0)))) goto LAB_029311cc;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar15 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar9;
    if (-1 < (int)param_3) goto LAB_029311d4;
LAB_02931224:
    local_78 = local_78 & 0xffffffff;
    if (((DAT_04c9acf0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c9acf0), iVar5 != 0)) {
      FUN_00773950(&DAT_04c9ace0);
      __cxa_guard_release(&DAT_04c9acf0);
    }
    if (0 < (int)DAT_04c9ace0) {
      uVar14 = 0;
      do {
        if (*(int *)(DAT_04c9ace8 + uVar14 * 4) == 0x3c150efd) goto LAB_0293127c;
        uVar14 = uVar14 + 1;
      } while (DAT_04c9ace0 != uVar14);
    }
    uVar14 = 0;
LAB_0293127c:
    local_38 = (uint)local_38._2_2_ << 0x10;
    iVar5 = DAT_055cdb30;
    if (param_5 != 0) {
      iVar5 = param_5;
    }
    local_90 = (short *)CONCAT44(local_90._4_4_,iVar5);
    local_68 = &local_90;
    local_70 = &PTR_LAB_04aa4c40;
    local_60 = &local_38;
    FUN_02acd4a0(&local_70);
    uVar4 = (undefined2)local_38;
    uVar8 = FUN_02b62ab0(&local_80,(undefined2)local_38);
    if ((((uVar8 & 1) == 0) ||
        (*(undefined2 *)(*(long *)PTR_DAT_04bb5008 + 0x25ab0) = uVar4, *DAT_055cdb40 != '\0')) ||
       (uVar8 = FUN_02930ce0(param_1,param_2,param_4), (uVar8 & 1) == 0)) {
LAB_02931578:
      uVar12 = 0;
      goto joined_r0x02931344;
    }
    *(short **)(param_1 + 0xa4) = local_80;
    *(undefined4 *)(param_1 + 0xb0) = local_78._4_4_;
    *(int *)(param_1 + 0xb4) = (int)uVar14;
    uVar16 = (undefined4)local_78;
  }
  *(undefined4 *)(param_1 + 0xac) = uVar16;
  bVar10 = *param_4;
  *(undefined2 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  *(byte *)(param_1 + 0xb8) = bVar10;
  uVar12 = 1;
joined_r0x02931344:
  if (lVar15 != 1) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    *(long *)(lVar9 + 0xa8) = lVar15;
  }
  return uVar12;
}

