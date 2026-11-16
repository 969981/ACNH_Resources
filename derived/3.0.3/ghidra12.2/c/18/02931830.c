
/* WARNING: Removing unreachable block (ram,0x02931a08) */

uint FUN_02931830(undefined8 param_1,long *param_2,short **param_3)

{
  short **ppsVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  short *psVar13;
  long lVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  bool bVar18;
  short *local_98;
  long lStack_90;
  short *local_88;
  long local_80;
  uint local_78;
  byte local_74;
  undefined8 local_70;
  undefined1 local_68;
  
  puVar3 = PTR_DAT_04bb2720;
  puVar2 = PTR_DAT_04bb2640;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
LAB_029318e8:
    lVar14 = 1;
LAB_0293197c:
    puVar6 = &DAT_055c04a0;
  }
  else {
    if (*(long *)(lVar10 + 0x330) == 0) {
LAB_029318f0:
      lVar14 = 1;
    }
    else {
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar4 = FUN_006bd550(*puVar6,0);
      lVar10 = *(long *)puVar3;
      if (iVar4 == 0x758f7eaf) {
        if (lVar10 == 0) goto LAB_029318e8;
        if ((*(long *)(lVar10 + 0x330) == 0) ||
           (lVar17 = *(long *)(*(long *)(lVar10 + 0x330) + 0x238), lVar17 == 0)) goto LAB_029318f0;
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        lVar14 = *(long *)(lVar10 + 0xa8);
        *(long *)(lVar10 + 0xa8) = lVar17;
        lVar10 = *(long *)puVar3;
      }
      else {
        lVar14 = 1;
      }
      if (lVar10 == 0) goto LAB_0293197c;
    }
    if (*(long *)(lVar10 + 0x330) == 0) goto LAB_0293197c;
    plVar7 = *(long **)puVar2;
    puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x18))(plVar7,*(undefined4 *)(lVar10 + 0x338));
    iVar4 = FUN_006bd550(*puVar6,0);
    if ((iVar4 != 0x758f7eaf) || (lVar10 = *(long *)puVar3, lVar10 == 0)) goto LAB_0293197c;
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      plVar7 = *(long **)puVar2;
      puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x18))(plVar7,*(undefined4 *)(lVar10 + 0x338));
      iVar4 = FUN_006bd550(*puVar6,0);
      puVar6 = &DAT_055cdaf8;
      if (iVar4 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  lVar10 = FUN_0290c1e0(puVar6);
  if (lVar10 != 0) {
    psVar13 = *(short **)(lVar10 + 8);
    local_80 = 0;
    local_88 = psVar13;
    if (psVar13 != (short *)0x0) {
      uVar8 = FUN_03eaa5e0(psVar13);
      if ((uVar8 & 1) == 0) {
        local_88 = (short *)0x0;
        local_80 = 0;
      }
      else {
        uVar5 = *(uint *)(psVar13 + 6);
        uVar16 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
        if (*psVar13 != 0x5942) {
          uVar16 = uVar5;
        }
        if (uVar16 != 0) {
          local_80 = (long)psVar13 + (ulong)uVar16;
        }
      }
    }
    ppsVar1 = &local_88;
    if (param_3 != (short **)0x0) {
      ppsVar1 = param_3;
    }
    local_70._0_4_ = 8;
    (**(code **)(DAT_055cc298 + 0x18))(&DAT_055cc298);
    local_70 = (uint *)((ulong)local_70._5_3_ << 0x28);
    uVar8 = FUN_03ea9450(ppsVar1,&local_70,DAT_055cc2a0);
    if ((uVar8 & 1) != 0) {
      if (local_70._4_1_ - 0xc0 < 2) {
        psVar13 = *ppsVar1;
        if (psVar13 == (short *)0x0) goto LAB_02931c58;
        puVar15 = (uint *)((long)psVar13 + ((ulong)local_70 & 0xffffffff));
        if ((*puVar15 & 0xfe) == 0xc0) {
          uVar16 = *puVar15 >> 8;
          if (*psVar13 == 0x5942) {
            bVar18 = false;
            uVar16 = uVar16 & 0xff00 | *puVar15 >> 0x18 | (uVar16 & 0xff) << 0x10;
          }
          else {
            bVar18 = false;
          }
        }
        else {
          bVar18 = false;
          uVar16 = 0;
        }
      }
      else {
        if ((local_70._4_1_ != 0xff) || (psVar13 = *ppsVar1, psVar13 == (short *)0x0))
        goto LAB_02931c58;
        puVar15 = (uint *)0x0;
        uVar16 = 0;
        bVar18 = true;
      }
      local_98 = (short *)0x0;
      lStack_90 = 0;
      (**(code **)(*param_2 + 0x18))(param_2);
      uVar5 = FUN_006bd550(param_2[1],0);
      if (uVar16 != 0) {
        uVar12 = 0;
        do {
          local_78 = 0;
          local_74 = 0;
          if (bVar18) {
LAB_02931b10:
            local_98 = (short *)0x0;
            lStack_90 = 0;
          }
          else {
            if ((char)*puVar15 != -0x3f) {
              if ((char)*puVar15 == -0x40) {
                local_68 = *psVar13 == 0x5942;
                local_70 = puVar15;
                uVar8 = FUN_03eaa544(&local_70,&local_78,uVar12);
                if ((uVar8 & 1) != 0) goto LAB_02931b94;
              }
              goto LAB_02931b10;
            }
            local_68 = *psVar13 == 0x5942;
            local_70 = puVar15;
            uVar8 = FUN_03eaa938(&local_70,&local_78,uVar12);
            if ((uVar8 & 1) == 0) goto LAB_02931b10;
LAB_02931b94:
            if (local_74 - 0xc0 < 2) {
              lStack_90 = (long)psVar13 + (ulong)local_78;
            }
            else {
              if (local_74 != 0xff) goto LAB_02931b10;
              lStack_90 = 0;
            }
            local_70._0_4_ = 0x1e;
            local_98 = psVar13;
            (**(code **)(DAT_055cc3f8 + 0x18))(&DAT_055cc3f8);
            local_70 = (uint *)((ulong)local_70._5_3_ << 0x28);
            uVar8 = FUN_03ea9450(&local_98,&local_70,DAT_055cc400);
            if (((uVar8 & 1) != 0) && (local_70._4_1_ != -1)) {
              if (local_70._4_1_ == -0x2d) {
                uVar11 = 1;
                uVar9 = (uint)local_70;
              }
              else {
                if (local_70._4_1_ != -0x2f) goto LAB_02931b14;
                uVar11 = ~(uint)local_70 >> 0x1f;
                uVar9 = (uint)local_70 & ((int)(uint)local_70 >> 0x1f ^ 0xffffffffU);
              }
              if ((uVar11 != 0) && (uVar5 == uVar9)) goto LAB_02931c5c;
            }
          }
LAB_02931b14:
          uVar12 = uVar12 + 1;
        } while (uVar16 != uVar12);
      }
    }
  }
LAB_02931c58:
  uVar12 = 0xffffffff;
LAB_02931c5c:
  if (lVar14 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar14;
  }
  return uVar12;
}

