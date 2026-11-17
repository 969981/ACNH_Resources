
/* WARNING: Removing unreachable block (ram,0x030d6258) */
/* WARNING: Removing unreachable block (ram,0x030d624c) */
/* WARNING: Removing unreachable block (ram,0x030d6254) */
/* WARNING: Removing unreachable block (ram,0x030d6290) */
/* WARNING: Removing unreachable block (ram,0x030d627c) */

float FUN_030d6208(long param_1,float *param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined **local_70;
  undefined4 local_68;
  
  plVar6 = *(long **)(*(long *)(param_1 + 0x210) + 0x288);
  if (plVar6 == (long *)0x0) {
    return 0.0;
  }
  if (param_3 == 2) {
    piVar5 = &DAT_04cf45e0;
  }
  else if (param_3 == 1) {
    piVar5 = &DAT_04cf4500;
  }
  else {
    if (param_3 != 0) {
      iVar3 = 0;
      iVar4 = 0x40;
      goto LAB_030d62f8;
    }
    piVar5 = &DAT_04cf4420;
  }
  iVar3 = *piVar5;
  iVar4 = piVar5[4];
LAB_030d62f8:
  fVar8 = (float)DAT_04cf45e0;
  iVar1 = DAT_04cf45f0 - DAT_04cf45e0;
  local_70 = &PTR_LAB_04a3ee98;
  local_68 = 0xb;
  fVar7 = (float)DAT_04cf45f0;
  (**(code **)(*plVar6 + 0x20))(plVar6,&local_70);
  pfVar2 = (float *)(**(code **)(plVar6[3] + 0xd0))(plVar6[1]);
  return *pfVar2 * -0.5 +
         *pfVar2 * (((fVar8 * 5.0 + fVar7 * 5.0 + 5.0) * 0.5 +
                     ((float)iVar4 * 5.0 + 5.0 + (float)iVar3 * 5.0) * -0.5 + *param_2) /
                   ((float)(iVar1 + 1) * 5.0));
}

