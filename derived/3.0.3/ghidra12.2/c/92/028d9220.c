
void FUN_028d9220(void)

{
  undefined *puVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined *local_80;
  char *pcStack_78;
  byte local_6c [12];
  byte local_44 [4];
  
  FUN_02507c6c(local_6c,1,1,0,0);
  puVar5 = PTR_DAT_04bb5038;
  puVar4 = PTR_DAT_04bb2020;
  if (local_6c[0] < 8) {
    bVar2 = 0;
    bVar3 = true;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      pcStack_78 = "GstQuestStartFlag";
      local_80 = puVar1;
      local_44[0] = local_6c[0];
      iVar7 = FUN_0274bce0(local_44,&local_80);
      pcStack_78 = "GstQuestClearFlag";
      local_80 = puVar1;
      iVar8 = FUN_0274bce0(local_44,&local_80);
      bVar6 = local_6c[0];
      uVar12 = (ulong)local_6c[0];
      if (iVar8 == 0) {
        bVar2 = iVar7 != 0 | bVar2;
      }
      bVar3 = (bool)(iVar8 != 0 & bVar3);
      if (7 < local_6c[0]) goto joined_r0x028d9420;
      if (uVar12 + 1 == 8) break;
      pbVar11 = puVar5 + uVar12 + 1;
      uVar9 = FUN_02507924(local_6c,pbVar11);
      if ((uVar9 & 1) == 0) {
        if (uVar12 + 2 == 8) break;
        pbVar11 = puVar5 + uVar12 + 2;
        uVar9 = FUN_02507924(local_6c,pbVar11);
        if ((uVar9 & 1) == 0) {
          if (uVar12 + 3 == 8) break;
          pbVar11 = puVar5 + uVar12 + 3;
          uVar9 = FUN_02507924(local_6c,pbVar11);
          if ((uVar9 & 1) == 0) {
            if (uVar12 + 4 == 8) break;
            pbVar11 = puVar5 + uVar12 + 4;
            uVar9 = FUN_02507924(local_6c,pbVar11);
            if ((uVar9 & 1) == 0) {
              if (uVar12 + 5 == 8) break;
              pbVar11 = puVar5 + uVar12 + 5;
              uVar9 = FUN_02507924(local_6c,pbVar11);
              if ((uVar9 & 1) == 0) {
                if (uVar12 + 6 == 8) break;
                pbVar11 = puVar5 + uVar12 + 6;
                uVar9 = FUN_02507924(local_6c,pbVar11);
                if ((uVar9 & 1) == 0) {
                  if (uVar12 + 7 == 8) break;
                  pbVar11 = puVar5 + uVar12 + 7;
                  uVar9 = FUN_02507924(local_6c,pbVar11);
                  if ((uVar9 & 1) == 0) {
                    if (bVar6 == 0) break;
                    pbVar11 = puVar5 + uVar12 + 8;
                    FUN_02507924(local_6c,pbVar11);
                  }
                }
              }
            }
          }
        }
      }
      local_6c[0] = *pbVar11;
    } while (local_6c[0] < 8);
    local_6c[0] = 0xff;
joined_r0x028d9420:
    if (!bVar3) {
      local_80 = puVar4 + 0x10;
      pcStack_78 = "GstQuestStartLandFlag";
      FUN_02743234(&local_80,bVar2);
      uVar10 = 0;
      goto LAB_028d9460;
    }
  }
  local_80 = puVar4 + 0x10;
  pcStack_78 = "GstQuestStartLandFlag";
  FUN_02743234(&local_80,0);
  uVar10 = 1;
LAB_028d9460:
  pcStack_78 = "GstQuestClearFlag";
  local_80 = puVar4 + 0x10;
  FUN_02743234(&local_80,uVar10);
  return;
}

