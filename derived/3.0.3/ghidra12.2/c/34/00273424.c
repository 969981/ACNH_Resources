
bool FUN_00273424(long param_1,byte param_2,undefined1 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int local_44 [4];
  undefined1 local_34;
  byte local_33;
  undefined1 local_32;
  
  local_33 = FUN_0026bfe0(*(undefined8 *)PTR_DAT_04bcd350);
  if (local_33 < 0x20) {
    lVar4 = *(long *)(param_1 + 0x90);
    iVar5 = (uint)param_2 - (uint)(local_33 <= param_2);
    lVar3 = lVar4 + (long)iVar5 * 0x6b0;
    uVar1 = FUN_002aed20(lVar3);
    if ((uVar1 & 1) != 0) {
      local_34 = 0x21;
      local_32 = param_3;
      FUN_002b0d5c(local_44,lVar3,&local_34,3,0);
      if (local_44[0] == 0) {
        if (DAT_04c60320 == 0) {
          local_44[0] = 0;
        }
        else {
          uVar2 = FUN_002290b0(DAT_04c60320,9);
          FUN_0022910c(uVar2,*(undefined2 *)(lVar4 + (long)iVar5 * 0x6b0 + 0x32));
        }
      }
      return local_44[0] == 0;
    }
  }
  return false;
}

