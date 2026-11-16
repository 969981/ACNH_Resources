
void FUN_02611580(long param_1,long param_2)

{
  undefined *puVar1;
  short *psVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined *local_60;
  undefined *local_58;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    lVar6 = 0;
    uVar4 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      psVar2 = (short *)(param_2 + lVar6);
      if ((((*psVar2 != -1) && (*(int *)(psVar2 + 2) != 0)) && (uVar4 < *(uint *)(param_1 + 0x18)))
         && (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + (long)(int)uVar4 * 8), lVar5 != 0)) {
        FUN_02603820(lVar5,psVar2);
        local_58 = &DAT_040a1d03;
        local_60 = puVar1;
        lVar3 = nn::prepo::Struct::GetBuffer();
        if (lVar3 != 0) {
          (**(code **)(local_60 + 0x18))(&local_60);
          nn::prepo::Struct::Add((char *)(lVar5 + 8),(long)local_58);
        }
        lVar3 = *(long *)(param_1 + 0x10);
        lVar5 = nn::prepo::Array::GetBuffer();
        if (lVar5 != 0) {
          nn::prepo::Array::Add((Struct *)(lVar3 + 8));
        }
        uVar4 = *(int *)(param_1 + 8) + 1;
        *(uint *)(param_1 + 8) = uVar4;
      }
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0x50);
  }
  return;
}

