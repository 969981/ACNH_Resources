
void FUN_00443ad0(long param_1,void *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (DAT_04c6f418 != (code *)0x0) {
    (*DAT_04c6f418)(param_2,DAT_04c6f428);
  }
  iVar2 = FUN_0043a2d0(param_2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  iVar2 = iVar2 + 1;
  uVar4 = (long)(puVar1 + 3) + (long)iVar2 + 7U & 0xfffffffffffffff8;
  if ((*(ulong *)(param_1 + 0x10) < uVar4) ||
     (*(ulong *)(param_1 + 8) = uVar4, puVar1 == (undefined8 *)0x0)) {
    return;
  }
  *puVar1 = param_3;
  *(short *)(puVar1 + 2) = (short)iVar2;
  uVar3 = nn::os::GetSystemTick();
  puVar1[1] = uVar3;
  memcpy(puVar1 + 3,param_2,(long)iVar2);
  return;
}

