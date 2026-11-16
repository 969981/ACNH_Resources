
void FUN_02855280(long param_1,uint *param_2,uint *param_3,uint param_4)

{
  undefined **ppuVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  uint uVar11;
  byte *pbVar12;
  ulong uVar13;
  uint local_90 [3];
  uint local_84;
  byte local_80 [12];
  undefined1 local_74 [4];
  undefined8 local_70;
  char *pcStack_68;
  
  if (((*param_3 & 1) != 0) && (uVar4 = FUN_02855af0(param_2), uVar4 != 0xffffffff)) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined2 *)(param_1 + 0x26) = 0x101;
    *(undefined1 **)(param_1 + 0x2c) = &LAB_01010000;
    *(undefined1 *)(param_1 + 0x34) = 0xff;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_70._4_4_ = (undefined4)((ulong)local_70 >> 0x20);
    *(undefined1 *)(param_1 + 0x37) = 0;
    local_70._0_4_ = 1;
    *(undefined1 *)(param_1 + 0x35) = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0xfffe;
    *(undefined1 *)(param_1 + 0x38) = 1;
    FUN_0277d4ac();
    local_70 = (undefined **)CONCAT44(local_70._4_4_,1);
    *(char *)(param_1 + 0x34) = (char)uVar4;
    *(undefined1 *)(param_1 + 0x37) = 1;
    *param_2 = *param_2 & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
  }
  FUN_02507c6c(local_80,1,1,0,0);
  local_84 = 0;
  uVar11 = 0;
  uVar4 = 0;
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  do {
    uVar8 = 1 << (ulong)(uVar4 & 0x1f);
    if ((param_2[uVar4 >> 5] & uVar8) != 0) {
      bVar2 = 0xff;
      if (local_80[0] < 8) {
        bVar2 = local_80[0];
      }
      local_90[0] = CONCAT31(local_90[0]._1_3_,bVar2);
      if (local_80[0] < 8) {
        do {
          iVar5 = FUN_021d7030(uVar4,local_90);
          if (iVar5 < 0) {
            uVar6 = 0;
          }
          else {
            pcStack_68 = "Friendship";
            local_74[0] = (undefined1)local_90[0];
            if (7 < (local_90[0] & 0xff)) {
              local_74[0] = 0xff;
            }
            local_70 = ppuVar1;
            uVar6 = FUN_02669430(local_74);
            uVar7 = FUN_02746f80(uVar4,iVar5,&local_70,uVar6 & 1);
            if (uVar7 < 0x1e) {
              uVar6 = 1;
            }
            else if (uVar7 < 0x3c) {
              uVar6 = 2;
            }
            else if (uVar7 < 100) {
              uVar6 = 3;
            }
            else if (uVar7 < 0x96) {
              uVar6 = 4;
            }
            else {
              uVar6 = 5;
              if (199 < uVar7) {
                uVar6 = 6;
              }
            }
          }
          local_70 = (undefined **)CONCAT44(local_70._4_4_,uVar6);
          if (uVar6 < 3) goto LAB_028553ac;
          bVar2 = (byte)local_90[0];
          uVar13 = (ulong)(byte)local_90[0];
          if ((7 < (byte)local_90[0]) || (uVar13 == 7)) break;
          pbVar12 = &DAT_0548e169 + uVar13;
          uVar9 = FUN_02507924(local_90,pbVar12);
          if ((uVar9 & 1) == 0) {
            if (uVar13 == 6) break;
            pbVar12 = &DAT_0548e16a + uVar13;
            uVar9 = FUN_02507924(local_90,pbVar12);
            if ((uVar9 & 1) == 0) {
              if (uVar13 == 5) break;
              pbVar12 = &DAT_0548e16b + uVar13;
              uVar9 = FUN_02507924(local_90,pbVar12);
              if ((uVar9 & 1) == 0) {
                if (uVar13 == 4) break;
                pbVar12 = &DAT_0548e16c + uVar13;
                uVar9 = FUN_02507924(local_90,pbVar12);
                if ((uVar9 & 1) == 0) {
                  if (uVar13 == 3) break;
                  pbVar12 = &DAT_0548e16d + uVar13;
                  uVar9 = FUN_02507924(local_90,pbVar12);
                  if ((uVar9 & 1) == 0) {
                    if (uVar13 == 2) break;
                    pbVar12 = &DAT_0548e16e + uVar13;
                    uVar9 = FUN_02507924(local_90,pbVar12);
                    if ((uVar9 & 1) == 0) {
                      if (uVar13 == 1) break;
                      pbVar12 = &DAT_0548e16f + uVar13;
                      uVar9 = FUN_02507924(local_90,pbVar12);
                      if ((uVar9 & 1) == 0) {
                        if (bVar2 == 0) break;
                        pbVar12 = &DAT_0548e170 + uVar13;
                        FUN_02507924(local_90,pbVar12);
                      }
                    }
                  }
                }
              }
            }
          }
          if (7 < *pbVar12) break;
          local_90[0] = CONCAT31(local_90[0]._1_3_,*pbVar12);
        } while( true );
      }
      uVar11 = uVar8 | uVar11;
      local_84 = uVar11;
    }
LAB_028553ac:
    puVar3 = PTR_DAT_04bb39d8;
    uVar4 = uVar4 + 1;
  } while (uVar4 != 10);
  uVar11 = *param_3 >> 4 & 3;
  uVar4 = uVar11 - (uVar11 >> 1);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
  uVar4 = uVar4 + (uVar4 >> 8);
  uVar4 = uVar4 + (uVar4 >> 0x10) & 0x3f;
  uVar13 = (ulong)uVar4;
  while (uVar4 != 0) {
    if (DAT_055a345c == '\0') {
      puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar3);
      uVar4 = *puVar10 ^ *puVar10 << 0xb;
      uVar8 = puVar10[3];
      *puVar10 = puVar10[1];
      puVar10[1] = puVar10[2];
      uVar4 = uVar4 >> 8 ^ uVar8 >> 0x13 ^ uVar4 ^ uVar8;
      puVar10[2] = uVar8;
      puVar10[3] = uVar4;
    }
    else {
      uVar4 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      uVar4 = uVar4 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar4 ^ DAT_05582b7c;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar4;
    }
    uVar8 = uVar11 - (uVar11 >> 1);
    uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
    iVar5 = (int)(uVar13 * uVar4 >> 0x20);
    uVar4 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
    uVar4 = uVar4 + (uVar4 >> 8);
    if ((iVar5 + 1 <= (int)(uVar4 + (uVar4 >> 0x10) & 0x3f)) && (uVar11 != 0)) {
      iVar5 = iVar5 + 2;
      uVar4 = uVar11;
      do {
        iVar5 = iVar5 + -1;
        if (iVar5 < 2) {
          uVar4 = uVar4 - 1 & (uVar4 ^ 0xffffffff);
          uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
          uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
          uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
          uVar4 = uVar4 + (uVar4 >> 8);
          uVar4 = uVar4 + (uVar4 >> 0x10);
          uVar8 = uVar4 & 0x3f;
          if (uVar8 < 2) {
            uVar8 = (*(code *)(&PTR_FUN_04a91d08)[(ulong)uVar8 * 2])(param_1,&local_84,param_4 & 1);
            if (uVar8 < 10) {
              *param_2 = *param_2 & (1 << (ulong)(uVar8 & 0x1f) ^ 0xffffffffU);
            }
            uVar11 = uVar11 & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
          }
          break;
        }
        uVar4 = uVar4 - 1 & uVar4;
      } while (uVar4 != 0);
    }
    uVar13 = uVar13 - 1;
    uVar4 = (uint)uVar13;
  }
  uVar4 = 0;
  uVar11 = 0;
  while( true ) {
    bVar2 = 0xff;
    if (local_80[0] < 8) {
      bVar2 = local_80[0];
    }
    local_90[0] = CONCAT31(local_90[0]._1_3_,bVar2);
    if (local_80[0] < 8) break;
LAB_028557e4:
    uVar4 = uVar4 + 1;
    if (uVar4 == 10) {
      if (((byte)*param_3 >> 2 & 1) != 0) {
        local_90[0] = uVar11;
        uVar4 = FUN_02855af0(local_90);
        if (uVar4 != 0xffffffff) {
          *(undefined8 *)(param_1 + 0xa0) = 0;
          *(undefined8 *)(param_1 + 0xa8) = 0;
          *(undefined8 *)(param_1 + 0xb0) = 0;
          *(undefined8 *)(param_1 + 0xb8) = 0;
          *(undefined1 *)(param_1 + 0xa1) = 0;
          *(undefined1 **)(param_1 + 0xa4) = &LAB_01010000;
          *(undefined1 *)(param_1 + 0xac) = 0xff;
          *(undefined8 *)(param_1 + 0x90) = 0;
          *(undefined8 *)(param_1 + 0x98) = 0;
          *(undefined2 *)(param_1 + 0x9e) = 0x101;
          *(undefined8 *)(param_1 + 0x80) = 0;
          *(undefined8 *)(param_1 + 0x88) = 0;
          *(undefined1 *)(param_1 + 0xaf) = 0;
          local_70 = (undefined **)CONCAT44((int)((ulong)local_70 >> 0x20),1);
          *(undefined1 *)(param_1 + 0xad) = 2;
          *(undefined1 *)(param_1 + 0xb0) = 1;
          *(undefined8 *)(param_1 + 0xb4) = 0xfffe;
          FUN_0277d4ac((undefined8 *)(param_1 + 0xb4));
          *(undefined1 *)(param_1 + 0xbc) = 0xff;
          *(undefined2 *)(param_1 + 0xbe) = 0;
          *(char *)(param_1 + 0xac) = (char)uVar4;
          *(undefined1 *)(param_1 + 0xaf) = 1;
          *param_2 = *param_2 & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
        }
      }
      return;
    }
  }
  uVar8 = 1 << (ulong)(uVar4 & 0x1f);
  bVar2 = local_80[0];
  do {
    if ((param_2[uVar4 >> 5] & uVar8) != 0) {
      iVar5 = FUN_021d7030(uVar4,local_90);
      if (iVar5 < 0) {
        uVar6 = 0;
      }
      else {
        local_70 = &PTR_LAB_048f9770;
        pcStack_68 = "Friendship";
        local_74[0] = (undefined1)local_90[0];
        if (7 < (local_90[0] & 0xff)) {
          local_74[0] = 0xff;
        }
        uVar6 = FUN_02669430(local_74);
        uVar7 = FUN_02746f80(uVar4,iVar5,&local_70,uVar6 & 1);
        if (uVar7 < 0x1e) {
          uVar6 = 1;
        }
        else if (uVar7 < 0x3c) {
          uVar6 = 2;
        }
        else if (uVar7 < 100) {
          uVar6 = 3;
        }
        else if (uVar7 < 0x96) {
          uVar6 = 4;
        }
        else {
          uVar6 = 5;
          if (199 < uVar7) {
            uVar6 = 6;
          }
        }
      }
      local_70 = (undefined **)CONCAT44(local_70._4_4_,uVar6);
      uVar7 = uVar8;
      if (uVar6 < 2) {
        uVar7 = 0;
      }
      uVar11 = uVar7 | uVar11;
      bVar2 = (byte)local_90[0];
    }
    uVar6 = (uint)bVar2;
    if ((7 < uVar6) || (uVar13 = (ulong)uVar6, uVar13 == 7)) goto LAB_028557e4;
    pbVar12 = &DAT_0548e169 + uVar13;
    uVar9 = FUN_02507924(local_90,pbVar12);
    if ((uVar9 & 1) == 0) {
      if (uVar13 == 6) goto LAB_028557e4;
      pbVar12 = &DAT_0548e16a + uVar13;
      uVar9 = FUN_02507924(local_90,pbVar12);
      if ((uVar9 & 1) == 0) {
        if (uVar13 == 5) goto LAB_028557e4;
        pbVar12 = &DAT_0548e16b + uVar13;
        uVar9 = FUN_02507924(local_90,pbVar12);
        if ((uVar9 & 1) == 0) {
          if (uVar13 == 4) goto LAB_028557e4;
          pbVar12 = &DAT_0548e16c + uVar13;
          uVar9 = FUN_02507924(local_90,pbVar12);
          if ((uVar9 & 1) == 0) {
            if (uVar13 == 3) goto LAB_028557e4;
            pbVar12 = &DAT_0548e16d + uVar13;
            uVar9 = FUN_02507924(local_90,pbVar12);
            if ((uVar9 & 1) == 0) {
              if (uVar13 == 2) goto LAB_028557e4;
              pbVar12 = &DAT_0548e16e + uVar13;
              uVar9 = FUN_02507924(local_90,pbVar12);
              if ((uVar9 & 1) == 0) {
                if (uVar13 == 1) goto LAB_028557e4;
                pbVar12 = &DAT_0548e16f + uVar13;
                uVar9 = FUN_02507924(local_90,pbVar12);
                if ((uVar9 & 1) == 0) {
                  if (uVar6 == 0) goto LAB_028557e4;
                  pbVar12 = &DAT_0548e170 + uVar13;
                  FUN_02507924(local_90,pbVar12);
                }
              }
            }
          }
        }
      }
    }
    bVar2 = *pbVar12;
    if (7 < bVar2) goto LAB_028557e4;
    local_90[0] = CONCAT31(local_90[0]._1_3_,bVar2);
  } while( true );
}

