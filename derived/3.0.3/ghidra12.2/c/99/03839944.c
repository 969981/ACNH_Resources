
undefined8 FUN_03839944(byte *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *local_c0;
  char *local_b8;
  undefined8 local_b0;
  byte *local_a8;
  undefined1 *local_a0;
  ulong local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  ulong local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  puVar5 = PTR_DAT_04bb3350;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  uVar11 = *(undefined8 *)(lVar7 + 0xa8);
  *(undefined8 *)(lVar7 + 0xa8) = 0;
  puVar1 = PTR_DAT_04bcb3d0;
  *param_1 = *param_1 & 0xfe;
  puVar3 = PTR_DAT_04bcb3f0;
  *(byte **)puVar1 = param_1;
  puVar1 = PTR_DAT_04bcb318;
  *(byte **)puVar3 = param_1;
  puVar3 = PTR_DAT_04bcb3d8;
  *(byte **)puVar1 = param_1;
  *(byte **)puVar3 = param_1;
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  puVar3 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_a8 = (byte *)0x40b2b6c;
  local_b0 = puVar1;
  uVar8 = FUN_038c6d48(0,&local_b0,param_2[1],8,1,0);
  *(undefined8 *)(param_1 + 8) = uVar8;
  local_a8 = (byte *)0x40bd1b8;
  local_b0 = puVar1;
  uVar8 = FUN_038c6d48(0x1200000 - param_2[2],&local_b0,uVar8,8,1,1);
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  puVar4 = PTR_DAT_04bb2630;
  local_b8 = "XLink Object Create";
  local_a0 = *(undefined1 **)(param_1 + 8);
  local_74 = 0;
  plVar9 = *(long **)PTR_DAT_04bb2630;
  local_c0 = puVar1;
  if ((plVar9 == (long *)0x0) ||
     (uVar10 = (**(code **)(*plVar9 + 0x10))(plVar9,&local_c0,&local_78), (uVar10 & 1) == 0)) {
    lVar7 = 0;
  }
  else {
    local_b0 = puVar3 + 0x10;
    local_90 = (undefined *)0x7fffffff;
    local_98 = (ulong)local_78;
    local_a8 = (byte *)local_b8;
    local_88 = (undefined *)CONCAT44(0x20,local_6c);
    local_80 = local_a0;
    lVar7 = FUN_007d3f04(&local_b0);
    local_64 = (undefined4)local_74;
    uVar10 = 1L << (local_74 & 0x3f);
    *(int *)(lVar7 + 0xd0) = (int)uVar10;
    nn::os::GetThreadAvailableCoreMask();
    nn::os::SetThreadCoreMask(*(ThreadType **)(lVar7 + 0xe8),-1,uVar10);
  }
  *(long *)(param_1 + 0x50) = lVar7;
  local_a8 = *(byte **)(param_1 + 8);
  local_98 = CONCAT44(local_98._4_4_,0xffffffff);
  local_b0 = (undefined *)CONCAT44(1,(undefined4)local_b0);
  local_88 = PTR_DAT_04bb2120;
  local_a0 = (undefined1 *)0x0;
  local_b0 = (undefined *)CONCAT62(local_b0._2_6_,3);
  local_90 = puVar1;
  FUN_03f4388c(lVar7,&local_b0);
  lVar7 = *(long *)(param_1 + 0x50);
  local_78 = 2;
  *(undefined4 *)(lVar7 + 0xd0) = 4;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask(*(ThreadType **)(lVar7 + 0xe8),-1,4);
  nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x40));
  (**(code **)(**(long **)(param_1 + 0x50) + 0x30))();
  uVar8 = *(undefined8 *)(param_1 + 8);
  local_b8 = "XLink Object Create";
  plVar9 = *(long **)puVar4;
  local_74 = 0;
  local_c0 = puVar1;
  if ((plVar9 != (long *)0x0) &&
     (uVar10 = (**(code **)(*plVar9 + 0x10))(plVar9,&local_c0,&local_78), (uVar10 & 1) != 0)) {
    local_a0 = &LAB_0383b4e0;
    local_98 = 0;
    local_a8 = param_1 + 0x58;
    local_b0 = PTR_DAT_04bb5068 + 0x10;
    FUN_03f45490(local_a8,local_68,uVar8,&local_b0);
    if (0 < *(int *)(param_1 + 0x180)) {
      lVar7 = *(long *)(param_1 + 0x158);
      if (*(int *)(param_1 + 0x160) < 1) {
        lVar7 = 0;
      }
      puVar2 = (undefined8 *)0x0;
      if (lVar7 != 0) {
        puVar2 = (undefined8 *)(lVar7 - *(int *)(param_1 + 0x164));
      }
      if (((*PTR_DAT_04bcb2d8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bcb2d8), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bcb2d0 = PTR_DAT_04bcb2e0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bcb2d8);
      }
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,PTR_DAT_04bcb2d0);
      }
    }
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
  *(undefined8 *)(lVar7 + 0xa8) = uVar11;
  return 1;
}

