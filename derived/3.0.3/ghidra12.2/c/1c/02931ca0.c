
/* WARNING: Removing unreachable block (ram,0x02932094) */
/* WARNING: Removing unreachable block (ram,0x02931df0) */
/* WARNING: Removing unreachable block (ram,0x02931fd8) */
/* WARNING: Removing unreachable block (ram,0x029320fc) */

uint FUN_02931ca0(long param_1,long *param_2,uint param_3,undefined8 param_4,ulong param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  short *psVar11;
  long lVar12;
  int local_8c;
  short *local_88;
  long lStack_80;
  short *local_78;
  long local_70;
  uint local_68;
  byte local_64;
  undefined8 local_60;
  undefined1 local_58;
  
  puVar3 = PTR_DAT_04bb2720;
  if (*DAT_055cdb40 != '\0') {
    uVar5 = 0;
    goto LAB_02932058;
  }
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if ((lVar10 == 0) || (*(long *)(lVar10 + 0x330) == 0)) {
LAB_02931d70:
    lVar12 = 1;
  }
  else {
    puVar6 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar10 + 0x338));
    iVar4 = FUN_006bd550(*puVar6,0);
    if ((iVar4 != 0x758f7eaf) ||
       (((*(long *)puVar3 == 0 || (lVar10 = *(long *)(*(long *)puVar3 + 0x330), lVar10 == 0)) ||
        (lVar10 = *(long *)(lVar10 + 0x238), lVar10 == 0)))) goto LAB_02931d70;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar12 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar10;
  }
  lVar10 = FUN_0290c1e0(param_2);
  if (lVar10 == 0) {
LAB_02932034:
    uVar5 = 0;
  }
  else {
    psVar11 = *(short **)(lVar10 + 8);
    local_70 = 0;
    local_78 = psVar11;
    if (psVar11 != (short *)0x0) {
      uVar8 = FUN_03eaa5e0(psVar11);
      if ((uVar8 & 1) == 0) {
        psVar11 = (short *)0x0;
        local_78 = (short *)0x0;
        local_70 = 0;
      }
      else {
        uVar2 = *(uint *)(psVar11 + 6);
        uVar5 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if (*psVar11 != 0x5942) {
          uVar5 = uVar2;
        }
        if (uVar5 != 0) {
          local_70 = (long)psVar11 + (ulong)uVar5;
        }
      }
    }
    local_60._0_4_ = 8;
    (**(code **)(DAT_055cc298 + 0x18))(&DAT_055cc298);
    local_60 = (uint *)((ulong)local_60._5_3_ << 0x28);
    uVar8 = FUN_03ea9450(&local_78,&local_60,DAT_055cc2a0);
    if ((uVar8 & 1) == 0) goto LAB_02932034;
    if (local_60._4_1_ - 0xc0 < 2) {
      if (psVar11 != (short *)0x0) {
        puVar1 = (uint *)((long)psVar11 + ((ulong)local_60 & 0xffffffff));
        if ((*puVar1 & 0xfe) == 0xc0) {
          uVar5 = *puVar1 >> 8;
          if (*psVar11 == 0x5942) {
            uVar5 = uVar5 & 0xff00 | *puVar1 >> 0x18 | (uVar5 & 0xff) << 0x10;
          }
        }
        else {
          uVar5 = 0;
        }
        if (param_3 <= uVar5) {
          local_68 = 0;
          local_64 = 0;
          if ((char)*puVar1 == -0x3f) {
            local_58 = *psVar11 == 0x5942;
            local_60 = puVar1;
            uVar8 = FUN_03eaa938(&local_60,&local_68,param_3);
          }
          else {
            if ((char)*puVar1 != -0x40) goto LAB_02932034;
            local_58 = *psVar11 == 0x5942;
            local_60 = puVar1;
            uVar8 = FUN_03eaa544(&local_60,&local_68,param_3);
          }
          if ((uVar8 & 1) != 0) {
            if (local_64 - 0xc0 < 2) {
              lStack_80 = (long)psVar11 + (ulong)local_68;
            }
            else {
              if (local_64 != 0xff) goto LAB_02932034;
              lStack_80 = 0;
            }
            local_88 = psVar11;
            if ((param_5 & 1) == 0) {
              *(uint *)(param_1 + 0xa0) = param_3;
              (**(code **)(*param_2 + 0x18))(param_2);
              iVar4 = FUN_006bd550(param_2[1],0);
              puVar6 = DAT_055c1b60;
              if (DAT_055c1b60 == &DAT_055c1b58) {
                puVar9 = &DAT_055c1098;
              }
              else {
                do {
                  puVar9 = puVar6 + -8;
                  if (*(int *)(puVar6 + -1) == iVar4) goto LAB_02932080;
                  puVar9 = puVar6 + 1;
                  puVar6 = (undefined8 *)*puVar9;
                } while ((undefined8 *)*puVar9 != &DAT_055c1b58);
                puVar9 = &DAT_055c1098;
              }
LAB_02932080:
              iVar4 = 0;
            }
            else {
              local_60._4_4_ = (undefined4)((ulong)local_60 >> 0x20);
              local_60 = (uint *)CONCAT44(local_60._4_4_,0x1d);
              (**(code **)(DAT_055cc3e8 + 0x18))(&DAT_055cc3e8);
              uVar8 = FUN_03ea9a4c(&local_88,&local_68,DAT_055cc3f0);
              if ((uVar8 & 1) == 0) goto LAB_02932034;
              FUN_03eaaa80(&local_88);
              local_60 = (uint *)CONCAT44(local_60._4_4_,0x24);
              (**(code **)(DAT_055cc458 + 0x18))(&DAT_055cc458);
              uVar8 = FUN_03ea9a4c(&local_88,&local_8c,DAT_055cc460);
              if ((uVar8 & 1) == 0) {
                local_8c = 0;
LAB_029320d4:
                local_60._0_4_ = 0x1f;
                (**(code **)(DAT_055cc408 + 0x18))(&DAT_055cc408);
                local_60 = (uint *)((ulong)local_60._5_3_ << 0x28);
                uVar8 = FUN_03ea9450(&local_88,&local_60,DAT_055cc410);
                if (((uVar8 & 1) == 0) || (local_60._4_1_ != -0x2f)) {
                  puVar6 = DAT_055c1b60;
                  if (DAT_055c1b60 == &DAT_055c1b58) {
                    puVar9 = &DAT_055c1098;
                  }
                  else {
                    do {
                      puVar9 = puVar6 + -8;
                      if (*(uint *)(puVar6 + -1) == local_68) goto LAB_029321fc;
                      puVar9 = puVar6 + 1;
                      puVar6 = (undefined8 *)*puVar9;
                    } while ((undefined8 *)*puVar9 != &DAT_055c1b58);
                    puVar9 = &DAT_055c1098;
                  }
LAB_029321fc:
                  uVar5 = FUN_02930ce0(param_1,puVar9,param_4);
                  goto LAB_02932038;
                }
                iVar4 = 0;
                param_3 = (uint)local_60;
              }
              else {
                if (local_8c == 0) goto LAB_029320d4;
                param_3 = 0;
                iVar4 = local_8c;
              }
              *(uint *)(param_1 + 0xa0) = param_3;
              puVar6 = DAT_055c1b60;
              if (DAT_055c1b60 == &DAT_055c1b58) {
                puVar9 = &DAT_055c1098;
              }
              else {
                do {
                  puVar9 = puVar6 + -8;
                  if (*(uint *)(puVar6 + -1) == local_68) goto LAB_029321e8;
                  puVar9 = puVar6 + 1;
                  puVar6 = (undefined8 *)*puVar9;
                } while ((undefined8 *)*puVar9 != &DAT_055c1b58);
                puVar9 = &DAT_055c1098;
              }
            }
LAB_029321e8:
            uVar5 = FUN_02931110(param_1,puVar9,param_3,param_4,iVar4);
            goto LAB_02932038;
          }
        }
      }
      goto LAB_02932034;
    }
    if (local_60._4_1_ != 0xff) goto LAB_02932034;
    uVar5 = 0;
    if ((param_3 == 0) && (psVar11 != (short *)0x0)) {
      local_88 = (short *)0x0;
      lStack_80 = 0;
      goto LAB_02932034;
    }
  }
LAB_02932038:
  if (lVar12 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar12;
  }
LAB_02932058:
  return uVar5 & 1;
}

