
undefined8 FUN_0233c2c0(long param_1,undefined4 *param_2,undefined8 param_3,long *param_4)

{
  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  char *local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  uint *local_70;
  undefined2 local_68 [2];
  uint local_64;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_2);
  puVar4 = PTR_DAT_04bc0510;
  lVar11 = *(long *)puVar3;
  if (lVar11 == 0) {
    return 0;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar5) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return 0;
  }
  local_80 = (undefined *)CONCAT44(local_80._4_4_,2);
  if ((*(uint *)(param_1 + 0x15f4) >> 2 & 1) != 0) goto LAB_0233c594;
  uVar5 = FUN_0277d6c4(param_4);
  lVar10 = *(long *)puVar3;
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_80 = puVar4 + 0x10;
      local_70 = (uint *)0x0;
      local_78 = (undefined4)*param_4;
      uStack_74 = *(undefined4 *)((long)param_4 + 4);
      uVar5 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar3 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(param_4);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
             (((puVar8 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar8 != (uint *)0x0 && (uVar5 = *puVar8, local_70 = puVar8, uVar5 != 0)) &&
              (puVar8 != (uint *)(ulong)uVar5)))) {
            puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
            if (((*puVar9 != 0) && (uVar5 = puVar9[1], uVar5 != 0)) &&
               ((ulong)(ushort)puVar9[2] != 0)) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar10 != 0) {
                uVar2 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar5);
                }
                if (*puVar9 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                   (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 0x78)) {
                  local_a8 = 0;
                  local_b0 = (undefined *)CONCAT53(local_b0._3_5_,0x10001);
                  uVar6 = FUN_01adddf0(&local_80,&local_b0);
joined_r0x0233c4e0:
                  if ((uVar6 & 1) != 0) goto LAB_0233c594;
                  goto LAB_0233c58c;
                }
              }
            }
          }
        }
      }
      local_68[0] = 0;
      FUN_01adab50(&local_80,local_68);
      uVar5 = 0;
      do {
        local_64 = uVar5;
        if (local_64 != 0) {
          local_98 = (undefined *)CONCAT44(local_98._4_4_,local_64);
          if (local_64 < 0xe) {
            local_b0 = (undefined *)CONCAT44(local_b0._4_4_,local_64);
            uVar5 = local_64 + 7;
            if (-1 < (int)local_64) {
              uVar5 = local_64;
            }
            if (((uint)((int)uVar5 >> 3) < 2) &&
               (local_b0 = (undefined *)CONCAT44(local_b0._4_4_,local_64),
               (*(byte *)((long)local_68 + (ulong)(uint)((int)uVar5 >> 3)) >> (ulong)(local_64 & 7)
               & 1) != 0)) {
              if (local_64 == 9) {
                local_a8 = 0;
                local_b0 = (undefined *)CONCAT53(local_b0._3_5_,0x10000);
                local_b0 = (undefined *)CONCAT62(local_b0._2_6_,1);
                uVar6 = FUN_01add954(&local_80,&local_b0);
                goto joined_r0x0233c4e0;
              }
              break;
            }
          }
        }
        uVar5 = local_64 + 1;
      } while (local_64 + 1 != 0xe);
    }
  }
LAB_0233c58c:
  param_4 = (long *)PTR_DAT_04bb37e0;
LAB_0233c594:
  local_80 = puVar4 + 0x10;
  local_88 = (undefined2)*param_4;
  local_70 = (uint *)0x0;
  local_86 = *(undefined1 *)((long)param_4 + 2);
  local_85 = *(undefined1 *)((long)param_4 + 3);
  local_84 = *(undefined4 *)((long)param_4 + 4);
  lVar10 = *param_4;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  lVar11 = *(long *)puVar3;
  uVar5 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar3 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8), lVar11 != 0)) {
        local_70 = (uint *)lVar11;
      }
    }
  }
  FUN_01adf970(&local_b0,&local_80);
  local_98 = PTR_DAT_04bb2020 + 0x10;
  local_90 = "Kimono";
  (**(code **)(local_b0 + 0x18))(&local_b0);
  lVar11 = 0;
  do {
    if (*(char *)(local_a8 + lVar11) == '\0') {
LAB_0233c6c0:
      iVar7 = (int)lVar11;
joined_r0x0233c6c4:
      if (iVar7 < 6) {
        return 0;
      }
      uVar6 = 0;
      while( true ) {
        pcVar1 = (char *)(local_a8 + uVar6);
        (**(code **)(local_98 + 0x18))(&local_98);
        if ((pcVar1 == local_90) ||
           ((*pcVar1 == *local_90 &&
            ((*pcVar1 == '\0' ||
             ((pcVar1[1] == local_90[1] &&
              ((pcVar1[1] == '\0' ||
               ((pcVar1[2] == local_90[2] &&
                ((pcVar1[2] == '\0' ||
                 ((pcVar1[3] == local_90[3] &&
                  ((pcVar1[3] == '\0' ||
                   ((pcVar1[4] == local_90[4] && ((pcVar1[4] == '\0' || (pcVar1[5] == local_90[5])))
                    ))))))))))))))))))) break;
        uVar6 = uVar6 + 1;
        if (iVar7 - 5 == uVar6) {
          return 0;
        }
      }
      if ((int)uVar6 == -1) {
        return 0;
      }
      lVar12 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4(param_3);
      lVar11 = *(long *)puVar3;
      if (lVar11 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          return 1;
        }
      }
      uVar5 = FUN_0277d6c4(&local_88);
      lVar12 = *(long *)puVar3;
      if (lVar12 == 0) {
        return 0;
      }
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if (*(uint *)(lVar11 + 0x1d8) <= uVar5) {
        return 0;
      }
      if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
        return 0;
      }
      local_b0 = puVar4 + 0x10;
      local_a0 = 0;
      local_a8 = lVar10;
      uVar5 = FUN_0277d6c4(&local_a8);
      if (*(long *)puVar3 != 0) {
        lVar10 = *(long *)(lVar12 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(&local_88);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8), lVar10 != 0)) {
            local_a0 = lVar10;
          }
        }
      }
      iVar7 = FUN_01ad78cc(&local_b0);
      if (iVar7 == 0x11) {
        return 1;
      }
      return 0;
    }
    if (*(char *)(local_a8 + lVar11 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_0233c6c0;
    }
    if (*(char *)(local_a8 + lVar11 + 2) == '\0') {
      iVar7 = (int)lVar11 + 2;
      goto joined_r0x0233c6c4;
    }
    lVar11 = lVar11 + 3;
    if (lVar11 == 0x80001) {
      return 0;
    }
  } while( true );
}

