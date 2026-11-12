
void FUN_009b2ee0(void)

{
  undefined1 *puVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **local_170;
  undefined8 *puStack_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined **local_140;
  undefined1 *puStack_138;
  undefined4 local_130;
  undefined1 local_12c [63];
  undefined1 local_ed;
  undefined **local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined1 local_d4 [63];
  undefined1 local_95;
  undefined8 local_90;
  undefined6 uStack_88;
  undefined2 local_82;
  undefined6 uStack_80;
  undefined1 auStack_7a [6];
  byte local_74 [20];
  
  if (*(long *)(DAT_05ae7798 + 0x178) != DAT_05ae7798 + 0x170) {
    lVar5 = (long)*(int *)(DAT_05ae7798 + 0x184);
    lVar6 = *(long *)(DAT_05ae7798 + 0x178) - lVar5;
    do {
      if (*(int *)(lVar6 + 0x18) == 0xd) break;
      lVar6 = *(long *)(lVar6 + lVar5 + 8) - lVar5;
    } while (lVar6 != (DAT_05ae7798 + 0x170) - lVar5);
  }
  FUN_02507c6c(local_74,1,1,0,0);
  if (local_74[0] < 8) {
    uVar9 = 0;
    puVar7 = &DAT_04d02de0;
    puVar1 = auStack_7a;
    if (auStack_7a <= (undefined1 *)((long)&local_90 + 2U)) {
      puVar1 = (undefined1 *)((long)&local_90 + 2U);
    }
    do {
      local_15c = 0;
      local_160 = 0xb;
      local_158 = 0xffffffff;
      uStack_150 = 0xffffffff00000000;
      local_148 = 0xffffffff;
      local_130 = 0x40;
      local_ed = 0;
      local_12c[0] = 0;
      local_d8 = 0x40;
      local_95 = 0;
      local_d4[0] = 0;
      uStack_80 = 0;
      local_140 = &PTR_LAB_048fb9f8;
      local_e8 = &PTR_LAB_048fb9f8;
      local_170 = &PTR_LAB_04917d78;
      local_90 = 0;
      uStack_88 = 0;
      local_82 = 0;
      puStack_168 = &local_90;
      puStack_138 = local_12c;
      puStack_e0 = local_d4;
      memset(&local_90,0,(ulong)(puVar1 + (-0xe1 - (long)&local_170)) & 0xfffffffffffffffc | 2);
      FUN_01c11eb4(&local_170,local_74);
      FUN_006f4bf4(&local_170,puVar7,0);
      bVar2 = local_74[0];
      uVar10 = (ulong)local_74[0];
      if (7 < local_74[0]) {
        return;
      }
      if (uVar10 + 1 == 8) {
        return;
      }
      pbVar8 = PTR_DAT_04bb5038 + uVar10 + 1;
      uVar4 = FUN_02507924(local_74,pbVar8);
      if ((uVar4 & 1) == 0) {
        if (uVar10 + 2 == 8) {
          return;
        }
        pbVar8 = PTR_DAT_04bb5038 + uVar10 + 2;
        uVar4 = FUN_02507924(local_74,pbVar8);
        if ((uVar4 & 1) == 0) {
          if (uVar10 + 3 == 8) {
            return;
          }
          pbVar8 = PTR_DAT_04bb5038 + uVar10 + 3;
          uVar4 = FUN_02507924(local_74,pbVar8);
          if ((uVar4 & 1) == 0) {
            if (uVar10 + 4 == 8) {
              return;
            }
            pbVar8 = PTR_DAT_04bb5038 + uVar10 + 4;
            uVar4 = FUN_02507924(local_74,pbVar8);
            if ((uVar4 & 1) == 0) {
              if (uVar10 + 5 == 8) {
                return;
              }
              pbVar8 = PTR_DAT_04bb5038 + uVar10 + 5;
              uVar4 = FUN_02507924(local_74,pbVar8);
              if ((uVar4 & 1) == 0) {
                if (uVar10 + 6 == 8) {
                  return;
                }
                pbVar8 = PTR_DAT_04bb5038 + uVar10 + 6;
                uVar4 = FUN_02507924(local_74,pbVar8);
                if ((uVar4 & 1) == 0) {
                  if (uVar10 + 7 == 8) {
                    return;
                  }
                  pbVar8 = PTR_DAT_04bb5038 + uVar10 + 7;
                  uVar4 = FUN_02507924(local_74,pbVar8);
                  if ((uVar4 & 1) == 0) {
                    if (bVar2 == 0) {
                      return;
                    }
                    pbVar8 = PTR_DAT_04bb5038 + uVar10 + 8;
                    FUN_02507924(local_74,pbVar8);
                  }
                }
              }
            }
          }
        }
      }
      local_74[0] = *pbVar8;
      if (7 < local_74[0]) {
        return;
      }
      puVar7 = puVar7 + 0xb;
      bVar3 = uVar9 < 3;
      uVar9 = uVar9 + 1;
    } while (bVar3);
  }
  return;
}

