
/* WARNING: Removing unreachable block (ram,0x027f5d24) */
/* WARNING: Removing unreachable block (ram,0x027f5cf0) */
/* WARNING: Removing unreachable block (ram,0x027f5cb8) */
/* WARNING: Removing unreachable block (ram,0x027f5c58) */
/* WARNING: Removing unreachable block (ram,0x027f5c28) */
/* WARNING: Removing unreachable block (ram,0x027f5bf8) */
/* WARNING: Removing unreachable block (ram,0x027f5c10) */
/* WARNING: Removing unreachable block (ram,0x027f5c40) */
/* WARNING: Removing unreachable block (ram,0x027f5c70) */
/* WARNING: Removing unreachable block (ram,0x027f5cd4) */
/* WARNING: Removing unreachable block (ram,0x027f5d0c) */
/* WARNING: Removing unreachable block (ram,0x027f5d3c) */

void FUN_027f41d0(uint *param_1,long *param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  int *piVar17;
  uint uVar18;
  uint *puVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  uint *puVar23;
  long lVar24;
  uint *puVar25;
  char cVar26;
  uint *puVar27;
  byte *pbVar28;
  ushort uVar29;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  ulong local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined *puStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  char *pcStack_90;
  int local_74;
  ushort local_70 [2];
  int local_6c [3];
  
  puVar3 = PTR_DAT_04bb2020;
  puVar1 = param_1 + 0xa27e;
  if (*param_2 < 1) goto LAB_027f5bd0;
  uVar18 = *param_1;
  if (8 < uVar18) {
    uVar18 = 0;
  }
  switch(uVar18) {
  case 1:
    iVar10 = FUN_0273cd90(param_3,&DAT_05599a90);
    if (iVar10 != 0) {
      *param_1 = 2;
      FUN_027f5fd0(param_1);
      *(undefined2 *)(param_1 + 1) = *(undefined2 *)((long)param_1 + 10);
      *(uint *)((long)param_1 + 6) = param_1[3];
      FUN_027f63d4(param_1);
      FUN_0273cfec(param_3,&DAT_05599a90,0);
      puVar3 = PTR_DAT_04bb5008;
      local_1b8 = (char *)((ulong)local_1b8._4_4_ << 0x20);
      local_98 = (undefined **)((ulong)local_98._4_4_ << 0x20);
      local_1c0 = PTR_DAT_04bc43f8 + 0x10;
      lVar15 = *(long *)PTR_DAT_04bb5008;
      uVar21 = FUN_02b674f0(&local_98,param_3);
      if ((uVar21 & 1) != 0) {
        local_1b8 = (char *)CONCAT44(local_1b8._4_4_,(uint)local_98);
      }
      FUN_02b3cb40(lVar15 + 0x26e8,&local_1c0,0x6622bd46);
      FUN_02b3aa90(*(long *)puVar3 + 0x26e8,param_3,0x6622bd46);
      param_1[0xa286] = 0;
      param_1[0xa287] = 0;
      *(undefined8 *)((long)param_1 + 0x28a1d) = 0;
      *(undefined1 *)((long)param_1 + 0x28a25) = 0x1e;
      local_98 = (undefined **)CONCAT44(local_98._4_4_,(int)(char)*puVar1);
      local_1b8 = "LE_PlayerVillager_HouseBuilt";
LAB_027f55b0:
      local_1c0 = PTR_DAT_04bb2020 + 0x10;
      FUN_01b5dea0(&local_1c0,&local_98);
    }
    break;
  case 2:
    iVar10 = FUN_0273cd90(param_3,&DAT_05599aa0);
    if (iVar10 != 0) {
      *param_1 = 3;
      FUN_027f5fd0(param_1);
      *(undefined2 *)(param_1 + 1) = *(undefined2 *)((long)param_1 + 10);
      *(uint *)((long)param_1 + 6) = param_1[3];
      FUN_027f63d4(param_1);
      FUN_0273cfec(param_3,&DAT_05599aa0,0);
      puVar3 = PTR_DAT_04bb5008;
      local_1b8 = (char *)((ulong)local_1b8._4_4_ << 0x20);
      local_98 = (undefined **)((ulong)local_98._4_4_ << 0x20);
      local_1c0 = PTR_DAT_04bc43f8 + 0x10;
      lVar15 = *(long *)PTR_DAT_04bb5008;
      uVar21 = FUN_02b674f0(&local_98,param_3);
      if ((uVar21 & 1) != 0) {
        local_1b8 = (char *)CONCAT44(local_1b8._4_4_,(uint)local_98);
      }
      FUN_02b3cb40(lVar15 + 0x26e8,&local_1c0,0x6622bd46);
      FUN_02b3aa90(*(long *)puVar3 + 0x26e8,param_3,0x6622bd46);
      local_98 = (undefined **)CONCAT44(local_98._4_4_,(int)(char)*puVar1);
      local_1b8 = "LE_PlayerVillager_HouseExpand1";
      goto LAB_027f55b0;
    }
    break;
  case 3:
    iVar10 = FUN_0273cd90(param_3,&DAT_05599ab0);
    if (iVar10 != 0) {
      *param_1 = 4;
      FUN_027f5fd0(param_1);
      FUN_0273cfec(param_3,&DAT_05599ab0,0);
      puVar3 = PTR_DAT_04bb5008;
      local_1b8 = (char *)((ulong)local_1b8._4_4_ << 0x20);
      local_98 = (undefined **)((ulong)local_98._4_4_ << 0x20);
      local_1c0 = PTR_DAT_04bc43f8 + 0x10;
      lVar15 = *(long *)PTR_DAT_04bb5008;
      uVar21 = FUN_02b674f0(&local_98,param_3);
      if ((uVar21 & 1) != 0) {
        local_1b8 = (char *)CONCAT44(local_1b8._4_4_,(uint)local_98);
      }
      FUN_02b3cb40(lVar15 + 0x26e8,&local_1c0,0x6622bd46);
      FUN_02b3aa90(*(long *)puVar3 + 0x26e8,param_3,0x6622bd46);
      local_98 = (undefined **)CONCAT44(local_98._4_4_,(int)(char)*puVar1);
      local_1b8 = "LE_PlayerVillager_HouseExpand2";
      goto LAB_027f55b0;
    }
    break;
  case 4:
    iVar10 = FUN_0273cd90(param_3,&DAT_05599ac0);
    if (iVar10 != 0) {
      *param_1 = 5;
      FUN_027f5fd0(param_1);
      *(undefined2 *)(param_1 + 1) = *(undefined2 *)((long)param_1 + 10);
      *(uint *)((long)param_1 + 6) = param_1[3];
      FUN_027f63d4(param_1);
      FUN_0273cfec(param_3,&DAT_05599ac0,0);
      puVar3 = PTR_DAT_04bb5008;
      local_1b8 = (char *)((ulong)local_1b8._4_4_ << 0x20);
      local_98 = (undefined **)((ulong)local_98._4_4_ << 0x20);
      local_1c0 = PTR_DAT_04bc43f8 + 0x10;
      lVar15 = *(long *)PTR_DAT_04bb5008;
      uVar21 = FUN_02b674f0(&local_98,param_3);
      if ((uVar21 & 1) != 0) {
        local_1b8 = (char *)CONCAT44(local_1b8._4_4_,(uint)local_98);
      }
      FUN_02b3cb40(lVar15 + 0x26e8,&local_1c0,0x6622bd46);
      FUN_02b3aa90(*(long *)puVar3 + 0x26e8,param_3,0x6622bd46);
      local_98 = (undefined **)CONCAT44(local_98._4_4_,(int)(char)*puVar1);
      local_1b8 = "LE_PlayerVillager_HouseExpand3";
      goto LAB_027f55b0;
    }
    break;
  case 5:
    iVar10 = FUN_0273cd90(param_3,&DAT_05599ad0);
    if (iVar10 != 0) {
      *param_1 = 6;
      FUN_027f5fd0(param_1);
      lVar15 = *(long *)PTR_DAT_04bb5008;
      lVar24 = 0x10 - (ulong)*(ushort *)(lVar15 + 0x7f0);
      if ((uint)lVar24 < *(uint *)(lVar15 + 2000)) {
        puVar19 = *(uint **)(*(long *)(lVar15 + 0x7d8) + lVar24 * 8);
      }
      else {
        puVar19 = (uint *)0x0;
      }
      uVar8 = (uint)*(ushort *)((long)param_1 + 6) - (uint)*(ushort *)(lVar15 + 0xbf0);
      if (((uVar8 < *(uint *)(lVar15 + 0xbd0)) &&
          (puVar27 = *(uint **)(*(long *)(lVar15 + 0xbd8) + (long)(int)uVar8 * 8),
          puVar27 != (uint *)0x0)) &&
         (uVar8 = *puVar27, uVar8 != 0 && puVar27 != (uint *)(ulong)uVar8)) {
        puVar23 = (uint *)((long)puVar27 - (long)(ulong)uVar8);
        if (((*puVar23 == 0) || (uVar8 = puVar23[1], uVar8 == 0)) ||
           ((ulong)(ushort)puVar23[2] == 0)) goto LAB_027f4c00;
        lVar15 = 0xc;
        if (*(char *)((long)puVar23 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar23 + lVar15 + (ulong)(ushort)puVar23[2] * 8;
        if (lVar15 == 0) goto LAB_027f4c00;
        uVar9 = 0;
        if ((ulong)uVar8 != 0) {
          uVar9 = (uint)((ulong)((long)puVar27 - lVar15) / (ulong)uVar8);
        }
        if (*puVar23 <= uVar9) {
          uVar9 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc46d8 <= uVar9) ||
           (uVar29 = *(ushort *)(*(long *)(PTR_DAT_04bc46d8 + 8) + (long)(int)uVar9 * 2), 8 < uVar29
           )) goto LAB_027f4c00;
      }
      else {
LAB_027f4c00:
        uVar29 = 0;
      }
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1a0 = 0;
      local_198 = 0;
      local_1c0 = PTR_DAT_04bc4830 + 0x10;
      local_190 = 0;
      uStack_188 = 0;
      local_1b8 = PTR_DAT_04bc4880 + 0x10;
      local_180 = 0;
      uStack_178 = 0;
      local_170 = PTR_DAT_04bc4828 + 0x10;
      uStack_168 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_130 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      puStack_128 = local_170;
      local_e0 = local_170;
      FUN_02aef540(&local_1c0);
      FUN_02aef7e0(&local_1c0);
      FUN_02aefa80(&local_1c0);
      local_98 = &PTR_LAB_04aa07e8;
      pcStack_90 = (char *)&local_1c0;
      FUN_02aee3a0(&local_98);
      FUN_02af0b10(&local_1c0,0x10);
      FUN_02af1de0(&local_1c0,uVar29);
      puVar2 = PTR_DAT_04bc4628;
      puVar3 = PTR_DAT_04bc4620;
      if ((puVar19 != (uint *)0x0) && (uVar8 = *puVar19, uVar8 != 0)) {
        cVar26 = *PTR_DAT_04bc4620;
        do {
          if (cVar26 == '\0') {
            cVar26 = '\x01';
            *(undefined8 *)puVar2 = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar2 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
            uVar8 = *puVar19;
          }
          else {
            uVar9 = *(uint *)(puVar2 + 0xc);
            if (-1 < (int)uVar9) {
              if ((undefined2 *)((ulong)uVar9 + (long)puVar19) == (undefined2 *)0x0) break;
              uVar7 = *(undefined2 *)((ulong)uVar9 + (long)puVar19);
              goto LAB_027f4f80;
            }
            if (uVar9 != 0xffffffff) break;
          }
          puVar27 = (uint *)(ulong)uVar8;
          uVar7 = 0;
          if ((puVar27 == (uint *)0x0) || (puVar19 == puVar27)) goto LAB_027f4f80;
          lVar15 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar27)) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar19 + (lVar15 - (long)puVar27);
          if (lVar15 == 0) break;
          uVar21 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar27));
          *(undefined4 *)(puVar2 + 0xc) = 0xfffffffe;
          if (uVar21 == 0) break;
          piVar17 = (int *)(lVar15 + 4);
          while (piVar17[-1] != 0x966fbe3) {
            piVar17 = piVar17 + 2;
            uVar21 = uVar21 - 1;
            if (uVar21 == 0) goto LAB_027f4f7c;
          }
          uVar7 = 0;
          iVar10 = 0;
          if (*piVar17 != -1) {
            iVar10 = *piVar17;
          }
          *(int *)(puVar2 + 0xc) = iVar10;
          uVar8 = *puVar19;
          if (uVar8 == 0) goto LAB_027f4f80;
        } while( true );
      }
LAB_027f4f7c:
      uVar7 = 0;
LAB_027f4f80:
      uVar8 = FUN_00da1ae4(&local_120);
      if (0 < (int)uVar8) {
        uVar9 = nn::os::GetSystemTick();
        uVar14 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
        uVar9 = uVar14 ^ uVar14 * 0x800;
        uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 2;
        uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
        uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4;
        uVar8 = (uint)((ulong)(uVar9 >> 8 ^ uVar14 >> 0x13 ^ uVar9 ^ uVar14) * (ulong)uVar8 >> 0x20)
        ;
        if ((uVar8 == 0) || (uVar9 = FUN_00da1ae4(&local_120), uVar8 < uVar9)) {
          uVar7 = FUN_00edf160(&local_120,uVar8 + 1);
        }
        else {
          uVar7 = 0;
        }
      }
      *(undefined2 *)((long)param_1 + 6) = uVar7;
      puVar2 = PTR_DAT_04bc4628;
      puVar3 = PTR_DAT_04bc4620;
      plVar22 = (long *)PTR_DAT_04bb5008;
      if (puVar19 == (uint *)0x0) {
        *(undefined2 *)(param_1 + 1) = 0;
        uVar7 = 0;
        plVar22 = (long *)PTR_DAT_04bb5008;
      }
      else {
        uVar8 = *puVar19;
        if (uVar8 != 0) {
          cVar26 = *PTR_DAT_04bc4620;
          do {
            if (cVar26 == '\0') {
              cVar26 = '\x01';
              *(undefined8 *)puVar2 = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined4 *)(puVar2 + 0x20) = 0xffffffff;
              *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
              uVar8 = *puVar19;
            }
            else {
              uVar9 = *(uint *)(puVar2 + 0x10);
              if (-1 < (int)uVar9) {
                if ((undefined2 *)((ulong)uVar9 + (long)puVar19) != (undefined2 *)0x0) {
                  uVar7 = *(undefined2 *)((ulong)uVar9 + (long)puVar19);
                  goto LAB_027f5370;
                }
                break;
              }
              if (uVar9 != 0xffffffff) break;
            }
            puVar27 = (uint *)(ulong)uVar8;
            uVar7 = 0;
            if ((puVar27 == (uint *)0x0) || (puVar19 == puVar27)) goto LAB_027f5370;
            lVar15 = 0xc;
            if (*(char *)((long)puVar19 + (10 - (long)puVar27)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar19 + (lVar15 - (long)puVar27);
            uVar7 = 0;
            if (lVar15 == 0) goto LAB_027f5370;
            uVar21 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar27));
            *(undefined4 *)(puVar2 + 0x10) = 0xfffffffe;
            if (uVar21 == 0) break;
            piVar17 = (int *)(lVar15 + 4);
            while (piVar17[-1] != -0x278d8283) {
              piVar17 = piVar17 + 2;
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) goto LAB_027f536c;
            }
            iVar10 = 0;
            if (*piVar17 != -1) {
              iVar10 = *piVar17;
            }
            *(int *)(puVar2 + 0x10) = iVar10;
            uVar8 = *puVar19;
            if (uVar8 == 0) break;
          } while( true );
        }
LAB_027f536c:
        uVar7 = 0;
LAB_027f5370:
        *(undefined2 *)(param_1 + 1) = uVar7;
        puVar2 = PTR_DAT_04bc4628;
        puVar3 = PTR_DAT_04bc4620;
        uVar8 = *puVar19;
        if (uVar8 != 0) {
          cVar26 = *PTR_DAT_04bc4620;
          do {
            if (cVar26 == '\0') {
              cVar26 = '\x01';
              *(undefined8 *)puVar2 = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined4 *)(puVar2 + 0x20) = 0xffffffff;
              *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
              uVar8 = *puVar19;
            }
            else {
              uVar9 = *(uint *)(puVar2 + 8);
              if (-1 < (int)uVar9) {
                if ((undefined2 *)((ulong)uVar9 + (long)puVar19) == (undefined2 *)0x0) break;
                uVar7 = *(undefined2 *)((ulong)uVar9 + (long)puVar19);
                goto LAB_027f5460;
              }
              if (uVar9 != 0xffffffff) break;
            }
            puVar27 = (uint *)(ulong)uVar8;
            uVar7 = 0;
            if ((puVar27 == (uint *)0x0) || (puVar19 == puVar27)) goto LAB_027f5460;
            lVar15 = 0xc;
            if (*(char *)((long)puVar19 + (10 - (long)puVar27)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar19 + (lVar15 - (long)puVar27);
            uVar7 = 0;
            if (lVar15 == 0) goto LAB_027f5460;
            uVar21 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar27));
            *(undefined4 *)(puVar2 + 8) = 0xfffffffe;
            if (uVar21 == 0) break;
            piVar17 = (int *)(lVar15 + 4);
            while (piVar17[-1] != -0x37919f2b) {
              piVar17 = piVar17 + 2;
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) goto LAB_027f545c;
            }
            uVar7 = 0;
            iVar10 = 0;
            if (*piVar17 != -1) {
              iVar10 = *piVar17;
            }
            *(int *)(puVar2 + 8) = iVar10;
            uVar8 = *puVar19;
            if (uVar8 == 0) goto LAB_027f5460;
          } while( true );
        }
LAB_027f545c:
        uVar7 = 0;
      }
LAB_027f5460:
      *(undefined2 *)(param_1 + 2) = uVar7;
      FUN_0273cfec(param_3,&DAT_05599ad0,0);
      lVar15 = *plVar22;
      local_1b8 = (char *)((ulong)local_1b8 & 0xffffffff00000000);
      local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
      local_1c0 = PTR_DAT_04bc43f8 + 0x10;
      uVar21 = FUN_02b674f0(&local_98,param_3);
      if ((uVar21 & 1) != 0) {
        local_1b8 = (char *)CONCAT44(local_1b8._4_4_,(uint)local_98);
      }
      FUN_02b3cb40(lVar15 + 0x26e8,&local_1c0,0x6622bd46);
      FUN_02b3aa90(*plVar22 + 0x26e8,param_3,0x6622bd46);
      local_98 = (undefined **)CONCAT44(local_98._4_4_,(int)(char)*puVar1);
      local_1b8 = "LE_PlayerVillager_HouseExpand4";
      goto LAB_027f55b0;
    }
    break;
  case 6:
    iVar10 = FUN_0273cd90(param_3,&DAT_05599ae0);
    if (iVar10 != 0) {
      *param_1 = 7;
      FUN_027f5fd0(param_1);
      puVar3 = PTR_DAT_04bb5008;
      puVar19 = (uint *)0x0;
      lVar15 = *(long *)PTR_DAT_04bb5008;
      if (-(uint)*(ushort *)(lVar15 + 0x7f0) < *(uint *)(lVar15 + 2000)) {
        puVar19 = *(uint **)(*(long *)(lVar15 + 0x7d8) + (ulong)*(ushort *)(lVar15 + 0x7f0) * -8);
      }
      uVar8 = (uint)*(ushort *)((long)param_1 + 6) - (uint)*(ushort *)(lVar15 + 0xbf0);
      if (((uVar8 < *(uint *)(lVar15 + 0xbd0)) &&
          (puVar27 = *(uint **)(*(long *)(lVar15 + 0xbd8) + (long)(int)uVar8 * 8),
          puVar27 != (uint *)0x0)) &&
         (uVar8 = *puVar27, uVar8 != 0 && puVar27 != (uint *)(ulong)uVar8)) {
        puVar23 = (uint *)((long)puVar27 - (long)(ulong)uVar8);
        if (((*puVar23 == 0) || (uVar8 = puVar23[1], uVar8 == 0)) ||
           ((ulong)(ushort)puVar23[2] == 0)) goto LAB_027f4894;
        lVar15 = 0xc;
        if (*(char *)((long)puVar23 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar23 + lVar15 + (ulong)(ushort)puVar23[2] * 8;
        if (lVar15 == 0) goto LAB_027f4894;
        uVar9 = 0;
        if ((ulong)uVar8 != 0) {
          uVar9 = (uint)((ulong)((long)puVar27 - lVar15) / (ulong)uVar8);
        }
        if (*puVar23 <= uVar9) {
          uVar9 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc46d8 <= uVar9) ||
           (uVar29 = *(ushort *)(*(long *)(PTR_DAT_04bc46d8 + 8) + (long)(int)uVar9 * 2), 8 < uVar29
           )) goto LAB_027f4894;
      }
      else {
LAB_027f4894:
        uVar29 = 0;
      }
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1a0 = 0;
      local_198 = 0;
      local_1c0 = PTR_DAT_04bc4830 + 0x10;
      local_190 = 0;
      uStack_188 = 0;
      local_1b8 = PTR_DAT_04bc4880 + 0x10;
      local_180 = 0;
      uStack_178 = 0;
      local_170 = PTR_DAT_04bc4828 + 0x10;
      uStack_168 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_130 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      puStack_128 = local_170;
      local_e0 = local_170;
      FUN_02aef540(&local_1c0);
      FUN_02aef7e0(&local_1c0);
      FUN_02aefa80(&local_1c0);
      local_98 = &PTR_LAB_04aa07e8;
      pcStack_90 = (char *)&local_1c0;
      FUN_02aee3a0(&local_98);
      FUN_02af0b10(&local_1c0,0);
      FUN_02af1de0(&local_1c0,uVar29);
      puVar6 = PTR_DAT_04bc4628;
      puVar2 = PTR_DAT_04bc4620;
      if ((puVar19 != (uint *)0x0) && (uVar8 = *puVar19, uVar8 != 0)) {
        cVar26 = *PTR_DAT_04bc4620;
        do {
          if (cVar26 == '\0') {
            cVar26 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            uVar8 = *puVar19;
          }
          else {
            uVar9 = *(uint *)(puVar6 + 0xc);
            if (-1 < (int)uVar9) {
              if ((undefined2 *)((ulong)uVar9 + (long)puVar19) == (undefined2 *)0x0) break;
              uVar7 = *(undefined2 *)((ulong)uVar9 + (long)puVar19);
              goto LAB_027f4a48;
            }
            if (uVar9 != 0xffffffff) break;
          }
          puVar27 = (uint *)(ulong)uVar8;
          uVar7 = 0;
          if ((puVar27 == (uint *)0x0) || (puVar19 == puVar27)) goto LAB_027f4a48;
          lVar15 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar27)) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar19 + (lVar15 - (long)puVar27);
          if (lVar15 == 0) break;
          uVar21 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar27));
          *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
          if (uVar21 == 0) break;
          piVar17 = (int *)(lVar15 + 4);
          while (piVar17[-1] != 0x966fbe3) {
            piVar17 = piVar17 + 2;
            uVar21 = uVar21 - 1;
            if (uVar21 == 0) goto LAB_027f4a44;
          }
          uVar7 = 0;
          iVar10 = 0;
          if (*piVar17 != -1) {
            iVar10 = *piVar17;
          }
          *(int *)(puVar6 + 0xc) = iVar10;
          uVar8 = *puVar19;
          if (uVar8 == 0) goto LAB_027f4a48;
        } while( true );
      }
LAB_027f4a44:
      uVar7 = 0;
LAB_027f4a48:
      iVar10 = FUN_00da1ae4(&local_120);
      if (iVar10 == 1) {
        nn::os::GetSystemTick();
        uVar7 = FUN_00edf160(&local_120,1);
      }
      *(undefined2 *)((long)param_1 + 6) = uVar7;
      puVar6 = PTR_DAT_04bc4628;
      puVar2 = PTR_DAT_04bc4620;
      if ((puVar19 != (uint *)0x0) && (uVar8 = *puVar19, uVar8 != 0)) {
        cVar26 = *PTR_DAT_04bc4620;
        do {
          if (cVar26 == '\0') {
            cVar26 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            uVar8 = *puVar19;
          }
          else {
            uVar9 = *(uint *)(puVar6 + 0x10);
            if (-1 < (int)uVar9) {
              if ((undefined2 *)((ulong)uVar9 + (long)puVar19) == (undefined2 *)0x0) break;
              uVar7 = *(undefined2 *)((ulong)uVar9 + (long)puVar19);
              goto LAB_027f4e60;
            }
            if (uVar9 != 0xffffffff) break;
          }
          puVar27 = (uint *)(ulong)uVar8;
          uVar7 = 0;
          if ((puVar27 == (uint *)0x0) || (puVar19 == puVar27)) goto LAB_027f4e60;
          lVar15 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar27)) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar19 + (lVar15 - (long)puVar27);
          uVar7 = 0;
          if (lVar15 == 0) goto LAB_027f4e60;
          uVar21 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar27));
          *(undefined4 *)(puVar6 + 0x10) = 0xfffffffe;
          if (uVar21 == 0) break;
          piVar17 = (int *)(lVar15 + 4);
          while (piVar17[-1] != -0x278d8283) {
            piVar17 = piVar17 + 2;
            uVar21 = uVar21 - 1;
            if (uVar21 == 0) goto LAB_027f4e5c;
          }
          uVar7 = 0;
          iVar10 = 0;
          if (*piVar17 != -1) {
            iVar10 = *piVar17;
          }
          *(int *)(puVar6 + 0x10) = iVar10;
          uVar8 = *puVar19;
          if (uVar8 == 0) goto LAB_027f4e60;
        } while( true );
      }
LAB_027f4e5c:
      uVar7 = 0;
LAB_027f4e60:
      *(undefined2 *)(param_1 + 1) = uVar7;
      puVar6 = PTR_DAT_04bc4628;
      puVar2 = PTR_DAT_04bc4620;
      lVar15 = *(long *)puVar3;
      uVar29 = *(ushort *)(lVar15 + 0xdf0);
      uVar8 = *(uint *)(lVar15 + 0xdd0);
      uVar9 = (uint)(ushort)param_1[2] - (uint)uVar29;
      if (uVar9 < uVar8) {
        puVar27 = *(uint **)(*(long *)(lVar15 + 0xdd8) + (long)(int)uVar9 * 8);
      }
      else {
        puVar27 = (uint *)0x0;
      }
      if ((puVar19 != (uint *)0x0) && (uVar9 = *puVar19, uVar9 != 0)) {
        cVar26 = *PTR_DAT_04bc4620;
        do {
          if (cVar26 == '\0') {
            cVar26 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            uVar9 = *puVar19;
          }
          else {
            uVar14 = *(uint *)(puVar6 + 8);
            if (-1 < (int)uVar14) {
              if ((ushort *)((ulong)uVar14 + (long)puVar19) == (ushort *)0x0) break;
              uVar14 = (uint)*(ushort *)((ulong)uVar14 + (long)puVar19);
              goto LAB_027f5124;
            }
            if (uVar14 != 0xffffffff) break;
          }
          puVar23 = (uint *)(ulong)uVar9;
          uVar14 = 0;
          if ((puVar23 == (uint *)0x0) || (puVar19 == puVar23)) goto LAB_027f5124;
          lVar24 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar23)) != '\0') {
            lVar24 = 0x1c;
          }
          lVar24 = (long)puVar19 + (lVar24 - (long)puVar23);
          uVar14 = 0;
          if (lVar24 == 0) goto LAB_027f5124;
          uVar21 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar23));
          *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
          if (uVar21 == 0) break;
          piVar17 = (int *)(lVar24 + 4);
          while (piVar17[-1] != -0x37919f2b) {
            piVar17 = piVar17 + 2;
            uVar21 = uVar21 - 1;
            if (uVar21 == 0) goto LAB_027f5120;
          }
          uVar14 = 0;
          iVar10 = 0;
          if (*piVar17 != -1) {
            iVar10 = *piVar17;
          }
          *(int *)(puVar6 + 8) = iVar10;
          uVar9 = *puVar19;
          if (uVar9 == 0) goto LAB_027f5124;
        } while( true );
      }
LAB_027f5120:
      uVar14 = 0;
LAB_027f5124:
      puVar6 = PTR_DAT_04bc4628;
      puVar2 = PTR_DAT_04bc4620;
      uVar14 = uVar14 - uVar29;
      if (uVar14 < uVar8) {
        puVar23 = *(uint **)(*(long *)(lVar15 + 0xdd8) + (long)(int)uVar14 * 8);
      }
      else {
        puVar23 = (uint *)0x0;
      }
      uVar8 = 0;
      if (((puVar27 != (uint *)0x0) && (uVar9 = *puVar27, uVar9 != 0)) &&
         (puVar27 != (uint *)(ulong)uVar9)) {
        puVar25 = (uint *)((long)puVar27 - (long)(ulong)uVar9);
        uVar8 = 0;
        if (*puVar25 != 0) {
          uVar8 = puVar25[1];
          if ((uVar8 != 0) && ((ulong)(ushort)puVar25[2] != 0)) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar25 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar25 + lVar15 + (ulong)(ushort)puVar25[2] * 8;
            if (lVar15 != 0) {
              uVar9 = 0;
              if ((ulong)uVar8 != 0) {
                uVar9 = (uint)((ulong)((long)puVar27 - lVar15) / (ulong)uVar8);
              }
              if (*puVar25 <= uVar9) {
                uVar9 = 0xffffffff;
              }
              if ((uVar9 < *(uint *)PTR_DAT_04bc46e8) &&
                 (uVar8 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc46e8 + 8) + (long)(int)uVar9 * 2),
                 uVar8 < 2)) goto LAB_027f51d0;
            }
          }
          uVar8 = 0;
        }
      }
LAB_027f51d0:
      local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,uVar8);
      uVar9 = 0;
      if (((puVar23 != (uint *)0x0) && (uVar14 = *puVar23, uVar14 != 0)) &&
         (puVar23 != (uint *)(ulong)uVar14)) {
        puVar27 = (uint *)((long)puVar23 - (long)(ulong)uVar14);
        uVar9 = 0;
        if (*puVar27 != 0) {
          uVar9 = puVar27[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar27[2] != 0)) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar27 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar27 + lVar15 + (ulong)(ushort)puVar27[2] * 8;
            if (lVar15 != 0) {
              uVar14 = 0;
              if ((ulong)uVar9 != 0) {
                uVar14 = (uint)((ulong)((long)puVar23 - lVar15) / (ulong)uVar9);
              }
              if (*puVar27 <= uVar14) {
                uVar14 = 0xffffffff;
              }
              if ((uVar14 < *(uint *)PTR_DAT_04bc46e8) &&
                 (uVar9 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc46e8 + 8) + (long)(int)uVar14 * 2)
                 , uVar9 < 2)) goto LAB_027f5268;
            }
          }
          uVar9 = 0;
        }
      }
LAB_027f5268:
      if (uVar8 != uVar9) {
        if ((puVar19 != (uint *)0x0) && (uVar8 = *puVar19, uVar8 != 0)) {
          cVar26 = *PTR_DAT_04bc4620;
          do {
            if (cVar26 == '\0') {
              cVar26 = '\x01';
              *(undefined8 *)puVar6 = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
              *puVar2 = 1;
              *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
              *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
              uVar8 = *puVar19;
            }
            else {
              uVar14 = *(uint *)(puVar6 + 8);
              if (-1 < (int)uVar14) {
                if ((undefined2 *)((ulong)uVar14 + (long)puVar19) == (undefined2 *)0x0) break;
                uVar7 = *(undefined2 *)((ulong)uVar14 + (long)puVar19);
                goto LAB_027f5514;
              }
              if (uVar14 != 0xffffffff) break;
            }
            puVar27 = (uint *)(ulong)uVar8;
            uVar7 = 0;
            if ((puVar27 == (uint *)0x0) || (puVar19 == puVar27)) goto LAB_027f5514;
            lVar15 = 0xc;
            if (*(char *)((long)puVar19 + (10 - (long)puVar27)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar19 + (lVar15 - (long)puVar27);
            uVar7 = 0;
            if (lVar15 == 0) goto LAB_027f5514;
            uVar21 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar27));
            *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
            if (uVar21 == 0) break;
            piVar17 = (int *)(lVar15 + 4);
            while (piVar17[-1] != -0x37919f2b) {
              piVar17 = piVar17 + 2;
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) goto LAB_027f5510;
            }
            uVar7 = 0;
            iVar10 = 0;
            if (*piVar17 != -1) {
              iVar10 = *piVar17;
            }
            *(int *)(puVar6 + 8) = iVar10;
            uVar8 = *puVar19;
            if (uVar8 == 0) goto LAB_027f5514;
          } while( true );
        }
LAB_027f5510:
        uVar7 = 0;
LAB_027f5514:
        *(undefined2 *)(param_1 + 2) = uVar7;
      }
      local_98._0_4_ = uVar9;
      FUN_0273cfec(param_3,&DAT_05599ae0,0);
      lVar15 = *(long *)puVar3;
      local_1b8 = (char *)((ulong)local_1b8 & 0xffffffff00000000);
      local_98 = (undefined **)((ulong)local_98._4_4_ << 0x20);
      local_1c0 = PTR_DAT_04bc43f8 + 0x10;
      uVar21 = FUN_02b674f0(&local_98,param_3);
      if ((uVar21 & 1) != 0) {
        local_1b8 = (char *)CONCAT44(local_1b8._4_4_,(uint)local_98);
      }
      FUN_02b3cb40(lVar15 + 0x26e8,&local_1c0,0x6622bd46);
      FUN_02b3aa90(*(long *)puVar3 + 0x26e8,param_3,0x6622bd46);
      local_98 = (undefined **)CONCAT44(local_98._4_4_,(int)(char)*puVar1);
      local_1b8 = "LE_PlayerVillager_HouseExpand5";
      goto LAB_027f55b0;
    }
    break;
  case 7:
    iVar10 = FUN_0273cd90(param_3,&DAT_05599af0);
    if (iVar10 != 0) {
      *param_1 = 8;
      FUN_027f5fd0(param_1);
      FUN_0273cfec(param_3,&DAT_05599af0,0);
      puVar3 = PTR_DAT_04bb5008;
      local_1b8 = (char *)((ulong)local_1b8._4_4_ << 0x20);
      local_98 = (undefined **)((ulong)local_98._4_4_ << 0x20);
      local_1c0 = PTR_DAT_04bc43f8 + 0x10;
      lVar15 = *(long *)PTR_DAT_04bb5008;
      uVar21 = FUN_02b674f0(&local_98,param_3);
      if ((uVar21 & 1) != 0) {
        local_1b8 = (char *)CONCAT44(local_1b8._4_4_,(uint)local_98);
      }
      FUN_02b3cb40(lVar15 + 0x26e8,&local_1c0,0x6622bd46);
      FUN_02b3aa90(*(long *)puVar3 + 0x26e8,param_3,0x6622bd46);
      local_98 = (undefined **)CONCAT44(local_98._4_4_,(int)(char)*puVar1);
      local_1b8 = "LE_PlayerVillager_HouseExpand6";
      goto LAB_027f55b0;
    }
    break;
  case 8:
    if ((char)*puVar1 != -1) {
      local_98 = (undefined **)CONCAT44(local_98._4_4_,(int)(char)*puVar1);
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      local_1b8 = "RcoStorageExpansionReserved";
      local_1c0 = puVar2;
      iVar10 = FUN_0274ce10(&local_98,&local_1c0);
      if (iVar10 != 0) {
        local_6c[0] = (int)(char)*puVar1;
        local_1b8 = "RcoStorageExpansion_v200_AddLevel";
        local_1c0 = puVar2;
        iVar10 = FUN_0274ce10(local_6c,&local_1c0);
        pcStack_90 = "RcoStorageExpansion_v200_AddLevel";
        local_98 = (undefined **)puVar2;
        iVar12 = FUN_0274f6e0(&local_98);
        if (iVar10 == iVar12) {
          cVar26 = (char)*puVar1;
          local_1b8 = "RcoStorageExpansion_v300";
        }
        else {
          local_1c0 = puVar3 + 0x10;
          local_98._0_4_ = (uint)(char)*puVar1;
          local_1b8 = "RcoStorageExpansionLevel";
          iVar10 = FUN_0274ce10(&local_98,&local_1c0);
          if (iVar10 == 0) {
            cVar26 = (char)*puVar1;
            local_1b8 = "RcoStorageExpansionLevel";
          }
          else {
            cVar26 = (char)*puVar1;
            local_1b8 = "RcoStorageExpansion_v200_AddLevel";
          }
        }
        local_98._0_4_ = (uint)cVar26;
        local_1c0 = puVar3 + 0x10;
        FUN_0274dc60(&local_98,&local_1c0,1);
        local_98._0_4_ = (uint)(char)*puVar1;
        local_1b8 = "RcoStorageExpansionReserved";
        local_1c0 = puVar3 + 0x10;
        FUN_0274d104(&local_98,&local_1c0,0);
        FUN_027f5fd0(param_1);
        local_98 = (undefined **)CONCAT44(local_98._4_4_,(int)(char)*puVar1);
        local_1b8 = "RcoStandbyNotice_v200_AfterStorageExpansion";
        local_1c0 = puVar3 + 0x10;
        FUN_0274dc60(&local_98,&local_1c0,1);
      }
    }
  }
  puVar3 = PTR_DAT_04bb2020;
  uVar8 = *param_1;
  if (8 < uVar8) {
    uVar8 = 0;
  }
  local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,uVar8);
  if (uVar18 == uVar8) {
    if (uVar18 != 0) {
      lVar15 = *param_2;
      iVar10 = FUN_0273cd90(param_3,&DAT_05599b00);
      iVar10 = iVar10 + (int)lVar15;
      if (9999 < iVar10) {
        iVar10 = 10000;
      }
      FUN_0273cfec(param_3,&DAT_05599b00,iVar10);
    }
  }
  else {
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_1b8 = "RcoAfterHouseRemodel";
    local_1c0 = puVar2;
    local_98._0_4_ = (int)(char)*puVar1;
    FUN_0274d104(&local_98,&local_1c0,1);
    if (*param_1 == 2) {
      local_98._0_4_ = (uint)(char)*puVar1;
      local_1b8 = "PlayerHouseBuiltToday";
      local_1c0 = puVar2;
      FUN_0274d104(&local_98,&local_1c0,1);
    }
    local_98._0_4_ = (uint)(char)*puVar1;
    local_1b8 = "ExtendMyHome";
    local_1c0 = puVar2;
    FUN_0279ac70(&local_98,&local_1c0,1);
    uVar18 = *param_1;
    if (8 < uVar18) {
      uVar18 = 0;
    }
    FUN_0169cce4(param_2,param_3,uVar18);
    iVar10 = (int)*param_2;
    if (9999 < iVar10) {
      iVar10 = 10000;
    }
    FUN_0273cfec(param_3,&DAT_05599b00,iVar10);
    uVar18 = *param_1;
    if (8 < uVar18) {
      uVar18 = 0;
    }
    local_98 = (undefined **)CONCAT44(local_98._4_4_,uVar18);
    if ((((uVar18 == 4) || (uVar18 == 5)) || (uVar18 == 6)) &&
       (local_6c[0] = (int)(char)*puVar1, local_6c[0] != -1)) {
      uVar21 = FUN_02b5fa90(local_70,param_3);
      puVar6 = PTR_DAT_04bc4618;
      puVar2 = PTR_DAT_04bc4610;
      if ((uVar21 & 1) != 0) {
        uVar11 = 0x244db4da;
        if (local_70[0] != 0) {
          lVar15 = *(long *)PTR_DAT_04bb5008;
          if (((*(long *)(lVar15 + 0x2a8) != 0) && (*(long *)(*(long *)(lVar15 + 0x2a8) + 8) != 0))
             && ((uVar18 = (uint)local_70[0] - (uint)*(ushort *)(lVar15 + 0x3f0),
                 uVar18 < *(uint *)(lVar15 + 0x3d0) &&
                 (puVar19 = *(uint **)(*(long *)(lVar15 + 0x3d8) + (long)(int)uVar18 * 8),
                 puVar19 != (uint *)0x0)))) {
            uVar18 = *puVar19;
            if (uVar18 != 0) {
              cVar26 = *PTR_DAT_04bc4610;
              do {
                if (cVar26 == '\0') {
                  cVar26 = '\x01';
                  *(undefined8 *)puVar6 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                  *puVar2 = 1;
                  *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
                  uVar18 = *puVar19;
                }
                else {
                  uVar8 = *(uint *)puVar6;
                  if (-1 < (int)uVar8) {
                    if ((undefined4 *)((ulong)uVar8 + (long)puVar19) == (undefined4 *)0x0) break;
                    uVar11 = *(undefined4 *)((ulong)uVar8 + (long)puVar19);
                    goto LAB_027f5880;
                  }
                  if (uVar8 != 0xffffffff) break;
                }
                puVar27 = (uint *)(ulong)uVar18;
                uVar11 = 0;
                if ((puVar27 == (uint *)0x0) || (puVar19 == puVar27)) goto LAB_027f5880;
                lVar15 = 0xc;
                if (*(char *)((long)puVar19 + (10 - (long)puVar27)) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar19 + (lVar15 - (long)puVar27);
                if (lVar15 == 0) break;
                uVar21 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar27));
                *(undefined4 *)puVar6 = 0xfffffffe;
                if (uVar21 == 0) break;
                piVar17 = (int *)(lVar15 + 4);
                while (piVar17[-1] != -0x181e3933) {
                  piVar17 = piVar17 + 2;
                  uVar21 = uVar21 - 1;
                  if (uVar21 == 0) goto LAB_027f5f9c;
                }
                uVar11 = 0;
                iVar10 = 0;
                if (*piVar17 != -1) {
                  iVar10 = *piVar17;
                }
                *(int *)puVar6 = iVar10;
                uVar18 = *puVar19;
                if (uVar18 == 0) goto LAB_027f5880;
              } while( true );
            }
LAB_027f5f9c:
            uVar11 = 0;
          }
        }
LAB_027f5880:
        local_74 = 0;
        uVar21 = FUN_01523b50(uVar11,local_6c,&local_74,1,0,0,0);
        if (((uVar21 & 1) != 0) && (0 < local_74)) {
          uVar29 = *(ushort *)(param_2 + 2);
          bVar4 = *(byte *)((long)param_2 + 0x12);
          bVar5 = *(byte *)((long)param_2 + 0x13);
          nn::time::IsValidDate((uint)uVar29,(uint)bVar4,(uint)bVar5);
          FUN_01b46be0(&local_1c0);
          iVar10 = local_6c[0];
          if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar12 != 0)) {
            FUN_00dd5f80(PTR_DAT_04bb8aa0);
            __cxa_guard_release(PTR_DAT_04bb8aa8);
          }
          if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
            uVar21 = 0;
            do {
              if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar21 * 4) == 0x19) goto LAB_027f591c;
              uVar21 = uVar21 + 1;
            } while (*(uint *)PTR_DAT_04bb8aa0 != uVar21);
          }
          uVar21 = 0;
LAB_027f591c:
          local_1b8 = (char *)CONCAT44((uint)bVar5 << 0x18 | (uint)bVar4 << 0x10 | (uint)uVar29,
                                       iVar10);
          local_1a0 = CONCAT44(8,(int)uVar21);
          local_198 = CONCAT71(local_198._1_7_,1);
          local_198 = CONCAT44(*(undefined4 *)PTR_DAT_04bb37e0,(undefined4)local_198);
          local_190 = CONCAT44((int)(local_190 >> 0x20),*(undefined4 *)(PTR_DAT_04bb37e0 + 4)) &
                      0xffff0000ffffffff;
          lVar15 = (**(code **)(local_1c0 + 0x20))(&local_1c0,*(undefined8 *)PTR_DAT_04bc0580);
          if (lVar15 != 0) {
            plVar20 = *(long **)PTR_DAT_04bb4fa8;
            lVar24 = *plVar20;
            plVar22 = (long *)(*(int *)((long)plVar20 + 0x14) + lVar15);
            *plVar20 = (long)plVar22;
            *plVar22 = lVar24;
            plVar22[1] = (long)plVar20;
            if (lVar24 != 0) {
              *(long **)(lVar24 + 8) = plVar22;
            }
            *(int *)(plVar20 + 2) = (int)plVar20[2] + 1;
          }
          local_1c0 = puVar3 + 0x10;
          local_1b8 = "RcoWallFtrRemoveHouseRemodel";
          FUN_0274d104(local_6c,&local_1c0,1);
        }
      }
    }
  }
  uVar8 = *param_1;
  uVar18 = uVar8;
  if (8 < uVar8) {
    uVar18 = 0;
  }
  lVar15 = *param_2;
  if (1 < (int)uVar18) {
    local_1c0._0_4_ = uVar18;
    FUN_0273d160(param_3,&DAT_05599b10);
    uVar8 = *param_1;
    lVar15 = *param_2;
  }
  if (8 < uVar8) {
    uVar8 = 0;
  }
  local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,uVar8);
  if (7 < (int)uVar8) {
    FUN_0273d160(param_3,&DAT_05599b20);
    lVar15 = *param_2;
  }
  if (lVar15 < 1) goto LAB_027f5bd0;
  bVar4 = (byte)param_1[0xa281];
  if ((bVar4 & 1) != 0) {
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)((long)param_1 + 10);
    *(uint *)((long)param_1 + 6) = param_1[3];
    FUN_027f63d4(param_1);
    local_98 = (undefined **)CONCAT44(local_98._4_4_,(int)(char)*puVar1);
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    local_1b8 = "ReformMyHome";
    local_1c0 = puVar3;
    FUN_0279ac70(&local_98,&local_1c0,1);
    local_74 = (int)(char)*puVar1;
    local_1b8 = "LE_PlayerVillager_HouseReform";
    local_1c0 = puVar3;
    FUN_01b5dea0(&local_1c0,&local_74);
    local_6c[0] = (int)(char)*puVar1;
    pcStack_90 = "reform_player_house";
    local_98 = (undefined **)puVar3;
    FUN_026012f4(&local_1c0,&local_98,local_6c);
    puVar2 = PTR_DAT_04bb2268;
    local_198 = 0;
    puVar3 = PTR_DAT_04bc33c0 + 0x10;
    local_1c0 = puVar3;
    if (*(char *)(*(long *)PTR_DAT_04bb2268 + 0xb1) == '\0') {
      if ((local_1b8 == (char *)0x0) || (lVar15 = *(long *)(local_1b8 + 8), lVar15 == 0)) {
        local_198 = 0;
      }
      else {
        local_198 = FUN_03f2a10c(0x100,**(undefined8 **)PTR_DAT_04bc3578,1);
        if ((local_198 != 0) &&
           (uVar21 = (ulong)*(uint *)(lVar15 + 0x20), 0 < (int)*(uint *)(lVar15 + 0x20))) {
          plVar22 = *(long **)(lVar15 + 0x28);
          do {
            if (*plVar22 == 0) {
              *plVar22 = local_198;
              goto LAB_027f5b5c;
            }
            plVar22 = plVar22 + 1;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
        local_198 = 0;
        *(undefined1 *)(*(long *)puVar2 + 0xb1) = 1;
      }
    }
LAB_027f5b5c:
    local_98 = (undefined **)CONCAT44(local_98._4_4_,param_3);
    FUN_02602950(&local_1c0,0x73);
    FUN_025ca928(&local_1c0,&local_98);
    local_1c0 = puVar3;
    iVar10 = FUN_025caf3c(&local_1c0);
    if (iVar10 == -1) {
LAB_027f5bac:
      if (local_1a0._4_4_ == 0) {
        local_1a0 = CONCAT44(1,(undefined4)local_1a0);
      }
    }
    else {
      iVar10 = (**(code **)(local_1c0 + 0x20))(&local_1c0);
      local_98 = (undefined **)CONCAT44(local_98._4_4_,iVar10);
      if (0xc < iVar10) goto LAB_027f5bac;
    }
    FUN_02601530(&local_1c0);
    bVar4 = (byte)param_1[0xa281];
  }
  *(byte *)(param_1 + 0xa281) = bVar4 & 0xfe;
LAB_027f5bd0:
  if (((char)*puVar1 != -1) || (*(char *)((long)param_1 + 0x289f9) != -1)) {
    uVar11 = (undefined4)((ulong)local_1c0 >> 0x20);
    *(undefined1 *)((long)param_1 + 0x28a19) = 0;
    *(undefined1 *)((long)param_1 + 0x28a1a) = 0;
    *(undefined1 *)((long)param_1 + 0x28a1b) = 0;
    *(undefined1 *)(param_1 + 0xa287) = 0;
    *(undefined1 *)((long)param_1 + 0x28a1d) = 0;
    local_1c0 = (undefined *)CONCAT44(uVar11,5);
    *(undefined1 *)((long)param_1 + 0x28a1e) = 0;
    uVar18 = *param_1;
    if (8 < uVar18) {
      uVar18 = 0;
    }
    switch(uVar18) {
    case 8:
      *(undefined1 *)((long)param_1 + 0x28a1e) = 1;
    case 7:
      local_1c0 = (undefined *)CONCAT44(uVar11,4);
      *(undefined1 *)((long)param_1 + 0x28a1d) = 1;
    case 6:
      local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,3);
      *(undefined1 *)(param_1 + 0xa287) = 1;
    case 5:
      local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,2);
      *(undefined1 *)((long)param_1 + 0x28a1b) = 1;
    case 4:
      local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,1);
      *(undefined1 *)((long)param_1 + 0x28a1a) = 1;
    case 1:
    case 2:
    case 3:
      local_1c0 = (undefined *)((ulong)local_1c0 & 0xffffffff00000000);
      *(undefined1 *)((long)param_1 + 0x28a19) = 1;
    }
    iVar10 = FUN_0252d29c();
    if ((iVar10 == -1) ||
       ((iVar10 != (char)*puVar1 && (iVar10 != *(char *)((long)param_1 + 0x289f9))))) {
      FUN_02507c6c(&local_1c0,1,1,0,0);
      puVar2 = PTR_DAT_04bb5038;
      puVar3 = PTR_DAT_04bb32e0;
      uVar21 = (ulong)local_1c0 & 0xff;
      if ((byte)local_1c0 < 8) {
        do {
          if (7 < (byte)*puVar3 || (uint)(byte)*puVar3 != (uint)uVar21) {
            local_98 = (undefined **)CONCAT71(local_98._1_7_,(char)uVar21);
            iVar10 = FUN_02582fe0(&local_98);
            if ((iVar10 != -1) &&
               ((iVar10 == (char)*puVar1 || (iVar10 == *(char *)((long)param_1 + 0x289f9)))))
            goto LAB_027f5d68;
            bVar4 = (byte)local_1c0;
            uVar21 = (ulong)local_1c0 & 0xff;
            if (7 < (byte)local_1c0) break;
            if (uVar21 + 1 == 8) {
LAB_027f5e20:
              uVar21 = 0xff;
            }
            else {
              pbVar28 = puVar2 + uVar21 + 1;
              uVar13 = FUN_02507924(&local_1c0,pbVar28);
              if ((uVar13 & 1) == 0) {
                if (uVar21 + 2 == 8) goto LAB_027f5e20;
                pbVar28 = puVar2 + uVar21 + 2;
                uVar13 = FUN_02507924(&local_1c0,pbVar28);
                if ((uVar13 & 1) == 0) {
                  if (uVar21 + 3 == 8) goto LAB_027f5e20;
                  pbVar28 = puVar2 + uVar21 + 3;
                  uVar13 = FUN_02507924(&local_1c0,pbVar28);
                  if ((uVar13 & 1) == 0) {
                    if (uVar21 + 4 == 8) goto LAB_027f5e20;
                    pbVar28 = puVar2 + uVar21 + 4;
                    uVar13 = FUN_02507924(&local_1c0,pbVar28);
                    if ((uVar13 & 1) == 0) {
                      if (uVar21 + 5 == 8) goto LAB_027f5e20;
                      pbVar28 = puVar2 + uVar21 + 5;
                      uVar13 = FUN_02507924(&local_1c0,pbVar28);
                      if ((uVar13 & 1) == 0) {
                        if (uVar21 + 6 == 8) goto LAB_027f5e20;
                        pbVar28 = puVar2 + uVar21 + 6;
                        uVar13 = FUN_02507924(&local_1c0,pbVar28);
                        if ((uVar13 & 1) == 0) {
                          if (uVar21 + 7 == 8) goto LAB_027f5e20;
                          pbVar28 = puVar2 + uVar21 + 7;
                          uVar13 = FUN_02507924(&local_1c0,pbVar28);
                          if ((uVar13 & 1) == 0) {
                            if (bVar4 == 0) goto LAB_027f5e20;
                            pbVar28 = puVar2 + uVar21 + 8;
                            FUN_02507924(&local_1c0,pbVar28);
                          }
                        }
                      }
                    }
                  }
                }
              }
              uVar18 = (uint)*pbVar28;
              if (7 < uVar18) {
                uVar18 = 0xff;
              }
              uVar21 = (ulong)uVar18;
            }
            local_1c0 = (undefined *)CONCAT71(local_1c0._1_7_,(char)uVar21);
          }
        } while ((uint)uVar21 < 8);
      }
      uVar16 = 0;
    }
    else {
LAB_027f5d68:
      uVar16 = 1;
    }
    FUN_026e6bf0(param_1 + 0xa286,param_2,uVar16);
  }
  uVar18 = *param_1;
  if (8 < uVar18) {
    uVar18 = 0;
  }
  if (1 < (int)uVar18) {
    local_1c0 = PTR_DAT_04bb2020 + 0x10;
    local_1b8 = "AnyPlayerHouseBuilt";
    FUN_0273f3c4(&local_1c0,1);
  }
  return;
}

