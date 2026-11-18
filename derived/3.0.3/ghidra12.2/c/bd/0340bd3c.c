
void FUN_0340bd3c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *local_30;
  undefined4 local_28;
  
  *(undefined1 *)(param_1 + 0x88) = 0;
  lVar2 = *(long *)(DAT_05739190 + 0xd0);
  if ((lVar2 != 0) &&
     (((lVar1 = *(long *)(lVar2 + 0x220), lVar1 != 0 ||
       (lVar1 = *(long *)(*(long *)(lVar2 + 0x210) + 0x570), lVar1 != 0)) &&
      (plVar3 = *(long **)(lVar1 + 0x210), plVar3 != (long *)0x0)))) {
    local_30 = PTR_DAT_04bc4f00 + 0x10;
    local_28 = 0x14;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
    (**(code **)(plVar3[3] + 0x158))(0,plVar3[1]);
  }
  return;
}

