
void FUN_0015e688(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  char *__s;
  undefined8 local_58;
  
  uVar1 = *(ulong *)(param_3 + 0xf60) & 0x840;
  puVar3 = &DAT_040a395c;
  if (uVar1 != 0) {
    puVar3 = &DAT_040c2970;
  }
  local_58 = param_2;
  if (param_1 != (undefined8 *)0x0) {
    do {
      __s = (char *)*param_1;
      pcVar5 = strchr(__s,0x3a);
      if ((pcVar5 == (char *)0x0) || (pcVar5[1] != ' ')) {
        FUN_0014d430(param_3,"Malformatted trailing header ! Skipping trailer.");
      }
      else {
        iVar4 = FUN_0015e3d4(&local_58,&DAT_0406a3d7,__s,puVar3);
        if (iVar4 != 0) {
          return;
        }
      }
      param_1 = (undefined8 *)param_1[1];
    } while (param_1 != (undefined8 *)0x0);
  }
  uVar2 = 1;
  if (uVar1 == 0) {
    uVar2 = 2;
  }
  FUN_0015e4a4(&local_58,puVar3,uVar2);
  return;
}

