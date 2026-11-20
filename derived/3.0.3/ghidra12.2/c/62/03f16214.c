
undefined8 * FUN_03f16214(long param_1,int param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = (undefined8 *)0x0;
  if (((param_2 != 0) && (param_3 != (long *)0x0)) &&
     (plVar3 = (long *)FUN_03f163a0(param_1), puVar2 = (undefined8 *)0x0, plVar3 != (long *)0x0)) {
    if (*(int *)(param_1 + 0x198) < *(int *)(param_1 + 0x1b0)) {
      puVar2 = *(undefined8 **)(param_1 + 0x1a0);
      plVar1 = (long *)(param_1 + 0x188);
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x1a0) = *puVar2;
      }
      lVar4 = *(long *)(param_1 + 8);
      *(undefined4 *)puVar2 = 0;
      if (lVar4 == 0) {
        lVar6 = 0;
      }
      else if (*(char *)(lVar4 + 0x15) == '\0') {
        lVar6 = *(long *)(lVar4 + 0x18);
      }
      else {
        lVar6 = (long)(DAT_05ae7888 *
                       (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4)) * 5) /
                1000 + *(long *)(lVar4 + 0x18);
      }
      plVar5 = puVar2 + 8;
      *plVar5 = 0;
      puVar2[1] = lVar6;
      puVar2[2] = lVar4;
      *(undefined4 *)(puVar2 + 7) = 0;
      puVar2[9] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      lVar4 = *plVar1;
      *plVar1 = (long)plVar5;
      *plVar5 = lVar4;
      puVar2[9] = plVar1;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar5;
      }
      *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
      if ((*param_3 != 0) && ((int)param_3[1] == *(int *)(*param_3 + 0x10))) {
        lVar4 = param_3[1];
        puVar2[3] = *param_3;
        *(int *)(puVar2 + 4) = (int)lVar4;
        *(undefined4 *)puVar2 = 1;
      }
      if (*(int *)(puVar2 + 7) == 0) {
        *(int *)(puVar2 + 7) = param_2;
      }
      plVar1 = (long *)((long)*(int *)((long)plVar3 + 0x14) + (long)puVar2);
      lVar4 = *plVar3;
      *plVar3 = (long)plVar1;
      *plVar1 = lVar4;
      plVar1[1] = (long)plVar3;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar1;
      }
      *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    }
    else {
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}

