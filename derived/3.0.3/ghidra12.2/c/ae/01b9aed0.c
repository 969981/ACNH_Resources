
void FUN_01b9aed0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (0 < (int)param_1[2]) {
    lVar4 = 0;
    puVar1 = PTR_DAT_04bb2df8 + 0x10;
    do {
      iVar2 = 0;
      if ((int)param_1[1] <= (int)lVar4 + *(int *)((long)param_1 + 0xc)) {
        iVar2 = (int)param_1[1];
      }
      plVar5 = (long *)(*param_1 + ((lVar4 - iVar2) + (long)*(int *)((long)param_1 + 0xc)) * 0x5b0);
      FUN_03f45838(plVar5 + 0xb2);
      FUN_03f45838(plVar5 + 0xb2);
      plVar3 = (long *)plVar5[0xb5];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3);
        iVar2 = *(int *)((long)plVar5 + 0x59c) + -1;
        if (((*(int *)((long)plVar5 + 0x59c) < 1) ||
            (*(int *)((long)plVar5 + 0x59c) = iVar2, iVar2 == 0)) && (plVar5[0xb4] != 0)) {
          FUN_03f44508();
          plVar5[0xb4] = 0;
        }
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      plVar5[0x80] = (long)puVar1;
      lVar4 = lVar4 + 1;
      plVar5[0x28] = (long)puVar1;
      *plVar5 = (long)puVar1;
    } while ((int)lVar4 < (int)param_1[2]);
  }
  return;
}

