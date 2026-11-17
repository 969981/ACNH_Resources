
/* WARNING: Removing unreachable block (ram,0x030f5350) */
/* WARNING: Removing unreachable block (ram,0x030f5358) */

float FUN_030f530c(long param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  undefined *local_40;
  undefined4 local_38;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38);
  fVar6 = 0.0;
  if ((lVar4 != 0) && (plVar5 = *(long **)(param_1 + 0x460), plVar5 != (long *)0x0)) {
    iVar1 = *(int *)(lVar4 + 0x30);
    iVar2 = *(int *)(lVar4 + 0x20);
    local_40 = PTR_DAT_04bc0cb8 + 0x10;
    local_38 = 0xb;
    (**(code **)(*plVar5 + 0x20))(0,0,plVar5,&local_40);
    pfVar3 = (float *)(**(code **)(plVar5[3] + 0xd0))(plVar5[1]);
    fVar6 = (*pfVar3 * *param_2) / ((float)((iVar1 - iVar2) + 1) * 5.0) - *pfVar3 * 0.5;
  }
  return fVar6;
}

