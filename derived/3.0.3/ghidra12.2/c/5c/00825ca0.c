
void FUN_00825ca0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined4 local_ac;
  undefined *local_a8 [4];
  int local_84;
  byte local_7c [4];
  byte local_78 [4];
  byte local_74 [4];
  undefined *local_70;
  char *pcStack_68;
  
  FUN_02507c6c(local_a8,1,1,0,0);
  puVar6 = PTR_DAT_04bb5038;
  uVar14 = 0;
  if ((byte)local_a8[0] < 8) {
    uVar14 = 0;
    bVar4 = (byte)local_a8[0];
    do {
      local_74[0] = bVar4;
      uVar7 = FUN_02582fe0(local_74);
      if (uVar7 != 0xffffffff) {
        uVar14 = 1 << (ulong)(uVar7 & 0x1f) | uVar14;
        if (*(int *)(param_1 + 0xf8) != 0) {
          puVar16 = *(undefined8 **)(param_1 + 0x100);
          lVar15 = (long)*(int *)(param_1 + 0xf8) << 3;
          do {
            local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
            if (((((uint *)*puVar16)[1] & 1) == 0) && (*(uint *)*puVar16 == uVar7))
            goto LAB_00825f68;
            puVar16 = puVar16 + 1;
            lVar15 = lVar15 + -8;
          } while (lVar15 != 0);
        }
        FUN_007b4110();
        local_78[0] = (byte)local_a8[0];
        if (7 < (byte)local_a8[0]) {
          local_78[0] = 0xff;
        }
        FUN_008134e0(*(undefined8 *)PTR_DAT_04bb48c8,local_78);
      }
LAB_00825f68:
      bVar4 = (byte)local_a8[0];
      uVar11 = (ulong)local_a8[0] & 0xff;
      if ((7 < (byte)local_a8[0]) || (uVar11 + 1 == 8)) break;
      pbVar13 = puVar6 + uVar11 + 1;
      uVar10 = FUN_02507924(local_a8,pbVar13);
      if ((uVar10 & 1) == 0) {
        if (uVar11 + 2 == 8) break;
        pbVar13 = puVar6 + uVar11 + 2;
        uVar10 = FUN_02507924(local_a8,pbVar13);
        if ((uVar10 & 1) == 0) {
          if (uVar11 + 3 == 8) break;
          pbVar13 = puVar6 + uVar11 + 3;
          uVar10 = FUN_02507924(local_a8,pbVar13);
          if ((uVar10 & 1) == 0) {
            if (uVar11 + 4 == 8) break;
            pbVar13 = puVar6 + uVar11 + 4;
            uVar10 = FUN_02507924(local_a8,pbVar13);
            if ((uVar10 & 1) == 0) {
              if (uVar11 + 5 == 8) break;
              pbVar13 = puVar6 + uVar11 + 5;
              uVar10 = FUN_02507924(local_a8,pbVar13);
              if ((uVar10 & 1) == 0) {
                if (uVar11 + 6 == 8) break;
                pbVar13 = puVar6 + uVar11 + 6;
                uVar10 = FUN_02507924(local_a8,pbVar13);
                if ((uVar10 & 1) == 0) {
                  if (uVar11 + 7 == 8) break;
                  pbVar13 = puVar6 + uVar11 + 7;
                  uVar10 = FUN_02507924(local_a8,pbVar13);
                  if ((uVar10 & 1) == 0) {
                    if (bVar4 == 0) break;
                    pbVar13 = puVar6 + uVar11 + 8;
                    FUN_02507924(local_a8,pbVar13);
                  }
                }
              }
            }
          }
        }
      }
      bVar4 = *pbVar13;
      if (7 < bVar4) break;
      local_a8[0] = (undefined *)CONCAT71(local_a8[0]._1_7_,bVar4);
    } while( true );
  }
  puVar5 = PTR_DAT_04bb4fb8;
  FUN_0250a000(*(undefined8 *)PTR_DAT_04bb4fb8);
  if (*(int *)(param_1 + 0xf8) != 0) {
    lVar15 = (long)*(int *)(param_1 + 0xf8) << 3;
    puVar16 = *(undefined8 **)(param_1 + 0x100);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bc3460 + 0x10;
    do {
      local_a8[0] = (undefined *)((ulong)local_a8[0] & 0xffffffff00000000);
      uVar9 = *(undefined8 *)puVar5;
      uVar3 = *(undefined4 *)*puVar16;
      if ((((undefined4 *)*puVar16)[1] & 1) == 0) {
        uVar7 = FUN_0250b014(uVar9,0,uVar3);
        if ((uVar14 >> (ulong)(*(uint *)*puVar16 & 0x1f) & 1) == 0) {
          FUN_007b3ddc();
          pbVar13 = puVar6 + uVar7;
          if (7 < uVar7) {
            pbVar13 = PTR_DAT_04bb32e0;
          }
          local_7c[0] = *pbVar13;
          uVar9 = *(undefined8 *)PTR_DAT_04bb48c8;
          if (7 < local_7c[0]) {
            local_7c[0] = 0xff;
          }
          FUN_02582a24(local_7c);
          uVar7 = FUN_02582d8c(local_7c,1);
          uVar11 = 0xffffffff;
          if (uVar7 < 8) {
            lVar12 = *(long *)puVar5 + (ulong)uVar7 * 0x13f0;
            if (*(char *)(lVar12 + 0x13d4) == '\0') {
              uVar11 = 0xffffffff;
            }
            else {
              uVar11 = 0xffffffff;
              if (*(int *)(lVar12 + 0x13d0) == 0) {
                uVar11 = (ulong)*(byte *)(lVar12 + 0x13d5);
              }
            }
          }
          FUN_00813330(uVar9,uVar11);
          local_ac = *(undefined4 *)*puVar16;
          pcStack_68 = "sys_join_sub_player";
          local_70 = puVar1;
          FUN_026012f4(local_a8,&local_70,&local_ac);
          local_a8[0] = puVar2;
          FUN_02602bc0(local_a8,2);
          local_a8[0] = puVar2;
          iVar8 = FUN_025e14ec(local_a8);
          if (iVar8 == -1) {
LAB_00825e88:
            if (local_84 == 0) {
              local_84 = 1;
            }
          }
          else {
            iVar8 = (**(code **)(local_a8[0] + 0x20))(local_a8);
            local_70 = (undefined *)CONCAT44(local_70._4_4_,iVar8);
            if (0xc < iVar8) goto LAB_00825e88;
          }
          FUN_02601530(local_a8);
        }
      }
      else {
        FUN_0250b014(uVar9,1,uVar3);
      }
      puVar16 = puVar16 + 1;
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
  }
  return;
}

