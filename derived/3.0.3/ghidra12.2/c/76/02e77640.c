
long * FUN_02e77640(long *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if ((int)param_1[3] < *(int *)((long)param_1 + 0x1c)) {
    plVar4 = (long *)param_1[1];
    if (plVar4 != (long *)0x0) {
      param_1[1] = *plVar4;
    }
    puVar2 = PTR_DAT_04bc6260;
    *plVar4 = (long)&PTR_LAB_04ad96c8;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar5 = plVar4 + 5;
    *plVar5 = (long)(puVar2 + 0x10);
    plVar4[8] = 0;
    plVar4[9] = 0xffffffff;
    uVar1 = *(undefined4 *)PTR_DAT_04bb4b48;
    plVar4[10] = 0;
    plVar4[0xc] = 0;
    plVar4[0xd] = (long)param_1;
    *(undefined4 *)(plVar4 + 0xb) = uVar1;
    *(undefined4 *)((long)plVar4 + 0x5c) = 0xffffffff;
    *(int *)(plVar4 + 4) = *param_2;
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    lVar3 = FUN_029ce080(param_1,*param_1);
    *param_1 = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 1;
  }
  else {
    lVar3 = *param_1;
    plVar5 = (long *)0x0;
    if (lVar3 != 0) {
      do {
        if (*param_2 < *(int *)(lVar3 + 0x20)) {
          plVar5 = (long *)(lVar3 + 8);
        }
        else {
          if (*param_2 <= *(int *)(lVar3 + 0x20)) {
            *(long *)(lVar3 + 0x28) = (long)(PTR_DAT_04bc6260 + 0x10);
            *(undefined8 *)(lVar3 + 0x60) = 0;
            *(undefined8 *)(lVar3 + 0x50) = 0;
            *(undefined8 *)(lVar3 + 0x30) = 0;
            *(undefined8 *)(lVar3 + 0x38) = 0;
            *(undefined8 *)(lVar3 + 0x40) = 0;
            *(undefined8 *)(lVar3 + 0x48) = 0xffffffff;
            *(undefined4 *)(lVar3 + 0x58) = *(undefined4 *)PTR_DAT_04bb4b48;
            *(undefined4 *)(lVar3 + 0x5c) = 0xffffffff;
            return (long *)(lVar3 + 0x28);
          }
          plVar5 = (long *)(lVar3 + 0x10);
        }
        lVar3 = *plVar5;
        plVar5 = (long *)0x0;
      } while (lVar3 != 0);
    }
  }
  return plVar5;
}

