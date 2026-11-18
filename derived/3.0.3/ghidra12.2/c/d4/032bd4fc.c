
/* WARNING: Removing unreachable block (ram,0x032bd52c) */
/* WARNING: Removing unreachable block (ram,0x032bd578) */

void FUN_032bd4fc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong local_28;
  
  local_28 = local_28 & 0xffffffff00000000;
  puVar1 = (undefined8 *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0x30,8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  local_28 = *(ulong *)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  FUN_03281ac0(&local_28);
  local_28 = local_28 & 0xffffffff00000000;
  FUN_03291da0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)*param_2,1);
  return;
}

