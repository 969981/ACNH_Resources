
/* WARNING: Removing unreachable block (ram,0x01f3bfb0) */

void FUN_01f3bd44(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  short sVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  
  FUN_01e9dbb0();
  *(undefined4 *)((long)param_1 + 0xaf3c) = 0;
  *(undefined8 *)((long)param_1 + 0xaf34) = 0;
  *param_1 = &PTR_LAB_04a65bd8;
  FUN_02191da8(param_1 + 0x15e8,param_2);
  puVar6 = PTR_DAT_04bc1558;
  *(undefined4 *)(param_1 + 0x1cb6) = 0;
  puVar2 = PTR_DAT_04bbc1a0;
  puVar1 = PTR_DAT_04bb2010;
  *(undefined1 *)((long)param_1 + 0xe60c) = 0;
  param_1[0x1cb9] = 0;
  param_1[0x1cba] = 0;
  param_1[0x1cb7] = puVar6 + 0x10;
  param_1[0x1cb8] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x1cbf] = 0;
  param_1[0x1cc0] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x1cc1) = 0xffffffff;
  param_1[0x1cc2] = 0xfffe;
  param_1[0x1cbb] = puVar2 + 0x10;
  param_1[0x1cbc] = puVar1;
  param_1[0x1cbd] = 0;
  param_1[0x1cbe] = puVar1;
  FUN_0277d4ac();
  *(undefined1 *)(param_1 + 0x1cc4) = 0;
  param_1[0x1cc3] = 0x3bf800000;
  param_1[0x1cc6] = &PTR_LAB_04a65fd8;
  *(undefined8 *)((long)param_1 + 0xe624) = 0;
  *(undefined4 *)((long)param_1 + 0xe62c) = 0;
  param_1[0x1cca] = &PTR_LAB_04a66028;
  param_1[0x1cc7] = 0;
  param_1[0x1cc8] = 0;
  param_1[0x1cc9] = 0;
  *(undefined4 *)(param_1 + 0x1cd8) = 0;
  puVar7 = param_1 + 0x1ccf;
  *puVar7 = param_1;
  param_1[0x1ccb] = 0;
  param_1[0x1ccc] = 0;
  param_1[0x1ccd] = 0;
  param_1[0x1cce] = 0;
  param_1[0x1cd0] = puVar7;
  param_1[0x1cd1] = puVar7;
  param_1[0x1cd2] = puVar7;
  param_1[0x1cd3] = puVar7;
  param_1[0x1cd4] = puVar7;
  param_1[0x1cd5] = puVar7;
  param_1[0x1cd6] = puVar7;
  param_1[0x1cd7] = puVar7;
  puVar2 = PTR_DAT_04bc2758 + 0x10;
  *(undefined4 *)(param_1 + 0x1cd9) = 0;
  param_1[0x1cda] = puVar2;
  param_1[0x1cde] = puVar2;
  puVar2 = PTR_DAT_04bbba70;
  param_1[0x1ce2] = PTR_DAT_04bc2760 + 0x10;
  param_1[0x1ceb] = puVar2 + 0x10;
  param_1[0x1cef] = PTR_DAT_04bbba78 + 0x10;
  *(undefined4 *)(param_1 + 0x1cf3) = 1;
  puVar2 = PTR_DAT_04bb37e0;
  *(undefined2 *)((long)param_1 + 0xe79c) = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)((long)param_1 + 0xe79e) = puVar2[2];
  *(undefined *)((long)param_1 + 0xe79f) = puVar2[3];
  uVar4 = *(undefined4 *)(puVar2 + 4);
  *(undefined1 *)(param_1 + 0x1cea) = 0;
  param_1[0x1ce8] = 0;
  param_1[0x1ce9] = 0;
  *(undefined4 *)(param_1 + 0x1cf4) = uVar4;
  *(undefined4 *)((long)param_1 + 0xe7a4) = 1;
  param_1[0x1cf5] = puVar1;
  param_1[0x1cf6] = 0;
  puVar1 = PTR_DAT_04bb6298;
  param_1[0x1ce6] = 0;
  param_1[0x1ce7] = 0;
  sVar5 = *(short *)puVar1;
  if (sVar5 != -1) {
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 1 & 1) != 0) {
      param_1[0x1cc9] = 0;
      param_1[0x1cc7] = param_1;
      param_1[0x1cc8] = &LAB_01f3bfd0;
      if (*(int *)(param_1 + 0x1599) < *(int *)((long)param_1 + 0xaccc)) {
        *(undefined8 **)(param_1[0x159a] + (long)*(int *)(param_1 + 0x1599) * 8) = param_1 + 0x1cc6;
        *(int *)(param_1 + 0x1599) = *(int *)(param_1 + 0x1599) + 1;
      }
    }
  }
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    param_1[0x1ccd] = 0;
    param_1[0x1ccb] = param_1;
    param_1[0x1ccc] = &LAB_01f3c514;
    param_1[0x158c] = param_1 + 0x1cca;
  }
  return;
}

