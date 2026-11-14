
void FUN_01905920(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  FUN_018f4980();
  puVar1 = PTR_DAT_04bb5a60;
  *param_1 = (long)&PTR_FUN_049d7430;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x3d] = (long)(puVar1 + 0x10);
  param_1[0x3e] = (long)"mExclusionArea";
  plVar5 = param_1 + 5;
  lVar4 = *plVar5;
  if (*plVar5 != 0) {
    do {
      lVar3 = lVar4;
      lVar4 = *(long *)(lVar3 + 0x10);
    } while (lVar4 != 0);
    plVar5 = (long *)(lVar3 + 0x10);
  }
  *plVar5 = (long)(param_1 + 0x3d);
  param_1[0x40] = (long)param_1;
  puVar2 = (undefined8 *)(**(code **)(param_1[0x3d] + 0xf0))();
  *puVar2 = 0x600000006;
  if ((*(uint *)(param_1 + 0x41) >> 7 & 1) == 0) {
    param_1[0x43] = 0x600000006;
  }
  param_1[0x46] = 0;
  *(uint *)(param_1 + 0x41) = *(uint *)(param_1 + 0x41) & 0xfeffffff;
  param_1[0x45] = (long)"mMiniExclusionArea";
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x44] = (long)(puVar1 + 0x10);
  param_1[0x4a] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x44);
  puVar2 = (undefined8 *)(**(code **)(param_1[0x44] + 0xf0))(param_1 + 0x44);
  *puVar2 = 0x600000006;
  if ((*(uint *)(param_1 + 0x48) >> 7 & 1) == 0) {
    param_1[0x4a] = 0x600000006;
  }
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfeffffff;
  return;
}

