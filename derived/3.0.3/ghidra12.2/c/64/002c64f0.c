
void FUN_002c64f0(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  
  *param_1 = (long)(PTR_DAT_04bce288 + 0x10);
  if ((int)param_1[0x33] != 0) {
    do {
      puVar2 = (undefined8 *)0x0;
      if (param_1[0x31] != 0) {
        puVar2 = (undefined8 *)(param_1[0x31] + 0x10);
      }
      (**(code **)*puVar2)();
      FUN_00223704(param_1 + 0x31,puVar2 + -2);
      FUN_002236e0(param_1 + 0x34,param_1 + 0x34,
                   (long)(puVar2 + -2) + (long)*(int *)((long)param_1 + 0x1b4));
    } while ((int)param_1[0x33] != 0);
  }
  if ((int)param_1[0x3d] != 0) {
    do {
      puVar2 = (undefined8 *)0x0;
      if (param_1[0x3b] != 0) {
        puVar2 = (undefined8 *)(param_1[0x3b] + 0x10);
      }
      (**(code **)*puVar2)();
      FUN_00223704(param_1 + 0x3b,puVar2 + -2);
      FUN_002236e0(param_1 + 0x3e,param_1 + 0x3e,
                   (long)(puVar2 + -2) + (long)*(int *)((long)param_1 + 0x204));
    } while ((int)param_1[0x3d] != 0);
  }
  if ((int)param_1[0x47] != 0) {
    do {
      puVar2 = (undefined8 *)0x0;
      if (param_1[0x45] != 0) {
        puVar2 = (undefined8 *)(param_1[0x45] + 0x10);
      }
      (**(code **)*puVar2)();
      FUN_00223704(param_1 + 0x45,puVar2 + -2);
      FUN_002236e0(param_1 + 0x48,param_1 + 0x48,
                   (long)(puVar2 + -2) + (long)*(int *)((long)param_1 + 0x254));
    } while ((int)param_1[0x47] != 0);
  }
  if ((int)param_1[0x51] != 0) {
    do {
      lVar3 = 0;
      if (param_1[0x4f] != 0) {
        lVar3 = param_1[0x4f] + 0x10;
      }
      FUN_002b4104();
      FUN_00223704(param_1 + 0x4f,lVar3 + -0x10);
      FUN_002236e0(param_1 + 0x52,param_1 + 0x52,
                   lVar3 + -0x10 + (long)*(int *)((long)param_1 + 0x2a4));
    } while ((int)param_1[0x51] != 0);
  }
  FUN_002b4104(param_1 + 0x2fb);
  plVar1 = param_1 + 0x4f;
  param_1[0x4e] = (long)(PTR_DAT_04bce290 + 0x10);
  if ((long *)param_1[0x50] != plVar1) {
    plVar5 = (long *)param_1[0x50];
    do {
      iVar4 = *(int *)((long)param_1 + 0x2a4);
      plVar6 = (long *)plVar5[1];
      *plVar5 = 0;
      plVar5[1] = 0;
      FUN_002236e0(param_1 + 0x52,param_1 + 0x52,(long)iVar4 + (long)plVar5);
      plVar5 = plVar6;
    } while (plVar6 != plVar1);
  }
  FUN_002236b0(plVar1);
  FUN_002cab90(param_1 + 0x44);
  FUN_002cab90(param_1 + 0x3a);
  FUN_002c9b60(param_1 + 0x30);
  FUN_00220f6c(param_1 + 0x2a);
  FUN_002b4104(param_1 + 0x1a);
  FUN_002b4104(param_1 + 10);
  FUN_002aa8b4(param_1);
  return;
}

