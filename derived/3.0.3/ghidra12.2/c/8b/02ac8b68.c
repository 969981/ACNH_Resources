
void FUN_02ac8b68(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x60);
  if (plVar2 != (long *)0x0) {
    puVar1 = &DAT_05610ca8;
    if ((*(byte *)(param_1 + 8) & 2) != 0) {
      puVar1 = &DAT_05610c98;
    }
    if (plVar2[0x227] != 0) {
      FUN_038501b0(0,plVar2[0x227],0);
      lVar3 = plVar2[0x227];
      if (*(char *)(lVar3 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar3 + 0x2c0) = 0;
        FUN_03855b20(lVar3 + 0xc0,0);
      }
      FUN_0384f8c0(lVar3,puVar1,0,0);
                    /* WARNING: Could not recover jumptable at 0x02ac8c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x120))(plVar2,puVar1,0,0);
      return;
    }
  }
  return;
}

