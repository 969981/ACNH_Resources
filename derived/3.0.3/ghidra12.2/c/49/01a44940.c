
void FUN_01a44940(long *param_1,uint param_2,long param_3)

{
  ushort *puVar1;
  undefined2 *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  uint local_80c;
  undefined4 local_7e8;
  undefined4 uStack_7e4;
  uint *local_7e0;
  undefined4 local_7d8;
  undefined4 uStack_7d4;
  undefined8 local_7d0;
  uint *puStack_7c8;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  
  puVar1 = &DAT_0417771a + (ulong)param_2 * 4;
  if (6 < param_2) {
    puVar1 = &DAT_0417771a;
  }
  uVar3 = *puVar1;
  puVar2 = &DAT_0417771a + (ulong)param_2 * 4;
  if (6 < param_2) {
    puVar2 = &DAT_0417771a;
  }
  uVar4 = puVar2[1];
  puVar2 = &DAT_0417771a + (ulong)param_2 * 4;
  if (6 < param_2) {
    puVar2 = &DAT_0417771a;
  }
  uVar5 = puVar2[2];
  puVar2 = &DAT_0417771a + (ulong)param_2 * 4;
  if (6 < param_2) {
    puVar2 = &DAT_0417771a;
  }
  uVar6 = puVar2[3];
  lVar14 = *(long *)PTR_DAT_04bb46b0;
  local_6c = param_2;
  if (lVar14 != 0) {
    puVar15 = *(undefined8 **)(lVar14 + 0x10);
    if ((*(byte *)(lVar14 + 0x453) & 1) == 0) {
      lVar12 = (**(code **)(*(long *)*puVar15 + 0x38))();
      lVar14 = 0;
      if (lVar12 != 0) {
        lVar14 = lVar12 + 0x70;
      }
      goto LAB_01a44a28;
    }
    if (puVar15 != (undefined8 *)0x0) {
      lVar14 = 0;
      if ((long *)puVar15[0x26] != (long *)0x0) {
        lVar14 = (**(code **)(*(long *)puVar15[0x26] + 0x38))();
      }
      goto LAB_01a44a28;
    }
  }
  lVar14 = 0;
LAB_01a44a28:
  if ((*(long **)(lVar14 + 0x1c2520) == (long *)0x0) ||
     (puVar15 = (undefined8 *)**(long **)(lVar14 + 0x1c2520), puVar15 == (undefined8 *)0x0)) {
    local_80c = 0;
  }
  else {
    local_80c = (**(code **)*puVar15)();
  }
  lVar12 = *(long *)(lVar14 + 0x1c2500);
  lVar13 = *(long *)(lVar14 + 0x1c2508);
  uVar9 = (*(byte *)(lVar13 + lVar12) >> 6) - 1;
  if (uVar9 < 3) {
    local_70 = *(uint *)(&DAT_04177754 + (long)(int)uVar9 * 4);
  }
  else {
    local_70 = 0xb;
  }
  local_7d0 = (undefined **)
              (CONCAT44(local_7d0._4_4_,(uint)(*(byte *)(lVar12 + lVar13) >> 4)) &
              0xffffffff00000003);
  if ((int)local_7d0 - 1U < 3) {
    local_74 = *(uint *)(&DAT_04177754 + (long)(int)((int)local_7d0 - 1U) * 4);
  }
  else {
    local_74 = 0xb;
  }
  local_7d0 = (undefined **)
              (CONCAT44(local_7d0._4_4_,(uint)(*(byte *)(lVar12 + lVar13) >> 2)) &
              0xffffffff00000003);
  if ((int)local_7d0 - 1U < 3) {
    local_78 = *(uint *)(&DAT_04177754 + (long)(int)((int)local_7d0 - 1U) * 4);
  }
  else {
    local_78 = 0xb;
  }
  local_7d0 = (undefined **)
              (CONCAT44(local_7d0._4_4_,(uint)*(byte *)(lVar12 + lVar13)) & 0xffffffff00000003);
  if ((int)local_7d0 - 1U < 3) {
    local_7c = *(uint *)(&DAT_04177754 + (long)(int)((int)local_7d0 - 1U) * 4);
  }
  else {
    local_7c = 0xb;
  }
  if (uVar3 != 0) {
    puStack_7c8 = &local_70;
    local_7d0 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(param_1,&local_7d0);
  }
  if (uVar4 != 0) {
    puStack_7c8 = &local_74;
    local_7d0 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(param_1,&local_7d0);
  }
  if (uVar5 != 0) {
    puStack_7c8 = &local_78;
    local_7d0 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(param_1,&local_7d0);
  }
  if (uVar6 != 0) {
    puStack_7c8 = &local_7c;
    local_7d0 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(param_1,&local_7d0);
  }
  memcpy(&local_7d0,param_1 + 1,0x754);
  if (param_3 != -1) {
    uVar9 = ((uint)param_3 ^ (uint)param_3 >> 0x1e) * 0x6c078965 + 1;
    *(uint *)((long)param_1 + 0x75c) = uVar9;
    uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
    *(uint *)(param_1 + 0xec) = uVar9;
    uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 3;
    *(uint *)((long)param_1 + 0x764) = uVar9;
    *(uint *)(param_1 + 0xed) = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4;
  }
  puVar8 = PTR_DAT_04bb43c0;
  iVar18 = 0;
  do {
    (**(code **)(*param_1 + 0x10))(&local_7d8,param_1,iVar18);
    if ((short)local_7d8 != -2) {
      lVar12 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar9 = FUN_0277d6c4(&local_7d8);
      if ((0x752 < (uVar9 >> 3 & 0x1fff)) ||
         ((*(uint *)(lVar12 + (ulong)((uVar9 & 0xffff) >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) == 0
         )) {
        uVar9 = *(uint *)((long)param_1 + 0x75c);
        local_7e0 = (uint *)0x0;
        *(int *)((long)param_1 + 0x75c) = (int)param_1[0xec];
        uVar11 = *(uint *)(param_1 + 0xed);
        uVar9 = uVar9 ^ uVar9 << 0xb;
        *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)((long)param_1 + 0x764);
        lVar12 = *(long *)puVar8;
        *(uint *)((long)param_1 + 0x764) = uVar11;
        uVar9 = uVar9 >> 8 ^ uVar11 >> 0x13 ^ uVar9 ^ uVar11;
        *(uint *)(param_1 + 0xed) = uVar9;
        local_7e8 = local_7d8;
        uStack_7e4 = uStack_7d4;
        uVar10 = FUN_0277d6c4(&local_7e8);
        uVar11 = 0;
        if (*(long *)puVar8 == 0) goto LAB_01a44de4;
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar11 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          lVar12 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(&local_7d8);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if (*(uint *)(lVar12 + 0x1d8) <= uVar11) goto LAB_01a44de0;
          puVar16 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar11 * 8);
          if (puVar16 == (uint *)0x0) goto LAB_01a44de0;
          uVar10 = *puVar16;
          uVar11 = 0;
          local_7e0 = puVar16;
          if ((uVar10 != 0) && (puVar16 != (uint *)(ulong)uVar10)) {
            puVar17 = (uint *)((long)puVar16 - (long)(ulong)uVar10);
            uVar11 = 0;
            if (*puVar17 != 0) {
              uVar11 = puVar17[1];
              if ((uVar11 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                lVar12 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)puVar17 + lVar12 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar12 != 0) {
                  uVar10 = 0;
                  if ((ulong)uVar11 != 0) {
                    uVar10 = (uint)((ulong)((long)puVar16 - lVar12) / (ulong)uVar11);
                  }
                  if (*puVar17 <= uVar10) {
                    uVar10 = 0xffffffff;
                  }
                  if ((uVar10 < *(uint *)PTR_DAT_04bc0068) &&
                     (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar10 * 2),
                     uVar11 = (uint)uVar7, uVar7 < 0x13e)) goto LAB_01a44de4;
                }
              }
              goto LAB_01a44de0;
            }
          }
        }
        else {
LAB_01a44de0:
          uVar11 = 0;
        }
LAB_01a44de4:
        uVar9 = (uint)((ulong)uVar9 * 100 >> 0x20);
        if (uVar11 == local_70) {
          if (uVar3 <= uVar9 && uVar9 != uVar3) {
LAB_01a44e48:
            lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
            uVar9 = FUN_0277d6c4(&local_7d8);
joined_r0x01a44ed4:
            if ((uVar9 >> 3 & 0x1fff) < 0x753) {
              lVar13 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
              *(uint *)(lVar12 + lVar13) =
                   *(uint *)(lVar12 + lVar13) & (1 << (ulong)(uVar9 & 0x1f) ^ 0xffffffffU);
            }
          }
        }
        else {
          uVar10 = (uint)uVar4;
          if ((uVar11 == local_74) || (uVar10 = (uint)uVar5, uVar11 == local_78)) {
            if (uVar10 < uVar9) goto LAB_01a44e48;
          }
          else if ((uVar11 == local_7c) && (uVar6 < uVar9)) {
            lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
            uVar9 = FUN_0277d6c4(&local_7d8);
            goto joined_r0x01a44ed4;
          }
        }
      }
    }
    iVar18 = iVar18 + 1;
    if (iVar18 == 15000) {
      lVar13 = (**(code **)(*param_1 + 0x20))(param_1);
      lVar12 = 0;
      iVar18 = 0;
      do {
        puVar16 = (uint *)(lVar13 + lVar12);
        lVar12 = lVar12 + 4;
        uVar9 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
        uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
        uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
        uVar9 = uVar9 + (uVar9 >> 8);
        iVar18 = (uVar9 + (uVar9 >> 0x10) & 0x3f) + iVar18;
      } while (lVar12 != 0x754);
      if (iVar18 == 0) {
        memcpy(param_1 + 1,&local_7d0,0x754);
      }
      if ((((local_80c & 1) != 0) && (*(long *)(lVar14 + 0x1c2520) != 0)) &&
         (puVar15 = *(undefined8 **)(*(long *)(lVar14 + 0x1c2520) + 8), puVar15 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar15)();
      }
      return;
    }
  } while( true );
}

