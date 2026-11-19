
void FUN_03bd0f20(int *param_1,undefined1 (*param_2) [12],undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  MutexType *pMVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [12];
  int iVar6;
  long lVar7;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  ulong uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  ulong uStack_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x22));
  iVar3 = *param_1;
  if (iVar3 != -1) {
    lVar7 = *(long *)(param_1 + 6);
    if ((lVar7 == 0) || (param_1[8] != *(int *)(lVar7 + 0x34))) {
      piVar2 = param_1 + 0x62c;
      lVar7 = *(long *)(*(long *)PTR_DAT_04bb2918 + 0x990);
      iVar4 = param_1[1];
      iVar6 = param_1[2];
      pMVar1 = (MutexType *)(lVar7 + 0x2c10);
      if ((((*(long *)(param_1 + 0x62c) == 0 && *(long *)(param_1 + 0x63a) == 0) &&
           (*(long *)(param_1 + 0x63c) == 0 && *(long *)(param_1 + 0x62e) == 0)) &&
          ((*(long *)(param_1 + 0x63e) == 0 && *(long *)(param_1 + 0x630) == 0) &&
          *(long *)(param_1 + 0x634) == 0)) &&
          ((*(long *)(param_1 + 0x636) == 0 && *(long *)(param_1 + 0x640) == 0) &&
          *(long *)(param_1 + 0x638) == 0)) {
        piVar2 = (int *)0x0;
      }
      nn::os::LockMutex(pMVar1);
      FUN_0033cdd0(lVar7,param_1 + 6,iVar3,iVar4,(char)iVar6,0x100,0x40,param_1 + 0x2c,0,piVar2,0);
      nn::os::UnlockMutex(pMVar1);
    }
  }
  if ((((*(long *)(param_1 + 6) != 0) && (param_1[8] == *(int *)(*(long *)(param_1 + 6) + 0x34))) &&
      (lVar7 = FUN_00322a20(), 0 < *(int *)(lVar7 + 0x18c))) && (*(char *)(lVar7 + 0x1c) != '\0')) {
    auVar5 = *(undefined1 (*) [12])(param_2[1] + 4);
    local_a0 = SUB124(*param_2,0);
    uStack_98 = (undefined4)*(ulong *)(param_2[2] + 8);
    uStack_88 = *(ulong *)(param_2[2] + 8) >> 0x20;
    local_80 = SUB124(*param_2,8);
    uStack_78 = (undefined4)*(ulong *)(param_2[3] + 4);
    uStack_68 = *(ulong *)(param_2[3] + 4) >> 0x20;
    uStack_9c = auVar5._0_4_;
    uStack_7c = SUB124(*(undefined1 (*) [12])(param_2[1] + 4),8);
    uStack_94 = 0;
    local_90 = CONCAT44(auVar5._4_4_,SUB124(*param_2,4));
    local_b0 = *param_4;
    local_70 = CONCAT44((int)((ulong)*(undefined8 *)param_2[2] >> 0x20),
                        (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20));
    uStack_74 = 0;
    uStack_a8 = (ulong)*(uint *)(param_4 + 1);
    FUN_003227f0(lVar7,&local_a0,&local_b0,param_5);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x22));
  return;
}

