
void FUN_03af8fe0(long param_1,long param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined2 local_d4 [2];
  undefined4 local_d0;
  
  lVar15 = *(long *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) <= param_3) {
    param_3 = 0;
  }
  uVar4 = *(uint *)(lVar15 + (long)(int)param_3 * 0x23c0);
  if (((uVar4 ^ 0xffffffff) & 0x22) == 0) {
    lVar10 = *(long *)(DAT_05ae9af0 + 0x40) + 0x540;
    if (*(uint *)(DAT_05ae9af0 + 0x38) < 5) {
      lVar10 = 0;
    }
    if ((uVar4 & 1) != 0) {
      lVar10 = *(long *)(*(long *)(lVar10 + 8) + 0x28) +
               (ulong)(1 < *(uint *)(*(long *)(lVar10 + 8) + 0x20)) * 0x150;
    }
    lVar12 = lVar15 + (long)(int)param_3 * 0x23c0;
    plVar13 = (long *)(lVar12 + 0x38);
    (**(code **)(*plVar13 + 0x38))(plVar13,param_2);
    FUN_038e77e4(lVar12 + 0x10,param_2,plVar13);
    FUN_038e4cec(local_d4);
    local_d0 = 0;
    local_d4[0] = 0;
    FUN_038e4d90(local_d4,param_2);
    FUN_03907810(lVar10,param_2);
    puVar1 = (uint *)(lVar10 + 0x14);
    do {
      uVar4 = *puVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar4 | 0x80000000;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((uVar4 & 0x7fffffff) != 0) {
      if ((int)uVar4 < 0) {
        if ((int)*puVar1 < 0) {
          lVar12 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar12 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar10);
      }
    }
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_0390d290(lVar15 + (long)(int)param_3 * 0x23c0 + 0x708,param_2,
                 *(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18,0xffffffff,
                 0);
    FUN_01557430(lVar10,param_2,0,lVar15 + (long)(int)param_3 * 0x23c0 + 0x1fb0,0);
    uVar11 = *(undefined8 *)(param_2 + 0xb8);
    lVar15 = *(long *)PTR_DAT_04bbd7e0;
    (*DAT_04c62868)(uVar11,0x10,lVar15 + 0x1024);
    (*DAT_04c62870)(uVar11,0x10,lVar15 + 0x1068);
    puVar8 = PTR_DAT_04bcf1e8;
    puVar7 = PTR_DAT_04bbd560;
    iVar2 = *(int *)(lVar15 + 0x1010);
    if (iVar2 != 0) {
      lVar15 = *(long *)(lVar15 + 0x1018);
      uVar14 = 0;
      uVar16 = 0;
      do {
        lVar10 = *(long *)(lVar15 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3));
        if (lVar10 != 0) {
          uVar9 = (**(code **)puVar7)(lVar10 + 8);
          (**(code **)puVar8)(uVar11,uVar14 & 0xffffffff,uVar9,*(undefined4 *)(lVar10 + 0x118));
        }
        uVar14 = uVar16 + 1;
        uVar16 = uVar14 & 0xffffffff;
      } while (iVar2 != (int)uVar14);
    }
    lVar15 = DAT_05ae9100;
    iVar2 = *(int *)(DAT_05ae9100 + 0x480);
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(DAT_05ae9100 + 0x464);
      uVar9 = *(undefined8 *)(param_2 + 0xb8);
      uVar11 = (**(code **)puVar7)(DAT_05ae9100 + 0x488);
      (**(code **)PTR_DAT_04bbd568)(uVar9,uVar3,*(undefined4 *)(lVar15 + 0x460),iVar2,uVar11);
    }
  }
  return;
}

