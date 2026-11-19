
void FUN_03a0fcd0(long param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined1 uVar13;
  undefined *local_68;
  char *pcStack_60;
  int local_54;
  
  lVar12 = *(long *)PTR_DAT_04bbd510;
  uVar9 = 0x59;
  if (*(char *)(param_1 + 0xe8) == '\0') {
    uVar9 = 0x5a;
  }
  if ((param_3 == 1) && (*(char *)(param_1 + 200) == '\0')) {
    if (*(char *)(param_1 + 0x108) == '\0') {
      uVar7 = *(undefined4 *)(param_1 + 0x68);
      local_68 = PTR_DAT_04bb2020 + 0x10;
      uVar8 = *(undefined4 *)(param_1 + 0x88);
      pcStack_60 = "shadow_map_depth";
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar5 == 0) {
        local_54 = nn::os::GetCurrentCoreNumber();
      }
      else {
        local_54 = (int)lVar5 + -1;
      }
      uVar6 = 1;
      lVar5 = lVar12 + (long)local_54 * 0x290 + 0x10;
      uVar13 = 1;
      param_3 = 1;
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 0x68);
      lVar5 = lVar12 + 0x7c0;
      uVar8 = *(undefined4 *)(param_1 + 0x88);
      uVar13 = 0;
      local_68 = PTR_DAT_04bb2020 + 0x10;
      pcStack_60 = "shadow_map_depth";
      uVar6 = 1;
      param_3 = 1;
    }
  }
  else if (*(char *)(param_1 + 0x108) == '\0') {
    uVar7 = *(undefined4 *)(param_1 + 0x68);
    local_68 = PTR_DAT_04bb2020 + 0x10;
    uVar8 = *(undefined4 *)(param_1 + 0x88);
    pcStack_60 = "shadow_map_depth";
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar5 == 0) {
      local_54 = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_54 = (int)lVar5 + -1;
    }
    uVar6 = 4;
    lVar5 = lVar12 + (long)local_54 * 0x290 + 0x10;
    uVar13 = 1;
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x68);
    lVar5 = lVar12 + 0x7c0;
    uVar8 = *(undefined4 *)(param_1 + 0x88);
    uVar13 = 0;
    local_68 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "shadow_map_depth";
    uVar6 = 4;
  }
  uVar6 = FUN_03948e10(lVar12,param_2,lVar5,&local_68,uVar9,uVar6,uVar7,uVar8,param_4,0,param_3,0,
                       uVar13,0,0,0);
  *(undefined8 *)(param_1 + 0x1d8) = uVar6;
  *(undefined1 *)(param_1 + 0xb98) = *(undefined1 *)(param_1 + 0x108);
  FUN_0155a100(param_1 + 0x578,uVar6,0,0);
  puVar11 = *(undefined4 **)(param_1 + 0x1d8);
  *(undefined4 *)(param_1 + 0x1e0) = *puVar11;
  *(undefined4 *)(param_1 + 0x1e4) = puVar11[1];
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(puVar11 + 2);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(puVar11 + 4);
  *(undefined4 *)(param_1 + 0x1f8) = puVar11[6];
  *(undefined4 *)(param_1 + 0x1fc) = puVar11[7];
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(puVar11 + 8);
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(puVar11 + 10);
  uVar6 = *(undefined8 *)(puVar11 + 0xc);
  uVar2 = *(undefined8 *)(puVar11 + 0xe);
  uVar10 = *(undefined8 *)(puVar11 + 0x10);
  *(undefined8 *)(param_1 + 0x227) = *(undefined8 *)((long)puVar11 + 0x47);
  *(undefined8 *)(param_1 + 0x220) = uVar10;
  *(undefined8 *)(param_1 + 0x218) = uVar2;
  *(undefined8 *)(param_1 + 0x210) = uVar6;
  FUN_038fd1e0(param_1 + 0x230);
  FUN_038fd2f0(param_1 + 0x230,puVar11 + 0x14);
  uVar9 = puVar11[0x26];
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(puVar11 + 0x24);
  puVar1 = (uint *)(param_1 + 0x2b4);
  *(undefined4 *)(param_1 + 0x278) = uVar9;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = *puVar1 | 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}

