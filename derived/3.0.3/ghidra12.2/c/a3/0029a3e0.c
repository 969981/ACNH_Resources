
bool FUN_0029a3e0(long param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_30;
  ErrorResultVariant aEStack_2c [12];
  
  local_30 = 0;
  local_40 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_40);
  if (param_2 == 0) {
    if ((param_3 & 0xff) == 0xfd) {
      return false;
    }
    uVar2 = FUN_0026c89c(DAT_04c603c8);
    FUN_00261010(auStack_50,uVar2,&local_40,param_3);
    FUN_00229780(&local_30,auStack_50);
  }
  else {
    uVar2 = FUN_0026c89c(DAT_04c603c8);
    FUN_002610a0(auStack_50,uVar2,&local_40,param_2);
    FUN_00229780(&local_30,auStack_50);
  }
  if ((local_30 != 0) || (lVar1 = CONCAT44(uStack_3c,local_40), lVar1 == 0)) {
    return false;
  }
  if (*(char *)(param_1 + 0x15d) != '\0') {
    FUN_00291cd0(*(undefined8 *)(param_1 + 0xb8),lVar1,0);
    return true;
  }
  uVar3 = FUN_00292080(*(undefined8 *)(param_1 + 0xb8),lVar1);
  if ((uVar3 & 1) != 0) {
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      (**(code **)(param_1 + 0xa0))(1,lVar1,*(undefined8 *)(param_1 + 0xa8));
    }
    for (lVar4 = *(long *)(param_1 + 0x1a0); lVar4 != param_1 + 0x198; lVar4 = *(long *)(lVar4 + 8))
    {
      if (*(long *)(lVar4 + 0x10) == lVar1) {
        FUN_00223704(param_1 + 0x198,lVar4);
        FUN_002236e0(param_1 + 0x1b0,param_1 + 0x1b0,lVar4 + *(int *)(param_1 + 0x1c4));
        break;
      }
    }
    FUN_0029b390(param_1);
  }
  uVar2 = FUN_0026c89c(DAT_04c603c8);
  FUN_00260f60(&local_40,uVar2,lVar1);
  FUN_00229780(&local_30,&local_40);
  FUN_00291a30(&local_40,*(undefined8 *)(param_1 + 0xb8),lVar1);
  FUN_00229780(&local_30,&local_40);
  return local_30 == 0;
}

