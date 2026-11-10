
ulong FUN_00188660(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  
  plVar2 = *(long **)(param_1 + 0x60);
  if (((plVar2 != (long *)0x0) && (param_2 <= (ulong)plVar2[2])) && (lVar1 = plVar2[1], lVar1 != 0))
  {
    puVar3 = (ulong *)(*plVar2 + 0x10);
    do {
      if (param_2 <= *puVar3) {
        return *puVar3;
      }
      lVar1 = lVar1 + -1;
      puVar3 = puVar3 + 0xd;
    } while (lVar1 != 0);
  }
  return 0;
}

