
byte FUN_03beb100(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  
  lVar2 = FUN_03beada0();
  if (lVar2 == 0) {
    lVar2 = (**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + 0x30) +
                                    0x18) + 0x10))();
    lVar2 = *(long *)(lVar2 + 0x10);
    bVar5 = 0;
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0x18) + *(uint *)(lVar2 + 0x10);
      if (1 < *(uint *)(lVar2 + 0x10)) {
        plVar3 = (long *)(lVar2 + 0x18);
      }
      lVar6 = *plVar3;
      uVar4 = *(long *)(param_1 + 8) - *(long *)(lVar6 + 0x28);
      lVar2 = (long)(uVar4 * 0x8000000) >> 0x20;
      if (*(uint *)(lVar6 + 0x78) <= (uint)(uVar4 >> 5)) {
        lVar2 = 0;
      }
      bVar5 = *(byte *)(*(long *)(lVar6 + 0x80) + lVar2 * 8 + 2) >> 1 & 1;
    }
    bVar1 = 0;
    if ((*(byte *)(*(long *)(param_1 + 0x10) + 8) & 8) == 0) {
      bVar1 = bVar5;
    }
  }
  else {
    plVar3 = (long *)FUN_03be5c64();
    bVar1 = 0;
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x20))();
      if ((uVar4 & 1) == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
        bVar1 = 0;
      }
      else {
        *(long **)(param_1 + 0x18) = plVar3;
        bVar1 = 1;
      }
    }
  }
  return bVar1;
}

