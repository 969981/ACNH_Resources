
void FUN_00443dc0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar2 = (long)puVar1 + 0xfU & 0xfffffffffffffff8;
  if ((uVar2 <= *(ulong *)(param_1 + 0x10)) &&
     (*(ulong *)(param_1 + 8) = uVar2, puVar1 != (undefined8 *)0x0)) {
    *puVar1 = &DAT_040b3e75;
  }
  return;
}

