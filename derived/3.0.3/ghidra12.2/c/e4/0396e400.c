
void FUN_0396e400(long param_1,long param_2,ulong param_3)

{
  uint *puVar1;
  MutexType *pMVar2;
  ulong uVar3;
  long *plVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 local_68;
  
  if ((param_3 & 1) != 0) {
    puVar1 = (uint *)(param_1 + 0xbe8);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar10) {
        *puVar1 = 0;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    plVar17 = *(long **)(param_1 + 0xbd0);
    if (*(int *)(param_1 + 0xbc8) != 0) {
      plVar4 = plVar17 + *(int *)(param_1 + 0xbc8);
      do {
        lVar21 = *plVar17;
        if ((*(byte *)(lVar21 + 600) & 1) != 0) {
          uVar6 = *(uint *)(param_1 + 0xbe8);
          if (*(uint *)(param_1 + 0xbd8) <= uVar6) {
            uVar6 = 0;
          }
          lVar20 = *(long *)(param_1 + 0xbe0) + (long)(int)uVar6 * 0x398;
          *(undefined4 *)(lVar20 + 8) = *(undefined4 *)(lVar21 + 8);
          bVar7 = *(byte *)(lVar20 + 600);
          *(undefined4 *)(lVar20 + 0xc) = *(undefined4 *)(lVar21 + 0xc);
          *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(lVar21 + 0x10);
          *(undefined8 *)(lVar20 + 0x18) = *(undefined8 *)(lVar21 + 0x18);
          *(undefined4 *)(lVar20 + 0x20) = *(undefined4 *)(lVar21 + 0x20);
          bVar5 = *(byte *)(lVar21 + 600) & 1;
          *(byte *)(lVar20 + 600) = bVar7 & 0xfe | bVar5;
          bVar5 = bVar5 | (*(byte *)(lVar21 + 600) >> 1 & 1) << 1;
          *(byte *)(lVar20 + 600) = bVar7 & 0xfc | bVar5;
          *(byte *)(lVar20 + 600) = bVar7 & 0xec | bVar5 | *(byte *)(lVar21 + 600) & 0x10;
          *(undefined4 *)(lVar20 + 0x24) = *(undefined4 *)(lVar21 + 0x24);
          *(undefined8 *)(lVar20 + 0x250) = *(undefined8 *)(lVar21 + 0x250);
          *(undefined8 *)(lVar20 + 0x268) = *(undefined8 *)(lVar21 + 0x268);
          *(undefined8 *)(lVar20 + 0x270) = *(undefined8 *)(lVar21 + 0x270);
          *(undefined4 *)(lVar20 + 0x25c) = *(undefined4 *)(lVar21 + 0x25c);
          *(undefined1 *)(lVar20 + 0x278) = *(undefined1 *)(lVar21 + 0x278);
          *(undefined8 *)(lVar20 + 0x260) = *(undefined8 *)(lVar21 + 0x260);
          do {
            uVar6 = *puVar1;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar10) {
              *puVar1 = uVar6 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          *(long *)(*(long *)(param_1 + 0xbf0) +
                   (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3)) = lVar20;
        }
        plVar17 = plVar17 + 1;
      } while (plVar17 != plVar4);
    }
  }
  puVar16 = PTR_DAT_04bcf508;
  puVar15 = PTR_DAT_04bcf500;
  puVar14 = PTR_DAT_04bcf4f8;
  puVar13 = PTR_DAT_04bcf100;
  puVar12 = PTR_DAT_04bbd7c0;
  puVar11 = PTR_DAT_04bbd590;
  plVar17 = *(long **)(param_1 + 0xbf0);
  iVar8 = *(int *)(param_1 + 0xbe8);
  if ((*(byte *)(*(long *)(param_1 + 0x678) + 0x112) >> 2 & 1) == 0) {
    if (iVar8 != 0) {
      lVar21 = (long)iVar8 << 3;
      do {
        (**(code **)puVar11)(*(undefined8 *)(param_2 + 0xb8),1,*plVar17 + 0x250);
        if ((*(byte *)(param_1 + 0x6b1) >> 5 & 1) != 0) {
          lVar20 = *(long *)puVar12;
          uVar22 = *(undefined8 *)(param_2 + 0xb8);
          nn::os::LockMutex((MutexType *)(lVar20 + 0x118));
          local_68 = (**(code **)PTR_DAT_04bcf108)(uVar22);
          (**(code **)PTR_DAT_04bcf4f8)(*(undefined8 *)(*(long *)puVar12 + 0x38),1,&local_68);
          (**(code **)puVar16)(*(undefined8 *)(*(long *)puVar12 + 0x38));
          (**(code **)puVar13)(uVar22);
          nn::os::UnlockMutex((MutexType *)(lVar20 + 0x118));
        }
        plVar17 = plVar17 + 1;
        lVar21 = lVar21 + -8;
      } while (lVar21 != 0);
    }
  }
  else if (iVar8 != 0) {
    lVar21 = (long)iVar8 << 3;
    do {
      pMVar2 = (MutexType *)(*(long *)puVar12 + 0x118);
      lVar20 = *plVar17;
      uVar22 = *(undefined8 *)(*(long *)puVar12 + 0x38);
      nn::os::LockMutex(pMVar2);
      (**(code **)puVar14)(uVar22,1,lVar20 + 0x250);
      (**(code **)puVar15)(uVar22);
      nn::os::UnlockMutex(pMVar2);
      if ((*(byte *)(param_1 + 0x6b1) >> 5 & 1) != 0) {
        lVar20 = *(long *)puVar12;
        uVar22 = *(undefined8 *)(param_2 + 0xb8);
        nn::os::LockMutex((MutexType *)(lVar20 + 0x118));
        local_68 = (**(code **)PTR_DAT_04bcf108)(uVar22);
        (**(code **)puVar14)(*(undefined8 *)(*(long *)puVar12 + 0x38),1,&local_68);
        (**(code **)PTR_DAT_04bcf508)(*(undefined8 *)(*(long *)puVar12 + 0x38));
        (**(code **)PTR_DAT_04bcf100)(uVar22);
        nn::os::UnlockMutex((MutexType *)(lVar20 + 0x118));
      }
      plVar17 = plVar17 + 1;
      lVar21 = lVar21 + -8;
    } while (lVar21 != 0);
  }
  puVar11 = PTR_DAT_04bbd7c0;
  if ((*(byte *)(param_1 + 0x6b1) >> 6 & 1) != 0) {
    uVar22 = *(undefined8 *)(param_2 + 0xb8);
    lVar21 = *(long *)PTR_DAT_04bbd7c0;
    nn::os::LockMutex((MutexType *)(lVar21 + 0x118));
    local_68 = (**(code **)PTR_DAT_04bcf108)(uVar22);
    (**(code **)PTR_DAT_04bcf4f8)(*(undefined8 *)(*(long *)puVar11 + 0x38),1,&local_68);
    (**(code **)PTR_DAT_04bcf508)(*(undefined8 *)(*(long *)puVar11 + 0x38));
    (**(code **)PTR_DAT_04bcf100)(uVar22);
    nn::os::UnlockMutex((MutexType *)(lVar21 + 0x118));
  }
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  plVar17 = *(long **)(param_1 + 0xbf0);
  if (*(int *)(param_1 + 0xbe8) != 0) {
    uVar19 = (long)*(int *)(param_1 + 0xbe8) - 1U & 0x1fffffffffffffff;
    uVar3 = uVar19 + 1;
    uVar18 = 0;
    if (uVar19 != 0) {
      uVar18 = 0;
      uVar19 = uVar3 & 0x3ffffffffffffffe;
      do {
        uVar19 = uVar19 - 2;
        lVar21 = uVar18 + *(uint *)(*plVar17 + 0x24);
        *(long *)(param_1 + 0x6f8) = lVar21;
        plVar4 = plVar17 + 1;
        plVar17 = plVar17 + 2;
        uVar18 = lVar21 + (ulong)*(uint *)(*plVar4 + 0x24);
        *(ulong *)(param_1 + 0x6f8) = uVar18;
      } while (uVar19 != 0);
    }
    if ((uVar3 & 1) != 0) {
      uVar18 = uVar18 + *(uint *)(*plVar17 + 0x24);
      *(ulong *)(param_1 + 0x6f8) = uVar18;
    }
    if (*(ulong *)(param_1 + 0x700) < uVar18) {
      *(ulong *)(param_1 + 0x700) = uVar18;
    }
  }
  return;
}

