
undefined8 FUN_0047bbd0(long param_1,code *param_2,long param_3)

{
  MutexType *pMVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined **local_a8;
  char local_a0;
  long local_98;
  MutexType *local_90;
  undefined4 local_84;
  undefined **local_80;
  char local_78;
  long local_70;
  MutexType *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  local_68 = (MutexType *)(DAT_04c70980 + 0x18);
  local_70 = DAT_04c70980;
  FUN_0047dc40();
  local_80 = &PTR_FUN_04865498;
  local_60 = 0;
  local_78 = '\0';
  (*param_2)(&local_80);
  local_84 = local_60;
  lVar3 = FUN_0047da00((long *)(param_1 + 0x148),&local_84);
  lVar4 = DAT_04c70980;
  if (lVar3 == 0) {
    uVar9 = 0x80040200;
  }
  else {
    uVar9 = 0x80040200;
    uVar6 = *(uint *)(lVar3 + 4) | ((int)lVar3 - (int)*(undefined8 *)(param_1 + 0x158)) * 0x20000000
    ;
    if (-1 < (int)uVar6) {
      uVar9 = 0x80040200;
      lVar3 = *(long *)(param_1 + 0x148);
      piVar11 = (int *)(lVar3 + (long)(int)uVar6 * 0x18 + 0x10);
      iVar2 = *piVar11;
      if (0 < iVar2) {
        puVar10 = (undefined8 *)(lVar3 + (long)(int)uVar6 * 0x18 + 8);
        puVar7 = (undefined8 *)*puVar10;
        lVar3 = 0;
        puVar8 = puVar7;
        do {
          if ((code *)*puVar8 == param_2) {
            if ((int)lVar3 == 0) {
              if (param_3 != 0) {
                (*param_2)(param_3);
                lVar4 = (long)*piVar11 + -1;
                *piVar11 = (int)lVar4;
                if ((int)lVar4 == 0) goto LAB_0047be88;
                goto LAB_0047be00;
              }
              local_a0 = '\x01';
              local_90 = (MutexType *)(DAT_04c70980 + 0x18);
              local_98 = DAT_04c70980;
              FUN_0047dc40();
              pMVar1 = (MutexType *)(lVar4 + 0x188);
              local_a8 = &PTR_FUN_04865388;
              nn::os::LockMutex(pMVar1);
              if (*(int *)(lVar4 + 0x1b0) == 0) goto LAB_0047bd68;
              lVar3 = (long)*(int *)(lVar4 + 0x1b0) << 4;
              plVar5 = *(long **)(lVar4 + 0x1a8);
              goto LAB_0047bd58;
            }
            iVar2 = iVar2 + -1;
            *piVar11 = iVar2;
            if (iVar2 == (int)lVar3) goto LAB_0047be88;
            uVar9 = 0;
            *puVar8 = puVar7[iVar2];
            break;
          }
          lVar3 = lVar3 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar3 < iVar2);
      }
    }
  }
  goto LAB_0047be8c;
  while (lVar3 = lVar3 + -0x10, plVar5 = plVar5 + 2, lVar3 != 0) {
LAB_0047bd58:
    if (*plVar5 != 0) {
      nn::os::UnlockMutex(pMVar1);
      local_48 = 0;
      local_58 = 0;
      puStack_50 = &DAT_0413df78;
      FUN_004223c0(0x8f7923a4,
                   "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Version/hkReflectPatchRegistry.cpp"
                   ,0x32b,
                   "Patches are being unloaded while a loader is still active. All loaders must be destroyed before unloading patches"
                   ,&local_58);
      goto LAB_0047bdb0;
    }
  }
LAB_0047bd68:
  nn::os::UnlockMutex(pMVar1);
LAB_0047bdb0:
  (*param_2)(&local_a8);
  local_a8 = &PTR_FUN_04865338;
  if (((local_a0 != '\0') && (*(int *)(local_98 + 0xb0) == 0)) && (*(int *)(local_98 + 0xa0) != 0))
  {
    FUN_00477f20();
  }
  nn::os::UnlockMutex(local_90);
  lVar4 = (long)*piVar11 + -1;
  *piVar11 = (int)lVar4;
  if ((int)lVar4 != 0) {
LAB_0047be00:
    *(undefined8 *)*puVar10 = ((undefined8 *)*puVar10)[lVar4];
    if (0 < *piVar11) {
      local_a0 = '\x01';
      local_90 = (MutexType *)(DAT_04c70980 + 0x18);
      local_98 = DAT_04c70980;
      FUN_0047dc40();
      local_a8 = &PTR_FUN_04865360;
      (**(code **)*puVar10)(&local_a8);
      local_a8 = &PTR_FUN_04865338;
      if (((local_a0 != '\0') && (*(int *)(local_98 + 0xb0) == 0)) &&
         (*(int *)(local_98 + 0xa0) != 0)) {
        FUN_00477f20();
      }
      nn::os::UnlockMutex(local_90);
    }
  }
LAB_0047be88:
  uVar9 = 0;
LAB_0047be8c:
  local_80 = &PTR_FUN_04865338;
  if (((local_78 != '\0') && (*(int *)(local_70 + 0xb0) == 0)) && (*(int *)(local_70 + 0xa0) != 0))
  {
    FUN_00477f20();
  }
  nn::os::UnlockMutex(local_68);
  return uVar9;
}

