
void FUN_025c0a00(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *local_60;
  char *pcStack_58;
  
  puVar4 = PTR_DAT_04bb2020;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "SerialNumber";
    local_60 = puVar2;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_60,*param_2);
      pcStack_58 = "PageNum";
      local_60 = puVar2;
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605660(*(long *)(param_1 + 8),&local_60,(long)(int)param_2[5]);
        local_60 = puVar4 + 0x10;
        pcStack_58 = "Page";
        if (*(long *)(param_1 + 8) != 0) {
          FUN_02605660(*(long *)(param_1 + 8),&local_60,(long)(int)param_2[6]);
        }
      }
    }
    lVar7 = (long)(int)param_2[6] * 4000;
    iVar1 = (int)lVar7 + 4000;
    iVar3 = param_2[4];
    if (iVar1 <= (int)param_2[4]) {
      iVar3 = iVar1;
    }
    if ((int)lVar7 < iVar3) {
      do {
        lVar6 = *(long *)(param_1 + 0x28);
        lVar5 = nn::prepo::Array::GetBuffer();
        if (lVar5 != 0) {
          nn::prepo::Array::Add(lVar6 + 8);
        }
        lVar7 = lVar7 + 1;
      } while (iVar3 != lVar7);
    }
    local_60 = puVar4 + 0x10;
    pcStack_58 = "ItemId";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605b30(*(long *)(param_1 + 8),&local_60,*(undefined8 *)(param_1 + 0x28));
    }
  }
  return;
}

