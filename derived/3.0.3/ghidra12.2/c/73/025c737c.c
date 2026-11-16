
void FUN_025c737c(long param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_60;
  char *pcStack_58;
  
  puVar2 = PTR_DAT_04bb2020;
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x28) == 2) {
    iVar1 = param_2[1];
    lVar3 = *(long *)(param_1 + 8);
  }
  else {
    if (*(int *)(param_1 + 0x28) != 1) goto LAB_025c7408;
    iVar1 = *param_2;
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    pcStack_58 = "RoomNo";
    local_60 = PTR_DAT_04bb2020 + 0x10;
    FUN_02605660(lVar3,&local_60,(long)iVar1);
  }
LAB_025c7408:
  if (*(int *)(param_1 + 0x28) != 0) {
    pcStack_58 = "RoomWidth";
    if (*(long *)(param_1 + 8) != 0) {
      local_60 = puVar2 + 0x10;
      FUN_02605660(*(long *)(param_1 + 8),&local_60,(long)param_2[4]);
      pcStack_58 = "RoomHeight";
      if (*(long *)(param_1 + 8) != 0) {
        local_60 = puVar2 + 0x10;
        FUN_02605660(*(long *)(param_1 + 8),&local_60,(long)param_2[5]);
      }
    }
  }
  local_60 = puVar2 + 0x10;
  pcStack_58 = "SerialNumber";
  uVar4 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    uVar4 = FUN_02605660(*(long *)(param_1 + 8),&local_60,param_2[6]);
  }
  if ((*(uint **)(param_2 + 2) != (uint *)0x0) && (uVar7 = **(uint **)(param_2 + 2), 0 < (int)uVar7)
     ) {
    uVar9 = 0;
    if (499 < (int)uVar7) {
      uVar7 = 500;
    }
    do {
      lVar3 = *(long *)(param_1 + 0x30);
      if ((*(long *)(lVar3 + 0x20) != 0) &&
         (uVar6 = *(uint *)(lVar3 + 0xc), (int)uVar6 < *(int *)(lVar3 + 8))) {
        if ((uVar6 < *(uint *)(lVar3 + 0x18)) &&
           (lVar8 = *(long *)(*(long *)(lVar3 + 0x20) + (long)(int)uVar6 * 8), lVar8 != 0)) {
          lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 2) + 8) + uVar9 * 8);
          FUN_0260bd80(uVar4,lVar8,lVar5,*(undefined4 *)(lVar5 + 8));
          lVar5 = *(long *)(lVar3 + 0x10);
          lVar8 = nn::prepo::Array::GetBuffer();
          uVar4 = 0;
          if (lVar8 != 0) {
            uVar4 = nn::prepo::Array::Add((Struct *)(lVar5 + 8));
          }
          uVar6 = *(uint *)(lVar3 + 0xc);
        }
        *(uint *)(lVar3 + 0xc) = uVar6 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar7 != uVar9);
    local_60 = puVar2 + 0x10;
    pcStack_58 = "ItemArray";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605b30(*(long *)(param_1 + 8),&local_60,
                   *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
    }
  }
  return;
}

