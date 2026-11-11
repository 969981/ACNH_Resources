
void FUN_004585f0(long *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  int iVar7;
  ulong *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 *puStack_98;
  long local_68;
  
  lVar4 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar4 != 0) {
    FUN_00443a00(lVar4,"TtReflect.CallAfterReflectNew");
  }
  local_68 = lVar4;
  if ((int)param_1[5] == 0) {
    lVar5 = FUN_0043c4e0(DAT_04c6f410);
    if (lVar5 != 0) {
      FUN_00443d20((float)(int)param_1[1],lVar5,"MiNumVars");
    }
    if ((int)param_1[1] != 0) {
      pMVar1 = (MutexType *)(DAT_04c70090 + 0x18);
      nn::os::LockMutex(pMVar1);
      lVar5 = (long)(int)param_1[1];
      if (0 < (int)param_1[1]) {
        lVar9 = lVar5 << 5;
        do {
          lVar2 = *param_1 + lVar9;
          lVar5 = lVar5 + -1;
          iVar3 = *(int *)(lVar2 + -8);
          iVar7 = -iVar3;
          if (-1 < iVar3) {
            iVar7 = iVar3;
          }
          FUN_0044ebf0(*(undefined8 *)(lVar2 + -0x20),*(undefined8 *)(lVar2 + -0x18),iVar7);
          lVar9 = lVar9 + -0x20;
        } while (0 < lVar5);
      }
      nn::os::UnlockMutex(pMVar1);
    }
    if ((int)param_1[4] != 0) {
      plVar10 = (long *)param_1[3];
      lVar5 = (long)(int)param_1[4] << 3;
      do {
        uVar6 = FUN_004437d0(*plVar10);
        if (uVar6 < 2) {
          if ((undefined8 *)*plVar10 == (undefined8 *)0x0) {
            local_b0 = 0;
          }
          else {
            (*(code *)**(undefined8 **)*plVar10)();
            local_b0 = extraout_x1;
          }
          uStack_a8 = 1;
          local_a0 = &DAT_048537e8;
          puStack_98 = &local_b0;
          FUN_004223c0(0x5c9ebbbc,
                       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
                       ,0x2f1,
                       "A cloned object of type \'{}\' has stopped being referenced before/while calling afterReflectNew"
                       ,&uStack_a8);
        }
        plVar10 = plVar10 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    iVar7 = (int)param_1[1];
    if (0 < iVar7) {
      puVar8 = (ulong *)(*param_1 + (long)iVar7 * 0x20 + -0x10);
      do {
        if ((*puVar8 & 1) != 0) {
          FUN_0043dd50(*puVar8 & 0xfffffffffffffffe);
        }
        iVar7 = iVar7 + -1;
        puVar8 = puVar8 + -4;
      } while (iVar7 != 0);
    }
    iVar7 = (int)param_1[4];
    *(undefined4 *)(param_1 + 1) = 0;
    if (0 < iVar7) {
      plVar10 = (long *)(param_1[3] + (long)iVar7 * 8);
      do {
        plVar10 = plVar10 + -1;
        if (*plVar10 != 0) {
          FUN_004435c0();
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    lVar5 = param_1[2];
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[2] = 0;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
  }
  else if (DAT_04c70110 != '\0') {
    FUN_00444bc0(&uStack_a8,&DAT_04c700c0,1);
    lVar5 = FUN_004446b0(&uStack_a8,"AfterReflectNew should never be called from this handler",
                         &DAT_0413df78);
    *(char **)(lVar5 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
    ;
    *(undefined8 *)(lVar5 + 0x30) = 0x2dd;
    FUN_00444c00(&uStack_a8);
  }
  if (lVar4 != 0) {
    FUN_00443a70(lVar4,&DAT_04085310);
  }
  return;
}

