
void FUN_00443d50(long param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,long param_5,
                 long param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (long)puVar1 + param_6 + 0xf & -param_6;
    uVar3 = param_5 + uVar2 + 7 & 0xfffffffffffffff8;
    if (uVar3 <= *(ulong *)(param_1 + 0x10)) {
      *(ulong *)(param_1 + 8) = uVar3;
      *puVar1 = param_2;
      puVar1[1] = param_4;
      *param_3 = uVar2;
    }
  }
  return;
}

