
void FUN_00818210(long param_1,undefined *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined4 local_a8 [2];
  undefined **local_a0;
  undefined *local_98;
  char *local_90;
  undefined *local_88;
  char *local_80;
  undefined *local_78;
  undefined *puStack_70;
  char *local_68;
  undefined4 *puStack_60;
  undefined4 local_58;
  
  puVar3 = PTR_DAT_04bb2020;
  local_a8[0] = 1;
  local_a0 = &local_98;
  local_58 = 1;
  local_90 = "ResLoad2";
  puStack_60 = local_a8;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_78 = PTR_DAT_04bb2120;
  local_68 = "ResLoad1";
  local_98 = puVar1;
  local_88 = param_2;
  local_80 = puVar1;
  puStack_70 = puVar1;
  FUN_0082c840(param_1 + 0x9e0,&local_88);
  *(long *)(param_1 + 0xa10) = param_1;
  puVar4 = PTR_DAT_04bb2660;
  *(undefined8 *)(param_1 + 0xa20) = 0;
  *(long *)(param_1 + 0xa30) = param_1;
  *(undefined8 *)(param_1 + 0xa40) = 0;
  lVar7 = *(long *)puVar4;
  *(code **)(param_1 + 0xa18) = FUN_00818484;
  *(code **)(param_1 + 0xa38) = FUN_00818548;
  local_80 = "ResUnitMgr";
  *(undefined4 *)(lVar7 + 0x2490) = 1;
  local_88 = puVar1;
  FUN_0081bcb0(param_1 + 0x30,&local_88,param_2);
  local_80 = "StaticResUnitMgr";
  local_88 = puVar1;
  FUN_0081bcb0(param_1 + 0x2c8,&local_88,param_2);
  local_80 = "UIIconResMgr";
  local_88 = puVar1;
  FUN_0081bcb0(param_1 + 0x560,&local_88,param_2);
  iVar6 = *(int *)(param_1 + 8);
  iVar8 = *(int *)(param_1 + 0xc);
  if (iVar6 < iVar8) {
    *(long *)(*(long *)(param_1 + 0x10) + (long)iVar6 * 8) = param_1 + 0x30;
    iVar8 = *(int *)(param_1 + 0xc);
    iVar6 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar6;
    if (iVar8 <= iVar6) goto LAB_00818338;
LAB_00818464:
    *(long *)(*(long *)(param_1 + 0x10) + (long)iVar6 * 8) = param_1 + 0x2c8;
    iVar6 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar6;
    if (*(int *)(param_1 + 0xc) <= iVar6) goto LAB_00818354;
  }
  else {
    if (iVar6 < iVar8) goto LAB_00818464;
LAB_00818338:
    if (iVar8 <= iVar6) goto LAB_00818354;
  }
  *(long *)(*(long *)(param_1 + 0x10) + (long)iVar6 * 8) = param_1 + 0x560;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
LAB_00818354:
  lVar7 = 0;
  do {
    nn::os::LockMutex((MutexType *)(param_1 + 0xb30));
    plVar2 = (long *)(param_1 + 0xb50 + lVar7 + (long)*(int *)(param_1 + 0xb0c));
    lVar9 = *(long *)(param_1 + 0xaf8);
    *(long **)(param_1 + 0xaf8) = plVar2;
    *plVar2 = lVar9;
    plVar2[1] = param_1 + 0xaf8;
    if (lVar9 != 0) {
      *(long **)(lVar9 + 8) = plVar2;
    }
    *(int *)(param_1 + 0xb08) = *(int *)(param_1 + 0xb08) + 1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xb30));
    lVar7 = lVar7 + 0x168;
  } while (lVar7 != 0x2d000);
  local_80 = "EffectStaticResHeap";
  local_88 = puVar3 + 0x10;
  uVar5 = FUN_038c6d48(0x3180000,&local_88,param_2,8,1,0);
  *(undefined8 *)(param_1 + 0x7f8) = uVar5;
  local_80 = "Pack/StaticParam.pack";
  local_88 = puVar3 + 0x10;
  FUN_03eba220(&local_88,0x1000,0,1);
  FUN_03c20480(*(undefined8 *)PTR_DAT_04bb2730,0,"Park_Static");
  return;
}

