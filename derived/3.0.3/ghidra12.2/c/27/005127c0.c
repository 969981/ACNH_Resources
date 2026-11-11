
void FUN_005127c0(undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_98 [2];
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined8 *local_68;
  
  FUN_00512490(param_2,param_3,1,param_4);
  lVar3 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar3 != 0) {
    FUN_00443a00(lVar3,"TtPreStepSignal");
  }
  FUN_005126e0(param_1,param_2 + 0xc0,param_2);
  lVar3 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar3 != 0) {
    FUN_00443a70(lVar3,&DAT_04085310);
  }
  uVar4 = FUN_0043c4e0(DAT_04c6f410);
  uVar2 = FUN_0054e2d0(param_2 + 0x50,uVar4,0);
  lVar3 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar3 != 0) {
    FUN_00443a00(lVar3,"TtCloth");
  }
  iVar6 = (int)param_4[1];
  if (0 < iVar6) {
    lVar3 = 0;
    pMVar1 = (MutexType *)(param_2 + 0x100);
    do {
      lVar12 = *(long *)(*param_4 + lVar3 * 8);
      if (*(char *)(lVar12 + 0x130) != '\0') {
        lVar11 = *(long *)(lVar12 + 0x18);
        iVar10 = *(int *)(lVar12 + 0x134);
        lVar9 = *(long *)(*(long *)(lVar11 + 0x60) + (long)iVar10 * 8);
        if (*(int *)(lVar9 + 0x28) != 0) {
          local_74 = 0;
          local_98[0] = (undefined4)param_1;
          local_90 = param_2;
          lStack_88 = lVar12;
          nn::os::LockMutex(pMVar1);
          if (0 < *(int *)(param_2 + 0xe8)) {
            lVar7 = 0;
            do {
              if (*(char *)(*(long *)(param_2 + 0xf0) + lVar7) == '\0') {
                *(undefined1 *)(*(long *)(param_2 + 0xf0) + lVar7) = 1;
                nn::os::UnlockMutex(pMVar1);
                local_80 = *(undefined8 *)(*(long *)(param_2 + 0xe0) + lVar7 * 8);
                goto LAB_00512994;
              }
              lVar7 = lVar7 + 1;
            } while (lVar7 < *(int *)(param_2 + 0xe8));
          }
          nn::os::UnlockMutex(pMVar1);
          local_80 = 0;
LAB_00512994:
          local_78 = *(undefined1 *)(param_2 + 0x120);
          if (0 < *(int *)(lVar12 + 0x90)) {
            lVar7 = 0;
            plVar8 = (long *)(*(long *)(lVar12 + 0x88) + 8);
            do {
              if ((int)plVar8[-1] == iVar10) {
                if (*plVar8 != 0) {
                  lVar7 = *(long *)(*plVar8 + 0x18);
                  lVar5 = FUN_0043c4e0(DAT_04c6f410);
                  goto joined_r0x005129f0;
                }
                break;
              }
              lVar7 = lVar7 + 1;
              plVar8 = plVar8 + 2;
            } while (lVar7 < *(int *)(lVar12 + 0x90));
          }
          lVar7 = 0;
          lVar5 = FUN_0043c4e0(DAT_04c6f410);
joined_r0x005129f0:
          if ((lVar5 != 0) && (*(ulong *)(lVar5 + 8) < *(ulong *)(lVar5 + 0x18))) {
            FUN_00443ad0(lVar5,*(ulong *)(*(long *)(lVar12 + 0x18) + 0x18) & 0xfffffffffffffffe,
                         &DAT_040c919e);
          }
          FUN_00514830(lVar12,local_98);
          lVar5 = FUN_0043c4e0(DAT_04c6f410);
          if (lVar5 != 0) {
            FUN_00443a00(lVar5,"TtExecute Operators");
          }
          iVar6 = *(int *)(lVar9 + 0x28);
          if (0 < iVar6) {
            lVar5 = 0;
            if (lVar7 == 0) {
              do {
                plVar8 = *(long **)(*(long *)(lVar11 + 0x50) +
                                   (long)*(int *)(*(long *)(lVar9 + 0x20) + lVar5 * 4) * 8);
                (**(code **)(*plVar8 + 0x28))(plVar8,local_98);
                lVar5 = lVar5 + 1;
              } while (lVar5 < *(int *)(lVar9 + 0x28));
            }
            else {
              lVar5 = 0;
              do {
                iVar10 = *(int *)(*(long *)(lVar7 + 0x18) + lVar5 * 4);
                if (0 < iVar10) {
                  plVar8 = *(long **)(*(long *)(lVar11 + 0x50) +
                                     (long)*(int *)(*(long *)(lVar9 + 0x20) + lVar5 * 4) * 8);
                  do {
                    (**(code **)(*plVar8 + 0x28))(plVar8,local_98);
                    iVar10 = iVar10 + -1;
                  } while (iVar10 != 0);
                  iVar6 = *(int *)(lVar9 + 0x28);
                }
                lVar5 = lVar5 + 1;
              } while (lVar5 < iVar6);
            }
          }
          if ((uVar2 & 1) == 0) {
LAB_00512b08:
            lVar9 = FUN_0043c4e0(DAT_04c6f410);
          }
          else {
            FUN_0054b880(lVar12,&local_c0);
            lVar9 = FUN_0043c4e0(DAT_04c6f410);
            local_68 = (undefined8 *)0x0;
            if ((lVar9 == 0) ||
               (FUN_00443d50(lVar9,&DAT_0405b9b0,&local_68,&DAT_04c143e8,0x18,4),
               local_68 == (undefined8 *)0x0)) goto LAB_00512b08;
            *local_68 = local_c0;
            *(int *)(local_68 + 1) = (int)uStack_b8;
            *(undefined8 *)((long)local_68 + 0xc) = local_b0;
            *(int *)((long)local_68 + 0x14) = (int)uStack_a8;
            lVar9 = FUN_0043c4e0(DAT_04c6f410);
          }
          if (lVar9 != 0) {
            FUN_00443a70(lVar9,&DAT_04085310);
          }
          FUN_00514ea0(lVar12,local_98);
          lVar12 = FUN_0043c4e0(DAT_04c6f410);
          if (lVar12 != 0) {
            FUN_00443a70(lVar12,&DAT_04085310);
          }
          iVar6 = (int)param_4[1];
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar6);
  }
  lVar3 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar3 != 0) {
    FUN_00443a70(lVar3,&DAT_04085310);
  }
  lVar3 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar3 != 0) {
    FUN_00443a00(lVar3,"TtPostStepSignal");
  }
  FUN_005126e0(param_1,param_2 + 200,param_2);
  lVar3 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar3 != 0) {
    FUN_00443a70(lVar3,&DAT_04085310);
  }
  return;
}

