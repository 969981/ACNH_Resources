
void FUN_01c66c20(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 uStack_38;
  
  *(undefined2 *)(param_2 + 0x38) = 1;
  ppuVar2 = (undefined **)(&DAT_05350570 + (ulong)param_3 * 2);
  if (2 < param_3) {
    ppuVar2 = (undefined **)&DAT_05350570;
  }
  if (2 < (int)param_3) {
    ppuVar2 = &PTR_PTR_04c4b980;
  }
  (**(code **)(*ppuVar2 + 0x18))(ppuVar2);
  local_50[0] = 0;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_40 = local_50;
  uStack_38 = 0x10;
  local_58 = puVar1;
  FUN_0018b070(&local_58,ppuVar2[1],0xffffffffffffffff);
  FUN_00189504(param_2 + 0x10,&local_58);
  local_58 = puVar1;
  FUN_0018b1a0(&local_58);
  *(undefined2 *)(param_2 + 0xcc) = 0xfb32;
  if (param_2 + 0xd8 != param_1 + 0x48) {
    FUN_01c66e30();
  }
  return;
}

