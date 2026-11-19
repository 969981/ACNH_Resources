
void FUN_039cb920(long param_1,uint param_2)

{
  void *__dest;
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int *piVar14;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar11 = (long)*(int *)(param_1 + 0x10) << 3;
    puVar10 = *(undefined8 **)(param_1 + 0x18);
    do {
      FUN_03a03fd0(*puVar10,param_2 & 1,1);
      lVar11 = lVar11 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar11 != 0);
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x1e0));
  puVar2 = PTR_DAT_04bd1010;
  iVar9 = *(int *)(param_1 + 0x220);
  do {
    if (iVar9 == 0) {
      iVar5 = 0;
    }
    else {
      lVar11 = 0;
      iVar13 = 1;
      do {
        piVar14 = *(int **)(*(long *)(param_1 + 0x228) + lVar11);
        if ((uint)piVar14[1] < *(int *)(*(long *)puVar2 + 0xc) + 1U) {
          if (((*piVar14 == 1) || (*piVar14 == 0)) && (*(long **)(piVar14 + 2) != (long *)0x0)) {
            (**(code **)(**(long **)(piVar14 + 2) + 8))();
          }
          if (*(int *)(param_1 + 0x210) < *(int *)(param_1 + 0x214)) {
            *(int **)(*(long *)(param_1 + 0x218) + (long)*(int *)(param_1 + 0x210) * 8) = piVar14;
            *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 1;
          }
          iVar5 = *(int *)(param_1 + 0x220);
          if (iVar13 + -1 < iVar5) {
            uVar1 = iVar5 - iVar13;
            if (uVar1 != 0 && iVar13 <= iVar5) {
              __dest = (void *)(*(long *)(param_1 + 0x228) + lVar11);
              memmove(__dest,(void *)((long)__dest + 8),
                      -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
              iVar5 = *(int *)(param_1 + 0x220);
            }
            iVar5 = iVar5 + -1;
            *(int *)(param_1 + 0x220) = iVar5;
          }
          goto LAB_039cb988;
        }
        lVar11 = lVar11 + 8;
        iVar13 = iVar13 + 1;
      } while ((long)iVar9 * 8 != lVar11);
      iVar5 = iVar9;
    }
LAB_039cb988:
    bVar3 = iVar9 == iVar5;
    iVar9 = iVar5;
    if (bVar3) {
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e0));
      nn::os::LockMutex((MutexType *)(param_1 + 0x138));
      lVar11 = param_1 + 0x170;
      if (*(long *)(param_1 + 0x178) != lVar11) {
        iVar9 = *(int *)(param_1 + 0x184);
        lVar6 = (long)iVar9;
        plVar4 = (long *)(*(long *)(param_1 + 0x178) - lVar6);
        lVar12 = (long)plVar4 + lVar6;
        do {
          lVar12 = *(long *)(lVar12 + 8);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))();
            iVar9 = *(int *)(param_1 + 0x184);
          }
          plVar4 = (long *)(lVar12 - lVar6);
        } while (plVar4 != (long *)(lVar11 + -iVar9));
      }
      if (*(long *)(param_1 + 400) != param_1 + 0x188) {
        uVar7 = (ulong)*(uint *)(param_1 + 0x19c);
        lVar8 = (long)(int)*(uint *)(param_1 + 0x19c);
        lVar6 = *(long *)(param_1 + 400) - lVar8;
        lVar12 = lVar6 + lVar8;
        do {
          plVar4 = (long *)(lVar6 + (int)uVar7);
          lVar12 = *(long *)(lVar12 + 8);
          if (*plVar4 != 0) {
            *(long *)(*plVar4 + 8) = plVar4[1];
          }
          if ((long *)plVar4[1] != (long *)0x0) {
            *(long *)plVar4[1] = *plVar4;
          }
          *plVar4 = 0;
          plVar4[1] = 0;
          plVar4 = (long *)(lVar6 + *(int *)(param_1 + 0x184));
          *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + -1;
          lVar6 = *(long *)(param_1 + 0x170);
          *(long **)(param_1 + 0x170) = plVar4;
          *plVar4 = lVar6;
          plVar4[1] = lVar11;
          if (lVar6 != 0) {
            *(long **)(lVar6 + 8) = plVar4;
          }
          uVar7 = (ulong)*(int *)(param_1 + 0x19c);
          *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
          lVar6 = lVar12 - lVar8;
        } while (lVar6 != (param_1 + 0x188) - uVar7);
      }
      *(long *)(param_1 + 0x1a0) = lVar11;
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x138));
      return;
    }
  } while( true );
}

