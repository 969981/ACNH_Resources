
void FUN_001a2490(long *param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  *param_1 = (long)(PTR_DAT_04bcc1f0 + 0x10);
  plVar5 = param_1 + 1;
  (**(code **)(*plVar5 + 0x10))(plVar5);
  if ((int)param_1[10] == 0) {
    *(undefined4 *)(param_1 + 10) = 1;
    (**(code **)(param_1[1] + 0x20))(plVar5);
    lVar2 = param_1[0xc];
    if (lVar2 != param_1[0xb]) {
      lVar2 = param_1[0xb];
      uVar4 = 0;
      uVar6 = 1;
      do {
        FUN_00189140(*(undefined8 *)(lVar2 + uVar4 * 8),0xffffffff);
        lVar2 = param_1[0xb];
        plVar3 = *(long **)(lVar2 + uVar4 * 8);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
          lVar2 = param_1[0xb];
        }
        bVar1 = uVar6 < (ulong)(param_1[0xc] - lVar2 >> 3);
        uVar4 = uVar6;
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (bVar1);
    }
    param_1[0xc] = lVar2;
    (**(code **)(param_1[1] + 0x10))(plVar5);
    *(undefined4 *)(param_1 + 10) = 2;
    (**(code **)(param_1[1] + 0x20))(plVar5);
    lVar2 = param_1[0xb];
  }
  else {
    (**(code **)(param_1[1] + 0x20))(plVar5);
    lVar2 = param_1[0xb];
  }
  if (lVar2 != 0) {
    param_1[0xc] = lVar2;
    FUN_00187e4c();
  }
  FUN_0018ac30(plVar5);
  return;
}

