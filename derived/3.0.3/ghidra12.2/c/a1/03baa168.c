
float FUN_03baa168(long param_1,float *param_2,float *param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0xe0) == '\0') {
    plVar3 = *(long **)(param_1 + 0xf0);
    if (((*PTR_DAT_04bc4310 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4310), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4308 = PTR_DAT_04bc4318 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4310);
    }
    if ((plVar3 == (long *)0x0) ||
       (uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,PTR_DAT_04bc4308), (uVar2 & 1) == 0)) {
      fVar4 = *param_2 - *(float *)(param_1 + 0x134);
      fVar6 = param_2[1] - *(float *)(param_1 + 0x144);
      fVar5 = param_2[2] - *(float *)(param_1 + 0x154);
      local_48._0_4_ = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
      if (param_3 != (float *)0x0) {
        *param_3 = (float)local_48;
        param_3[1] = (float)local_48;
        param_3[2] = (float)local_48;
        param_3[3] = (float)local_48;
        param_3[4] = (float)local_48;
        param_3[5] = (float)local_48;
      }
    }
    else if (param_3 == (float *)0x0) {
      local_40 = 0;
      uStack_38 = 0;
      local_48 = 0;
      (**(code **)(*plVar3 + 0x40))(plVar3,&local_48,param_2);
    }
    else {
      (**(code **)(*plVar3 + 0x40))(plVar3,param_3,param_2);
      local_48._0_4_ = *param_3;
    }
  }
  else {
    fVar6 = *(float *)(param_1 + 0x104) +
            param_2[1] * *(float *)(param_1 + 0xfc) + *param_2 * *(float *)(param_1 + 0xf8) +
            param_2[2] * *(float *)(param_1 + 0x100);
    fVar4 = *(float *)(param_1 + 0x114) +
            param_2[1] * *(float *)(param_1 + 0x10c) + *param_2 * *(float *)(param_1 + 0x108) +
            param_2[2] * *(float *)(param_1 + 0x110);
    local_48._0_4_ = SQRT(fVar4 * fVar4 + fVar6 * fVar6);
  }
  return (float)local_48;
}

