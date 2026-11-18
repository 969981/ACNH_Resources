
float FUN_032b2774(float param_1,float param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)(param_3 + 0xac) != 0) {
    *(undefined8 *)(param_3 + 0xc) = 0;
    iVar2 = 1;
    if (*(int *)(param_3 + 0xac) != 1) {
      plVar1 = *(long **)(param_3 + 0x100);
      *(undefined4 *)(param_3 + 0xac) = 1;
      iVar2 = 1;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,param_3);
        iVar2 = *(int *)(param_3 + 0xac);
      }
    }
    if (iVar2 != 0) {
      fVar3 = *(float *)(param_3 + 0x34);
      fVar4 = *(float *)(param_3 + 0x38);
      *(float *)(param_3 + 0x2c) = param_1;
      *(float *)(param_3 + 0x30) = param_2;
      *(float *)(param_3 + 0x34) = param_1;
      *(float *)(param_3 + 0x38) = param_2;
      *(undefined8 *)(param_3 + 0xc) = 0;
      *(float *)(param_3 + 0x40) = param_2 + (*(float *)(param_3 + 0x40) - fVar4);
      *(float *)(param_3 + 0x3c) = param_1 + (*(float *)(param_3 + 0x3c) - fVar3);
      if (*(int *)(param_3 + 0xac) != 1) {
        plVar1 = *(long **)(param_3 + 0x100);
        *(undefined4 *)(param_3 + 0xac) = 1;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,param_3);
        }
      }
    }
  }
  return *(float *)(param_3 + 0x14) - *(float *)(param_3 + 0x2c);
}

