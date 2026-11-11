
void FUN_00443ca0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar3 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
  if ((uVar3 <= *(ulong *)(param_1 + 0x10)) &&
     (*(ulong *)(param_1 + 8) = uVar3, puVar1 != (undefined8 *)0x0)) {
    *puVar1 = param_2;
    uVar2 = nn::os::GetSystemTick();
    puVar1[1] = uVar2;
  }
  if (DAT_04c6f420 != (code *)0x0) {
    (*DAT_04c6f420)(DAT_04c6f428);
    if (DAT_04c6f420 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00443d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_04c6f420)(DAT_04c6f428);
      return;
    }
  }
  return;
}

