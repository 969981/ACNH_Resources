
int FUN_038fc7f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  int *piVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  int unaff_w22;
  uint uVar17;
  long lVar18;
  
  puVar1 = (uint *)(param_1 + 0x3dc);
  do {
    uVar13 = *puVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar13 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  uVar15 = *(uint *)(param_1 + 0x368);
  piVar2 = (int *)(param_1 + 0x3e0);
  uVar13 = uVar15 - 1 & uVar13;
  uVar17 = uVar13;
  do {
    uVar5 = uVar17;
    if (uVar15 <= uVar17) {
      uVar5 = 0;
    }
    piVar4 = (int *)(*(long *)(param_1 + 0x370) + (long)(int)uVar5 * 0x20);
    while (iVar7 = *piVar4, iVar7 == -1) {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar9) {
        *piVar4 = 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
      puVar10 = PTR_DAT_04bbd7c0;
      if (cVar8 == '\0') {
        lVar18 = *(long *)(param_1 + 0x370);
        uVar13 = uVar17;
        if (*(uint *)(param_1 + 0x368) <= uVar17) {
          uVar13 = 0;
        }
        uVar6 = *(ushort *)(param_1 + 0x3da);
        lVar14 = *(long *)PTR_DAT_04bbd7c0;
        nn::os::LockMutex((MutexType *)(lVar14 + 0x158));
        (**(code **)PTR_DAT_04bcf670)(*(long *)puVar10 + 0x58,uVar17 + uVar6,param_2,param_3);
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x158));
        lVar18 = lVar18 + (long)(int)uVar13 * 0x20;
        *(undefined8 *)(lVar18 + 0x18) = param_2;
        uVar13 = (**(code **)PTR_DAT_04bcf880)(param_2);
        *(uint *)(lVar18 + 4) = uVar13 >> 3 & 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = *piVar2 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        unaff_w22 = uVar17 + *(ushort *)(param_1 + 0x3da);
        goto LAB_038fc94c;
      }
    }
    do {
      uVar17 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar17 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    uVar15 = *(uint *)(param_1 + 0x368);
    uVar17 = uVar15 - 1 & uVar17;
  } while (uVar17 != uVar13);
  FUN_038faca0(param_1);
LAB_038fc94c:
  if (iVar7 != -1) {
    do {
      uVar13 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar13 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    uVar15 = *(uint *)(param_1 + 0x368);
    uVar13 = uVar15 - 1 & uVar13;
    uVar17 = uVar13;
    do {
      uVar5 = uVar17;
      if (uVar15 <= uVar17) {
        uVar5 = 0;
      }
      piVar4 = (int *)(*(long *)(param_1 + 0x370) + (long)(int)uVar5 * 0x20);
      while (iVar7 = *piVar4, iVar7 == -1) {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar9) {
          *piVar4 = 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        puVar10 = PTR_DAT_04bbd7c0;
        if (cVar8 == '\0') {
          lVar18 = *(long *)(param_1 + 0x370);
          uVar13 = uVar17;
          if (*(uint *)(param_1 + 0x368) <= uVar17) {
            uVar13 = 0;
          }
          uVar6 = *(ushort *)(param_1 + 0x3da);
          lVar14 = *(long *)PTR_DAT_04bbd7c0;
          nn::os::LockMutex((MutexType *)(lVar14 + 0x158));
          (**(code **)PTR_DAT_04bcf670)(*(long *)puVar10 + 0x58,uVar17 + uVar6,param_2,param_3);
          nn::os::UnlockMutex((MutexType *)(lVar14 + 0x158));
          lVar18 = lVar18 + (long)(int)uVar13 * 0x20;
          *(undefined8 *)(lVar18 + 0x18) = param_2;
          uVar13 = (**(code **)PTR_DAT_04bcf880)(param_2);
          *(uint *)(lVar18 + 4) = uVar13 >> 3 & 1;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar9) {
              *piVar2 = *piVar2 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          unaff_w22 = uVar17 + *(ushort *)(param_1 + 0x3da);
          goto LAB_038fca8c;
        }
      }
      do {
        uVar17 = *puVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar9) {
          *puVar1 = uVar17 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      uVar15 = *(uint *)(param_1 + 0x368);
      uVar17 = uVar15 - 1 & uVar17;
    } while (uVar17 != uVar13);
    FUN_038faca0(param_1);
LAB_038fca8c:
    puVar12 = PTR_DAT_04bcf278;
    puVar11 = PTR_DAT_04bcf270;
    puVar10 = PTR_DAT_04bcf238;
    if (iVar7 != -1) {
      iVar7 = *(int *)(param_1 + 0x368);
      if (iVar7 == 0) {
        unaff_w22 = -1;
      }
      else {
        lVar18 = *(long *)(param_1 + 0x370);
        uVar16 = 0;
        unaff_w22 = -1;
        do {
          if (0 < *(int *)(lVar18 + (-(uVar16 >> 0x1f) & 0xffffffe000000000 | uVar16 << 5))) {
            lVar14 = lVar18 + (long)(int)uVar16 * 0x20;
            (**(code **)puVar10)(*(undefined8 *)(lVar14 + 0x18));
            (**(code **)puVar11)(*(undefined8 *)(lVar14 + 0x18));
            (**(code **)puVar12)(*(undefined8 *)(lVar14 + 0x18));
          }
          uVar3 = uVar16 + 1;
          uVar16 = uVar3 & 0xffffffff;
        } while (iVar7 != (int)uVar3);
      }
    }
  }
  return unaff_w22;
}

