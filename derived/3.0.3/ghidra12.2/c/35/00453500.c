
void FUN_00453500(ulong *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  
  FUN_00453730(param_1,param_1);
  if ((((*(char *)((long)param_1 + 2) < '\0') &&
       (puVar1 = (undefined8 *)FUN_00426db0(param_1,0x800000), puVar1 != (undefined8 *)0x0)) &&
      (puVar3 = (ulong *)*puVar1, puVar3 != (ulong *)0x0)) &&
     (((param_1 <= puVar3 && (puVar3 <= (ulong *)((long)param_1 + param_3))) &&
      ((long)*(short *)((long)puVar3 + 4) != 0)))) {
    lVar4 = (long)*(short *)((long)puVar3 + 4) << 3;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = (ulong *)*puVar3;
      if (param_1 <= puVar2 && puVar2 <= (ulong *)((long)param_1 + param_3)) {
        FUN_00453730(puVar2,param_1,param_3);
      }
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x004535b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2,param_1,param_3);
  return;
}

