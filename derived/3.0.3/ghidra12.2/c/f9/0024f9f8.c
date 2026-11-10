
void FUN_0024f9f8(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = DAT_04c603b8;
  if (DAT_04c603b8 != (long *)0x0) {
    (**(code **)(*DAT_04c603b8 + 0x30))(DAT_04c603b8);
    *(undefined1 *)((long)plVar1 + 9) = 0;
    (**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x40))(plVar1,plVar1[2]);
    plVar2 = DAT_04c603b8;
    plVar1[2] = 0;
    *(undefined1 *)(plVar1 + 1) = 0;
    (**(code **)*plVar2)();
    DAT_04c603b8 = (long *)0x0;
  }
  lVar3 = DAT_04c603c0;
  if (DAT_04c603c0 != 0) {
    FUN_00285e00(DAT_04c603c0);
    FUN_00285dc0(lVar3);
    DAT_04c603c0 = 0;
  }
  return;
}

