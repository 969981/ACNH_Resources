
void FUN_03a9addc(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x2b0) != 0) {
    FUN_03aa6fb0(*(long *)(param_1 + 0x2b0),param_2,*(undefined1 *)(param_3 + 8));
  }
  lVar2 = *(long *)(param_1 + 0x2a0);
  if (((lVar2 == 0) || (*(char *)(*(long *)(param_1 + 8) + 0x930) == '\0')) ||
     (*(char *)(lVar2 + 0x48) == '\0')) {
    return;
  }
  uVar1 = *(undefined1 *)(param_3 + 8);
  FUN_03aa01f0(lVar2,param_2,uVar1,*(undefined8 *)(param_3 + 0x318),0);
  FUN_03aa0760(lVar2,param_2,uVar1);
  return;
}

