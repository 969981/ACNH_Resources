
void FUN_03a99e2c(long param_1,undefined4 *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  long *local_478;
  undefined8 local_470;
  undefined1 local_468 [4];
  undefined4 uStack_464;
  undefined1 local_65;
  
  puVar3 = PTR_DAT_04bb2f40;
  puVar2 = PTR_DAT_04bb2698;
  lVar7 = *(long *)(param_1 + 8);
  if (*(char *)(lVar7 + 0xdf0) != '\0') {
    lVar7 = *(long *)PTR_DAT_04bb2698;
    if (lVar7 == 0) {
      pvVar6 = malloc(0xa20);
    }
    else {
      plVar5 = param_3;
      if (param_3 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar1 = (undefined8 *)(lVar7 + 8);
        if (lVar4 != 0) {
          puVar1 = (undefined8 *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*puVar1;
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0xa20,8);
    }
    FUN_03a2d0d8();
    *(void **)(param_1 + 0x288) = pvVar6;
    FUN_03a2daf0(pvVar6,*param_2,param_3);
    if (param_4 != 0) {
      local_478 = (long *)(puVar3 + 0x10);
      local_65 = 0;
      local_470 = local_468 + 4;
      _local_468 = CONCAT35(uStack_464._1_3_,0x400);
      FUN_038d1270(&local_478,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040b2db4);
    }
    lVar7 = *(long *)(param_1 + 8);
  }
  if (*(char *)(lVar7 + 0xdb0) != '\0') {
    lVar7 = *(long *)puVar2;
    if (lVar7 == 0) {
      pvVar6 = malloc(0x19d8);
    }
    else {
      plVar5 = param_3;
      if (param_3 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar1 = (undefined8 *)(lVar7 + 8);
        if (lVar4 != 0) {
          puVar1 = (undefined8 *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*puVar1;
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x19d8,8);
    }
    FUN_03931c8c();
    *(void **)(param_1 + 0x298) = pvVar6;
    FUN_03932c40(pvVar6,*param_2,param_3);
    lVar7 = *(long *)(param_1 + 0x298);
    if (*(float *)(lVar7 + 0x268) != 2.0) {
      *(undefined4 *)(lVar7 + 0x268) = 0x40000000;
      FUN_039340a4(lVar7 + 0x30);
      lVar7 = *(long *)(param_1 + 0x298);
    }
    *(undefined4 *)(lVar7 + 0x1e8) = 0x45974000;
    *(undefined4 *)(lVar7 + 0x208) = 0x460ca000;
    if (param_4 != 0) {
      local_478 = (long *)(puVar3 + 0x10);
      local_65 = 0;
      local_470 = local_468 + 4;
      _local_468 = CONCAT35(uStack_464._1_3_,0x400);
      FUN_038d1270(&local_478,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040d1a5a);
    }
    lVar7 = *(long *)(param_1 + 8);
  }
  if (*(char *)(lVar7 + 0xeb0) != '\0') {
    lVar7 = *(long *)puVar2;
    if (lVar7 == 0) {
      pvVar6 = malloc(0x2340);
    }
    else {
      plVar5 = param_3;
      if (param_3 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar1 = (undefined8 *)(lVar7 + 8);
        if (lVar4 != 0) {
          puVar1 = (undefined8 *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*puVar1;
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x2340,8);
    }
    FUN_03928640();
    *(void **)(param_1 + 0x2a8) = pvVar6;
    local_470 = (undefined1 *)CONCAT44(0x1a,*param_2);
    _local_468 = CONCAT44(1,param_2[1]);
    local_478 = param_3;
    FUN_0392a360(pvVar6,&local_478);
    *(undefined1 *)(*(long *)(param_1 + 0x2a8) + 0x218) = 0;
    if (param_4 != 0) {
      local_470 = local_468 + 4;
      local_65 = 0;
      local_478 = (long *)(puVar3 + 0x10);
      _local_468 = CONCAT35(uStack_464._1_3_,0x400);
      FUN_038d1270(&local_478,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040b8262);
    }
    lVar7 = *(long *)(param_1 + 8);
  }
  if (*(char *)(lVar7 + 0xe90) != '\0') {
    lVar7 = *(long *)puVar2;
    if (lVar7 == 0) {
      pvVar6 = malloc(0x288);
    }
    else {
      plVar5 = param_3;
      if (param_3 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar1 = (undefined8 *)(lVar7 + 8);
        if (lVar4 != 0) {
          puVar1 = (undefined8 *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*puVar1;
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x288,8);
    }
    FUN_03a9af08();
    *(void **)(param_1 + 0x2c0) = pvVar6;
    FUN_03a9b200(pvVar6,*param_2,param_3);
    if (param_4 != 0) {
      local_478 = (long *)(puVar3 + 0x10);
      local_65 = 0;
      local_470 = local_468 + 4;
      _local_468 = CONCAT35(uStack_464._1_3_,0x400);
      FUN_038d1270(&local_478,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040743bd);
    }
    lVar7 = *(long *)(param_1 + 8);
  }
  if (*(char *)(lVar7 + 0xe70) != '\0') {
    lVar7 = *(long *)puVar2;
    if (lVar7 == 0) {
      pvVar6 = malloc(0x9c8);
    }
    else {
      plVar5 = param_3;
      if (param_3 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar1 = (undefined8 *)(lVar7 + 8);
        if (lVar4 != 0) {
          puVar1 = (undefined8 *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*puVar1;
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x9c8,8);
    }
    FUN_03a9caf8();
    *(void **)(param_1 + 0x2a0) = pvVar6;
    FUN_03a9d7a0(pvVar6,*param_2,param_3);
    if (param_4 != 0) {
      local_478 = (long *)(puVar3 + 0x10);
      local_65 = 0;
      local_470 = local_468 + 4;
      _local_468 = CONCAT35(uStack_464._1_3_,0x400);
      FUN_038d1270(&local_478,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040743bd);
    }
    lVar7 = *(long *)(param_1 + 8);
  }
  if (*(char *)(lVar7 + 0x8d0) != '\0') {
    lVar7 = *(long *)puVar2;
    if (lVar7 == 0) {
      pvVar6 = malloc(0x778);
    }
    else {
      plVar5 = param_3;
      if (param_3 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar1 = (undefined8 *)(lVar7 + 8);
        if (lVar4 != 0) {
          puVar1 = (undefined8 *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*puVar1;
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x778,8);
    }
    FUN_03aa16c0();
    *(void **)(param_1 + 0x2b0) = pvVar6;
    FUN_03aa1e60(pvVar6,*param_2,100,param_3);
    if (param_4 != 0) {
      local_478 = (long *)(puVar3 + 0x10);
      local_65 = 0;
      local_470 = local_468 + 4;
      _local_468 = CONCAT35(uStack_464._1_3_,0x400);
      FUN_038d1270(&local_478,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040b2db4);
    }
    lVar7 = *(long *)(param_1 + 8);
  }
  if (*(char *)(lVar7 + 0x8f0) == '\0') {
    if (param_4 == 0) {
      return;
    }
  }
  else {
    lVar7 = *(long *)puVar2;
    if (lVar7 == 0) {
      pvVar6 = malloc(0x738);
    }
    else {
      plVar5 = param_3;
      if (param_3 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar1 = (undefined8 *)(lVar7 + 8);
        if (lVar4 != 0) {
          puVar1 = (undefined8 *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*puVar1;
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x738,8);
    }
    FUN_03aa86a0();
    *(void **)(param_1 + 0x2b8) = pvVar6;
    FUN_03aa8bd0(pvVar6,*param_2,param_3);
    if (param_4 == 0) {
      return;
    }
    local_478 = (long *)(puVar3 + 0x10);
    local_65 = 0;
    local_470 = local_468 + 4;
    _local_468 = CONCAT35(uStack_464._1_3_,0x400);
    FUN_038d1270(&local_478,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040b2db4);
  }
  local_478 = (long *)(puVar3 + 0x10);
  local_65 = 0;
  local_470 = local_468 + 4;
  _local_468 = CONCAT35(uStack_464._1_3_,0x400);
  FUN_038d1270(&local_478,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040dc552);
  return;
}

