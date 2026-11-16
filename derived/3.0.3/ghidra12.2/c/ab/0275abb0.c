
undefined8 FUN_0275abb0(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = 0;
  while( true ) {
    uVar1 = *(uint *)((long)param_1 + lVar3 * 4 + 0x60e0);
    plVar2 = param_1 + (ulong)uVar1 * 0x1f;
    if (99 < uVar1) {
      plVar2 = param_1;
    }
    if ((((*plVar2 != 0 && plVar2[1] != 0) && ((int)plVar2[2] != 0 && plVar2[6] != 0)) &&
        (*(int *)((long)plVar2 + 0x54) != 0 && (int)plVar2[7] != 0)) &&
       ((short)plVar2[0xe] != 0 && plVar2[6] == *param_2)) break;
    lVar3 = lVar3 + 1;
    if (lVar3 == 100) {
      return 0;
    }
  }
  plVar2 = param_1;
  if (((uint)lVar3 < 100) &&
     (uVar1 = *(uint *)((long)param_1 + lVar3 * 4 + 0x60e0), plVar2 = param_1 + (ulong)uVar1 * 0x1f,
     99 < uVar1)) {
    plVar2 = param_1;
  }
  plVar2[3] = 0;
  plVar2[4] = 0;
  *(undefined1 *)(plVar2 + 5) = 2;
  *(undefined1 *)(plVar2 + 10) = 2;
  *(undefined4 *)((long)plVar2 + 0x72) = 0x101;
  *plVar2 = 0;
  *(undefined8 *)((long)plVar2 + 0x54) = 0;
  *(undefined8 *)((long)plVar2 + 0x5c) = 0;
  *(undefined8 *)((long)plVar2 + 100) = 0;
  *(undefined4 *)((long)plVar2 + 0x6c) = 0;
  *(undefined2 *)(plVar2 + 0xe) = 0;
  *(undefined1 *)((long)plVar2 + 0x76) = 0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[9] = 0;
  return 1;
}

