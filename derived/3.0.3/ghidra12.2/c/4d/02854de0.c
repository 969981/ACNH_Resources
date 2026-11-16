
void FUN_02854de0(long param_1,uint *param_2,byte *param_3)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  uint local_8c [3];
  byte local_80 [12];
  undefined1 local_74 [4];
  undefined8 local_70;
  char *pcStack_68;
  
  FUN_02507c6c(local_80,1,1,0,0);
  puVar4 = PTR_DAT_04bb5038;
  uVar8 = 0;
  uVar13 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    bVar2 = 0xff;
    if (local_80[0] < 8) {
      bVar2 = local_80[0];
    }
    local_8c[0] = CONCAT31(local_8c[0]._1_3_,bVar2);
    if (local_80[0] < 8) {
      uVar3 = 1 << (ulong)(uVar8 & 0x1f);
      bVar2 = local_80[0];
      while( true ) {
        if ((param_2[uVar8 >> 5] & uVar3) != 0) {
          iVar5 = FUN_021d7030(uVar8,local_8c);
          if (iVar5 < 0) {
            uVar6 = 0;
          }
          else {
            pcStack_68 = "Friendship";
            local_74[0] = (undefined1)local_8c[0];
            if (7 < (local_8c[0] & 0xff)) {
              local_74[0] = 0xff;
            }
            local_70 = puVar1;
            uVar6 = FUN_02669430(local_74);
            uVar7 = FUN_02746f80(uVar8,iVar5,&local_70,uVar6 & 1);
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
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar6);
          uVar7 = uVar3;
          if (uVar6 < 2) {
            uVar7 = 0;
          }
          uVar13 = uVar7 | uVar13;
          bVar2 = (byte)local_8c[0];
        }
        uVar6 = (uint)bVar2;
        if (7 < uVar6) break;
        uVar12 = (ulong)uVar6;
        if (uVar12 + 1 == 8) break;
        pbVar11 = puVar4 + uVar12 + 1;
        uVar9 = FUN_02507924(local_8c,pbVar11);
        if ((uVar9 & 1) == 0) {
          if (uVar12 + 2 == 8) break;
          pbVar11 = puVar4 + uVar12 + 2;
          uVar9 = FUN_02507924(local_8c,pbVar11);
          if ((uVar9 & 1) == 0) {
            if (uVar12 + 3 == 8) break;
            pbVar11 = puVar4 + uVar12 + 3;
            uVar9 = FUN_02507924(local_8c,pbVar11);
            if ((uVar9 & 1) == 0) {
              if (uVar12 + 4 == 8) break;
              pbVar11 = puVar4 + uVar12 + 4;
              uVar9 = FUN_02507924(local_8c,pbVar11);
              if ((uVar9 & 1) == 0) {
                if (uVar12 + 5 == 8) break;
                pbVar11 = puVar4 + uVar12 + 5;
                uVar9 = FUN_02507924(local_8c,pbVar11);
                if ((uVar9 & 1) == 0) {
                  if (uVar12 + 6 == 8) break;
                  pbVar11 = puVar4 + uVar12 + 6;
                  uVar9 = FUN_02507924(local_8c,pbVar11);
                  if ((uVar9 & 1) == 0) {
                    if (uVar12 + 7 == 8) break;
                    pbVar11 = puVar4 + uVar12 + 7;
                    uVar9 = FUN_02507924(local_8c,pbVar11);
                    if ((uVar9 & 1) == 0) {
                      if (uVar6 == 0) break;
                      pbVar11 = puVar4 + uVar12 + 8;
                      FUN_02507924(local_8c,pbVar11);
                    }
                  }
                }
              }
            }
          }
        }
        bVar2 = *pbVar11;
        if (7 < bVar2) break;
        local_8c[0] = CONCAT31(local_8c[0]._1_3_,bVar2);
      }
    }
    uVar8 = uVar8 + 1;
    if (uVar8 == 10) {
      if ((*param_3 >> 3 & 1) != 0) {
        local_8c[0] = uVar13;
        if (DAT_055a345c == '\0') {
          puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
          uVar8 = *puVar10 ^ *puVar10 << 0xb;
          uVar13 = puVar10[3];
          *puVar10 = puVar10[1];
          puVar10[1] = puVar10[2];
          uVar8 = uVar8 >> 8 ^ uVar13 >> 0x13 ^ uVar8 ^ uVar13;
          puVar10[2] = uVar13;
          puVar10[3] = uVar8;
        }
        else {
          uVar8 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
          DAT_05582b70 = DAT_05582b74;
          DAT_05582b74 = DAT_05582b78;
          uVar8 = uVar8 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar8 ^ DAT_05582b7c;
          DAT_05582b78 = DAT_05582b7c;
          DAT_05582b7c = uVar8;
        }
        if (((uint)((ulong)uVar8 * 100 >> 0x20) < 0x19) &&
           (uVar8 = FUN_02855af0(local_8c), uVar8 != 0xffffffff)) {
          DAT_055a345c = '\x01';
          local_70 = PTR_DAT_04bb2020 + 0x10;
          pcStack_68 = "FinishTreasureQuestByRollback";
          FUN_0273f3c4(&local_70,0);
          *(undefined8 *)(param_1 + 0xd0) = 0;
          *(undefined8 *)(param_1 + 0xd8) = 0;
          *(undefined2 *)(param_1 + 0xde) = 0x101;
          *(undefined8 *)(param_1 + 0xe0) = 0;
          *(undefined8 *)(param_1 + 0xe8) = 0;
          *(undefined4 *)(param_1 + 0xf8) = 0;
          *(undefined8 *)(param_1 + 0xf0) = 0;
          *(undefined1 *)(param_1 + 0xe1) = 0;
          *(undefined1 *)(param_1 + 0xee) = 0;
          *(undefined1 **)(param_1 + 0xe4) = &LAB_01010000;
          *(undefined8 *)(param_1 + 0xc0) = 0;
          *(undefined8 *)(param_1 + 200) = 0;
          *(undefined1 *)(param_1 + 0xed) = 3;
          *(undefined1 *)(param_1 + 0xf4) = 0;
          *(undefined4 *)(param_1 + 0xf6) = 0;
          local_70 = (undefined *)CONCAT44((int)((ulong)local_70 >> 0x20),1);
          *(undefined1 *)(param_1 + 0xf0) = 5;
          *(char *)(param_1 + 0xec) = (char)uVar8;
          *(undefined1 *)(param_1 + 0xef) = 1;
          if (DAT_055a345c == '\0') {
            puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
            uVar13 = *puVar10 ^ *puVar10 << 0xb;
            uVar3 = puVar10[3];
            *puVar10 = puVar10[1];
            puVar10[1] = puVar10[2];
            uVar13 = uVar13 >> 8 ^ uVar3 >> 0x13 ^ uVar13 ^ uVar3;
            puVar10[2] = uVar3;
            puVar10[3] = uVar13;
          }
          else {
            uVar13 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
            DAT_05582b70 = DAT_05582b74;
            DAT_05582b74 = DAT_05582b78;
            uVar13 = uVar13 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar13 ^ DAT_05582b7c;
            DAT_05582b78 = DAT_05582b7c;
            DAT_05582b7c = uVar13;
          }
          DAT_055a345c = '\0';
          *(byte *)(param_1 + 0xee) = (byte)(uVar13 >> 0x1f);
          *param_2 = *param_2 & (1 << (ulong)(uVar8 & 0x1f) ^ 0xffffffffU);
        }
      }
      return;
    }
  } while( true );
}

