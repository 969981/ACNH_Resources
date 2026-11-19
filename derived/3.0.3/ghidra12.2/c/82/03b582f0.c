
void FUN_03b582f0(long param_1,size_t param_2,long *param_3)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  void *pvVar6;
  long *plVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  void *pvVar14;
  
  uVar8 = 0;
  if ((param_2 == 0) || (param_3 == (long *)0x0)) goto LAB_03b586cc;
  *(undefined4 *)(param_1 + 0x168) = 0x14;
  puVar5 = PTR_DAT_04bb2698;
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    pvVar6 = malloc(0x100);
    if (pvVar6 == (void *)0x0) goto LAB_03b5836c;
LAB_03b58350:
    uVar12 = 0x20;
    *(void **)(param_1 + 0x158) = pvVar6;
    *(undefined4 *)(param_1 + 0x150) = 0x20;
LAB_03b58378:
    uVar9 = uVar12 & 3;
    if (uVar12 - 1 < 3) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        lVar11 = uVar10 * 8;
        uVar10 = uVar10 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0x158) + lVar11) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x158) + lVar11 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x158) + lVar11 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x158) + lVar11 + 0x18) = 0;
      } while ((uVar12 & 0xfffffffc) != uVar10);
    }
    if (uVar9 != 0) {
      lVar11 = uVar10 << 3;
      do {
        uVar9 = uVar9 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x158) + lVar11) = 0;
        lVar11 = lVar11 + 8;
      } while (uVar9 != 0);
    }
  }
  else {
    pvVar6 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x100,8);
    if (pvVar6 != (void *)0x0) goto LAB_03b58350;
LAB_03b5836c:
    uVar12 = (ulong)*(uint *)(param_1 + 0x150);
    if (0 < (int)*(uint *)(param_1 + 0x150)) goto LAB_03b58378;
  }
  lVar11 = *(long *)puVar5;
  *(undefined4 *)(param_1 + 400) = 0x14;
  if (lVar11 == 0) {
    pvVar6 = malloc(0x100);
    if (pvVar6 == (void *)0x0) goto LAB_03b5843c;
LAB_03b58420:
    uVar12 = 0x20;
    *(void **)(param_1 + 0x180) = pvVar6;
    *(undefined4 *)(param_1 + 0x178) = 0x20;
LAB_03b58448:
    uVar9 = uVar12 & 3;
    if (uVar12 - 1 < 3) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        lVar11 = uVar10 * 8;
        uVar10 = uVar10 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0x180) + lVar11) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x180) + lVar11 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x180) + lVar11 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x180) + lVar11 + 0x18) = 0;
      } while ((uVar12 & 0xfffffffc) != uVar10);
    }
    if (uVar9 != 0) {
      lVar11 = uVar10 << 3;
      do {
        uVar9 = uVar9 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x180) + lVar11) = 0;
        lVar11 = lVar11 + 8;
      } while (uVar9 != 0);
    }
  }
  else {
    pvVar6 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x100,8);
    if (pvVar6 != (void *)0x0) goto LAB_03b58420;
LAB_03b5843c:
    uVar12 = (ulong)*(uint *)(param_1 + 0x178);
    if (0 < (int)*(uint *)(param_1 + 0x178)) goto LAB_03b58448;
  }
  lVar11 = *(long *)puVar5;
  *(size_t *)(param_1 + 0x128) = param_2;
  if (lVar11 == 0) {
    pvVar6 = malloc(param_2);
  }
  else {
    pvVar6 = (void *)(**(code **)(*param_3 + 0x30))(param_3,param_2,0x40);
  }
  pvVar14 = *(void **)(param_1 + 0x130);
  *(void **)(param_1 + 0x130) = pvVar6;
  if (pvVar14 != (void *)0x0) {
    if (*(long *)puVar5 == 0) {
      free(pvVar14);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar5,pvVar14);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar14);
      }
    }
  }
  if (*(long *)puVar5 == 0) {
    pvVar6 = malloc(*(size_t *)(param_1 + 0x128));
  }
  else {
    pvVar6 = (void *)(**(code **)(*param_3 + 0x30))(param_3,*(size_t *)(param_1 + 0x128),0x40);
  }
  pvVar14 = *(void **)(param_1 + 0x138);
  *(void **)(param_1 + 0x138) = pvVar6;
  if (pvVar14 == (void *)0x0) {
LAB_03b58590:
    if (*(long *)puVar5 != 0) goto LAB_03b58598;
LAB_03b585c4:
    pvVar6 = malloc(0x2d0);
  }
  else {
    if (*(long *)puVar5 != 0) {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar5,pvVar14);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar14);
      }
      goto LAB_03b58590;
    }
    free(pvVar14);
    if (*(long *)puVar5 == 0) goto LAB_03b585c4;
LAB_03b58598:
    pvVar6 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x2d0,8);
  }
  memset(pvVar6,0,0x2d0);
  pvVar14 = *(void **)(param_1 + 0x140);
  *(void **)(param_1 + 0x140) = pvVar6;
  if (pvVar14 == (void *)0x0) {
LAB_03b58628:
    lVar11 = 0;
    puVar1 = (uint *)(param_1 + 0x188);
    do {
      if ((*(long *)(param_1 + 0x140) != 0) &&
         ((int)(*(uint *)(param_1 + 0x188) - *(int *)(param_1 + 0x18c)) < *(int *)(param_1 + 0x178))
         ) {
        uVar13 = *(uint *)(param_1 + 0x188);
        do {
          while (uVar2 = *puVar1, uVar13 == uVar2) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              DataMemoryBarrier(2,3);
              *(long *)(*(long *)(param_1 + 0x180) +
                       (ulong)(*(int *)(param_1 + 0x178) - 1U & uVar13) * 8) =
                   *(long *)(param_1 + 0x140) + lVar11 * 0x24;
              goto LAB_03b58658;
            }
          }
          uVar13 = uVar2;
        } while ((int)(uVar2 - *(int *)(param_1 + 0x18c)) < *(int *)(param_1 + 0x178));
      }
LAB_03b58658:
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x14);
  }
  else {
    if (*(long *)puVar5 == 0) {
      free(pvVar14);
      lVar11 = *(long *)(param_1 + 0x140);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar5,pvVar14);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar14);
      }
      lVar11 = *(long *)(param_1 + 0x140);
    }
    if (lVar11 != 0) goto LAB_03b58628;
  }
  uVar8 = 1;
LAB_03b586cc:
  *(undefined1 *)(param_1 + 0x120) = uVar8;
  return;
}

