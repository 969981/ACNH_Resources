
void FUN_01604f3c(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  
  lVar7 = *(long *)(param_2 + 8);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar1 = PTR_DAT_04bb60a0 + 0x10;
  param_1[5] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = lVar7;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
  }
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  puVar1 = PTR_DAT_04bb21f8;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0x100;
  param_1[0x2a] = (long)param_1;
  *param_1 = (long)&PTR_FUN_049b1ff8;
  param_1[6] = (long)(puVar1 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  puVar1 = PTR_DAT_04bb2020;
  local_58 = 0;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "mColor";
  puStack_60 = &DAT_0407ebb1;
  puStack_70 = &DAT_040da0ab;
  local_98 = &DAT_3f8000003f800000;
  local_90 = &DAT_3f8000003f800000;
  local_78 = local_88;
  local_68 = local_88;
  FUN_00744b60(param_1 + 0x2b,&local_88,&local_98,param_1);
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  puVar3 = PTR_DAT_04bb31d0;
  param_1[0x38] = 0;
  param_1[0x33] = (long)(puVar3 + 0x10);
  param_1[0x34] = (long)"mIntensity";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x33);
  uVar8 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x37) & 0x800) != 0) {
    uVar8 = 0x3c8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x33] + 0xf0))(param_1 + 0x33);
  *puVar5 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x37);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x38] = 0;
    uVar8 = 0x3f800000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x38) = uVar8;
  }
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(uint *)(param_1 + 0x37) = uVar2 & 0xfeffffff;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  puVar4 = PTR_DAT_04bbd520;
  param_1[0x3f] = 0;
  param_1[0x39] = (long)(puVar4 + 0x10);
  param_1[0x3a] = (long)&DAT_04061857;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x39);
  puVar6 = (undefined8 *)(**(code **)(param_1[0x39] + 0xf0))(param_1 + 0x39);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x3d) >> 7 & 1) == 0) {
    param_1[0x3f] = 0;
  }
  param_1[0x42] = 0;
  *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) & 0xfeffffff;
  param_1[0x41] = (long)"mSize";
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x40] = (long)(puVar3 + 0x10);
  param_1[0x45] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x40);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x40] + 0xf0))(param_1 + 0x40);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x44) >> 7 & 1) == 0) {
    param_1[0x45] = 0;
    *(undefined4 *)(param_1 + 0x45) = 0;
  }
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfeffffff;
  local_88 = puVar1 + 0x10;
  local_58 = 0;
  pcStack_80 = "mDir";
  puStack_70 = &DAT_040bff16;
  local_90 = (undefined1 *)((ulong)local_90 & 0xffffffff00000000);
  puStack_60 = &DAT_0407ebb1;
  local_98 = (undefined1 *)0xbf80000000000000;
  local_78 = local_88;
  local_68 = local_88;
  FUN_006fdfc0(param_1 + 0x46,&local_88,&local_98,param_1);
  param_1[0x4f] = 0;
  param_1[0x4e] = (long)&DAT_040e8f48;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x4d] = (long)(puVar3 + 0x10);
  param_1[0x52] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4d);
  uVar8 = 0x43480000;
  if ((*(uint *)(param_1 + 0x51) & 0x800) != 0) {
    uVar8 = 0x405f66f3;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x4d] + 0xf0))(param_1 + 0x4d);
  *puVar5 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x51);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x52] = 0;
    uVar8 = 0x43480000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x405f66f3;
    }
    *(undefined4 *)(param_1 + 0x52) = uVar8;
  }
  param_1[0x55] = 0;
  *(uint *)(param_1 + 0x51) = uVar2 & 0xfeffffff;
  param_1[0x54] = (long)"mFovy";
  *(undefined4 *)(param_1 + 0x57) = 0x800;
  param_1[0x56] = 0;
  param_1[0x53] = (long)(puVar3 + 0x10);
  param_1[0x58] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x53);
  uVar8 = 0x42340000;
  if ((*(uint *)(param_1 + 0x57) & 0x800) != 0) {
    uVar8 = 0x3f490fdb;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x53] + 0xf0))(param_1 + 0x53);
  *puVar5 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x57);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x58] = 0;
    uVar8 = 0x42340000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3f490fdb;
    }
    *(undefined4 *)(param_1 + 0x58) = uVar8;
  }
  *(uint *)(param_1 + 0x57) = uVar2 & 0xfeffffff;
  return;
}

