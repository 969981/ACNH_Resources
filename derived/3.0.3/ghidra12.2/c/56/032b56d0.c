
void FUN_032b56d0(long param_1,float *param_2,ulong param_3)

{
  int iVar1;
  float fVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(param_1 + 0xd0) == '\0') {
    plVar4 = *(long **)(param_1 + 0x10);
    if ((int)plVar4[1] == 0) {
      fVar5 = *(float *)((long)plVar4 + 0x34);
      fVar6 = *(float *)(plVar4 + 7);
      iVar1 = *(int *)((long)plVar4 + 0xac);
      fVar7 = fVar5;
      fVar2 = fVar6 + *(float *)(param_1 + 0xc4) + (param_2[1] + param_2[3]) * -0.5;
    }
    else {
      fVar5 = *(float *)((long)plVar4 + 0x34);
      fVar6 = *(float *)(plVar4 + 7);
      fVar7 = fVar5 - (*(float *)(param_1 + 0xc4) + (*param_2 + param_2[2]) * -0.5);
      iVar1 = *(int *)((long)plVar4 + 0xac);
      fVar2 = fVar6;
    }
    if (iVar1 != 0) {
      *(float *)((long)plVar4 + 0x2c) = fVar7;
      *(float *)(plVar4 + 6) = fVar2;
      *(float *)((long)plVar4 + 0x34) = fVar7;
      *(float *)(plVar4 + 7) = fVar2;
      *(undefined8 *)((long)plVar4 + 0xc) = 0;
      *(float *)(plVar4 + 8) = fVar2 + (*(float *)(plVar4 + 8) - fVar6);
      *(float *)((long)plVar4 + 0x3c) = fVar7 + (*(float *)((long)plVar4 + 0x3c) - fVar5);
      if (*(int *)((long)plVar4 + 0xac) != 1) {
        plVar3 = (long *)plVar4[0x20];
        *(undefined4 *)((long)plVar4 + 0xac) = 1;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x20))(plVar3,plVar4);
        }
      }
    }
    if ((param_3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x032b57e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x20))(0,0,plVar4);
      return;
    }
  }
  return;
}

