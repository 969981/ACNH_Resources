
undefined8
FUN_03be7150(long param_1,char *param_2,undefined8 *param_3,long param_4,undefined4 param_5,
            int param_6)

{
  MutexType *pMVar1;
  long *plVar2;
  char *__s1;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  MutexType *pMVar14;
  undefined *local_78;
  long local_70;
  undefined1 local_68;
  
  pMVar1 = (MutexType *)(param_1 + 0x30);
  nn::os::LockMutex(pMVar1);
  plVar13 = *(long **)(param_1 + 0x58);
  plVar2 = (long *)(param_1 + 0x50);
  if (plVar13 != plVar2) {
    pMVar14 = (MutexType *)(plVar13 + -4);
    uVar12 = *(ulong *)PTR_DAT_04bb38c0;
    uVar10 = *(ulong *)PTR_DAT_04bb38c8;
    do {
      if ((((*(long *)(pMVar14 + 0x10) == param_4) && (lVar5 = *(long *)pMVar14, lVar5 != 0)) &&
          (*(int *)(lVar5 + 0x20) == *(int *)(pMVar14 + 8))) &&
         ((*(uint **)(lVar5 + 0x30) != (uint *)0x0 && (*(int *)(pMVar14 + 0x1c) == param_6)))) {
        uVar6 = (ulong)**(uint **)(lVar5 + 0x30);
        pcVar9 = (char *)(uVar10 | uVar6);
        __s1 = pcVar9 + 0x100000000;
        if (uVar12 <= uVar6) {
          __s1 = pcVar9;
        }
        iVar4 = strcmp(__s1,param_2);
        if (iVar4 == 0) {
          *(undefined4 *)(pMVar14 + 0x18) = param_5;
          if (param_3 != (undefined8 *)0x0) {
            uVar7 = *(undefined8 *)pMVar14;
            *(undefined4 *)(param_3 + 1) = *(undefined4 *)(pMVar14 + 8);
            *param_3 = uVar7;
          }
          goto LAB_03be7338;
        }
      }
      plVar13 = (long *)plVar13[1];
      pMVar14 = (MutexType *)(plVar13 + -4);
    } while (pMVar14 != pMVar1);
  }
  local_68 = 0;
  local_78 = PTR_DAT_04bcadf8 + 0x10;
  lVar5 = (**(code **)(**(long **)(*(long *)(param_4 + 0x30) + 0x18) + 0x20))();
  if (*(char *)(lVar5 + 0x78) != '\0') {
    local_70 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(param_4 + 0x30) + 0x18),param_2);
    if (local_70 != 0) {
      if (*(int *)(param_1 + 0x60) < *(int *)(param_1 + 0x78)) {
        puVar11 = *(undefined8 **)(param_1 + 0x68);
        if (puVar11 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x68) = *puVar11;
        }
        *puVar11 = 0;
        *(undefined4 *)(puVar11 + 1) = 0;
        puVar11[2] = 0;
        *(undefined4 *)(puVar11 + 3) = 0xffffffff;
        *(undefined8 *)((long)puVar11 + 0x1c) = 0;
        *(undefined8 *)((long)puVar11 + 0x24) = 0;
        *(undefined4 *)((long)puVar11 + 0x2c) = 0;
        lVar5 = *plVar2;
        *plVar2 = (long)(puVar11 + 4);
        puVar11[4] = lVar5;
        puVar11[5] = plVar2;
        if (lVar5 != 0) {
          *(undefined8 **)(lVar5 + 8) = puVar11 + 4;
        }
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        FUN_03bf47b0(param_4,&local_78,param_3);
        uVar8 = *param_3;
        uVar7 = 0;
        uVar3 = *(undefined4 *)(param_3 + 1);
        puVar11[2] = param_4;
        *puVar11 = uVar8;
        *(undefined4 *)(puVar11 + 1) = uVar3;
        *(undefined4 *)(puVar11 + 3) = param_5;
        *(int *)((long)puVar11 + 0x1c) = param_6;
      }
      else {
        uVar7 = 2;
      }
      goto LAB_03be7344;
    }
  }
LAB_03be7338:
  uVar7 = 1;
LAB_03be7344:
  nn::os::UnlockMutex(pMVar1);
  return uVar7;
}

