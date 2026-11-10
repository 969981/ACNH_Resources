
undefined8 FUN_001497c4(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  if (*param_1 == 0xbab1e) {
    if ((char)param_1[0x3c] == '\0') {
      *param_1 = 0;
      plVar1 = (long *)param_1[1];
      while (plVar1 != (long *)0x0) {
        lVar3 = *plVar1;
        if (((*(ushort *)((long)plVar1 + 0x15c4) >> 0xb & 1) == 0) && (plVar1[2] != 0)) {
          FUN_00147a74(plVar1,0,1);
        }
        if (*(int *)(plVar1 + 0x1a) == 2) {
          FUN_0014a930(plVar1,plVar1[0x19]);
          plVar1[0x19] = 0;
          *(undefined4 *)(plVar1 + 0x1a) = 0;
        }
        plVar1[0x224] = 0;
        plVar1[0x1b] = 0;
        plVar1 = (long *)lVar3;
      }
      FUN_0014f114(param_1 + 0x1f);
      FUN_0014b15c(param_1 + 0x17);
      FUN_0014e94c(param_1 + 0x1f);
      FUN_00143b8c(param_1 + 4,0);
      FUN_00143b8c(param_1 + 8,0);
      FUN_0014b15c(param_1 + 0x10);
      FUN_001669ac(0,param_1 + 0x30);
      FUN_00166b34(0,param_1 + 0x34);
      FUN_00143300(param_1);
      uVar2 = 0;
    }
    else {
      uVar2 = 8;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

