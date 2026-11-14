
uint FUN_01a55838(undefined4 *param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *local_58;
  char *pcStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "HarvestProgress";
  local_58 = puVar1;
  iVar5 = FUN_0273ea30(&local_58);
  uVar2 = DAT_05300508._4_4_;
  puVar8 = &DAT_05300508;
  *param_1 = (undefined4)DAT_05300508;
  param_1[1] = uVar2;
  if ((int)param_2 < iVar5) {
    uVar6 = param_2;
    if (3 < param_2) {
      uVar6 = 0;
    }
    (**(code **)((&DAT_05300590)[(long)(int)uVar6 * 2] + 0x18))
              (&DAT_05300590 + (long)(int)uVar6 * 2);
    pcStack_50 = (char *)(&DAT_05300598)[(long)(int)uVar6 * 2];
    local_58 = puVar1;
    uVar7 = FUN_0273f0a0(&local_58);
    uVar6 = param_2;
    if (3 < param_2) {
      uVar6 = 0;
    }
    puVar8 = (undefined8 *)(&DAT_05300510 + (ulong)uVar6 * 8);
    if ((uVar7 & 1) != 0) {
      puVar8 = (undefined8 *)((long)&DAT_05300514 + (ulong)uVar6 * 0x20 + 4);
    }
  }
  *(undefined2 *)param_1 = *(undefined2 *)puVar8;
  *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)puVar8 + 2);
  *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar8 + 3);
  param_1[1] = *(undefined4 *)((long)puVar8 + 4);
  local_48 = 0;
  local_58 = PTR_DAT_04bbc1a0 + 0x10;
  pcStack_50 = PTR_DAT_04bb2010 + 0x10;
  uStack_38 = 0;
  bVar4 = *(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) != 1;
  uVar2 = 0x3b84b490;
  if (bVar4) {
    uVar2 = 0x995cbf71;
  }
  uVar3 = 0x6e090aaa;
  if (bVar4) {
    uVar3 = 0x55acd0a6;
  }
  if (1 < param_2) {
    uVar3 = uVar2;
  }
  local_40 = pcStack_50;
  uVar6 = FUN_0118ad90(&local_58,uVar3);
  if ((uVar6 & 1) != 0) {
    if (3 < param_2) {
      param_2 = 0;
    }
    iVar5 = (&DAT_0530052c)[(ulong)param_2 * 8];
    param_1[4] = (&DAT_05300528)[(ulong)param_2 * 8] + (int)local_48;
    param_1[5] = iVar5 + local_48._4_4_;
  }
  return uVar6 & 1;
}

