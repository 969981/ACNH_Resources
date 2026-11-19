
void FUN_03aa6ca0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  
  plVar15 = (long *)(param_3 + 0xf0);
  (**(code **)(*plVar15 + 0x38))(plVar15);
  FUN_038e77e4(param_3 + 0x318,param_2,plVar15);
  FUN_038e4d90(param_1 + 0x458,param_2);
  if (*(uint *)(DAT_05ae9310 + 8) < 0x95) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(*(long *)(DAT_05ae9310 + 0x10) + 0x4a0);
  }
  FUN_03907810(lVar13,param_2);
  puVar1 = (uint *)(lVar13 + 0x14);
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar13);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (**(int **)(lVar13 + 0x38) != -1) {
    (*DAT_04c62af0)(*(undefined8 *)(param_2 + 0xb8),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),
                    (long)**(int **)(lVar13 + 0x38),0x10,param_4);
  }
  uVar12 = *(undefined8 *)(param_2 + 0xb8);
  lVar13 = *(long *)PTR_DAT_04bbd7e0;
  (*DAT_04c62868)(uVar12,0x10,lVar13 + 0xe44);
  (**(code **)PTR_DAT_04bcf1b0)(uVar12,0x10,lVar13 + 0xe88);
  puVar8 = PTR_DAT_04bcf1e8;
  puVar7 = PTR_DAT_04bbd560;
  iVar2 = *(int *)(lVar13 + 0xe30);
  if (iVar2 != 0) {
    lVar13 = *(long *)(lVar13 + 0xe38);
    uVar14 = 0;
    uVar16 = 0;
    do {
      lVar17 = *(long *)(lVar13 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3));
      if (lVar17 != 0) {
        uVar9 = (**(code **)puVar7)(lVar17 + 8);
        (**(code **)puVar8)(uVar12,uVar14 & 0xffffffff,uVar9,*(undefined4 *)(lVar17 + 0x118));
      }
      uVar14 = uVar16 + 1;
      uVar16 = uVar14 & 0xffffffff;
    } while (iVar2 != (int)uVar14);
  }
  lVar13 = DAT_05ae9100;
  iVar2 = *(int *)(DAT_05ae9100 + 0x1f8);
  if (iVar2 != 0) {
    uVar11 = *(undefined4 *)(DAT_05ae9100 + 0x1dc);
    uVar9 = *(undefined8 *)(param_2 + 0xb8);
    uVar12 = (**(code **)puVar7)(DAT_05ae9100 + 0x200);
    (**(code **)PTR_DAT_04bbd568)(uVar9,uVar11,*(undefined4 *)(lVar13 + 0x1d8),iVar2,uVar12);
  }
  uVar3 = *(uint *)(*(long *)(param_3 + 0x110) + 0x58);
  if (uVar3 != 0xffffffff) {
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
      uVar6 = uVar3 - *(ushort *)(DAT_05ae78f0 + 0x3da);
      if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar6) {
        uVar6 = 0;
      }
      if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) == 0)
      {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar3 & 0x3f);
        return;
      }
    }
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
      uVar10 = 0x112;
      uVar11 = 0x12;
    }
    else {
      uVar10 = 0x111;
      uVar11 = 0x11;
    }
    if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
      uVar11 = uVar10;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar11);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  return;
}

