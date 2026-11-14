
void FUN_01bf2700(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 local_100;
  int iStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined1 local_d4 [63];
  undefined1 local_95;
  undefined **local_90;
  undefined8 local_88;
  byte *local_80;
  undefined4 local_78;
  byte local_74 [20];
  
  piVar4 = *(int **)(param_1 + 0x30);
  iVar2 = piVar4[1];
  if ((piVar4[2] == -1 && *piVar4 == 1) && iVar2 != -1) {
    local_80 = local_74;
    local_78 = 0xffffffff;
    local_88 = 0x400000064;
    local_90 = &PTR_LAB_04a3e298;
    FUN_01bf61b0(&local_90,*(undefined8 *)(param_1 + 0x28),iVar2);
    puVar3 = PTR_DAT_04bb2bc0;
    puVar1 = (undefined8 *)(param_1 + 8);
    if ((*local_80 & 1) != 0) {
      local_e8 = PTR_DAT_04bb2bc0 + 0x10;
      local_95 = 0;
      local_d8 = 0x40;
      local_f0 = 0;
      local_d4[0] = 0;
      local_100 = 1;
      local_f8 = 0;
      uStack_f4 = 0;
      iStack_fc = iVar2;
      puStack_e0 = local_d4;
      FUN_038d1270(&local_e8,&DAT_0405bf91,iVar2);
      (**(code **)*puVar1)(puVar1,&local_100);
    }
    uVar5 = 1;
    do {
      if ((*(uint *)(local_80 + (ulong)(uVar5 >> 5) * 4) >> (ulong)(uVar5 & 0x1f) & 1) != 0) {
        local_d8 = 0x40;
        local_95 = 0;
        uStack_f4 = 0;
        local_f0 = 0;
        local_d4[0] = 0;
        local_100 = 1;
        iStack_fc = iVar2;
        local_f8 = uVar5;
        local_e8 = puVar3 + 0x10;
        puStack_e0 = local_d4;
        FUN_038d1270(&local_e8,"%03d_%02d",iVar2,uVar5);
        (**(code **)*puVar1)(puVar1,&local_100);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 100);
  }
  return;
}

