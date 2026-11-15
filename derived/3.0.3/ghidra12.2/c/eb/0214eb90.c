
void FUN_0214eb90(long *param_1,undefined4 param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  plVar1 = (long *)param_1[0x3e];
  if (plVar1 == (long *)0x0) {
    return;
  }
  *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)((long)plVar1 + 4);
  if (plVar1 == param_1 + 0x3c) {
    *(undefined1 *)plVar1 = 5;
    *(undefined1 *)((long)param_1 + 0x1e3) = 0;
    *(undefined2 *)(param_1 + 0x3d) = 0;
    *(undefined2 *)((long)param_1 + 0x1e1) = 0x1d00;
    *(undefined1 *)((long)param_1 + 0x1ea) = 0;
    *(undefined4 *)((long)param_1 + 0x1e4) = 0x22;
  }
  else {
    plVar2 = (long *)param_1[0xf];
    if (plVar2 != param_1 + 0xe) {
      plVar3 = plVar2 + -2;
      do {
        if (plVar1 == plVar3) {
          if (*plVar2 != 0) {
            *(long *)(*plVar2 + 8) = plVar2[1];
          }
          if ((long *)plVar2[1] != (long *)0x0) {
            *(long *)plVar2[1] = *plVar2;
          }
          *plVar2 = 0;
          plVar2[1] = 0;
          *(int *)(param_1 + 0x10) = (int)param_1[0x10] + -1;
          *plVar1 = param_1[0x11];
          param_1[0x11] = (long)plVar1;
          goto joined_r0x0214ecd8;
        }
        plVar2 = (long *)plVar2[1];
        plVar3 = plVar2 + -2;
      } while (plVar3 != param_1 + 0xc);
    }
    plVar2 = param_1;
    do {
      plVar2 = (long *)plVar2[1];
      if (plVar2 + -2 == param_1 + -2) {
        return;
      }
    } while (plVar1 != plVar2 + -2);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    *plVar1 = param_1[3];
    param_1[3] = (long)plVar1;
  }
joined_r0x0214ecd8:
  if ((param_3 & 1) != 0) {
    local_2c = (undefined1)param_2;
    local_2a = 0;
    local_28 = 0;
    local_22 = 0;
    local_2b = (undefined1)*(undefined4 *)((long)param_1 + 0x1fc);
    local_24 = 0xff00;
    if (-1 < DAT_053d0e00) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e00,&local_28,&local_2c,3,0);
    }
  }
  param_1[0x3e] = 0;
  FUN_0214d690(param_1,param_2,0,0);
  FUN_0214d220(param_1);
  return;
}

