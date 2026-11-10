
void FUN_00291070(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  
  plVar2 = param_1 + 8;
  *param_1 = (long)(PTR_DAT_04bcdde8 + 0x10);
  FUN_00290438(plVar2);
  plVar3 = param_1 + 5;
  for (plVar5 = (long *)param_1[6]; plVar5 != plVar3; plVar5 = (long *)plVar5[1]) {
    (**(code **)(*(long *)plVar5[2] + 0x38))((long *)plVar5[2],0);
  }
  do {
    if ((long *)param_1[6] == plVar3) {
      nn::os::YieldThread();
      break;
    }
    bVar4 = true;
    plVar5 = (long *)param_1[6];
    do {
      plVar1 = plVar5 + 1;
      bVar4 = (bool)(bVar4 & *(int *)(plVar5[2] + 0xcc) - 3U < 2);
      plVar5 = (long *)*plVar1;
    } while ((long *)*plVar1 != plVar3);
    nn::os::YieldThread();
  } while (!bVar4);
  for (plVar5 = (long *)param_1[6]; plVar5 != plVar3; plVar5 = (long *)plVar5[1]) {
    (**(code **)(*(long *)plVar5[2] + 0x40))();
  }
  *(undefined8 *)PTR_DAT_04bccf58 = 0;
  FUN_00290440(plVar2);
  nn::os::FreeTlsSlot((int)param_1[0x11]);
  FUN_002903f8(plVar2);
  return;
}

