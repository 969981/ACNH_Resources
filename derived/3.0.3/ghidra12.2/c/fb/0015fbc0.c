
undefined1 FUN_0015fbc0(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  size_t sVar4;
  char *__s;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0xc48);
  bVar1 = 4 < param_3;
  do {
    if (puVar5 == (undefined8 *)0x0) {
      uVar2 = 2;
LAB_0015fc34:
      if (4 < param_3) {
        param_3 = 5;
      }
      iVar3 = thunk_FUN_00144b34("HTTP/",param_2,param_3);
      if (iVar3 != 0) {
        uVar2 = bVar1;
      }
      return uVar2;
    }
    __s = (char *)*puVar5;
    sVar4 = strlen(__s);
    if (param_3 <= sVar4) {
      sVar4 = param_3;
    }
    iVar3 = thunk_FUN_00144b34(__s,param_2,sVar4);
    if (iVar3 != 0) {
      if (4 < param_3) {
        return 1;
      }
      uVar2 = 0;
      goto LAB_0015fc34;
    }
    puVar5 = (undefined8 *)puVar5[1];
  } while( true );
}

