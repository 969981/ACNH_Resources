
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_02613470(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined2 *puVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulong local_a8;
  undefined8 local_a0;
  int local_88;
  undefined *local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  lVar13 = DAT_055588d0;
  if (DAT_055588d0 != 0) {
    uVar9 = FUN_02612f30(param_1,param_2,param_3);
    uVar10 = FUN_0261d530(lVar13,uVar9 & 0xffffffff);
    if ((uVar10 & 1) != 0) {
      uVar14 = (uint)uVar9;
      if (DAT_055588d0 == 0) {
        local_68 = _DAT_05586008;
        uStack_64 = DAT_0558600c;
      }
      else if (((uVar14 & 0xffff) < 0x800) &&
              ((*(byte *)(DAT_055588d0 + ((uVar9 & 0xffffffff) >> 3 & 0x1fff) + 0xe99e0) >>
                (ulong)(uVar14 & 7) & 1) != 0)) {
        FUN_02621f00(&local_68,DAT_055588d0,uVar9 & 0xffffffff);
      }
      else {
        FUN_0262eb00(&local_68,DAT_055588d0,uVar9 & 0xffffffff,DAT_055588d0 + 0xe98e0);
      }
      puVar2 = PTR_DAT_04bb43c0;
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(&local_68);
      if (*(long *)puVar2 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          iVar5 = FUN_02672e00(param_1);
          iVar6 = FUN_02555fe0(param_1);
          uVar14 = uVar14 >> 0x10 & 0xff;
          if (iVar5 < 1) {
            iVar16 = 0;
            local_a8 = 0;
            local_a0 = 0;
            local_88 = 0;
          }
          else {
            local_88 = 0;
            local_a8 = 0;
            local_a0 = 0;
            iVar16 = 0;
            iVar15 = 0;
            puVar1 = PTR_DAT_04bc0510 + 0x10;
            do {
              iVar7 = FUN_02672e00(param_1);
              iVar8 = iVar15;
              if (iVar7 <= iVar15) {
                iVar8 = -1;
              }
              cVar3 = FUN_02678270(param_1,iVar8);
              puVar11 = (undefined2 *)FUN_02677ea0(param_1,iVar8);
              uVar9 = FUN_0277d7b4(puVar11,&local_68);
              if ((uVar9 & 1) != 0) {
                lVar13 = *(long *)puVar2;
                local_78 = *puVar11;
                local_76 = *(undefined1 *)(puVar11 + 1);
                local_75 = *(undefined1 *)((long)puVar11 + 3);
                local_74 = *(undefined4 *)(puVar11 + 2);
                local_70 = 0;
                local_80 = puVar1;
                uVar4 = FUN_0277d6c4(&local_78);
                if (*(long *)puVar2 != 0) {
                  lVar13 = *(long *)(lVar13 + 0x57e58);
                  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                  if ((uVar4 < *(uint *)(lVar13 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
                    lVar13 = *(long *)PTR_DAT_04bc0428;
                    uVar4 = FUN_0277d6c4(puVar11);
                    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                    if ((uVar4 < *(uint *)(lVar13 + 0x1d8)) &&
                       (lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8),
                       lVar13 != 0)) {
                      local_70 = lVar13;
                    }
                  }
                }
                uVar9 = FUN_01af0020(&local_80);
                if ((cVar3 == -1) || (iVar6 != iVar8)) {
                  if (iVar6 == iVar8) {
                    if ((uVar9 & 1) == 0) {
                      iVar8 = 1;
                    }
                    else {
                      iVar8 = FUN_01af02d0(&local_80);
                    }
                    local_a0 = CONCAT44(iVar8 + local_a0._4_4_,(int)local_a0);
                  }
                  else if (cVar3 == -1) {
                    if ((uVar9 & 1) == 0) {
                      iVar8 = 1;
                    }
                    else {
                      iVar8 = FUN_01af02d0(&local_80);
                    }
                    iVar16 = iVar8 + iVar16;
                    if (local_a8 == 0) {
                      uVar4 = FUN_026138cc(puVar11);
                      local_a8 = (ulong)(uVar4 & 1);
                    }
                    else {
                      local_a8 = 1;
                    }
                  }
                  else {
                    if ((uVar9 & 1) == 0) {
                      iVar8 = 1;
                    }
                    else {
                      iVar8 = FUN_01af02d0(&local_80);
                    }
                    local_a0 = CONCAT44(local_a0._4_4_,iVar8 + (int)local_a0);
                  }
                }
                else {
                  if ((uVar9 & 1) == 0) {
                    iVar8 = 1;
                  }
                  else {
                    iVar8 = FUN_01af02d0(&local_80);
                  }
                  local_88 = iVar8 + local_88;
                }
              }
              if ((int)uVar14 <= iVar16) {
                uVar12 = 0;
                uVar9 = 1;
                uVar10 = local_a8 << 8;
                goto LAB_026137e8;
              }
              iVar15 = iVar15 + 1;
            } while (iVar5 != iVar15);
          }
          if (iVar16 + (int)local_a0 < (int)uVar14) {
            if (iVar16 + local_a0._4_4_ < (int)uVar14) {
              if (local_88 + (int)local_a0 + iVar16 + local_a0._4_4_ < (int)uVar14) {
                if (((iVar16 == 0 && (int)local_a0 == 0) && (local_a0._4_4_ == 0)) &&
                   (local_88 == 0)) {
                  uVar12 = 0x500000000;
                }
                else {
                  uVar12 = 0x400000000;
                }
              }
              else {
                uVar12 = 0x100000000;
              }
            }
            else {
              uVar12 = 0x300000000;
            }
          }
          else {
            uVar12 = 0x200000000;
          }
          uVar9 = local_a8 << 8;
          uVar10 = uVar9;
          goto LAB_026137e8;
        }
      }
    }
  }
  uVar9 = 0;
  uVar10 = 0;
  uVar12 = 0;
LAB_026137e8:
  return uVar10 | uVar9 & 0xff | uVar12;
}

