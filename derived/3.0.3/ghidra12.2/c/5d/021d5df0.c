
undefined8 FUN_021d5df0(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  lVar5 = *(long *)PTR_DAT_04bb4138;
  if (lVar5 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    local_28 = FUN_006bd550(param_1[1],0);
    lVar5 = FUN_0079e770(lVar5,&local_28);
    if (lVar5 != 0) {
      return 0;
    }
  }
  lVar5 = DAT_053f9928;
  if (DAT_053f9928 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    local_24 = FUN_006bd550(param_1[1],0);
    lVar5 = FUN_0079e4d0(lVar5,&local_24);
    if (lVar5 != 0) {
      return 1;
    }
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*param_1 + 0x18))(param_1);
  if ((char *)param_1[1] == "NpcPlayer") {
LAB_021d5f10:
    uVar3 = 2;
  }
  else {
    uVar4 = 0;
    bVar2 = true;
    do {
      cVar1 = ((char *)param_1[1])[uVar4];
      if (cVar1 != "NpcPlayer"[uVar4]) break;
      if (cVar1 == '\0') {
        if (bVar2) goto LAB_021d5f10;
        break;
      }
      bVar2 = uVar4 < 0x80000;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x80001);
    uVar3 = 3;
  }
  return uVar3;
}

