
void FUN_03c28490(long *param_1,long param_2,int param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined *local_180;
  undefined1 *local_178;
  undefined4 local_170;
  undefined1 local_16c [31];
  undefined1 local_14d;
  undefined **local_148;
  byte *local_140;
  undefined4 local_138;
  byte local_134 [255];
  undefined1 local_35;
  
  if (param_3 < 0) {
    if ((*(byte *)(param_1 + 4) >> 6 & 1) != 0) {
      return;
    }
    uVar2 = (**(code **)(*param_1 + 0x120))(param_1);
    if ((uVar2 & 1) == 0) {
      local_14d = 0;
      local_16c[0] = 0;
      local_178 = local_16c;
      local_170 = 0x20;
      local_138 = 0x100;
      local_140 = local_134;
      local_35 = 0;
      local_180 = PTR_DAT_04bb3000 + 0x10;
      local_134[0] = 0;
      local_148 = &PTR_LAB_048fda60;
      (**(code **)(*param_1 + 0x58))(param_1,&local_148);
      (*(code *)local_148[3])(&local_148);
      bVar1 = *local_140;
      if (bVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0xffffffff;
        pbVar4 = local_140;
        do {
          pbVar4 = pbVar4 + 1;
          uVar3 = crc32b(uVar3,(uint)bVar1,0x4c11db7);
          bVar1 = *pbVar4;
        } while (bVar1 != 0);
        uVar3 = ~uVar3;
      }
      FUN_038d1270(&local_180,&DAT_04074ae0,uVar3);
      (**(code **)(local_180 + 0x18))(&local_180);
      FUN_03eab954(param_2,local_178);
      bVar1 = *(byte *)(param_1 + 4);
    }
    else {
      local_14d = 0;
      local_16c[0] = 0;
      local_178 = local_16c;
      local_170 = 0x20;
      local_138 = 0x100;
      local_140 = local_134;
      local_35 = 0;
      local_180 = PTR_DAT_04bb3000 + 0x10;
      local_134[0] = 0;
      local_148 = &PTR_LAB_048fda60;
      (**(code **)(*param_1 + 0x58))(param_1,&local_148);
      (*(code *)local_148[3])(&local_148);
      bVar1 = *local_140;
      if (bVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0xffffffff;
        pbVar4 = local_140;
        do {
          pbVar4 = pbVar4 + 1;
          uVar3 = crc32b(uVar3,(uint)bVar1,0x4c11db7);
          bVar1 = *pbVar4;
        } while (bVar1 != 0);
        uVar3 = ~uVar3;
      }
      FUN_038d1270(&local_180,&DAT_04074ae0,uVar3);
      (**(code **)(local_180 + 0x18))(&local_180);
      FUN_03eab368(param_2,local_178);
      bVar1 = *(byte *)(param_1 + 4);
    }
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x120))(param_1);
    if ((uVar2 & 1) == 0) {
      FUN_03eab7bc(param_2);
      bVar1 = *(byte *)(param_1 + 4);
    }
    else {
      FUN_03eab0ac(param_2);
      bVar1 = *(byte *)(param_1 + 4);
    }
  }
  if ((bVar1 >> 6 & 1) == 0) {
    (**(code **)(*param_1 + 0x130))(param_1,param_2);
  }
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + -1;
  return;
}

