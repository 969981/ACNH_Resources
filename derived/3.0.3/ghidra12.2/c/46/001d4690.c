
bool FUN_001d4690(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 local_18 [8];
  
  local_18[0] = *param_2;
  uVar2 = *(ulong *)(param_1 + 0x18);
  uVar1 = uVar2;
  if (uVar2 < uVar2 + 1) {
    uVar1 = uVar2 + 1;
  }
  if (0x34 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,
                 0xe0000019,0);
  }
  *(ulong *)(param_1 + 0x18) = uVar1;
  memcpy((void *)(param_1 + uVar2 + 0x20),local_18,1);
  return uVar1 < 0x35;
}

