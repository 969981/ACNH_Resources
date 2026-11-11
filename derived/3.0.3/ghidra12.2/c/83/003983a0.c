
void FUN_003983a0(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ushort local_24;
  undefined2 local_22;
  
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  local_68 = 0;
  plVar1 = *(long **)(param_1 + 8);
  if (*(long **)(param_1 + 0x1c0) != (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x1c0);
  }
  (**(code **)(*plVar1 + 0x20))(&local_90,plVar1);
  FUN_0034fd18(&local_70);
  uVar5 = (uint)local_90;
  local_78 = 0;
  local_70 = 0;
  uVar4 = (uint)local_90 >> 0x10;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  uVar2 = NEON_ucvtf(uVar5 & 0xffff);
  uVar3 = NEON_ucvtf(uVar4);
  local_68 = CONCAT44(uVar3,uVar2);
  (**(code **)(*plVar1 + 0x20))(&local_24,plVar1);
  FUN_0034fd28(&local_90);
  local_90 = 0;
  local_88 = (ulong)CONCAT24(local_22,(uint)local_24);
  FUN_00348698((short)*(undefined4 *)(param_1 + 0x140),(short)*(undefined4 *)(param_1 + 0x144),
               *(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c),param_3,plVar1 + 8,
               0);
  *(undefined8 *)(param_2 + 0x118) = uStack_58;
  *(undefined8 *)(param_2 + 0x120) = local_50;
  *(undefined8 *)(param_2 + 0x108) = local_68;
  *(undefined8 *)(param_2 + 0x110) = local_60;
  *(long **)(param_2 + 0xf8) = plVar1 + 8;
  *(undefined8 *)(param_2 + 0x100) = local_70;
  *(undefined8 *)(param_2 + 0x148) = local_78;
  *(long *)(param_2 + 0x150) = param_1 + 0x178;
  *(ulong *)(param_2 + 0x138) = local_88;
  *(undefined8 *)(param_2 + 0x140) = local_80;
  *(undefined8 *)(param_2 + 0x128) = uStack_48;
  *(undefined8 *)(param_2 + 0x130) = local_90;
  if (*(long *)(param_1 + 0x1c8) != 0) {
    *(long *)(param_2 + 0x160) = *(long *)(param_1 + 0x1c8);
  }
  FUN_00365188(param_2,param_3);
  return;
}

