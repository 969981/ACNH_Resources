
void FUN_00443d20(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  uVar2 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
  if ((uVar2 <= *(ulong *)(param_2 + 0x10)) &&
     (*(ulong *)(param_2 + 8) = uVar2, puVar1 != (undefined8 *)0x0)) {
    *puVar1 = param_3;
    *(undefined4 *)(puVar1 + 1) = param_1;
  }
  return;
}

