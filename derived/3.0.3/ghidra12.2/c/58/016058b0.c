
void FUN_016058b0(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  
  lVar5 = *(long *)(param_2 + 8);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar1 = PTR_DAT_04bb60a0 + 0x10;
  plVar7 = param_1 + 5;
  *plVar7 = 0;
  *param_1 = (long)puVar1;
  param_1[1] = lVar5;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
  }
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  puVar1 = PTR_DAT_04bb21f8;
  *(undefined4 *)(param_1 + 8) = 0x100;
  *param_1 = (long)&PTR_LAB_049b22c8;
  param_1[0x2c] = (long)"mDirectionalLightIntensity";
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[6] = (long)(puVar1 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  puVar3 = PTR_DAT_04bb31d0;
  puVar1 = PTR_DAT_04bb31d0 + 0x10;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x2a] = (long)param_1;
  param_1[0x2b] = (long)puVar1;
  lVar5 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar6 = lVar5;
      lVar5 = *(long *)(lVar6 + 0x10);
    } while (lVar5 != 0);
    plVar7 = (long *)(lVar6 + 0x10);
  }
  *plVar7 = (long)(param_1 + 0x2b);
  param_1[0x2e] = (long)param_1;
  uVar8 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x2f) & 0x800) != 0) {
    uVar8 = 0x3c8efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x2b] + 0xf0))();
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x2f);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x30] = 0;
    uVar8 = 0x3f800000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x30) = uVar8;
  }
  *(uint *)(param_1 + 0x2f) = uVar2 & 0xfeffffff;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x31] = (long)(puVar3 + 0x10);
  param_1[0x32] = (long)"mMoonlightEdgeLightIntensity";
  param_1[0x36] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x31);
  uVar8 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x35) & 0x800) != 0) {
    uVar8 = 0x3c8efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x31] + 0xf0))(param_1 + 0x31);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x35);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x36] = 0;
    uVar8 = 0x3f800000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x36) = uVar8;
  }
  *(uint *)(param_1 + 0x35) = uVar2 & 0xfeffffff;
  return;
}

