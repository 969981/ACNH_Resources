
void FUN_01c6e6d0(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_4 != 0) {
    if (0x2aaaaaaaaaaaaaa < param_4) {
      FUN_01c6b598(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_01c67100("vector");
    }
    plVar4 = (long *)FUN_00187df4(param_4 * 0x60);
    param_1[2] = plVar4 + param_4 * 0xc;
    *param_1 = plVar4;
    param_1[1] = plVar4;
    if (param_2 != param_3) {
      puVar1 = PTR_DAT_04bc0fb8 + 0x10;
      puVar2 = PTR_DAT_04bc0ec8 + 0x10;
      puVar3 = PTR_DAT_04bc0fb0 + 0x10;
      plVar5 = plVar4;
      do {
        *plVar5 = (long)puVar1;
        *(undefined1 *)(plVar5 + 1) = *(undefined1 *)(param_2 + 8);
        plVar5[2] = (long)puVar2;
        *(undefined1 *)(plVar5 + 3) = 0;
        plVar5[5] = (long)(plVar5 + 3);
        plVar5[6] = 0x10;
        FUN_0018b070(plVar5 + 2,*(undefined8 *)(param_2 + 0x28),0xffffffffffffffff);
        *(undefined1 *)(plVar5 + 8) = 0;
        plVar5[7] = (long)puVar2;
        plVar5[10] = (long)(plVar5 + 8);
        plVar5[0xb] = 0x10;
        FUN_0018b070(plVar5 + 7,*(undefined8 *)(param_2 + 0x50),0xffffffffffffffff);
        param_2 = param_2 + 0x60;
        plVar4 = plVar5 + 0xc;
        *plVar5 = (long)puVar3;
        plVar5 = plVar4;
      } while (param_2 != param_3);
    }
    param_1[1] = plVar4;
  }
  return;
}

