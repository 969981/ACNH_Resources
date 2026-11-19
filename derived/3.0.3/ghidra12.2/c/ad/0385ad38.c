
/* WARNING: Removing unreachable block (ram,0x0385ae18) */
/* WARNING: Removing unreachable block (ram,0x0385add8) */
/* WARNING: Removing unreachable block (ram,0x0385adb0) */
/* WARNING: Removing unreachable block (ram,0x0385adf8) */
/* WARNING: Removing unreachable block (ram,0x0385ae38) */

undefined8 * FUN_0385ad38(long *param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_40;
  undefined8 *puStack_38;
  
  if (param_2 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    puStack_38 = &DAT_0407ebb1;
    puVar2 = (undefined8 *)FUN_03d71f50(param_2,param_4,param_3,&local_40,1);
  }
  puVar2[2] = &LAB_0385aec0;
  puVar2[3] = 0;
  *puVar2 = &PTR_LAB_04b5efe8;
  puVar2[1] = param_1;
  puVar2[6] = &LAB_0385aec0;
  puVar2[7] = 0;
  puVar2[4] = &PTR_LAB_04b5efe8;
  puVar2[5] = param_1;
  puVar2[10] = &LAB_0385aec0;
  puVar2[0xb] = 0;
  puVar2[8] = &PTR_LAB_04b5efe8;
  puVar2[9] = param_1;
  puVar2[0xe] = &LAB_0385aec0;
  puVar2[0xf] = 0;
  puVar2[0xc] = &PTR_LAB_04b5efe8;
  puVar2[0xd] = param_1;
  local_40 = (undefined *)CONCAT44((int)((ulong)local_40 >> 0x20),4);
  puVar2[0x12] = &LAB_0385aec0;
  puVar2[0x13] = 0;
  puVar2[0x10] = &PTR_LAB_04b5efe8;
  puVar2[0x11] = param_1;
  plVar3 = (long *)(**(code **)(*param_1 + 0x200))(param_1);
  if (plVar3 != (long *)0x0) {
    lVar4 = param_1[0xaa];
    plVar1 = (long *)((long)*(int *)((long)param_1 + 0x564) + (long)plVar3);
    param_1[0xaa] = (long)plVar1;
    *plVar1 = lVar4;
    plVar1[1] = (long)(param_1 + 0xaa);
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar1;
    }
    *(int *)(param_1 + 0xac) = (int)param_1[0xac] + 1;
    plVar3[1] = puVar2[0x14];
    (**(code **)(*plVar3 + 0x20))(plVar3);
    plVar3[6] = (long)puVar2;
  }
  return puVar2;
}

