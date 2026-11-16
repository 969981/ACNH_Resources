
void FUN_025c28bc(long param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined *local_60;
  char *pcStack_58;
  
  puVar3 = PTR_DAT_04bb2020;
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "RoomNo";
  if (*(long *)(param_1 + 8) != 0) {
    local_60 = puVar1;
    FUN_02605660(*(long *)(param_1 + 8),&local_60,(long)*param_2);
    pcStack_58 = "SerialNumber";
    if (*(long *)(param_1 + 8) != 0) {
      local_60 = puVar1;
      FUN_02605660(*(long *)(param_1 + 8),&local_60,param_2[0x10]);
      puVar1 = puVar3 + 0x10;
      pcStack_58 = "PageNum";
      if (*(long *)(param_1 + 8) != 0) {
        local_60 = puVar1;
        FUN_02605660(*(long *)(param_1 + 8),&local_60,(long)param_2[0xe]);
        pcStack_58 = "Page";
        uVar4 = 0;
        local_60 = puVar1;
        if (*(long *)(param_1 + 8) != 0) {
          uVar4 = FUN_02605660(*(long *)(param_1 + 8),&local_60,(long)param_2[0xf]);
        }
        goto LAB_025c2984;
      }
    }
  }
  uVar4 = 0;
  local_60 = puVar3 + 0x10;
LAB_025c2984:
  if ((*(int **)(param_2 + 2) != (int *)0x0) && (iVar10 = **(int **)(param_2 + 2), 0 < iVar10)) {
    lVar9 = (long)param_2[0xf] * 500;
    iVar8 = (int)lVar9;
    if (iVar8 < iVar10) {
      iVar2 = iVar8 + 500;
      if (iVar10 <= iVar8 + 500) {
        iVar2 = iVar10;
      }
      iVar10 = iVar2 - iVar8;
      if (iVar10 != 0 && iVar8 <= iVar2) {
        do {
          lVar11 = *(long *)(param_1 + 0x28);
          if ((*(long *)(lVar11 + 0x20) != 0) &&
             (uVar6 = *(uint *)(lVar11 + 0xc), (int)uVar6 < *(int *)(lVar11 + 8))) {
            if ((uVar6 < *(uint *)(lVar11 + 0x18)) &&
               (lVar7 = *(long *)(*(long *)(lVar11 + 0x20) + (long)(int)uVar6 * 8), lVar7 != 0)) {
              lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 2) + 8) + lVar9 * 8);
              FUN_0260bd80(uVar4,lVar7,lVar5,*(undefined4 *)(lVar5 + 8));
              lVar5 = *(long *)(lVar11 + 0x10);
              lVar7 = nn::prepo::Array::GetBuffer();
              uVar4 = 0;
              if (lVar7 != 0) {
                uVar4 = nn::prepo::Array::Add((Struct *)(lVar5 + 8));
              }
              uVar6 = *(uint *)(lVar11 + 0xc);
            }
            *(uint *)(lVar11 + 0xc) = uVar6 + 1;
          }
          lVar9 = lVar9 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    local_60 = puVar3 + 0x10;
    pcStack_58 = "ItemArray";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605b30(*(long *)(param_1 + 8),&local_60,
                   *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
    }
  }
  pcStack_58 = "RoomWidth";
  if (*(long *)(param_1 + 8) != 0) {
    iVar10 = param_2[0xc] - param_2[8];
    uVar6 = iVar10 + 2;
    if (-1 < iVar10 + 1) {
      uVar6 = iVar10 + 1;
    }
    local_60 = puVar3 + 0x10;
    FUN_02605660(*(long *)(param_1 + 8),&local_60,(long)((ulong)uVar6 << 0x20) >> 0x21);
    pcStack_58 = "RoomHeight";
    if (*(long *)(param_1 + 8) != 0) {
      iVar10 = param_2[0xd] - param_2[9];
      uVar6 = iVar10 + 2;
      if (-1 < iVar10 + 1) {
        uVar6 = iVar10 + 1;
      }
      local_60 = puVar3 + 0x10;
      FUN_02605660(*(long *)(param_1 + 8),&local_60,(long)((ulong)uVar6 << 0x20) >> 0x21);
    }
  }
  return;
}

