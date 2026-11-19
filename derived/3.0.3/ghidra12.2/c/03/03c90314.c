
void FUN_03c90314(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((char)param_1[3] == '\0') {
    (**(code **)(*param_1 + 0xf0))(0);
    (**(code **)(*param_1 + 0x110))(0,param_1);
    fVar4 = (float)(**(code **)(*param_1 + 0x128))(param_1);
    plVar2 = (long *)(**(code **)(*param_1 + 0xa8))(param_1);
    iVar1 = (**(code **)(*plVar2 + 8))();
    lVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
    (**(code **)(*param_1 + 0x130))(fVar4 + *(float *)(lVar3 + 0xc) * (float)iVar1,param_1);
    fVar4 = (float)(**(code **)(*param_1 + 0x138))(param_1);
    fVar5 = (float)(**(code **)(*param_1 + 0xc0))(param_1);
    fVar6 = (float)(**(code **)(*param_1 + 0xe0))(param_1);
                    /* WARNING: Could not recover jumptable at 0x03c90408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf8))(fVar4 - fVar6 * fVar5,param_1);
    return;
  }
  return;
}

