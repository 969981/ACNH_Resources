
bool FUN_003200c0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 long *param_5,undefined4 *param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  long local_50;
  int local_44;
  
  local_44 = 0;
  local_50 = 0;
  FUN_0033e900(*(float *)(param_3 + 0x44) - *(float *)(param_3 + 0x48),*param_1,&local_50,&local_44,
               param_3,*(undefined1 *)(*(long *)(*(long *)(param_3 + 0x240) + 0x10) + 0x791),
               *param_6);
  iVar2 = local_44;
  if (0 < local_44) {
    if (param_5 == (long *)0x0) {
      lVar6 = 4;
      lVar5 = 0;
      iVar4 = local_44;
      do {
        lVar1 = *(long *)(param_3 + 0xb0) + (long)*(int *)(local_50 + lVar6) * 0x20;
        fVar7 = *(float *)(lVar1 + 0xc);
        if (((*(float *)(param_3 + 0x44) - *(float *)(lVar1 + 8) <= fVar7) &&
            (*(int *)(*(long *)(param_3 + 0xb0) + (long)*(int *)(local_50 + lVar6) * 0x20) != 0)) &&
           (0.0 < fVar7)) {
          FUN_00347e0c(param_2,4,4,0,1);
          iVar4 = local_44;
        }
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 8;
      } while (lVar5 < iVar4);
    }
    else {
      lVar5 = 0;
      lVar6 = 4;
      iVar4 = local_44;
      do {
        lVar3 = (long)*(int *)(local_50 + lVar6);
        lVar1 = *(long *)(param_3 + 0xb0) + lVar3 * 0x20;
        fVar7 = *(float *)(lVar1 + 0xc);
        if (((*(float *)(param_3 + 0x44) - *(float *)(lVar1 + 8) <= fVar7) &&
            (*(int *)(*(long *)(param_3 + 0xb0) + lVar3 * 0x20) != 0)) && (0.0 < fVar7)) {
          (**(code **)(*param_5 + 0x60))(param_5,param_2,1,lVar3,*(undefined1 *)(param_3 + 8));
          iVar4 = local_44;
        }
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 8;
      } while (lVar5 < iVar4);
    }
  }
  return iVar2 != 0;
}

