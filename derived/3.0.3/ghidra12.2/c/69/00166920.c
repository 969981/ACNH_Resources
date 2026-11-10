
undefined8 FUN_00166920(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0xd8) != 0) && (plVar2 = (long *)FUN_00149fd4(), plVar2 != (long *)0x0))
  {
    for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
      lVar3 = *plVar2;
      iVar1 = FUN_00144a90(lVar3 + 0x1a,*(undefined8 *)(param_2 + 0xd0));
      if ((iVar1 != 0) && (*(uint *)(param_2 + 0x198) == (uint)*(ushort *)(lVar3 + 0x18))) {
        FUN_0014d430(param_1,"Site %s:%d is pipeline blacklisted\n",*(undefined8 *)(param_2 + 0xd0))
        ;
        return 1;
      }
    }
  }
  return 0;
}

