
void FUN_033019e0(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined4 local_34;
  
  if (((*(char *)(param_1 + 0x16430) == '\0') && (*(char *)(param_1 + 0x16431) != '\0')) &&
     (*(int *)(param_1 + 0x16488) == 2)) {
    *(undefined2 *)(param_1 + 0x16430) = 1;
    lVar10 = DAT_0572b7f0;
    lVar9 = DAT_05355a60;
    if (((*(long *)(param_1 + 0x6e0) != 0) &&
        (lVar11 = *(long *)(*(long *)(param_1 + 0x6e0) + 8), lVar11 != 0)) &&
       ((*(int *)(DAT_05355a60 + 0x494) <= *(int *)(DAT_05355a60 + 0x474) &&
        (*(long *)(lVar11 + 0x28) != lVar11 + 0x238)))) {
      cVar5 = *(char *)(DAT_05355a60 + 0xbe8);
      if (cVar5 != '\0') {
        lVar11 = *(long *)(lVar11 + 800);
        if ((*(long *)(lVar11 + 0x20) == lVar11 + 0xe0) ||
           (*(long *)(lVar11 + 0x28) == lVar11 + 0xe0)) goto LAB_03301a10;
      }
      if (0 < *(int *)(DAT_0572b7f0 + 4)) {
        plVar7 = (long *)(DAT_0572b7f0 + 8);
        uVar12 = 0;
        plVar13 = plVar7;
        do {
          bVar6 = 0xf < uVar12;
          uVar12 = uVar12 + 1;
          plVar3 = plVar13;
          if (bVar6) {
            plVar3 = plVar7;
          }
          plVar13 = plVar13 + 1;
          *(undefined8 *)(*plVar3 + 0x30) = 0;
        } while ((long)uVar12 < (long)*(int *)(lVar10 + 4));
        cVar5 = *(char *)(lVar9 + 0xbe8);
      }
      if (cVar5 == '\0') {
        FUN_032fc524(lVar9,0);
      }
      else {
        FUN_03302efc(*(undefined8 *)(lVar9 + 0x20));
      }
    }
  }
LAB_03301a10:
  if (((*(int *)(param_1 + 0x1a68) != -1) &&
      (*(int *)(param_1 + 0x1928) == *(int *)(param_1 + 0x1a68))) &&
     (*(char *)(param_1 + 0x1a38) != '\0')) {
    lVar9 = *(long *)(param_1 + 0x520);
    *(long *)(lVar9 + 0xdf8) = param_1 + 0x1800;
    *(undefined2 *)(lVar9 + 0x177c) = 1;
    *(undefined1 *)(param_1 + 0x16407) = 0;
    *(undefined4 *)(param_1 + 0x1a68) = 0xffffffff;
  }
  lVar9 = *(long *)(param_1 + 0x528);
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar9 + 0x28);
    if (lVar10 != 0) {
      *(long *)(lVar9 + 0x20) = lVar10;
      *(undefined8 *)(lVar9 + 0x28) = 0;
      *(undefined4 *)(lVar9 + 0x30) = 0;
      if (*(long **)(lVar10 + 0x20) != (long *)0x0) {
        (**(code **)(**(long **)(lVar10 + 0x20) + 0x20))();
      }
    }
    if ((*(long *)(lVar9 + 0x20) != 0) &&
       (plVar7 = *(long **)(*(long *)(lVar9 + 0x20) + 0x50), plVar7 != (long *)0x0)) {
      (**(code **)(*plVar7 + 0x20))();
    }
    *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
    lVar10 = *(long *)(lVar9 + 0x28);
    if (lVar10 != 0) {
      *(long *)(lVar9 + 0x20) = lVar10;
      *(undefined8 *)(lVar9 + 0x28) = 0;
      *(undefined4 *)(lVar9 + 0x30) = 0;
      if (*(long **)(lVar10 + 0x20) != (long *)0x0) {
        (**(code **)(**(long **)(lVar10 + 0x20) + 0x20))();
      }
    }
  }
  iVar8 = *(int *)(param_1 + 0x1050);
  switch(iVar8) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    if ((*(long *)(param_1 + 0x6e0) != 0) && (*(long *)(*(long *)(param_1 + 0x6e0) + 8) != 0)) {
      FUN_033207d0();
    }
    lVar9 = *(long *)(param_1 + 0x518);
    if (lVar9 != 0) {
      lVar10 = *(long *)(lVar9 + 0x28);
      if (lVar10 != 0) {
        *(long *)(lVar9 + 0x20) = lVar10;
        *(undefined8 *)(lVar9 + 0x28) = 0;
        *(undefined4 *)(lVar9 + 0x30) = 0;
        if (*(long **)(lVar10 + 0x20) != (long *)0x0) {
          (**(code **)(**(long **)(lVar10 + 0x20) + 0x20))();
        }
      }
      if ((*(long *)(lVar9 + 0x20) != 0) &&
         (plVar7 = *(long **)(*(long *)(lVar9 + 0x20) + 0x50), plVar7 != (long *)0x0)) {
        (**(code **)(*plVar7 + 0x20))();
      }
      *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
      lVar10 = *(long *)(lVar9 + 0x28);
      if (lVar10 != 0) {
        *(long *)(lVar9 + 0x20) = lVar10;
        *(undefined8 *)(lVar9 + 0x28) = 0;
        *(undefined4 *)(lVar9 + 0x30) = 0;
        if (*(long **)(lVar10 + 0x20) != (long *)0x0) {
          (**(code **)(**(long **)(lVar10 + 0x20) + 0x20))();
        }
      }
    }
LAB_03301b7c:
    iVar8 = *(int *)(param_1 + 0x1050);
    break;
  case 1:
    if (*(long *)(param_1 + 0x6e0) != 0) {
      if (*(long *)(*(long *)(param_1 + 0x6e0) + 8) != 0) {
        FUN_033207d0();
      }
      goto LAB_03301b7c;
    }
    goto LAB_03301b88;
  }
  if ((iVar8 == 1) ||
     ((*(char *)(param_1 + 0x106a) == '\0' &&
      ((*(char *)(param_1 + 0x16408) == '\0' || (*(int *)(param_1 + 0x1568) != 0)))))) {
LAB_03301b88:
    if ((*(long *)(param_1 + 0x520) == 0) ||
       (*(char *)(*(long *)(param_1 + 0x520) + 0x1780) == '\0')) goto LAB_03301c2c;
  }
  lVar10 = *(long *)(param_1 + 0x520);
  lVar9 = *(long *)(lVar10 + 0x30);
  if (lVar9 != 0) {
    *(long *)(lVar10 + 0x28) = lVar9;
    *(undefined8 *)(lVar10 + 0x30) = 0;
    *(undefined4 *)(lVar10 + 0x38) = 0;
    if (*(long **)(lVar9 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(lVar9 + 0x20) + 0x20))();
    }
  }
  if ((*(long *)(lVar10 + 0x28) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar10 + 0x28) + 0x50), plVar7 != (long *)0x0)) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(int *)(lVar10 + 0x38) = *(int *)(lVar10 + 0x38) + 1;
  lVar9 = *(long *)(lVar10 + 0x30);
  if (lVar9 != 0) {
    *(long *)(lVar10 + 0x28) = lVar9;
    *(undefined8 *)(lVar10 + 0x30) = 0;
    *(undefined4 *)(lVar10 + 0x38) = 0;
    if (*(long **)(lVar9 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(lVar9 + 0x20) + 0x20))();
    }
  }
LAB_03301c2c:
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 != 0) {
    *(long *)(param_1 + 0x20) = lVar9;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(long **)(lVar9 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(lVar9 + 0x20) + 0x20))();
    }
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (plVar7 = *(long **)(*(long *)(param_1 + 0x20) + 0x50), plVar7 != (long *)0x0)) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 != 0) {
    *(long *)(param_1 + 0x20) = lVar9;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(long **)(lVar9 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(lVar9 + 0x20) + 0x20))();
    }
  }
  if ((*(int *)(param_1 + 0x1050) != 1) &&
     ((*(char *)(param_1 + 0x106a) != '\0' ||
      ((*(char *)(param_1 + 0x16408) != '\0' && (*(int *)(param_1 + 0x1568) == 0)))))) {
    local_38[0] = 0;
    local_3c[0] = 0;
    FUN_032eed00(param_1 + 0x1800,local_38,local_3c);
    if (((*(char *)(param_1 + 0x1a5d) == '\0') || (*(char *)(param_1 + 0x1a38) == '\0')) &&
       (local_34 = 0, 1 < *(int *)(param_1 + 0x1aa4) - 1U)) {
      lVar9 = *DAT_0572e3e8;
      *(undefined1 *)(param_1 + 0x1aa8) = 0;
      *(undefined4 *)(param_1 + 0x1aa4) = 1;
      pMVar1 = (MutexType *)(lVar9 + 0x60);
      nn::os::LockMutex(pMVar1);
      iVar8 = *(int *)(lVar9 + 0x90);
      iVar4 = *(int *)(lVar9 + 0x88);
      if (iVar8 < iVar4) {
        *(int *)(lVar9 + 0x90) = iVar8 + 1;
        iVar8 = *(int *)(lVar9 + 0x8c) + iVar8;
        iVar2 = 0;
        if (iVar4 <= iVar8) {
          iVar2 = iVar4;
        }
        *(long *)(*(long *)(lVar9 + 0x80) + (long)(iVar8 - iVar2) * 8) = param_1 + 0x1a70;
        nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x30));
        nn::os::UnlockMutex(pMVar1);
        *(long *)(param_1 + 0x1ae0) = lVar9 + 0x10;
      }
      else {
        nn::os::UnlockMutex(pMVar1);
      }
    }
  }
  return;
}

