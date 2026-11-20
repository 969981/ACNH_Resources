
bool FUN_03eb38c0(float *param_1,float *param_2,long param_3,long *param_4,long param_5)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_48;
  float fStack_44;
  float local_3c;
  float fStack_38;
  float local_34;
  
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fStack_38 = *(float *)(param_3 + 0x24) +
              fVar4 * *(float *)(param_3 + 0x1c) + fVar3 * *(float *)(param_3 + 0x18) +
              fVar5 * *(float *)(param_3 + 0x20);
  local_3c = *(float *)(param_3 + 0x14) +
             fVar4 * *(float *)(param_3 + 0xc) + fVar3 * *(float *)(param_3 + 8) +
             fVar5 * *(float *)(param_3 + 0x10);
  local_34 = *(float *)(param_3 + 0x34) +
             fVar4 * *(float *)(param_3 + 0x2c) + fVar3 * *(float *)(param_3 + 0x28) +
             fVar5 * *(float *)(param_3 + 0x30);
  FUN_038e5644(param_4,&local_48,&local_3c);
  *param_1 = local_48 * (*(float *)(param_5 + 0x10) - *(float *)(param_5 + 8)) * 0.5;
  param_1[1] = fStack_44 * (*(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc)) * 0.5;
  if (((*PTR_DAT_04bb6230 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6230), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb6228 = PTR_DAT_04bb6238 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6230);
  }
  uVar2 = (**(code **)*param_4)(param_4,PTR_DAT_04bb6228);
  if ((uVar2 & 1) == 0) {
    if (((*PTR_DAT_04bbdcb0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbdcb0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bbdca8 = PTR_DAT_04bb6238 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbdcb0);
    }
    uVar2 = (**(code **)*param_4)(param_4,PTR_DAT_04bbdca8);
    fVar3 = 0.0;
    if ((uVar2 & 1) == 0) goto LAB_03eb39ec;
  }
  fVar3 = (float)(**(code **)(*param_4 + 0x20))(param_4);
LAB_03eb39ec:
  return local_34 <= -fVar3;
}

