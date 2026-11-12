
undefined8 FUN_00902980(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long local_40;
  char local_38;
  char local_36;
  
  FUN_0071cb58(&local_40,param_2,*(undefined8 *)(param_1 + 0x10),0);
  if (((local_40 != 0) && (local_38 != '\0')) && (local_36 != '\0')) {
    plVar4 = *(long **)(param_1 + 8);
    (**(code **)(*(long *)(local_40 + 0x188) + 0x18))(local_40 + 0x188);
    (**(code **)(*(long *)(local_40 + 0x188) + 0x18))(local_40 + 0x188);
    lVar5 = *(long *)(local_40 + 400);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    if (lVar5 == plVar4[1]) {
      return 1;
    }
    uVar3 = 0;
    bVar2 = true;
    do {
      cVar1 = *(char *)(*(long *)(local_40 + 400) + uVar3);
      if (cVar1 != *(char *)(plVar4[1] + uVar3)) {
        return 0;
      }
      if (cVar1 == '\0') {
        if (bVar2) {
          return 1;
        }
        return 0;
      }
      bVar2 = uVar3 < 0x80000;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x80001);
  }
  return 0;
}

