
uint FUN_02301084(long param_1,byte *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float local_a8 [3];
  undefined1 auStack_9c [10];
  undefined1 local_92;
  undefined2 local_90 [4];
  undefined **local_88;
  undefined8 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined2 local_60;
  undefined4 local_5e;
  undefined1 local_5a;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined2 local_44;
  
  local_a8[1] = 0.0;
  fVar4 = (float)((*(int *)(param_3 + 0x20) - *(int *)(param_3 + 0x10)) + 1) * 5.0;
  fVar5 = (float)((*(int *)(param_3 + 0x24) - *(int *)(param_3 + 0x14)) + 1) * 5.0;
  if (fVar4 <= fVar5) {
    fVar4 = fVar5;
  }
  local_a8[0] = ((float)*(int *)(param_3 + 0x10) * 5.0 + (float)*(int *)(param_3 + 0x20) * 5.0 + 5.0
                ) * 0.5;
  local_a8[2] = ((float)*(int *)(param_3 + 0x14) * 5.0 + (float)*(int *)(param_3 + 0x24) * 5.0 + 5.0
                ) * 0.5;
  uVar3 = FUN_0252b6b0(fVar4 * 0.5,local_a8,param_2,1,1,0,1);
  uVar2 = 0;
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_01735670(fVar4 * 0.5,0xbf800000,local_a8,*(undefined4 *)PTR_DAT_04bb3238,
                         *(undefined4 *)PTR_DAT_04bb3238,1,1,0,1,0,0,1);
    uVar2 = 0;
    if ((uVar3 & 1) == 0) {
      bVar1 = *param_2;
      local_78 = *(undefined4 *)(param_3 + 0x10);
      uStack_74 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = (uint)bVar1;
      local_68 = *(undefined4 *)(param_3 + 0x20);
      uStack_64 = *(undefined4 *)(param_3 + 0x24);
      local_90[0] = *(undefined2 *)PTR_DAT_04bb6298;
      if (7 < uVar2) {
        uVar2 = 0xffffffff;
      }
      *(uint *)(param_1 + 0xc) = uVar2;
      if (bVar1 < 8) {
        *(byte *)(param_1 + 0x10) = bVar1;
      }
      *(undefined1 *)(param_1 + 0x11) = 1;
      local_58 = 0xffffffffffffffff;
      local_5a = 0;
      local_50 = 0;
      local_5e = 0x100;
      local_70 = &DAT_048f9750;
      local_88 = &PTR_FUN_0498d548;
      puStack_80 = &DAT_048f9750;
      local_4c = 0x41200000;
      local_44 = 0xff00;
      local_60 = 0xff00;
      if (*(int *)(param_1 + 8) == 0x15) {
        local_60 = 0x1400;
      }
      local_92 = 2;
      uVar2 = FUN_023016c0(param_1,local_90,auStack_9c);
    }
  }
  return uVar2 & 1;
}

