
void FUN_028e94c0(long param_1,uint *param_2,long param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  int iVar3;
  long local_88;
  undefined **local_80;
  uint *puStack_78;
  undefined8 local_70;
  long *plStack_68;
  undefined1 auStack_58 [4];
  uint local_54;
  
  iVar3 = 0;
  ppuVar1 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
  local_88 = param_3;
  do {
    if ((uint)*(byte *)(param_1 + (long)iVar3 * 0x1178 + 2) == *param_2) {
      plStack_68._0_4_ = (uint)(uint3)plStack_68;
      local_70 = CONCAT35(local_70._5_3_,8);
      local_80 = ppuVar1;
      puStack_78 = (uint *)((long)&local_70 + 4);
      FUN_0376b510(&local_80,*(undefined2 *)(param_1 + (long)iVar3 * 0x1178));
      local_54 = 0;
      uVar2 = FUN_020fc100(&local_54,auStack_58,&local_80);
      if ((uVar2 & 1) != 0) {
        uVar2 = (ulong)local_54;
        if (0x22 < local_54) {
          uVar2 = 0;
        }
        *(float *)(param_3 + uVar2 * 4) = *(float *)(param_3 + uVar2 * 4) + -1.0;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x26);
  local_80 = &PTR_LAB_04a926d8;
  plStack_68 = &local_88;
  puStack_78 = param_2;
  local_70 = param_1;
  FUN_028e9ef0(&local_80,param_2);
  return;
}

