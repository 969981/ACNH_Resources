
/* WARNING: Type propagation algorithm not settling */

void FUN_004a0da0(ulong param_1,undefined8 *param_2,byte *param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  short sVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  int iVar16;
  ulong uVar17;
  short *psVar18;
  long lVar19;
  int local_364;
  undefined8 *local_360;
  undefined8 *puStack_358;
  undefined1 local_350 [16];
  ulong local_340;
  long local_338;
  int local_330;
  ulong local_328;
  ulong local_2a8;
  byte **ppbStack_2a0;
  undefined8 **local_298;
  ulong local_238;
  undefined8 *local_1a0;
  ulong local_190;
  byte *local_78;
  undefined8 *local_70 [2];
  
  local_78 = param_3;
  local_70[0] = param_2;
  if (*(long *)(param_3 + 8) != 0) {
    uVar5 = FUN_004a07b0(param_1,*(long *)(param_3 + 8),param_4);
    param_2[1] = uVar5;
  }
  uVar4 = (uint)*param_2;
  if ((uVar4 >> 2 & 1) == 0) goto joined_r0x004a0f2c;
  if (((*param_3 & 1) == 0) || (puVar15 = (ulong *)FUN_00426db0(param_3,1), puVar15 == (ulong *)0x0)
     ) {
switchD_004a0e6c_caseD_0:
    do {
    } while( true );
  }
  uVar17 = *puVar15;
  switch((uint)uVar17 & 0x1f) {
  case 0:
  case 1:
    goto switchD_004a0e6c_caseD_0;
  case 2:
    if (*(char *)(param_1 + 6) == '\0') goto switchD_004a0e6c_caseD_4;
    puVar14 = (undefined8 *)FUN_00426d40(param_2,1);
    *puVar14 = 0x2002;
    puVar14 = &DAT_04c6fbb8;
    break;
  case 3:
    if (*(char *)(param_1 + 6) != '\0') {
      puVar15 = (ulong *)FUN_00426d40(param_2,1);
      puVar14 = (undefined8 *)0x0;
      *puVar15 = uVar17 & 0x80 | 3;
      break;
    }
  default:
    puVar14 = (undefined8 *)0x0;
    break;
  case 4:
  case 5:
switchD_004a0e6c_caseD_4:
    FUN_0044f880();
    puVar14 = (undefined8 *)FUN_00428370();
  }
  puVar12 = (undefined8 *)FUN_00426d40(local_70[0],4);
  *puVar12 = puVar14;
joined_r0x004a0f2c:
  if ((uVar4 >> 0xf & 1) != 0) {
    lVar6 = FUN_004270a0(local_78);
    uVar17 = (ulong)*(ushort *)(lVar6 + 8);
    if (*(ushort *)(lVar6 + 8) != 0) {
      if ((*(char *)((long)local_70[0] + 1) < '\0') &&
         (plVar7 = (long *)FUN_00426db0(local_70[0],0x8000), plVar7 != (long *)0x0)) {
        puVar14 = (undefined8 *)*plVar7;
      }
      else {
        puVar14 = (undefined8 *)0x0;
      }
      puVar12 = (undefined8 *)(lVar6 + 0x18);
      do {
        puVar14 = puVar14 + 2;
        if (*(char *)*puVar12 == 't') {
          uVar5 = FUN_004a07b0(param_1,puVar12[-1],param_4);
          *puVar14 = uVar5;
        }
        puVar12 = puVar12 + 2;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if ((uVar4 >> 0xe & 1) != 0) {
    plVar7 = (long *)FUN_00426db0(local_78,0x4000);
    puVar15 = (ulong *)*plVar7;
    uVar17 = *puVar15;
    iVar16 = (int)uVar17;
    if ((iVar16 != 0) && (plVar7 = (long *)FUN_00426db0(local_70[0],0x4000), 0 < iVar16)) {
      uVar17 = uVar17 & 0xffffffff;
      puVar15 = puVar15 + 1;
      puVar14 = (undefined8 *)(*plVar7 + 8);
      do {
        uVar5 = FUN_004a07b0(param_1,*puVar15,param_4);
        uVar17 = uVar17 - 1;
        *puVar14 = uVar5;
        puVar15 = puVar15 + 2;
        puVar14 = puVar14 + 2;
      } while (uVar17 != 0);
    }
  }
  if ((uVar4 >> 0x17 & 1) == 0) {
    uVar4 = (uint)*local_70[0];
  }
  else {
    puVar14 = (undefined8 *)FUN_00426e00(local_78,0x800000);
    if (puVar14 == (undefined8 *)0x0) {
      psVar18 = (short *)0x0;
    }
    else {
      psVar18 = (short *)*puVar14;
    }
    lVar6 = param_1 + 0x58;
    lVar9 = FUN_00428650(0,(long)*psVar18,(long)psVar18[1],lVar6);
    sVar13 = psVar18[2];
    if (sVar13 < 1) {
      local_364 = 0;
      cVar2 = *(char *)(param_1 + 4);
    }
    else {
      lVar19 = 0;
      local_364 = 0;
      do {
        local_338 = *(long *)(psVar18 + lVar19 * 4 + 4);
        lVar10 = FUN_00427b40(&local_338);
        if (lVar10 != 0) {
          uVar5 = FUN_004a07b0(param_1,*(undefined8 *)(local_338 + 8),param_4);
          uVar11 = FUN_00427b40(&local_338);
          uVar11 = FUN_0043a360(uVar11,lVar6);
          FUN_00451ea0(&local_2a8);
          FUN_00452230(&local_2a8,param_1);
          FUN_00452260(&local_2a8,uVar5);
          if ((((*(char *)(param_1 + 4) == '\0') && ((*(byte *)(local_338 + 2) >> 4 & 1) != 0)) &&
              (puVar15 = (ulong *)FUN_00426db0(local_338,0x100000), puVar15 != (ulong *)0x0)) &&
             (*puVar15 != 0)) {
            local_190 = *puVar15 & 0xf0000000;
            local_238 = local_238 | 0x100000;
          }
          uVar4 = FUN_004290b0(&local_338);
          if (*(char *)(param_1 + 4) != '\0') {
            uVar17 = FUN_004290b0(&local_338);
            if ((uVar17 & 1) == 0) {
              local_364 = local_364 + 1;
              uVar4 = uVar4 & 0xffffffcf | 0x20;
            }
            else {
              uVar4 = uVar4 & 0xffffffcf | 0x10;
            }
          }
          FUN_00453b70(&local_2a8,uVar11,0,uVar4);
          local_238 = local_238 | 0x40000;
          local_1a0 = local_70[0];
          uVar5 = FUN_004535c0(&local_2a8,lVar6);
          *(undefined8 *)(lVar9 + 8 + lVar19 * 8) = uVar5;
          FUN_00451fa0(&local_2a8);
        }
        sVar13 = psVar18[2];
        lVar19 = lVar19 + 1;
      } while (lVar19 < sVar13);
      cVar2 = *(char *)(param_1 + 4);
    }
    if (cVar2 != '\0') {
      sVar3 = *(short *)(lVar9 + 4);
      if (0 < (long)sVar3) {
        uVar17 = 0;
        lVar6 = lVar9;
        do {
          uVar5 = *(undefined8 *)(lVar9 + uVar17 * 8 + 8);
          if (uVar17 == 0) {
            iVar16 = 0;
          }
          else {
            lVar19 = 0;
            do {
              FUN_004294d0(&local_2a8,uVar5);
              if ((local_2a8 < 2) ||
                 (FUN_00429540(&local_2a8,*(undefined8 *)(lVar6 + lVar19 * 8)), local_2a8 < 2))
              break;
              puVar14 = (undefined8 *)(lVar6 + lVar19 * 8);
              lVar19 = lVar19 + -1;
              puVar14[1] = *puVar14;
            } while (0 < (long)(uVar17 + lVar19));
            iVar16 = (int)uVar17 + (int)lVar19;
          }
          uVar17 = uVar17 + 1;
          lVar6 = lVar6 + 8;
          *(undefined8 *)(lVar9 + (long)iVar16 * 8 + 8) = uVar5;
        } while (uVar17 != ((long)sVar3 & 0xffffffffU));
        sVar13 = psVar18[2];
      }
      FUN_004286f0(lVar9,local_364,sVar13 - local_364);
    }
    plVar7 = (long *)FUN_00426d40(local_70[0],0x800000);
    *plVar7 = lVar9;
    uVar4 = (uint)*local_70[0];
  }
  if ((uVar4 >> 1 & 1) == 0) {
    puVar14 = local_70[0];
  }
  else {
    puVar12 = (undefined8 *)FUN_00426db0(local_70[0],2);
    puVar14 = local_70[0];
    if (puVar12 == (undefined8 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *puVar12;
    }
    uVar5 = FUN_004a07b0(param_1,uVar5,param_4);
    puVar14 = (undefined8 *)FUN_00426d40(puVar14,2);
    *puVar14 = uVar5;
    uVar4 = (uint)*local_70[0];
    puVar14 = local_70[0];
  }
  local_70[0] = puVar14;
  if (((uVar4 >> 0x14 & 1) == 0) || (lVar6 = FUN_00426db0(puVar14,0x100000), lVar6 == 0)) {
    bVar1 = *(byte *)((long)puVar14 + 3);
  }
  else {
    FUN_0044f670(puVar14);
    ppbStack_2a0 = &local_78;
    local_298 = local_70;
    local_2a8 = param_1;
    FUN_004a15e0(&local_2a8);
    bVar1 = *(byte *)((long)local_70[0] + 3);
    puVar14 = local_70[0];
  }
  if (((bVar1 >> 1 & 1) != 0) && (lVar6 = FUN_00426db0(puVar14,0x2000000), lVar6 != 0)) {
    FUN_004225b0(&local_2a8);
    if (((local_78[3] >> 1 & 1) != 0) &&
       ((plVar7 = (long *)FUN_00426db0(local_78,0x2000000), plVar7 != (long *)0x0 && (*plVar7 != 0))
       )) {
      FUN_004225f0(&local_2a8,*plVar7,0xffffffff);
    }
    if (*(char *)(param_1 + 7) != '\0') {
      FUN_0044ed80(&local_338,local_78,PTR_DAT_04bd7430);
      lVar6 = local_338;
      if ((local_328 & 1) != 0) {
        FUN_0043dd50(local_328 & 0xfffffffffffffffe);
      }
      if (lVar6 != 0) {
        FUN_004225b0(&local_338);
        local_340 = 0;
        local_350 = FUN_00446e00(lVar6,&DAT_04c15320);
        if (local_350._8_8_ == 0) {
          uVar8 = 0;
          uVar17 = local_340;
        }
        else {
          uVar8 = FUN_00428370(local_350._8_8_);
          uVar17 = local_340;
          if ((uVar8 & 1) != 0) {
            FUN_0043dd30(uVar8 & 0xfffffffffffffffe);
            uVar17 = local_340;
          }
        }
        local_340 = uVar8;
        if ((uVar17 & 1) != 0) {
          FUN_0043dd50(uVar17 & 0xfffffffffffffffe);
        }
        local_360 = &DAT_0407ebb1;
        puStack_358 = &DAT_0407ebb1;
        FUN_0044d910(local_350,&local_338,&local_360);
        if ((local_340 & 1) != 0) {
          FUN_0043dd50(local_340 & 0xfffffffffffffffe);
        }
        FUN_00423880(&local_2a8,local_338,local_330 + -1);
        FUN_00422550(&local_338);
      }
    }
    puVar14 = local_70[0];
    uVar5 = FUN_0043a360(local_2a8,param_1 + 0x58);
    puVar14 = (undefined8 *)FUN_00426d40(puVar14,0x2000000);
    *puVar14 = uVar5;
    FUN_00422550(&local_2a8);
  }
  return;
}

