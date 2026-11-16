
uint FUN_027fce1c(long param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  short sVar3;
  uint uVar4;
  short sVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  short *psVar10;
  ulong uVar11;
  short *psVar12;
  long lVar13;
  long lVar14;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined *local_80;
  short local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  long local_70;
  short local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  
  puVar6 = PTR_DAT_04bb43c0;
  uVar7 = *(uint *)(param_1 + 0x158);
  uVar11 = (ulong)param_2;
  if (0x13 < uVar7) {
    uVar7 = 0x14;
  }
  uVar4 = param_2 - uVar7;
  if (param_2 < uVar7) {
    psVar12 = (short *)(param_1 + uVar11 * 8 + 0xb8);
    sVar3 = *psVar12;
LAB_027fce94:
    psVar10 = psVar12;
    if (sVar3 != -2) {
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(psVar12);
      if (*(long *)puVar6 == 0) goto LAB_027fcef4;
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      psVar10 = &DAT_05586008;
      if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
         (psVar10 = &DAT_05586008, *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)
         ) {
        psVar10 = psVar12;
      }
    }
  }
  else {
    if (-1 < (int)uVar4) {
      uVar7 = *(uint *)(param_1 + 0xa0);
      if (0x13 < uVar7) {
        uVar7 = 0x14;
      }
      if (uVar4 < uVar7) {
        psVar12 = (short *)(param_1 + (ulong)uVar4 * 8);
        sVar3 = *psVar12;
        goto LAB_027fce94;
      }
    }
LAB_027fcef4:
    psVar10 = &DAT_05586008;
  }
  sVar3 = *psVar10;
  sVar5 = psVar10[1];
  uVar2 = *(undefined1 *)((long)psVar10 + 3);
  uVar1 = *(undefined4 *)(psVar10 + 2);
  lVar14 = *(long *)puVar6;
  local_68 = sVar3;
  local_66 = (char)sVar5;
  local_65 = uVar2;
  local_64 = uVar1;
  uVar7 = FUN_0277d6c4(&local_68);
  lVar13 = *(long *)puVar6;
  if (lVar13 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_80 = PTR_DAT_04bc0510 + 0x10;
      local_70 = 0;
      local_78 = sVar3;
      local_76 = (char)sVar5;
      local_75 = uVar2;
      local_74 = uVar1;
      uVar7 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar6 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_68);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if (uVar7 < *(uint *)(lVar13 + 0x1d8)) {
            lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8);
            if (lVar13 != 0) {
              local_70 = lVar13;
            }
          }
        }
      }
      uVar9 = FUN_01af0020(&local_80);
      if ((uVar9 & 1) != 0) {
        iVar8 = FUN_01af02d0(&local_80);
        if (iVar8 < param_3) goto LAB_027fd020;
        if (iVar8 != param_3) {
          local_88 = 0xfffe;
          FUN_0277d4ac(&local_88);
          FUN_01af3d60(local_90,&local_68,param_3);
          uVar7 = FUN_027fa2dc(param_1,uVar11,&local_88,0);
          goto LAB_027fd024;
        }
      }
      FUN_027fa2dc(param_1,uVar11,PTR_DAT_04bb37e0,0);
      uVar7 = 1;
      goto LAB_027fd024;
    }
  }
LAB_027fd020:
  uVar7 = 0;
LAB_027fd024:
  return uVar7 & 1;
}

