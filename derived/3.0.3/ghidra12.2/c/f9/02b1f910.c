
/* WARNING: Removing unreachable block (ram,0x02b1f9a0) */
/* WARNING: Removing unreachable block (ram,0x02b1f970) */
/* WARNING: Removing unreachable block (ram,0x02b1f980) */
/* WARNING: Removing unreachable block (ram,0x02b1f9d4) */

void FUN_02b1f910(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  int iVar6;
  short sVar7;
  bool bVar8;
  undefined *puVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ushort uVar14;
  long lVar15;
  undefined1 uVar16;
  long lVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 local_cc;
  undefined *local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  undefined *local_90;
  int local_88;
  int iStack_84;
  undefined *local_80;
  int local_78;
  int iStack_74;
  undefined8 local_68;
  
  uVar13 = (ulong)local_98;
  puVar9 = PTR_DAT_04bb37e0;
  lVar15 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0);
  if (lVar15 == 0) {
    return;
  }
  local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
  if (*(long *)(lVar15 + 0xd0) == 0) {
    return;
  }
  if ((*(byte *)(param_2 + 8) >> 1 & 1) == 0) {
    if (*(long *)(param_2 + 0xc0) != 0) {
      uVar11 = 10;
      local_98._4_4_ = SUB84(uVar13,4);
      local_98 = (undefined *)CONCAT44(local_98._4_4_,10);
      lVar17 = *(long *)(*(long *)(param_2 + 0xc0) + 0xc0);
      if ((lVar17 != 0) && (*(char *)(lVar17 + 0x48) != '\0')) goto LAB_02b1f9f4;
    }
    lVar17 = param_2 + 0x90;
  }
  else {
    uVar11 = 4;
LAB_02b1f9f4:
    local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar11);
    lVar17 = param_2 + 0xf8 + (ulong)uVar11 * 0x70;
    if (10 < uVar11) {
      lVar17 = param_2 + 0xf8;
    }
    lVar17 = lVar17 + 0x28;
  }
  local_b8 = lVar17 + 8;
  local_b0 = lVar17 + 0x18;
  local_a0 = *(int *)(lVar17 + 0x10);
  local_9c = *(int *)(lVar17 + 0x14);
  iVar6 = *(int *)(lVar17 + 0x10);
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  iVar1 = *(int *)(lVar17 + 0x24) + 1;
  local_a8 = puVar2;
  if ((iVar6 != local_a0) || (iVar1 != local_9c)) {
    puVar3 = PTR_DAT_04bbc5d8 + 0x10;
    puVar4 = PTR_DAT_04bb2018 + 0x10;
    do {
      local_c0 = 0;
      local_68 = 0xfffe;
      local_c8 = puVar2;
      FUN_0277d4ac(&local_68);
      if (*(long *)(lVar15 + 0xd0) == 0) {
        sVar7 = *(short *)puVar9;
        uVar16 = puVar9[2];
        uVar18 = puVar9[3];
        uVar19 = *(undefined4 *)(puVar9 + 4);
      }
      else {
        FUN_012e4f58(&local_98,*(long *)(lVar15 + 0xd0),&local_a8,&local_c8);
        uVar16 = local_98._2_1_;
        uVar18 = local_98._3_1_;
        uVar19 = local_98._4_4_;
        sVar7 = (short)local_98;
      }
      local_68 = CONCAT44(uVar19,CONCAT13(uVar18,CONCAT12(uVar16,sVar7)));
      if (sVar7 != -2) {
        uVar13 = FUN_02a7c208(param_2,&local_a8);
        if ((uVar13 & 1) == 0) {
LAB_02b1fca4:
          bVar8 = false;
        }
        else {
          lVar17 = *(long *)PTR_DAT_04bbbc68;
          bVar8 = false;
          if (lVar17 != 0) {
            if (((((*(long *)(lVar17 + 0xb0) != 0) && (*(long *)(*(long *)(lVar17 + 0xb0) + 8) != 0)
                  ) && (*(long *)(lVar17 + 0x488) != 0)) &&
                ((*(long *)(*(long *)(lVar17 + 0x488) + 8) != 0 && (*(long *)(lVar17 + 0x2b0) != 0))
                )) && (*(long *)(*(long *)(lVar17 + 0x2b0) + 8) != 0)) {
              uVar11 = FUN_0277d6c4(&local_68);
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
              if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                FUN_0124c030(&local_98,&local_68);
                uVar13 = FUN_0123d890(CONCAT44(iStack_84,local_88),4);
                if (((uVar13 & 1) != 0) ||
                   ((uVar13 = FUN_0124dcb0(&local_98), (uVar13 & 1) != 0 ||
                    (iVar12 = FUN_0123db50(&local_90,CONCAT44(iStack_84,local_88)),
                    (iVar12 - 2U & 0xfffffff9) == 0)))) {
                  local_cc = 0;
                  FUN_0092ef00(&local_a8,&local_cc);
                  bVar8 = true;
                  goto LAB_02b1fca8;
                }
              }
            }
            goto LAB_02b1fca4;
          }
        }
LAB_02b1fca8:
        uVar13 = FUN_02a7c524(param_2,&local_a8);
        if (((((uVar13 & 1) != 0) && (lVar17 = *(long *)PTR_DAT_04bbbc68, lVar17 != 0)) &&
            (*(long *)(lVar17 + 0xb0) != 0)) &&
           (((*(long *)(*(long *)(lVar17 + 0xb0) + 8) != 0 && (*(long *)(lVar17 + 0x488) != 0)) &&
            ((*(long *)(*(long *)(lVar17 + 0x488) + 8) != 0 &&
             ((*(long *)(lVar17 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar17 + 0x2b0) + 8) != 0)))))
            ))) {
          uVar11 = FUN_0277d6c4(&local_68);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
            FUN_0124c030(&local_98,&local_68);
            iVar12 = FUN_0123db50(&local_90,CONCAT44(iStack_84,local_88));
            if (iVar12 == 0x2e) {
              local_cc = 0;
              FUN_0092ef00(&local_a8,&local_cc);
              bVar8 = true;
            }
          }
        }
        uVar13 = FUN_02a7c074(param_2,&local_a8);
        if ((uVar13 & 1) == 0) {
          if (bVar8) goto LAB_02b1fe34;
        }
        else {
          lVar17 = *(long *)PTR_DAT_04bbbc68;
          bVar10 = false;
          if (lVar17 != 0) {
            if ((((*(long *)(lVar17 + 0xb0) != 0) && (*(long *)(*(long *)(lVar17 + 0xb0) + 8) != 0))
                && (*(long *)(lVar17 + 0x488) != 0)) &&
               (((*(long *)(*(long *)(lVar17 + 0x488) + 8) != 0 && (*(long *)(lVar17 + 0x2b0) != 0))
                && (*(long *)(*(long *)(lVar17 + 0x2b0) + 8) != 0)))) {
              uVar11 = FUN_0277d6c4(&local_68);
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
              if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                FUN_0124c030(&local_98,&local_68);
                iVar12 = FUN_0123db50(&local_90,CONCAT44(iStack_84,local_88));
                bVar10 = iVar12 == 0x2d;
                if (bVar10) {
                  bVar8 = true;
                }
                goto LAB_02b1fe10;
              }
            }
            bVar10 = false;
          }
LAB_02b1fe10:
          uVar13 = FUN_0277e294(&local_68);
          if ((uVar13 & 1) == 0) {
            local_98 = (undefined *)((ulong)local_98._4_4_ << 0x20);
            FUN_0092ef00(&local_a8,&local_98);
            if (!bVar10) goto LAB_02b1fe34;
LAB_02b1fe64:
            if (*(char *)(*(long *)PTR_DAT_04bb4910 + 0x88) == '\0') {
              fVar20 = (float)(int)local_c0 * 0.5;
              uVar11 = 0;
              if (fVar20 != (float)(int)fVar20) {
                uVar11 = (uint)(fVar20 < 0.0);
              }
              local_88 = (int)fVar20 - uVar11;
              fVar20 = (float)local_c0._4_4_ * 0.5;
              uVar11 = 0;
              if (fVar20 != (float)(int)fVar20) {
                uVar11 = (uint)(fVar20 < 0.0);
              }
              iStack_84 = (int)fVar20 - uVar11;
              local_98 = puVar3;
              local_90 = puVar4;
              local_80 = puVar4;
              local_78 = local_88;
              iStack_74 = iStack_84;
              FUN_036833e0(*(long *)PTR_DAT_04bb4910,&local_98);
            }
            FUN_011dbc54(&local_c8,0);
          }
          else {
            local_98 = (undefined *)((ulong)local_98._4_4_ << 0x20);
            FUN_0092ef00(&local_a8,&local_98);
            if (bVar8) {
              if (bVar10) goto LAB_02b1fe64;
LAB_02b1fe34:
              FUN_01225ba0(*(undefined8 *)PTR_DAT_04bb4778,&local_a8,6);
            }
          }
        }
      }
      if (local_a0 < *(int *)(local_b0 + 8)) {
        local_a0 = local_a0 + 1;
      }
      else {
        local_9c = local_9c + 1;
        local_a0 = *(int *)(local_b8 + 8);
      }
    } while ((iVar6 != local_a0) || (iVar1 != local_9c));
  }
  puVar9 = PTR_DAT_04bb6298;
  uVar14 = *(ushort *)PTR_DAT_04bb6298;
  if (uVar14 != 0xffff) {
    local_98._0_4_ = 1;
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar14 * 8);
    if (0xff < uVar14) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar5 >> 1 & 1) != 0) {
      FUN_01a186f0(param_2);
      uVar14 = *(ushort *)puVar9;
      if (uVar14 == 0xffff) {
        return;
      }
    }
    local_98 = (undefined *)CONCAT44(local_98._4_4_,1);
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar14 & 0xffffffffU) * 8);
    if (0xff < uVar14) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar5 >> 1 & 1) != 0) {
      FUN_0142b390(param_2);
    }
  }
  return;
}

