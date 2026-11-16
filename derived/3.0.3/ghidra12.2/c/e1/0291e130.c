
/* WARNING: Removing unreachable block (ram,0x0291e1d0) */
/* WARNING: Removing unreachable block (ram,0x0291e2c4) */

undefined8 FUN_0291e130(undefined8 *param_1,uint *param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  short *psVar8;
  undefined8 *puVar9;
  undefined8 local_9c;
  undefined4 local_94;
  long local_90 [2];
  undefined8 local_80;
  uint *puStack_78;
  short *local_70 [2];
  undefined8 local_60;
  uint *puStack_58;
  short *local_50;
  long local_48;
  
  lVar4 = FUN_0290c1e0(0);
  if (lVar4 == 0) {
    return 0;
  }
  psVar8 = *(short **)(lVar4 + 8);
  local_48 = 0;
  local_50 = psVar8;
  if (psVar8 != (short *)0x0) {
    uVar5 = FUN_03eaa5e0(psVar8);
    if ((uVar5 & 1) == 0) {
      psVar8 = (short *)0x0;
      local_50 = (short *)0x0;
      local_48 = 0;
    }
    else {
      uVar2 = *(uint *)(psVar8 + 6);
      uVar7 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
      if (*psVar8 != 0x5942) {
        uVar7 = uVar2;
      }
      if (uVar7 != 0) {
        local_48 = (long)psVar8 + (ulong)uVar7;
      }
    }
  }
  local_60._0_4_ = 10;
  (**(code **)(DAT_055cc2b8 + 0x18))(&DAT_055cc2b8);
  local_60 = (short *)((ulong)local_60._5_3_ << 0x28);
  uVar5 = FUN_03ea9450(&local_50,&local_60,DAT_055cc2c0);
  if (((((uVar5 & 1) == 0) || (1 < local_60._4_1_ - 0xc0)) ||
      (puStack_58 = (uint *)((long)psVar8 + ((ulong)local_60 & 0xffffffff)), psVar8 == (short *)0x0)
      ) || ((*puStack_58 & 0xfe) != 0xc0)) {
    return 0;
  }
  uVar7 = *puStack_58 >> 8;
  if (*psVar8 == 0x5942) {
    uVar7 = uVar7 & 0xff00 | *puStack_58 >> 0x18 | (uVar7 & 0xff) << 0x10;
  }
  if (uVar7 <= param_3) {
    return 0;
  }
  local_60 = psVar8;
  FUN_03ea9348(local_70,&local_60,param_3);
  if (local_70[0] == (short *)0x0) {
    return 0;
  }
  local_80._0_4_ = 0x27;
  (**(code **)(DAT_055cc488 + 0x18))(&DAT_055cc488);
  local_80 = (short *)((ulong)local_80._5_3_ << 0x28);
  uVar5 = FUN_03ea9450(local_70,&local_80,DAT_055cc490);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (local_80._4_1_ - 0xc0 < 2) {
    puStack_78 = (uint *)((long)local_70[0] + ((ulong)local_80 & 0xffffffff));
    local_80 = local_70[0];
    if ((*puStack_78 & 0xfe) == 0xc0) {
      uVar7 = *puStack_78 >> 8;
      if (*local_70[0] == 0x5942) {
        uVar7 = uVar7 & 0xff00 | *puStack_78 >> 0x18 | (uVar7 & 0xff) << 0x10;
      }
      *param_2 = uVar7;
      if (uVar7 == 0) {
        return 1;
      }
      uVar5 = 0;
      puVar9 = param_1;
      while( true ) {
        FUN_03ea9348(local_90,&local_80,uVar5 & 0xffffffff);
        if (local_90[0] == 0) {
          return 0;
        }
        uVar6 = FUN_02911218(&local_9c,local_90);
        if ((uVar6 & 1) == 0) break;
        bVar3 = 0x7f < uVar5;
        uVar5 = uVar5 + 1;
        puVar1 = puVar9;
        if (bVar3) {
          puVar1 = param_1;
        }
        puVar9 = (undefined8 *)((long)puVar9 + 0xc);
        *puVar1 = local_9c;
        *(undefined4 *)(puVar1 + 1) = local_94;
        if (uVar7 == uVar5) {
          return 1;
        }
      }
      return 0;
    }
  }
  else if (local_80._4_1_ != 0xff) {
    return 0;
  }
  *param_2 = 0;
  return 1;
}

