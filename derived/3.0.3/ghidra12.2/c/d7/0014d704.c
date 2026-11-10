
/* WARNING: Removing unreachable block (ram,0x0014d758) */
/* WARNING: Removing unreachable block (ram,0x0014d760) */

undefined4
FUN_0014d704(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = (**(code **)(param_1 + (ulong)(*(int *)(param_1 + 0x25c) == param_2) * 8 + 0x280))();
  uVar1 = 0;
  *param_5 = lVar2;
  if (lVar2 < 0) {
    uVar1 = 0x37;
  }
  return uVar1;
}

