
/* WARNING: Removing unreachable block (ram,0x035aa2ac) */

undefined8 FUN_035aa210(int param_1,int param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  short *psVar13;
  undefined8 local_a0;
  undefined *puStack_98;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  int local_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  int local_60;
  int iStack_5c;
  uint local_54;
  
  puVar5 = PTR_DAT_04bb2010;
  uVar12 = (ulong)&local_78 | 4;
  lVar1 = (long)&local_70 + 4;
  local_78 = 0;
  local_70 = 0;
  local_68 = PTR_DAT_04bb2010 + 0x10;
  local_60 = param_1;
  iStack_5c = param_2;
  uVar8 = FUN_009493f8(param_3[1],&local_68,&local_78,uVar12,&local_70,lVar1);
  if ((uVar8 & 1) == 0) {
LAB_035aa57c:
    uVar10 = 1;
  }
  else {
    uVar8 = FUN_035a9d50(param_1,param_2,param_3);
    lVar9 = DAT_05150358;
    if ((uVar8 & 1) == 0) {
      local_a0 = (undefined *)((ulong)local_a0._4_4_ << 0x20);
      lVar11 = *(long *)(*param_3 + 0xd0);
      if (lVar11 == 0) {
LAB_035aa360:
        psVar13 = &DAT_05586008;
      }
      else {
        lVar2 = lVar11 + 0x130 + (ulong)*(uint *)(lVar11 + 0x198) * 0x30;
        if (1 < *(uint *)(lVar11 + 0x198)) {
          lVar2 = lVar11 + 0x130;
        }
        iVar7 = *(int *)(lVar2 + 0x28);
        if (param_1 < iVar7 || *(int *)(lVar2 + 8) + iVar7 + -1 < param_1) goto LAB_035aa360;
        iVar3 = *(int *)(lVar2 + 0xc);
        iVar4 = *(int *)(lVar2 + 0x2c);
        if (param_2 < iVar4 || iVar3 + iVar4 + -1 < param_2) goto LAB_035aa360;
        uVar6 = (param_2 - iVar4) + (param_1 - iVar7) * iVar3;
        if (*(uint *)(lVar2 + 0x10) <= uVar6) goto LAB_035aa360;
        lVar11 = *(long *)(lVar2 + 0x18);
        psVar13 = (short *)(lVar11 + (long)(int)uVar6 * 8);
        if (*psVar13 == -3) {
          uVar6 = *(uint *)(lVar11 + (long)(int)uVar6 * 8 + 4);
          uVar6 = (param_2 - (iVar4 + (uVar6 >> 0x18))) +
                  (param_1 - (iVar7 + (uVar6 >> 0x10 & 0xff))) * iVar3;
          if (*(uint *)(lVar2 + 0x10) <= uVar6) goto LAB_035aa360;
          psVar13 = (short *)(lVar11 + (long)(int)uVar6 * 8);
        }
      }
      if ((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
          (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
         (((*(long *)(DAT_05150358 + 0x488) != 0 &&
           (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)) &&
          ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
           (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))))) {
        uVar6 = FUN_0277d6c4(psVar13);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          FUN_0124c030(&local_a0,psVar13);
          iVar7 = FUN_0123db50(&puStack_98,CONCAT44(iStack_8c,local_90));
          if (iVar7 == 0x2e) goto LAB_035aa480;
          if (CONCAT44(iStack_8c,local_90) != 0) {
            local_54 = 1;
            lVar9 = FUN_01246470(CONCAT44(iStack_8c,local_90),0x16,0x623dc307,
                                 *(undefined8 *)PTR_DAT_04bbbc98);
            if (lVar9 != 0) {
              uVar6 = local_54 + 7;
              if (-1 < (int)local_54) {
                uVar6 = local_54;
              }
              if ((*(byte *)(lVar9 + (ulong)(uint)((int)uVar6 >> 3)) >> (ulong)(local_54 & 7) & 1)
                  != 0) goto LAB_035aa480;
            }
          }
        }
      }
      if (((((((((uint)local_78 | 2) != 10) && ((local_78._4_4_ | 2) != 10)) &&
             (((uint)local_70 | 2) != 10)) &&
            (((local_70._4_4_ & 0xfffffffd) != 8 &&
             (uVar8 = FUN_00975ac0(&local_78), (uVar8 & 1) == 0)))) &&
           ((uVar8 = FUN_00975ac0(uVar12), (uVar8 & 1) == 0 &&
            ((uVar8 = FUN_00975ac0(&local_70), (uVar8 & 1) == 0 &&
             (uVar8 = FUN_00975ac0(lVar1), (uVar8 & 1) == 0)))))) &&
          (uVar8 = FUN_00975ae0(&local_78), (uVar8 & 1) == 0)) &&
         (((uVar8 = FUN_00975ae0(uVar12), (uVar8 & 1) == 0 &&
           (uVar8 = FUN_00975ae0(&local_70), (uVar8 & 1) == 0)) &&
          (uVar8 = FUN_00975ae0(lVar1), (uVar8 & 1) == 0)))) {
        if ((uint)local_78 == 0x1c) {
          return 0;
        }
        if (local_78._4_4_ == 0x1c) {
          return 0;
        }
        if ((uint)local_70 == 0x1c) {
          return 0;
        }
        if (local_70._4_4_ == 0x1c) {
          return 0;
        }
        puStack_98 = puVar5 + 0x10;
        local_a0 = PTR_DAT_04bbc1a0 + 0x10;
        if (((DAT_04cfae30 != 0) && (*(long *)(DAT_04cfae30 + 0xa8) != 0)) &&
           (local_90 = param_1, iStack_8c = param_2, local_88 = puStack_98, local_80 = param_1,
           iStack_7c = param_2, uVar8 = FUN_009721a0(*(long *)(DAT_04cfae30 + 0xa8),&local_a0,0),
           (uVar8 & 1) != 0)) {
          return 0;
        }
        goto LAB_035aa57c;
      }
    }
LAB_035aa480:
    uVar10 = 0;
  }
  return uVar10;
}

