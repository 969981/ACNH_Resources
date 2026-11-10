
ulong FUN_001edfd0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  plVar1 = (long *)(param_4 + 0x1b8);
  uVar5 = param_3 * param_2;
  (**(code **)(*(long *)(param_4 + 0x1b8) + 0x10))(plVar1);
  uVar6 = uVar5;
  if ((*(char *)(param_4 + 0x201) == '\0') &&
     (uVar6 = 0x10000001, *(char *)(param_4 + 0x204) != '\0')) {
    *(undefined1 *)(param_4 + 0x202) = 1;
    (**(code **)(*(long *)(param_4 + 0x1b8) + 0x20))(plVar1);
    (**(code **)(*(long *)(param_4 + 0x1b8) + 0x10))(plVar1);
    lVar2 = *(long *)(*(long *)(param_4 + 0x218) + 0x30);
    lVar3 = *(long *)(*(long *)(param_4 + 0x218) + 0x38);
    (**(code **)(*(long *)(param_4 + 0x1b8) + 0x20))(plVar1);
    if ((ulong)(lVar3 - lVar2) < uVar5) {
      uVar7 = 0;
      do {
        FUN_001878b0(10);
        (**(code **)(*(long *)(param_4 + 0x1b8) + 0x10))(plVar1);
        uVar6 = *(long *)(*(long *)(param_4 + 0x218) + 0x38) -
                *(long *)(*(long *)(param_4 + 0x218) + 0x30);
        (**(code **)(*(long *)(param_4 + 0x1b8) + 0x20))(plVar1);
        if (uVar5 <= uVar6) break;
        bVar4 = uVar7 < 99;
        uVar7 = uVar7 + 1;
      } while (bVar4);
      if (uVar6 < uVar5) {
        return 0x10000001;
      }
    }
    (**(code **)(*(long *)(param_4 + 0x1b8) + 0x10))(plVar1);
    FUN_0018a5b8(*(undefined8 *)(param_4 + 0x218),param_1,uVar5);
    uVar6 = uVar5;
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return uVar6;
}

