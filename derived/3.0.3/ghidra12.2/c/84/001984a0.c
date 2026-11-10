
bool FUN_001984a0(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_48 [24];
  undefined4 local_24;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_0018786c("C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/CallContext.cpp",0xee,
                 0xe000000e,0);
  }
  if (iVar2 != 0) {
    local_24 = 0x80010001;
    FUN_0018aa70(auStack_48,&local_24);
    FUN_00197e40(param_1,0,auStack_48,0);
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar1 = *(long *)(param_1 + 0x20);
      plVar4 = *(long **)(param_1 + 0x28);
      lVar3 = *plVar4;
      *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
      **(long **)(lVar1 + 8) = lVar3;
      *(undefined8 *)(param_1 + 0x30) = 0;
      while (plVar4 != (long *)(param_1 + 0x20)) {
        plVar4 = (long *)plVar4[1];
        FUN_00187e4c();
      }
    }
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 != (long *)0x0) {
      plVar5 = (long *)*plVar4;
      if (plVar5 != (long *)plVar4[1]) {
        do {
          if ((long *)*plVar5 != (long *)0x0) {
            (**(code **)(*(long *)*plVar5 + 8))();
            plVar4 = *(long **)(param_1 + 0x50);
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != (long *)plVar4[1]);
        plVar5 = (long *)*plVar4;
      }
      plVar4[1] = (long)plVar5;
      if (plVar5 != (long *)0x0) {
        FUN_00187e4c(plVar5);
      }
      FUN_00185ac4(plVar4);
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    if (*(long **)(param_1 + 0x80) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x80) + 8))();
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  return iVar2 != 1;
}

