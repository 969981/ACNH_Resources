
undefined8 FUN_0378f0c0(long *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  
  *param_1 = param_2[1];
  lVar10 = param_2[1];
  if (lVar10 == 0) {
    return 1;
  }
  uVar2 = *(uint *)(lVar10 + 0x20);
  if ((uint)*(ushort *)(lVar10 + 0x284) <= *(uint *)(lVar10 + 0x20)) {
    uVar2 = (uint)*(ushort *)(lVar10 + 0x284);
  }
  if (uVar2 == 0) {
    return 1;
  }
  lVar10 = *(long *)(lVar10 + 0x28);
  uVar13 = 0;
  uVar12 = 0;
  do {
    iVar3 = (**(code **)(**(long **)(lVar10 + (long)(int)uVar12 * 0x38) + 0x30))();
    puVar1 = PTR_DAT_04bb2698;
    uVar12 = uVar12 + 1;
    uVar13 = iVar3 + uVar13;
  } while (uVar2 != uVar12);
  uVar2 = uVar13 - 1;
  if ((int)uVar13 < 1) {
    return 1;
  }
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar7 = malloc((long)(int)(uVar13 * 0x80));
joined_r0x0378f1c4:
    if (pvVar7 != (void *)0x0) {
      *(uint *)((long)param_1 + 0x34) = uVar13;
      param_1[4] = (long)pvVar7;
      if (1 < uVar13) {
        if (uVar2 == 1) {
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          plVar5 = (long *)((long)pvVar7 + 0x80);
          do {
            uVar14 = uVar14 + 2;
            plVar5[-0x10] = (long)plVar5;
            *plVar5 = (long)(plVar5 + 0x10);
            plVar5 = plVar5 + 0x20;
          } while (((ulong)uVar2 & 0xfffffffe) != uVar14);
        }
        if ((uVar2 & 1) != 0) {
          plVar5 = (long *)((long)pvVar7 + uVar14 * 0x80);
          *plVar5 = (long)(plVar5 + 0x10);
        }
      }
      *(undefined8 *)((long)pvVar7 + (long)(int)(uVar2 * 0x10) * 8) = 0;
      param_1[5] = (long)pvVar7;
    }
  }
  else {
    plVar5 = (long *)*param_2;
    if (plVar5 != (long *)0x0) {
LAB_0378f1a0:
      pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)(int)(uVar13 * 0x80),0x10);
      goto joined_r0x0378f1c4;
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar10 + 8);
    if (lVar6 != 0) {
      plVar5 = (long *)(lVar6 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_0378f1a0;
  }
  uVar2 = *(uint *)(param_2[1] + 0x30);
  uVar14 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    return 1;
  }
  lVar10 = *(long *)puVar1;
  if (lVar10 == 0) {
    puVar8 = malloc(uVar14 << 4);
  }
  else {
    plVar5 = (long *)*param_2;
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar10 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_0378f324;
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,uVar14 << 4,8);
  }
  if (puVar8 != (undefined8 *)0x0) {
    uVar15 = uVar14 & 3;
    puVar11 = puVar8;
    if ((uVar2 & 3) != 0) {
      do {
        *puVar11 = 0;
        uVar15 = uVar15 - 1;
        *(undefined4 *)(puVar11 + 1) = 0;
        puVar11 = puVar11 + 2;
      } while (uVar15 != 0);
    }
    if (2 < (uVar14 - 1 & 0xfffffffffffffff)) {
      do {
        *puVar11 = 0;
        *(undefined4 *)(puVar11 + 1) = 0;
        puVar11[2] = 0;
        *(undefined4 *)(puVar11 + 3) = 0;
        puVar11[4] = 0;
        *(undefined4 *)(puVar11 + 5) = 0;
        puVar11[6] = 0;
        *(undefined4 *)(puVar11 + 7) = 0;
        puVar11 = puVar11 + 8;
      } while (puVar11 != puVar8 + uVar14 * 2);
    }
    *(uint *)(param_1 + 1) = uVar2;
    param_1[2] = (long)puVar8;
  }
LAB_0378f324:
  uVar15 = 0;
  puVar1 = PTR_DAT_04bb3498 + 0x10;
  do {
    plVar5 = (long *)**(undefined8 **)(*(long *)(param_2[1] + 0x38) + uVar15 * 8);
    iVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
    lVar10 = param_1[2];
    uVar9 = uVar15;
    if (*(uint *)(param_1 + 1) <= uVar15) {
      uVar9 = 0;
    }
    if (((*PTR_DAT_04bb3490 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3488 = puVar1;
      __cxa_guard_release(PTR_DAT_04bb3490);
    }
    puVar8 = (undefined8 *)(lVar10 + uVar9 * 0x10);
    uVar9 = (**(code **)*plVar5)(plVar5,PTR_DAT_04bb3488);
    if ((uVar9 & 1) != 0) {
      *puVar8 = *(undefined8 *)(plVar5[0x22] + 0x20);
    }
    *(int *)(puVar8 + 1) = iVar3;
    if (0 < iVar3) {
      iVar4 = 0;
      uVar2 = (uint)uVar15 & 0xffff;
      do {
        if ((int)param_1[6] < *(int *)((long)param_1 + 0x34)) {
          plVar5 = (long *)param_1[4];
          if (plVar5 != (long *)0x0) {
            param_1[4] = *plVar5;
          }
          plVar5[2] = 0;
          plVar5[3] = 0;
          plVar5[0xe] = (long)(param_1 + 3);
          *(uint *)(plVar5 + 4) = uVar2 | iVar4 << 0x10;
          *plVar5 = (long)&PTR_LAB_04b46f18;
          plVar5[1] = 0;
          plVar5[6] = 0;
          plVar5[7] = 0;
          plVar5[8] = 0;
          plVar5[9] = 0;
          plVar5[10] = 0;
          plVar5[0xb] = 0;
          plVar5[0xc] = 0;
          plVar5[0xd] = 0;
          *(int *)(param_1 + 6) = (int)param_1[6] + 1;
          lVar10 = FUN_0378f804(param_1[3]);
          param_1[3] = lVar10;
          *(undefined8 *)(lVar10 + 0x18) = 1;
        }
        else {
          lVar10 = param_1[3];
          if (lVar10 != 0) {
            uVar12 = uVar2 | iVar4 << 0x10;
            do {
              if (uVar12 < *(uint *)(lVar10 + 0x20)) {
                plVar5 = (long *)(lVar10 + 8);
              }
              else {
                if (uVar12 <= *(uint *)(lVar10 + 0x20)) {
                  *(undefined8 *)(lVar10 + 0x60) = 0;
                  *(undefined8 *)(lVar10 + 0x68) = 0;
                  *(undefined8 *)(lVar10 + 0x50) = 0;
                  *(undefined8 *)(lVar10 + 0x58) = 0;
                  *(undefined8 *)(lVar10 + 0x40) = 0;
                  *(undefined8 *)(lVar10 + 0x48) = 0;
                  *(undefined8 *)(lVar10 + 0x30) = 0;
                  *(undefined8 *)(lVar10 + 0x38) = 0;
                  break;
                }
                plVar5 = (long *)(lVar10 + 0x10);
              }
              lVar10 = *plVar5;
            } while (lVar10 != 0);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != iVar3);
    }
    uVar15 = uVar15 + 1;
    if (uVar15 == uVar14) {
      return 1;
    }
  } while( true );
}

