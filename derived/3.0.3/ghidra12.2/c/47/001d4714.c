
bool FUN_001d4714(long param_1,undefined2 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 local_18 [4];
  
  local_18[0] = *param_2;
  uVar2 = *(ulong *)(param_1 + 0x18);
  uVar1 = uVar2 + 2;
  if (uVar2 + 2 <= uVar2) {
    uVar1 = uVar2;
  }
  if (0x34 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,
                 0xe0000019,0);
  }
  *(ulong *)(param_1 + 0x18) = uVar1;
  memcpy((void *)(param_1 + uVar2 + 0x20),local_18,2);
  return uVar1 < 0x35;
}

