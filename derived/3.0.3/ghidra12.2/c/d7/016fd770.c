
void FUN_016fd770(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined *local_98;
  char *local_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  uint local_68;
  
  puVar5 = PTR_DAT_04bb3050;
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb60a0;
  lVar9 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar9;
  lVar9 = param_2[6];
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar9;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  puVar3 = (uint *)(param_1 + 0x865);
  *param_1 = (long)(PTR_DAT_04bbe080 + 0x10);
  puVar2 = PTR_DAT_04bb2020;
  local_68 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_90 = "mEmoticonNodeParamsArray";
  puStack_80 = &DAT_0408c852;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_0171537c(param_1 + 6,&local_98,param_1);
  local_68 = 0;
  local_90 = "mAccParamsArray";
  puStack_80 = &DAT_040d4df9;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_01715780(param_1 + 0x3b,&local_98,param_1);
  local_90 = "mToolParamsArray";
  local_68 = 0;
  puStack_80 = &DAT_040ef1c3;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_017159b0(param_1 + 0x310,&local_98,param_1);
  puStack_80 = &DAT_0407213a;
  local_90 = "mFootPrint";
  puStack_70 = &DAT_0407ebb1;
  local_68 = 0;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  if (((*PTR_DAT_04bbbba0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbbba0), iVar6 != 0))
  {
    FUN_011eb5f0(PTR_DAT_04bbbb98);
    __cxa_guard_release(PTR_DAT_04bbbba0);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bbbb98) {
    uVar10 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bbbb98 + 8) + uVar10 * 4) == 0x1c) goto LAB_016fd92c;
      uVar10 = uVar10 + 1;
    } while (*(uint *)PTR_DAT_04bbbb98 != uVar10);
  }
  uVar10 = 0;
LAB_016fd92c:
  param_1[0x861] = (long)(puVar5 + 0x10);
  (**(code **)(local_98 + 0x18))(&local_98);
  param_1[0x863] = 0;
  param_1[0x864] = 0;
  param_1[0x861] = (long)&PTR_LAB_049be2d8;
  param_1[0x866] = 0;
  param_1[0x862] = (long)local_90;
  *puVar3 = local_68;
  *(undefined4 *)((long)param_1 + 0x432c) = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x861);
  puVar7 = (undefined4 *)(**(code **)(param_1[0x861] + 0xf0))(param_1 + 0x861);
  *puVar7 = (int)uVar10;
  if ((*puVar3 >> 7 & 1) == 0) {
    param_1[0x866] = 0;
    *(int *)(param_1 + 0x866) = (int)uVar10;
  }
  *puVar3 = *puVar3 & 0xfeffffff;
  param_1[0x868] = (long)"mFootScale";
  param_1[0x869] = 0;
  param_1[0x86a] = 0;
  puVar5 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x86b) = 0;
  param_1[0x86c] = 0;
  param_1[0x867] = (long)(puVar5 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x867);
  uVar11 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x86b) & 0x800) != 0) {
    uVar11 = 0x3c8efa35;
  }
  puVar7 = (undefined4 *)(**(code **)(param_1[0x867] + 0xf0))(param_1 + 0x867);
  *puVar7 = uVar11;
  uVar4 = *(uint *)(param_1 + 0x86b);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x86c] = 0;
    uVar11 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar11 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x86c) = uVar11;
  }
  *(uint *)(param_1 + 0x86b) = uVar4 & 0xfeffffff;
  param_1[0x86e] = (long)"mCharacterSize";
  param_1[0x86d] = (long)&PTR_LAB_049be138;
  param_1[0x86f] = 0;
  param_1[0x870] = 0;
  *(undefined4 *)(param_1 + 0x871) = 0;
  *(undefined4 *)((long)param_1 + 0x438c) = 0;
  param_1[0x872] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x86d);
  puVar7 = (undefined4 *)(**(code **)(param_1[0x86d] + 0xf0))(param_1 + 0x86d);
  *puVar7 = 1;
  if ((*(uint *)(param_1 + 0x871) >> 7 & 1) == 0) {
    param_1[0x872] = 0;
    *(undefined4 *)(param_1 + 0x872) = 1;
  }
  puVar2 = puVar2 + 0x10;
  local_68 = 0;
  *(uint *)(param_1 + 0x871) = *(uint *)(param_1 + 0x871) & 0xfeffffff;
  local_90 = "mHandItemOffset";
  local_a4 = 0xc080000000000000;
  local_9c = 0;
  puStack_80 = &DAT_040b0a25;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_006fdfc0(param_1 + 0x873,&local_98,&local_a4,param_1);
  local_68 = 0;
  local_90 = "mEyeCtrlOffset";
  local_a4 = 0;
  puStack_80 = &DAT_0408c862;
  local_9c = 0;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_006fdfc0(param_1 + 0x87a,&local_98,&local_a4,param_1);
  param_1[0x883] = 0;
  param_1[0x882] = (long)"mEyeCtrlRotateOffset";
  param_1[0x884] = 0;
  param_1[0x881] = (long)(puVar5 + 0x10);
  *(undefined4 *)(param_1 + 0x885) = 0;
  param_1[0x886] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x881);
  puVar7 = (undefined4 *)(**(code **)(param_1[0x881] + 0xf0))(param_1 + 0x881);
  *puVar7 = 0;
  if ((*(uint *)(param_1 + 0x885) >> 7 & 1) == 0) {
    param_1[0x886] = 0;
    *(undefined4 *)(param_1 + 0x886) = 0;
  }
  local_68 = 0;
  *(uint *)(param_1 + 0x885) = *(uint *)(param_1 + 0x885) & 0xfeffffff;
  local_90 = "mEyeCtrlParamHorizon";
  puStack_80 = &DAT_04096bee;
  local_a4 = 0x41dc0000c1dc0000;
  local_9c = 0x41000000;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_006fdfc0(param_1 + 0x887,&local_98,&local_a4,param_1);
  local_68 = 0;
  local_90 = "mEyeCtrlParamVertical";
  puStack_80 = &DAT_040b0a4d;
  local_a4 = 0x41b40000c1b40000;
  puStack_70 = &DAT_0407ebb1;
  local_9c = 0x40c00000;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_006fdfc0(param_1 + 0x88e,&local_98,&local_a4,param_1);
  puVar5 = PTR_DAT_04bb2150;
  local_68 = 0;
  local_90 = "mSitOffset";
  puStack_80 = &DAT_0409bdf7;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_006fdfc0(param_1 + 0x895,&local_98,PTR_DAT_04bb2150,param_1);
  local_90 = "mSitSbOffset";
  local_68 = 0;
  puStack_80 = &DAT_040ca2a0;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_006fdfc0(param_1 + 0x89c,&local_98,puVar5,param_1);
  local_90 = "mBedOffset";
  local_68 = 0;
  puStack_80 = &DAT_040ef1ca;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_006fdfc0(param_1 + 0x8a3,&local_98,puVar5,param_1);
  if ((int)param_1[0xd] == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)param_1[0xe];
  }
  puVar8 = (undefined8 *)(**(code **)(*(long *)(lVar9 + 0x30) + 0xf0))((long *)(lVar9 + 0x30));
  *(undefined4 *)(puVar8 + 1) = 0x40400000;
  *puVar8 = 0xbf0000003fcccccd;
  *(uint *)(lVar9 + 0x50) = *(uint *)(lVar9 + 0x50) | 0x1000000;
  if (*(uint *)(param_1 + 0xd) < 2) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(param_1[0xe] + 8);
  }
  puVar8 = (undefined8 *)(**(code **)(*(long *)(lVar9 + 0x30) + 0xf0))((long *)(lVar9 + 0x30));
  *(undefined4 *)(puVar8 + 1) = 0x40400000;
  *puVar8 = 0xbf000000bfcccccd;
  *(uint *)(lVar9 + 0x50) = *(uint *)(lVar9 + 0x50) | 0x1000000;
  if (*(uint *)(param_1 + 0xd) < 3) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(param_1[0xe] + 0x10);
  }
  puVar8 = (undefined8 *)(**(code **)(*(long *)(lVar9 + 0x30) + 0xf0))((long *)(lVar9 + 0x30));
  *(undefined4 *)(puVar8 + 1) = 0x40400000;
  *puVar8 = 0xbff3333300000000;
  *(uint *)(lVar9 + 0x50) = *(uint *)(lVar9 + 0x50) | 0x1000000;
  return;
}

