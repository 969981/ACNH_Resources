
void FUN_01905af4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04bb5a60;
  param_1[0x4a] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = (long)(puVar2 + 0x10);
  *param_1 = (long)(PTR_DAT_04bbf408 + 0x10);
  puVar1 = PTR_DAT_04bb31d0 + 0x10;
  param_1[0x3c] = 0;
  param_1[0x3d] = (long)(puVar2 + 0x10);
  param_1[0x36] = 0;
  param_1[0x37] = (long)puVar1;
  param_1[0x30] = 0;
  param_1[0x31] = (long)puVar1;
  param_1[0x2a] = 0;
  param_1[0x2b] = (long)puVar1;
  param_1[0x24] = 0;
  param_1[0x25] = (long)puVar1;
  param_1[0x1e] = 0;
  param_1[0x1f] = (long)puVar1;
  puVar3 = PTR_DAT_04bb5950;
  param_1[0x13] = (long)puVar1;
  puVar2 = PTR_DAT_04bb3058;
  param_1[0x18] = 0;
  param_1[0x19] = (long)puVar1;
  lVar6 = *(long *)puVar2;
  param_1[6] = (long)(puVar3 + 0x10);
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0x12]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0x12] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x12] + 8))();
  }
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01905bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x38))(plVar5,param_1);
  return;
}

