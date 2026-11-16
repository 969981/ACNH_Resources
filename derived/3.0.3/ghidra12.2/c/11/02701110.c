
long FUN_02701110(long param_1)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_04bb3350;
  if (*(long *)PTR_DAT_04bb3350 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    if ((*(long *)puVar2 != 0) && (*(long *)(*(long *)puVar2 + 0x60) == lVar4)) {
      return param_1 + 0x450;
    }
  }
  plVar6 = (long *)(lVar4 + 0x20);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  if (*(char **)(lVar4 + 0x28) == "SceneLoad") {
LAB_027011e0:
    param_1 = param_1 + 0x451;
  }
  else {
    uVar5 = 0;
    bVar3 = true;
    do {
      cVar1 = (*(char **)(lVar4 + 0x28))[uVar5];
      if (cVar1 != "SceneLoad"[uVar5]) break;
      if (cVar1 == '\0') {
        if (bVar3) goto LAB_027011e0;
        break;
      }
      bVar3 = uVar5 < 0x80000;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x80001);
    (**(code **)(*(long *)(lVar4 + 0x20) + 0x18))(plVar6);
    (**(code **)(*(long *)(lVar4 + 0x20) + 0x18))(plVar6);
    if (*(char **)(lVar4 + 0x28) == "ActorLoad") {
LAB_02701254:
      param_1 = param_1 + 0x452;
    }
    else {
      uVar5 = 0;
      bVar3 = true;
      do {
        cVar1 = (*(char **)(lVar4 + 0x28))[uVar5];
        if (cVar1 != "ActorLoad"[uVar5]) break;
        if (cVar1 == '\0') {
          if (bVar3) goto LAB_02701254;
          break;
        }
        bVar3 = uVar5 < 0x80000;
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x80001);
      param_1 = 0;
    }
  }
  return param_1;
}

