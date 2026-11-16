
void FUN_025c92e0(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined *local_60;
  char *pcStack_58;
  
  FUN_02602950(param_1,0x74);
  FUN_02603510(param_1,*param_2);
  FUN_026035e0(param_1,*param_2);
  puVar3 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "IsExteria";
  uVar4 = 0;
  local_60 = puVar1;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_60,*(undefined1 *)(param_2 + 6));
    pcStack_58 = "IsInteria";
    uVar4 = 0;
    local_60 = puVar1;
    if (*(long *)(param_1 + 8) != 0) {
      uVar4 = FUN_026054d0(*(long *)(param_1 + 8),&local_60,*(undefined1 *)((long)param_2 + 0x19));
    }
  }
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 != 0) {
    uVar2 = **(uint **)(param_2 + 2);
    if (0 < (int)uVar2) {
      uVar8 = 0;
      do {
        if ((uVar8 < **(uint **)(param_2 + 2)) &&
           (lVar6 = *(long *)(*(long *)(*(uint **)(param_2 + 2) + 2) + uVar8 * 8), lVar6 != 0)) {
          lVar9 = *(long *)(param_1 + 0x28);
          if (*(long *)(lVar9 + 0x20) != 0) {
            uVar5 = *(uint *)(lVar9 + 0xc);
            if ((int)uVar5 < *(int *)(lVar9 + 8)) {
              if ((uVar5 < *(uint *)(lVar9 + 0x18)) &&
                 (lVar7 = *(long *)(*(long *)(lVar9 + 0x20) + (long)(int)uVar5 * 8), lVar7 != 0)) {
                FUN_0260bd80(uVar4,lVar7,lVar6,*(undefined4 *)(lVar6 + 8));
                lVar7 = *(long *)(lVar9 + 0x10);
                lVar6 = nn::prepo::Array::GetBuffer();
                uVar4 = 0;
                if (lVar6 != 0) {
                  uVar4 = nn::prepo::Array::Add((Struct *)(lVar7 + 8));
                }
                uVar5 = *(uint *)(lVar9 + 0xc);
              }
              *(uint *)(lVar9 + 0xc) = uVar5 + 1;
            }
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
      lVar6 = *(long *)(param_1 + 0x28);
    }
    local_60 = puVar3 + 0x10;
    pcStack_58 = "InteriaItem";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605b30(*(long *)(param_1 + 8),&local_60,*(undefined8 *)(lVar6 + 0x10));
    }
  }
  FUN_025c9484(param_1,param_2);
  FUN_025c96d4(param_1,param_2);
  return;
}

