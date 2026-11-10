
long * FUN_001bd3a8(long param_1,ushort param_2)

{
  long *plVar1;
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x30) >> 2 & 1) == 0)) {
    plVar1 = (long *)FUN_00185a6c(0x238);
    if (plVar1 != (long *)0x0) {
      FUN_001d8a50(plVar1,0,0xf,0,param_1,0);
    }
  }
  else {
    plVar1 = (long *)FUN_0018ae24(0x238,0);
    if (plVar1 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN_001a7b50(plVar1,0,0xf,0,param_1,0);
    if (((*(ushort *)(plVar1 + 0xc) >> 6 & 1) != 0) && (plVar1[0x3e] == 0)) {
      (**(code **)(*plVar1 + 8))(plVar1);
      return (long *)0x0;
    }
  }
  memset(plVar1 + 0x1f,0,0x1c);
  *(undefined1 *)(plVar1 + 8) = 0xd0;
  *(ushort *)((long)plVar1 + 0xfa) = param_2 & 0xf;
  return plVar1;
}

