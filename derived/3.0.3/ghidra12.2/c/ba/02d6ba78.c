
void FUN_02d6ba78(long param_1)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a6 [2];
  undefined1 auStack_a4 [8];
  undefined1 auStack_9c [2];
  undefined1 auStack_9a [2];
  byte local_98 [2];
  undefined1 auStack_96 [2];
  byte local_94 [4];
  undefined *local_90;
  char *pcStack_88;
  undefined8 local_80;
  
  pbVar1 = (byte *)(param_1 + 0x1f8);
  lVar2 = param_1 + 0x1668;
  uVar4 = FUN_02d6ca10(pbVar1,lVar2);
  if ((uVar4 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x2454) = 0x1e;
  }
  else {
    local_94[0] = *pbVar1;
    if (7 < local_94[0]) {
      local_94[0] = 0xff;
    }
    lVar5 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_94,1);
    if (lVar5 != 0) {
      if ((*(long *)(lVar5 + 0x178) == 0) ||
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x178) + 0x10), puVar6 == (undefined8 *)0x0))
      {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar6)();
        uVar3 = uVar3 ^ 1;
      }
      local_98[0] = *pbVar1;
      if (7 < local_98[0]) {
        local_98[0] = 0xff;
      }
      FUN_007ef010(auStack_9a,lVar2);
      FUN_007ef010(auStack_9c,lVar2);
      FUN_02655ed0(auStack_96,local_98,auStack_9a,auStack_9c);
      FUN_007ef010(auStack_a6,auStack_96);
      FUN_00805ba8(auStack_a4,auStack_a6);
      local_c0 = 0xfffe;
      FUN_0277d4ac(&local_c0);
      local_b8 = 0xfffe;
      FUN_0277d4ac(&local_b8);
      local_b0 = 0xfffe;
      FUN_0277d4ac(&local_b0);
      local_d8 = 0xfffe;
      FUN_0277d4ac(&local_d8);
      local_d0 = 0xfffe;
      FUN_0277d4ac(&local_d0);
      local_c8 = 0xfffe;
      FUN_0277d4ac(&local_c8);
      local_dc = 0;
      local_f4 = 0xfffe;
      FUN_0277d4ac(&local_f4);
      local_ec = 0xfffe;
      FUN_0277d4ac(&local_ec);
      local_e4 = 0xfffe;
      FUN_0277d4ac(&local_e4);
      if ((*(long *)(lVar5 + 0x178) != 0) &&
         (plVar7 = *(long **)(*(long *)(lVar5 + 0x178) + 0x20), plVar7 != (long *)0x0)) {
        local_90 = *(undefined **)(lVar5 + 0x158);
        pcStack_88 = *(char **)(lVar5 + 0x160);
        local_80 = 0x1198;
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_90);
      }
      FUN_02d6de1c(&local_90,*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
      FUN_026669f0(&local_90,auStack_a4,0,&local_c0,&local_d8,&local_dc,&local_f4);
      uVar4 = FUN_0253f300(pbVar1,auStack_a4,1);
      if ((uVar4 & 1) != 0) {
        if ((short)local_d8 != -2) {
          FUN_02665540(&local_d8);
        }
        if ((short)local_d0 != -2) {
          FUN_02665540(&local_d0);
        }
        if ((short)local_c8 != -2) {
          FUN_02665540(&local_c8);
        }
      }
      local_90 = PTR_DAT_04bb2020 + 0x10;
      pcStack_88 = "PV_ChangeEquip";
      FUN_01b5c520(&local_90,1,pbVar1);
      if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
        *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 0xe;
      }
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x178) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x178) + 0x18), puVar6 != (undefined8 *)0x0))
      {
        (**(code **)*puVar6)();
      }
    }
  }
  return;
}

