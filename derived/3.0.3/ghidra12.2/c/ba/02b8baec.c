
/* WARNING: Removing unreachable block (ram,0x02b8c76c) */
/* WARNING: Removing unreachable block (ram,0x02b8c544) */
/* WARNING: Removing unreachable block (ram,0x02b8c0e8) */
/* WARNING: Removing unreachable block (ram,0x02b8bc78) */
/* WARNING: Removing unreachable block (ram,0x02b8bb28) */
/* WARNING: Removing unreachable block (ram,0x02b8bb38) */
/* WARNING: Removing unreachable block (ram,0x02b8beb8) */
/* WARNING: Removing unreachable block (ram,0x02b8c318) */
/* WARNING: Removing unreachable block (ram,0x02b8c658) */
/* WARNING: Removing unreachable block (ram,0x02b8c880) */
/* WARNING: Removing unreachable block (ram,0x02b8c1b8) */
/* WARNING: Removing unreachable block (ram,0x02b8bd58) */
/* WARNING: Removing unreachable block (ram,0x02b8bf88) */
/* WARNING: Removing unreachable block (ram,0x02b8c3e8) */

void FUN_02b8baec(long param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ushort uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  uint *puVar13;
  uint *puVar14;
  long lVar15;
  uint uVar16;
  undefined *local_e0;
  byte local_d8;
  int local_d4;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  ushort local_bc;
  undefined *local_b8;
  undefined2 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_a8 = (undefined *)((ulong)local_a8 & 0xffffffff00000000);
  puVar11 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    puVar11 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
  }
  if (puVar11[1] == 0) {
    return;
  }
  local_b8 = PTR_DAT_04bb7648 + 0x10;
  lVar12 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar15 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar15 == 0)) {
    puVar1 = (undefined2 *)(lVar12 + 0x2c);
    if ((*(ushort *)(lVar12 + 0x28) & 0x40) != 0) {
      puVar1 = (undefined2 *)(lVar12 + 0x2a);
    }
    local_b0 = *puVar1;
  }
  else if ((*(long **)(lVar15 + 0x60) == (long *)0x0) ||
          (puVar9 = (undefined8 *)**(long **)(lVar15 + 0x60), puVar9 == (undefined8 *)0x0)) {
    local_b0 = *(undefined2 *)(*(long *)(lVar15 + 0x48) + *(long *)(lVar15 + 0x40) + 2);
  }
  else {
    uVar10 = (**(code **)*puVar9)();
    local_b0 = *(undefined2 *)(*(long *)(lVar15 + 0x48) + *(long *)(lVar15 + 0x40) + 2);
    if ((((uVar10 & 1) != 0) && (*(long *)(lVar15 + 0x60) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar15 + 0x60) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
  }
  lVar12 = FUN_03775b80(&local_b8);
  if (lVar12 == 0) {
    return;
  }
  if ((*(long **)(lVar12 + 0x108) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar12 + 0x108), puVar9 == (undefined8 *)0x0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = (**(code **)*puVar9)();
    uVar10 = uVar10 & 0xffffffff;
  }
  puVar6 = PTR_DAT_04bb5008;
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 != -1) {
    local_a8 = (undefined *)((ulong)local_a8 & 0xffffffff00000000);
    lVar15 = *(long *)PTR_DAT_04bb5008;
    uVar16 = (uint)*(ushort *)(*(long *)(lVar12 + 0xf0) + *(long *)(lVar12 + 0xe8) + 0x4230);
    uVar4 = uVar16 - *(ushort *)(lVar15 + 0x11f0);
    if ((uVar4 < *(uint *)(lVar15 + 0x11d0)) &&
       (*(long *)(*(long *)(lVar15 + 0x11d8) + (long)(int)uVar4 * 8) != 0)) {
      if (puVar11[1] == 0) {
        local_e0 = PTR_DAT_04bc4608 + 0x10;
        local_d8 = PTR_DAT_04bbc570[8];
        local_d4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
        uStack_c8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
        local_d0 = PTR_DAT_04bb2010 + 0x10;
        local_c0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
        local_bc = *(ushort *)(PTR_DAT_04bbc570 + 0x24);
      }
      else {
        FUN_01360490(&local_e0,puVar11[1],iVar3);
      }
      if ((((local_d4 != 0) && (local_d4 != 0)) && (local_d4 == 0x1a)) && ((local_d8 & 1) == 0)) {
        lVar15 = *(long *)puVar6;
        uVar4 = (uint)local_bc - (uint)*(ushort *)(lVar15 + 0xff0);
        if ((uVar4 < *(uint *)(lVar15 + 0xfd0)) &&
           (puVar13 = *(uint **)(*(long *)(lVar15 + 0xfd8) + (long)(int)uVar4 * 8),
           puVar13 != (uint *)0x0)) {
          uVar4 = *puVar13;
          uVar8 = 0;
          if ((uVar4 != 0) && (puVar13 != (uint *)(ulong)uVar4)) {
            puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar4);
            if (((*puVar14 != 0) && (uVar4 = puVar14[1], uVar4 != 0)) &&
               ((ulong)(ushort)puVar14[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
              if (lVar15 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar4);
                }
                if (*puVar14 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bc4590) &&
                   (uVar8 = *(ushort *)
                             (*(long *)((long)PTR_DAT_04bc4590 + 8) + (long)(int)uVar2 * 2),
                   uVar8 < 6)) goto LAB_02b8be10;
              }
            }
            goto LAB_02b8be0c;
          }
        }
        else {
LAB_02b8be0c:
          uVar8 = 0;
        }
LAB_02b8be10:
        local_98 = (undefined *)0x0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_a8 = PTR_DAT_04bc4570 + 0x10;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        local_a0 = 0;
        FUN_02a7e130(&local_a8);
        FUN_02a7e3d0(&local_a8,uVar16);
        FUN_02a7e750(&local_a8,uVar8);
        uVar8 = FUN_00edf160(&local_a0,1);
        if (local_d4 == 0x1a) {
          local_bc = uVar8;
        }
        if (puVar11[1] != 0) {
          FUN_01361f00(puVar11[1],iVar3);
        }
        FUN_02a59660(puVar11,&local_e0,iVar3);
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 != -1) {
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,1);
    lVar15 = *(long *)puVar6;
    uVar16 = (uint)*(ushort *)(*(long *)(lVar12 + 0xf0) + *(long *)(lVar12 + 0xe8) + 0x4232);
    uVar4 = uVar16 - *(ushort *)(lVar15 + 0x11f0);
    if ((uVar4 < *(uint *)(lVar15 + 0x11d0)) &&
       (*(long *)(*(long *)(lVar15 + 0x11d8) + (long)(int)uVar4 * 8) != 0)) {
      if (puVar11[1] == 0) {
        local_e0 = PTR_DAT_04bc4608 + 0x10;
        local_d8 = PTR_DAT_04bbc570[8];
        local_d4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
        uStack_c8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
        local_d0 = PTR_DAT_04bb2010 + 0x10;
        local_c0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
        local_bc = *(ushort *)(PTR_DAT_04bbc570 + 0x24);
      }
      else {
        FUN_01360490(&local_e0,puVar11[1],iVar3);
      }
      if ((((local_d4 != 0) && (local_d4 != 0)) && (local_d4 == 0x1a)) && ((local_d8 & 1) == 0)) {
        lVar15 = *(long *)puVar6;
        uVar4 = (uint)local_bc - (uint)*(ushort *)(lVar15 + 0xff0);
        if ((uVar4 < *(uint *)(lVar15 + 0xfd0)) &&
           (puVar13 = *(uint **)(*(long *)(lVar15 + 0xfd8) + (long)(int)uVar4 * 8),
           puVar13 != (uint *)0x0)) {
          uVar4 = *puVar13;
          uVar8 = 0;
          if ((uVar4 != 0) && (puVar13 != (uint *)(ulong)uVar4)) {
            puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar4);
            if (((*puVar14 != 0) && (uVar4 = puVar14[1], uVar4 != 0)) &&
               ((ulong)(ushort)puVar14[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
              if (lVar15 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar4);
                }
                if (*puVar14 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bc4590) &&
                   (uVar8 = *(ushort *)
                             (*(long *)((long)PTR_DAT_04bc4590 + 8) + (long)(int)uVar2 * 2),
                   uVar8 < 6)) goto LAB_02b8c040;
              }
            }
            goto LAB_02b8c03c;
          }
        }
        else {
LAB_02b8c03c:
          uVar8 = 0;
        }
LAB_02b8c040:
        local_98 = (undefined *)0x0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_a8 = PTR_DAT_04bc4570 + 0x10;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        local_a0 = 0;
        FUN_02a7e130(&local_a8);
        FUN_02a7e3d0(&local_a8,uVar16);
        FUN_02a7e750(&local_a8,uVar8);
        uVar8 = FUN_00edf160(&local_a0,1);
        if (local_d4 == 0x1a) {
          local_bc = uVar8;
        }
        if (puVar11[1] != 0) {
          FUN_01361f00(puVar11[1],iVar3);
        }
        FUN_02a59660(puVar11,&local_e0,iVar3);
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != -1) {
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,2);
    lVar15 = *(long *)puVar6;
    uVar16 = (uint)*(ushort *)(*(long *)(lVar12 + 0xf0) + *(long *)(lVar12 + 0xe8) + 0x4234);
    uVar4 = uVar16 - *(ushort *)(lVar15 + 0x11f0);
    if ((uVar4 < *(uint *)(lVar15 + 0x11d0)) &&
       (*(long *)(*(long *)(lVar15 + 0x11d8) + (long)(int)uVar4 * 8) != 0)) {
      if (puVar11[1] == 0) {
        local_e0 = PTR_DAT_04bc4608 + 0x10;
        local_d8 = PTR_DAT_04bbc570[8];
        local_d4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
        uStack_c8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
        local_d0 = PTR_DAT_04bb2010 + 0x10;
        local_c0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
        local_bc = *(ushort *)(PTR_DAT_04bbc570 + 0x24);
      }
      else {
        FUN_01360490(&local_e0,puVar11[1],iVar3);
      }
      if ((((local_d4 != 0) && (local_d4 != 0)) && (local_d4 == 0x1a)) && ((local_d8 & 1) == 0)) {
        lVar15 = *(long *)puVar6;
        uVar4 = (uint)local_bc - (uint)*(ushort *)(lVar15 + 0xff0);
        if ((uVar4 < *(uint *)(lVar15 + 0xfd0)) &&
           (puVar13 = *(uint **)(*(long *)(lVar15 + 0xfd8) + (long)(int)uVar4 * 8),
           puVar13 != (uint *)0x0)) {
          uVar4 = *puVar13;
          uVar8 = 0;
          if ((uVar4 != 0) && (puVar13 != (uint *)(ulong)uVar4)) {
            puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar4);
            if (((*puVar14 != 0) && (uVar4 = puVar14[1], uVar4 != 0)) &&
               ((ulong)(ushort)puVar14[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
              if (lVar15 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar4);
                }
                if (*puVar14 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bc4590) &&
                   (uVar8 = *(ushort *)
                             (*(long *)((long)PTR_DAT_04bc4590 + 8) + (long)(int)uVar2 * 2),
                   uVar8 < 6)) goto LAB_02b8c270;
              }
            }
            goto LAB_02b8c26c;
          }
        }
        else {
LAB_02b8c26c:
          uVar8 = 0;
        }
LAB_02b8c270:
        local_98 = (undefined *)0x0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_a8 = PTR_DAT_04bc4570 + 0x10;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        local_a0 = 0;
        FUN_02a7e130(&local_a8);
        FUN_02a7e3d0(&local_a8,uVar16);
        FUN_02a7e750(&local_a8,uVar8);
        uVar8 = FUN_00edf160(&local_a0,1);
        if (local_d4 == 0x1a) {
          local_bc = uVar8;
        }
        if (puVar11[1] != 0) {
          FUN_01361f00(puVar11[1],iVar3);
        }
        FUN_02a59660(puVar11,&local_e0,iVar3);
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == -1) goto LAB_02b8c524;
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,3);
  lVar15 = *(long *)puVar6;
  uVar16 = (uint)*(ushort *)(*(long *)(lVar12 + 0xf0) + *(long *)(lVar12 + 0xe8) + 0x4236);
  uVar4 = uVar16 - *(ushort *)(lVar15 + 0x11f0);
  if ((*(uint *)(lVar15 + 0x11d0) <= uVar4) ||
     (*(long *)(*(long *)(lVar15 + 0x11d8) + (long)(int)uVar4 * 8) == 0)) goto LAB_02b8c524;
  if (puVar11[1] == 0) {
    local_e0 = PTR_DAT_04bc4608 + 0x10;
    local_d8 = PTR_DAT_04bbc570[8];
    local_d4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
    uStack_c8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
    local_d0 = PTR_DAT_04bb2010 + 0x10;
    local_c0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_bc = *(ushort *)(PTR_DAT_04bbc570 + 0x24);
  }
  else {
    FUN_01360490(&local_e0,puVar11[1],iVar3);
  }
  if ((((local_d4 == 0) || (local_d4 == 0)) || (local_d4 != 0x1a)) || ((local_d8 & 1) != 0))
  goto LAB_02b8c524;
  lVar15 = *(long *)puVar6;
  uVar4 = (uint)local_bc - (uint)*(ushort *)(lVar15 + 0xff0);
  if ((uVar4 < *(uint *)(lVar15 + 0xfd0)) &&
     (puVar13 = *(uint **)(*(long *)(lVar15 + 0xfd8) + (long)(int)uVar4 * 8), puVar13 != (uint *)0x0
     )) {
    uVar4 = *puVar13;
    uVar8 = 0;
    if ((uVar4 != 0) && (puVar13 != (uint *)(ulong)uVar4)) {
      puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar4);
      if (((*puVar14 != 0) && (uVar4 = puVar14[1], uVar4 != 0)) && ((ulong)(ushort)puVar14[2] != 0))
      {
        lVar15 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
        if (lVar15 != 0) {
          uVar2 = 0;
          if ((ulong)uVar4 != 0) {
            uVar2 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar4);
          }
          if (*puVar14 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc4590) &&
             (uVar8 = *(ushort *)(*(long *)((long)PTR_DAT_04bc4590 + 8) + (long)(int)uVar2 * 2),
             uVar8 < 6)) goto LAB_02b8c4a0;
        }
      }
      goto LAB_02b8c49c;
    }
  }
  else {
LAB_02b8c49c:
    uVar8 = 0;
  }
LAB_02b8c4a0:
  local_98 = (undefined *)0x0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_a8 = PTR_DAT_04bc4570 + 0x10;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_a0 = 0;
  FUN_02a7e130(&local_a8);
  FUN_02a7e3d0(&local_a8,uVar16);
  FUN_02a7e750(&local_a8,uVar8);
  uVar8 = FUN_00edf160(&local_a0,1);
  if (local_d4 == 0x1a) {
    local_bc = uVar8;
  }
  if (puVar11[1] != 0) {
    FUN_01361f00(puVar11[1],iVar3);
  }
  FUN_02a59660(puVar11,&local_e0,iVar3);
LAB_02b8c524:
  iVar3 = *(int *)(param_1 + 0x18);
  uVar7 = local_a0;
  if (iVar3 != -1) {
    local_a8 = (undefined *)((ulong)local_a8 & 0xffffffff00000000);
    uVar8 = *(ushort *)(*(long *)(lVar12 + 0xf0) + *(long *)(lVar12 + 0xe8) + 0x4238);
    lVar15 = *(long *)puVar6;
    uVar4 = (uint)uVar8 - (uint)*(ushort *)(lVar15 + 0x13f0);
    if ((uVar4 < *(uint *)(lVar15 + 0x13d0)) &&
       (*(long *)(*(long *)(lVar15 + 0x13d8) + (long)(int)uVar4 * 8) != 0)) {
      if (puVar11[1] == 0) {
        local_a8 = PTR_DAT_04bc4608 + 0x10;
        local_a0 = CONCAT71(local_a0._1_7_,PTR_DAT_04bbc570[8]);
        local_a0 = CONCAT44(*(int *)(PTR_DAT_04bbc570 + 0xc),(undefined4)local_a0);
        uStack_90 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
        local_98 = PTR_DAT_04bb2010 + 0x10;
        local_88 = CONCAT26(local_88._6_2_,*(undefined6 *)(PTR_DAT_04bbc570 + 0x20));
        uVar7 = local_a0;
        uVar5 = local_88;
        local_a0._4_4_ = *(int *)(PTR_DAT_04bbc570 + 0xc);
      }
      else {
        FUN_01360490(&local_a8,puVar11[1],iVar3);
        uVar7 = local_a0;
        uVar5 = local_88;
      }
      local_88 = uVar5;
      if ((((local_a0._4_4_ != 0) && (local_a0._4_4_ = (int)(uVar7 >> 0x20), local_a0._4_4_ != 0))
          && (local_a0._4_4_ == 0x1b)) && ((uVar7 & 1) == 0)) {
        local_88._6_2_ = (undefined2)((ulong)uVar5 >> 0x30);
        local_88._0_4_ = (undefined4)uVar5;
        local_88._0_6_ = CONCAT24(uVar8,(undefined4)local_88);
        local_a0 = uVar7;
        if (puVar11[1] != 0) {
          FUN_01361f00(puVar11[1],iVar3);
        }
        FUN_02a59660(puVar11,&local_a8,iVar3);
        uVar7 = local_a0;
      }
    }
  }
  local_a0 = uVar7;
  iVar3 = *(int *)(param_1 + 0x1c);
  uVar7 = local_a0;
  if (iVar3 != -1) {
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,1);
    uVar8 = *(ushort *)(*(long *)(lVar12 + 0xf0) + *(long *)(lVar12 + 0xe8) + 0x423a);
    lVar15 = *(long *)puVar6;
    uVar4 = (uint)uVar8 - (uint)*(ushort *)(lVar15 + 0x13f0);
    if ((uVar4 < *(uint *)(lVar15 + 0x13d0)) &&
       (*(long *)(*(long *)(lVar15 + 0x13d8) + (long)(int)uVar4 * 8) != 0)) {
      if (puVar11[1] == 0) {
        local_a8 = PTR_DAT_04bc4608 + 0x10;
        local_a0 = CONCAT71(local_a0._1_7_,PTR_DAT_04bbc570[8]);
        local_a0 = CONCAT44(*(int *)(PTR_DAT_04bbc570 + 0xc),(undefined4)local_a0);
        uStack_90 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
        local_98 = PTR_DAT_04bb2010 + 0x10;
        local_88 = CONCAT26(local_88._6_2_,*(undefined6 *)(PTR_DAT_04bbc570 + 0x20));
        uVar7 = local_a0;
        uVar5 = local_88;
        local_a0._4_4_ = *(int *)(PTR_DAT_04bbc570 + 0xc);
      }
      else {
        FUN_01360490(&local_a8,puVar11[1],iVar3);
        uVar7 = local_a0;
        uVar5 = local_88;
      }
      local_88 = uVar5;
      if (((local_a0._4_4_ != 0) && (local_a0._4_4_ = (int)(uVar7 >> 0x20), local_a0._4_4_ != 0)) &&
         ((local_a0._4_4_ == 0x1b && ((uVar7 & 1) == 0)))) {
        local_88._6_2_ = (undefined2)((ulong)uVar5 >> 0x30);
        local_88._0_4_ = (undefined4)uVar5;
        local_88._0_6_ = CONCAT24(uVar8,(undefined4)local_88);
        local_a0 = uVar7;
        if (puVar11[1] != 0) {
          FUN_01361f00(puVar11[1],iVar3);
        }
        FUN_02a59660(puVar11,&local_a8,iVar3);
        uVar7 = local_a0;
      }
    }
  }
  local_a0 = uVar7;
  iVar3 = *(int *)(param_1 + 0x20);
  uVar7 = local_a0;
  if (iVar3 != -1) {
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,2);
    uVar8 = *(ushort *)(*(long *)(lVar12 + 0xf0) + *(long *)(lVar12 + 0xe8) + 0x423c);
    lVar15 = *(long *)puVar6;
    uVar4 = (uint)uVar8 - (uint)*(ushort *)(lVar15 + 0x13f0);
    if ((uVar4 < *(uint *)(lVar15 + 0x13d0)) &&
       (*(long *)(*(long *)(lVar15 + 0x13d8) + (long)(int)uVar4 * 8) != 0)) {
      if (puVar11[1] == 0) {
        local_a8 = PTR_DAT_04bc4608 + 0x10;
        local_a0 = CONCAT71(local_a0._1_7_,PTR_DAT_04bbc570[8]);
        local_a0 = CONCAT44(*(int *)(PTR_DAT_04bbc570 + 0xc),(undefined4)local_a0);
        uStack_90 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
        local_98 = PTR_DAT_04bb2010 + 0x10;
        local_88 = CONCAT26(local_88._6_2_,*(undefined6 *)(PTR_DAT_04bbc570 + 0x20));
        uVar7 = local_a0;
        uVar5 = local_88;
        local_a0._4_4_ = *(int *)(PTR_DAT_04bbc570 + 0xc);
      }
      else {
        FUN_01360490(&local_a8,puVar11[1],iVar3);
        uVar7 = local_a0;
        uVar5 = local_88;
      }
      local_88 = uVar5;
      if ((((local_a0._4_4_ != 0) && (local_a0._4_4_ = (int)(uVar7 >> 0x20), local_a0._4_4_ != 0))
          && (local_a0._4_4_ == 0x1b)) && ((uVar7 & 1) == 0)) {
        local_88._6_2_ = (undefined2)((ulong)uVar5 >> 0x30);
        local_88._0_4_ = (undefined4)uVar5;
        local_88._0_6_ = CONCAT24(uVar8,(undefined4)local_88);
        local_a0 = uVar7;
        if (puVar11[1] != 0) {
          FUN_01361f00(puVar11[1],iVar3);
        }
        FUN_02a59660(puVar11,&local_a8,iVar3);
        uVar7 = local_a0;
      }
    }
  }
  local_a0 = uVar7;
  iVar3 = *(int *)(param_1 + 0x24);
  uVar7 = local_a0;
  if (iVar3 != -1) {
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,3);
    uVar8 = *(ushort *)(*(long *)(lVar12 + 0xf0) + *(long *)(lVar12 + 0xe8) + 0x423e);
    lVar15 = *(long *)puVar6;
    uVar4 = (uint)uVar8 - (uint)*(ushort *)(lVar15 + 0x13f0);
    if ((uVar4 < *(uint *)(lVar15 + 0x13d0)) &&
       (*(long *)(*(long *)(lVar15 + 0x13d8) + (long)(int)uVar4 * 8) != 0)) {
      if (puVar11[1] == 0) {
        local_a8 = PTR_DAT_04bc4608 + 0x10;
        local_a0 = CONCAT71(local_a0._1_7_,PTR_DAT_04bbc570[8]);
        local_a0 = CONCAT44(*(int *)(PTR_DAT_04bbc570 + 0xc),(undefined4)local_a0);
        uStack_90 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
        local_98 = PTR_DAT_04bb2010 + 0x10;
        local_88 = CONCAT26(local_88._6_2_,*(undefined6 *)(PTR_DAT_04bbc570 + 0x20));
        uVar7 = local_a0;
        uVar5 = local_88;
        local_a0._4_4_ = *(int *)(PTR_DAT_04bbc570 + 0xc);
      }
      else {
        FUN_01360490(&local_a8,puVar11[1],iVar3);
        uVar7 = local_a0;
        uVar5 = local_88;
      }
      local_88 = uVar5;
      if (((local_a0._4_4_ != 0) && (local_a0._4_4_ = (int)(uVar7 >> 0x20), local_a0._4_4_ != 0)) &&
         ((local_a0._4_4_ == 0x1b && ((uVar7 & 1) == 0)))) {
        local_88._6_2_ = (undefined2)((ulong)uVar5 >> 0x30);
        local_88._0_4_ = (undefined4)uVar5;
        local_88._0_6_ = CONCAT24(uVar8,(undefined4)local_88);
        local_a0 = uVar7;
        if (puVar11[1] != 0) {
          FUN_01361f00(puVar11[1],iVar3);
        }
        FUN_02a59660(puVar11,&local_a8,iVar3);
        uVar7 = local_a0;
      }
    }
  }
  local_a0 = uVar7;
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar12 + 0x108) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar12 + 0x108) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  return;
}

