
long * FUN_038be470(long param_1,long param_2)

{
  MutexType *pMVar1;
  long ****pppplVar2;
  long *****ppppplVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long *****ppppplVar10;
  ulong uVar11;
  long ****pppplVar12;
  long ***ppplVar13;
  long ***ppplVar14;
  long *plVar15;
  long ***ppplVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *****local_a0;
  long *****local_98;
  undefined4 local_90;
  long alStack_88 [4];
  undefined8 local_68;
  
  pMVar1 = (MutexType *)(param_1 + 0x20);
  nn::os::LockMutex(pMVar1);
  local_68 = 0;
  FUN_038be2e0(param_1,alStack_88,param_2);
  plVar7 = (long *)FUN_038be914(param_1,param_2,alStack_88);
  puVar6 = PTR_DAT_04bd0ca0;
  uVar9 = *(uint *)PTR_DAT_04bd0ca0;
  if (0 < (int)uVar9) {
    if (uVar9 == 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        if (plVar7[uVar11 + 0x11] != 0) {
          *(long *)(plVar7[uVar11 + 0x11] + 0x28) = plVar7[10];
        }
        if (plVar7[uVar11 + 0x12] != 0) {
          *(long *)(plVar7[uVar11 + 0x12] + 0x28) = plVar7[10];
        }
        uVar11 = uVar11 + 2;
      } while (((ulong)uVar9 & 0xfffffffe) != uVar11);
    }
    if (((uVar9 & 1) != 0) && (plVar7[uVar11 + 0x11] != 0)) {
      *(long *)(plVar7[uVar11 + 0x11] + 0x28) = plVar7[10];
    }
  }
  if (*(code **)(param_2 + 0xb0) != (code *)0x0) {
    (**(code **)(param_2 + 0xb0))(plVar7);
  }
  lVar17 = 1;
  *(undefined4 *)(plVar7 + 0x17) = 1;
  puVar5 = PTR_DAT_04bb3350;
  lVar18 = alStack_88[local_68._4_4_];
  if (lVar18 != 0) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar18;
  }
  (**(code **)(*plVar7 + 0x50))(plVar7);
  if (lVar17 != 1) {
    lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar18 + 0xa8) = lVar17;
  }
  uVar9 = *(uint *)puVar6;
  if (0 < (int)uVar9) {
    uVar11 = 0;
    lVar17 = param_2 + 0x10;
    plVar15 = plVar7 + 0x11;
    do {
      lVar18 = lVar17;
      if (uVar9 <= uVar11) {
        lVar18 = param_2 + 0x10;
      }
      if (*(char *)(lVar18 + 0x14) != '\0') {
        plVar19 = plVar15;
        if (uVar9 <= (uint)uVar11) {
          plVar19 = plVar7 + 0x11;
        }
        plVar19 = (long *)*plVar19;
        if ((plVar19 != (long *)0x0) && (*(char *)((long)plVar7 + uVar11 + 0xa8) == '\0')) {
          iVar4 = *(int *)(lVar18 + 0x10);
          *(undefined1 *)((long)plVar7 + uVar11 + 0xa8) = 1;
          if (iVar4 == 0) {
            lVar18 = 0;
          }
          else {
            lVar18 = (**(code **)(*plVar19 + 0x30))(plVar19,iVar4,8);
          }
          (**(code **)(*plVar19 + 0x28))(plVar19);
          if (lVar18 != 0) {
            (**(code **)(*plVar19 + 0x38))(plVar19,lVar18);
          }
        }
        uVar9 = *(uint *)puVar6;
      }
      uVar11 = uVar11 + 1;
      plVar15 = plVar15 + 1;
      lVar17 = lVar17 + 0x18;
    } while ((long)uVar11 < (long)(int)uVar9);
  }
  nn::os::LockMutex(pMVar1);
  if ((int)plVar7[0x17] != 2) {
    *(undefined4 *)(plVar7 + 0x17) = 2;
    lVar17 = plVar7[0x10];
    if (lVar17 != 0) {
      plVar15 = plVar7 + 0xd;
      plVar7[0x10] = 0;
      if (*plVar15 != 0) {
        *(long *)(*plVar15 + 8) = plVar7[0xe];
      }
      if ((long *)plVar7[0xe] != (long *)0x0) {
        *(long *)plVar7[0xe] = *plVar15;
      }
      *plVar15 = 0;
      plVar7[0xe] = 0;
      *(int *)(lVar17 + 0x10) = *(int *)(lVar17 + 0x10) + -1;
    }
  }
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  if ((int)plVar7[0x17] != 4) {
    *(undefined4 *)(plVar7 + 0x17) = 4;
    lVar17 = plVar7[0x10];
    if (lVar17 != 0) {
      plVar15 = plVar7 + 0xd;
      plVar7[0x10] = 0;
      if (*plVar15 != 0) {
        *(long *)(*plVar15 + 8) = plVar7[0xe];
      }
      if ((long *)plVar7[0xe] != (long *)0x0) {
        *(long *)plVar7[0xe] = *plVar15;
      }
      *plVar15 = 0;
      plVar7[0xe] = 0;
      *(int *)(lVar17 + 0x10) = *(int *)(lVar17 + 0x10) + -1;
    }
    FUN_038beda0(param_1,param_1 + 0x88,plVar7);
    (**(code **)(*plVar7 + 0x58))(plVar7);
  }
  nn::os::UnlockMutex(pMVar1);
  lVar17 = *(long *)(param_2 + 0xa0);
  if (lVar17 != 0) {
    local_a0 = (long *****)(lVar17 + 0x20);
    pppplVar2 = *local_a0;
    ppplVar14 = *(long ****)(lVar17 + 0x28);
    if ((ppplVar14 != (long ***)0x0 || pppplVar2 != (long ****)0x0) &&
       (lVar18 = *(long *)(lVar17 + 0x38), lVar18 != 0)) {
      *(undefined8 *)(lVar17 + 0x38) = 0;
      if (pppplVar2 != (long ****)0x0) {
        pppplVar2[1] = ppplVar14;
        ppplVar14 = *(long ****)(lVar17 + 0x28);
      }
      if (ppplVar14 != (long ***)0x0) {
        *ppplVar14 = (long **)*local_a0;
      }
      *local_a0 = (long ****)0x0;
      *(undefined8 *)(lVar17 + 0x28) = 0;
      *(int *)(lVar18 + 0x10) = *(int *)(lVar18 + 0x10) + -1;
    }
    lVar18 = *(long *)(lVar17 + 0x38);
    if (lVar18 != 0) {
      plVar15 = *(long **)(lVar17 + 0x28);
      *(undefined8 *)(lVar17 + 0x38) = 0;
      if (*(long *)(lVar17 + 0x20) != 0) {
        *(long **)(*(long *)(lVar17 + 0x20) + 8) = plVar15;
        plVar15 = *(long **)(lVar17 + 0x28);
      }
      if (plVar15 != (long *)0x0) {
        *plVar15 = (long)*local_a0;
      }
      *local_a0 = (long ****)0x0;
      *(undefined8 *)(lVar17 + 0x28) = 0;
      *(int *)(lVar18 + 0x10) = *(int *)(lVar18 + 0x10) + -1;
    }
    *(long *******)(lVar17 + 0x38) = &local_a0;
    *(long *******)(lVar17 + 0x20) = &local_a0;
    *(long *******)(lVar17 + 0x28) = &local_a0;
    local_98 = (long *****)&local_a0;
    if (&local_a0 != (long ******)0x0) {
      local_98 = local_a0;
    }
    local_90 = 1;
    ppppplVar10 = local_98;
    if ((long ******)local_98 != &local_a0) {
      do {
        ppppplVar3 = (long *****)ppppplVar10[1];
        (*(code *)*ppppplVar10[2][8])(ppppplVar10[2] + 8,plVar7);
        ppppplVar10 = ppppplVar3;
      } while ((long ******)ppppplVar3 != &local_a0);
      ppppplVar10 = local_98;
      while ((long ******)ppppplVar10 != &local_a0) {
        ppppplVar3 = (long *****)ppppplVar10[1];
        pppplVar2 = ppppplVar10[2];
        ppplVar14 = pppplVar2[5];
        pppplVar12 = pppplVar2 + 4;
        ppplVar16 = *pppplVar12;
        ppppplVar10 = ppppplVar3;
        if ((ppplVar14 != (long ***)0x0 || ppplVar16 != (long ***)0x0) &&
           (ppplVar13 = pppplVar2[7], ppplVar13 != (long ***)0x0)) {
          pppplVar2[7] = (long ***)0x0;
          if (ppplVar16 != (long ***)0x0) {
            ppplVar16[1] = (long **)ppplVar14;
            ppplVar14 = pppplVar2[5];
          }
          if (ppplVar14 != (long ***)0x0) {
            *ppplVar14 = (long **)*pppplVar12;
          }
          *pppplVar12 = (long ***)0x0;
          pppplVar2[5] = (long ***)0x0;
          *(int *)(ppplVar13 + 2) = *(int *)(ppplVar13 + 2) + -1;
        }
      }
    }
  }
  if (*(long **)(param_2 + 0x98) != (long *)0x0) {
    **(long **)(param_2 + 0x98) = (long)plVar7;
  }
  nn::os::UnlockMutex(pMVar1);
  return plVar7;
}

