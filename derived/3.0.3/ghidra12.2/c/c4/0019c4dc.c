
undefined8 FUN_0019c4dc(long param_1,long param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  if (param_4 == 0) {
    if (0x10 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_0018786c("C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp",
                   0x3e,0xe0000003,0);
    }
    plVar4 = (long *)(param_1 + (ulong)param_3 * 8 + 0x10);
    if (*plVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0018786c("C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp",
                   0x44,0xe000000f,0);
    }
LAB_0019c5ec:
    *plVar4 = param_2;
    return 1;
  }
  lVar3 = **(long **)(param_1 + 0xa0);
  if ((ulong)((*(long **)(param_1 + 0xa0))[1] - lVar3 >> 3) <= (ulong)param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_0018786c("C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/InstanceTable.cpp",0xa6,
                 0xe0000003,0);
  }
  lVar3 = *(long *)(lVar3 + (ulong)param_4 * 8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0018786c("C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/InstanceTable.cpp",0x9f,
                 0xe0000008,0);
  }
  if (param_3 < 0x11) {
    plVar4 = (long *)(lVar3 + (ulong)param_3 * 8 + 8);
    if (*plVar4 == 0) goto LAB_0019c5ec;
    uVar1 = 0x44;
    uVar2 = 0xe000000f;
  }
  else {
    uVar1 = 0x3e;
    uVar2 = 0xe0000003;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0018786c("C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp",uVar1,
               uVar2,0);
}

