
/* WARNING: Removing unreachable block (ram,0x0331c1d4) */

void FUN_0331c194(long param_1,uint param_2,undefined *param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  
  local_a8 = local_a8 & 0xffffffff00000000;
  plVar2 = *(long **)(param_1 + 0x2e0);
  uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,0xf80,8);
  FUN_032d04c4(uVar3,(undefined8 *)(param_1 + 0x2e0));
  puVar1 = PTR_DAT_04bc96f8;
  *(undefined8 *)(param_1 + 0x2f0) = uVar3;
  local_86 = 0;
  local_80 = 0;
  local_78 = 0;
  if (*(uint *)(*(long *)puVar1 + 0x10) <= param_2) {
    param_2 = 0;
  }
  local_70 = 0;
  local_68 = (undefined8 *)0x0;
  local_a8 = *(long *)(*(long *)puVar1 + 0x18) + (long)(int)param_2 * 0x158;
  local_88 = 0;
  puStack_a0 = PTR_DAT_04bc8e68 + 0x10;
  local_98 = PTR_DAT_04bb2120;
  if (param_3 != (undefined *)0x0) {
    local_98 = param_3;
  }
  uStack_90 = 0x640;
  FUN_032d0880(uVar3,&local_a8);
  if (local_68 != (undefined8 *)0x0) {
    (**(code **)*local_68)();
  }
  return;
}

