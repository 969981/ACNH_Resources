
undefined8 FUN_001d3608(long param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_3 == 0) {
    return 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  uVar1 = uVar2 + param_3;
  if (uVar2 + param_3 <= uVar2) {
    uVar1 = uVar2;
  }
  if (0x14 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,
                 0xe0000019,0);
  }
  *(ulong *)(param_1 + 0x18) = uVar1;
  memcpy((void *)(param_1 + uVar2 + 0x20),param_2,param_3);
  return 1;
}

