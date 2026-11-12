
void FUN_009c26c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte local_a4 [12];
  undefined *local_98 [4];
  int local_74;
  undefined8 local_70;
  char *pcStack_68;
  
  if (((*(uint *)(param_1 + 0x50) | 4) != 4) && (1 < *(int *)(param_1 + 0x218))) {
    FUN_02507c6c(local_a4,7,1,0,0);
    puVar4 = PTR_DAT_04bb5038;
    puVar3 = PTR_DAT_04bb4fb8;
    if (local_a4[0] < 8) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      puVar2 = PTR_DAT_04bc33b0 + 0x10;
      do {
        uVar6 = FUN_02582d8c(local_a4,1);
        if (((uVar6 < 8) && (*(char *)(*(long *)puVar3 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0'))
           && (*(char *)(*(long *)puVar3 + (ulong)uVar6 * 0x13f0 + 0x13d6) != '\0')) {
          if (7 < local_a4[0]) break;
          pcStack_68 = "radio_gymnastic";
          local_70 = puVar1;
          FUN_025ffac8(local_98,&local_70,local_a4);
          if ((ulong)local_a4[0] < 8) {
            uVar6 = (uint)*(byte *)(param_1 + 0x40 + (ulong)local_a4[0]);
          }
          else {
            uVar6 = 2;
          }
          local_70 = (undefined *)CONCAT44(uVar6,(uint)*(byte *)(param_1 + 0x38));
          pcStack_68 = (char *)CONCAT44(pcStack_68._4_4_,*(undefined4 *)(param_1 + 0x218));
          local_98[0] = puVar2;
          FUN_025c82e0(local_98,&local_70);
          local_98[0] = PTR_DAT_04bc33b0 + 0x10;
          iVar7 = FUN_025c8500(local_98);
          if (iVar7 == -1) {
LAB_009c2868:
            if (local_74 == 0) {
              local_74 = 1;
            }
          }
          else {
            iVar7 = (**(code **)(local_98[0] + 0x20))(local_98);
            local_70 = (undefined *)CONCAT44(local_70._4_4_,iVar7);
            if (0xc < iVar7) goto LAB_009c2868;
          }
          FUN_02601530(local_98);
        }
        bVar5 = local_a4[0];
        uVar10 = (ulong)local_a4[0];
        if ((7 < local_a4[0]) || (uVar10 + 1 == 8)) break;
        pbVar9 = puVar4 + uVar10 + 1;
        uVar8 = FUN_02507924(local_a4,pbVar9);
        if ((uVar8 & 1) == 0) {
          if (uVar10 + 2 == 8) break;
          pbVar9 = puVar4 + uVar10 + 2;
          uVar8 = FUN_02507924(local_a4,pbVar9);
          if ((uVar8 & 1) == 0) {
            if (uVar10 + 3 == 8) break;
            pbVar9 = puVar4 + uVar10 + 3;
            uVar8 = FUN_02507924(local_a4,pbVar9);
            if ((uVar8 & 1) == 0) {
              if (uVar10 + 4 == 8) break;
              pbVar9 = puVar4 + uVar10 + 4;
              uVar8 = FUN_02507924(local_a4,pbVar9);
              if ((uVar8 & 1) == 0) {
                if (uVar10 + 5 == 8) break;
                pbVar9 = puVar4 + uVar10 + 5;
                uVar8 = FUN_02507924(local_a4,pbVar9);
                if ((uVar8 & 1) == 0) {
                  if (uVar10 + 6 == 8) break;
                  pbVar9 = puVar4 + uVar10 + 6;
                  uVar8 = FUN_02507924(local_a4,pbVar9);
                  if ((uVar8 & 1) == 0) {
                    if (uVar10 + 7 == 8) break;
                    pbVar9 = puVar4 + uVar10 + 7;
                    uVar8 = FUN_02507924(local_a4,pbVar9);
                    if ((uVar8 & 1) == 0) {
                      if (bVar5 == 0) break;
                      pbVar9 = puVar4 + uVar10 + 8;
                      FUN_02507924(local_a4,pbVar9);
                    }
                  }
                }
              }
            }
          }
        }
        local_a4[0] = *pbVar9;
        if (7 < local_a4[0]) break;
      } while( true );
    }
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}

