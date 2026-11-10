
undefined8 FUN_00157eb4(long param_1,undefined1 *param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  if ((*(char *)(param_1 + 1) == '\x02') &&
     (lVar1 = FUN_0014b724(2,param_1 + 4,param_2,0x2e), lVar1 != 0)) {
    uVar2 = nnsocketInetNtohs(*(undefined2 *)(param_1 + 2));
    uVar3 = 1;
    *param_3 = uVar2 & 0xffff;
  }
  else {
    *param_2 = 0;
    *param_3 = 0;
    piVar4 = __errno_location();
    uVar3 = 0;
    *piVar4 = 0x61;
  }
  return uVar3;
}

