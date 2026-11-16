
bool FUN_02703140(long param_1)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  long *plVar7;
  
  if ((*(long *)PTR_DAT_04bb3350 != 0) &&
     (lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68)), lVar4 != 0)) {
    plVar7 = (long *)(lVar4 + 0x20);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    if (*(char **)(lVar4 + 0x28) != "Prepare Thread") {
      uVar5 = 0;
      bVar3 = true;
      do {
        cVar1 = (*(char **)(lVar4 + 0x28))[uVar5];
        if (cVar1 != "Prepare Thread"[uVar5]) break;
        if (cVar1 == '\0') {
          if (bVar3) goto LAB_02703264;
          break;
        }
        bVar3 = uVar5 < 0x80000;
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x80001);
      (**(code **)(*(long *)(lVar4 + 0x20) + 0x18))(plVar7);
      (**(code **)(*(long *)(lVar4 + 0x20) + 0x18))(plVar7);
      pcVar6 = *(char **)(lVar4 + 0x28);
      if (pcVar6 != "SceneLoad") {
        if (*pcVar6 != 'S') {
          return false;
        }
        lVar4 = 0;
        do {
          if (lVar4 == 0x80000) {
            return false;
          }
          lVar2 = lVar4 + 1;
          if (pcVar6[lVar2] != "SceneLoad"[lVar4 + 1]) {
            return false;
          }
          lVar4 = lVar4 + 1;
        } while (pcVar6[lVar2] != '\0');
      }
    }
  }
LAB_02703264:
  return *(int *)(param_1 + 0x508) == 0;
}

