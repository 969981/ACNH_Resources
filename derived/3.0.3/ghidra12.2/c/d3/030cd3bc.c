
/* WARNING: Removing unreachable block (ram,0x030cd40c) */
/* WARNING: Removing unreachable block (ram,0x030cd400) */
/* WARNING: Removing unreachable block (ram,0x030cd408) */
/* WARNING: Removing unreachable block (ram,0x030cd444) */
/* WARNING: Removing unreachable block (ram,0x030cd430) */

float FUN_030cd3bc(long param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined *local_80;
  undefined4 local_78;
  
  iVar2 = DAT_04cf45f0;
  iVar1 = DAT_04cf45e0;
  plVar7 = *(long **)(param_1 + 0x398);
  if (plVar7 == (long *)0x0) {
    return 0.0;
  }
  iVar4 = *(int *)(param_1 + 0xe28);
  if (iVar4 == 2) {
    piVar6 = &DAT_04cf45e0;
  }
  else if (iVar4 == 1) {
    piVar6 = &DAT_04cf4500;
  }
  else {
    if (iVar4 != 0) {
      iVar4 = 0;
      iVar5 = 0x40;
      goto LAB_030cd4b0;
    }
    piVar6 = &DAT_04cf4420;
  }
  iVar4 = *piVar6;
  iVar5 = piVar6[4];
LAB_030cd4b0:
  fVar9 = (float)DAT_04cf45f0;
  local_80 = PTR_DAT_04bc0cb8 + 0x10;
  local_78 = 0xb;
  fVar8 = (float)DAT_04cf45e0;
  (**(code **)(*plVar7 + 0x20))(plVar7,&local_80);
  pfVar3 = (float *)(**(code **)(plVar7[3] + 0xd0))(plVar7[1]);
  return *pfVar3 * -0.5 +
         *pfVar3 * (((fVar8 * 5.0 + fVar9 * 5.0 + 5.0) * 0.5 +
                     ((float)iVar5 * 5.0 + 5.0 + (float)iVar4 * 5.0) * -0.5 + *param_2) /
                   ((float)((iVar2 - iVar1) + 1) * 5.0));
}

