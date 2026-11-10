
undefined8 FUN_001f2c50(long param_1)

{
  int iVar1;
  ulong uVar2;
  size_t sVar3;
  size_t sVar4;
  char acStack_440 [1024];
  long local_38;
  
  local_38 = 0;
  memset(acStack_440,0,0x400);
  uVar2 = FUN_001f3050(*(undefined8 *)(param_1 + 0x150),acStack_440,0x400,param_1 + 8,param_1 + 0x30
                      );
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  sVar3 = strnlen(acStack_440,0x400);
  sVar4 = 0;
  uVar2 = 0;
  do {
    iVar1 = FUN_001431c4(**(undefined8 **)(param_1 + 0x148),acStack_440 + sVar4,sVar3 - sVar4,
                         &local_38);
    if (iVar1 != 0x51) {
      if (iVar1 != 0) {
        return 0;
      }
      sVar4 = local_38 + sVar4;
      if (sVar4 == sVar3) {
        return 1;
      }
    }
    if (0x270 < (uint)(uVar2 >> 3)) {
      return 0;
    }
    FUN_001878b0(0x10);
    uVar2 = (ulong)((int)uVar2 + 0x10);
  } while( true );
}

