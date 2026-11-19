
void FUN_03938270(long param_1,long param_2,long param_3)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_80;
  float fStack_7c;
  undefined8 local_78;
  
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 == 4) {
    lVar7 = *(long *)(param_2 + 0x10);
    if (*(char *)(lVar7 + 0x78) == '\0' || *(char *)(lVar7 + 0x98) == '\0') goto LAB_039382f8;
    bVar6 = false;
    if (*(char *)(lVar7 + 0xb8) != '\0') {
      bVar6 = false;
      lVar7 = lVar7 + 0x430;
      goto LAB_03938310;
    }
  }
  else if (iVar2 == 3) {
    lVar7 = *(long *)(param_2 + 0x10);
    if (*(char *)(lVar7 + 0x18) != '\0' || *(char *)(lVar7 + 0x38) != '\0') {
      fVar11 = *(float *)(lVar7 + 0x238);
      if (0.0 < fVar11) {
LAB_039382d8:
        bVar6 = true;
        goto LAB_0393830c;
      }
      if (((*(char *)(lVar7 + 0x118) != '\0') && (*(long *)(lVar7 + 0x548) != 0)) &&
         (*(char *)(lVar7 + 0x38) != '\0')) {
        uVar10 = 0;
        if (fVar11 != (float)(int)fVar11) {
          uVar10 = (uint)(fVar11 < 0.0);
        }
        if (((int)fVar11 == uVar10) || (*(char *)(lVar7 + 0x198) != '\0')) goto LAB_039382d8;
      }
    }
LAB_039382f8:
    bVar6 = false;
  }
  else {
    bVar6 = iVar2 == 0;
    lVar7 = *(long *)(param_2 + 0x10);
  }
LAB_0393830c:
  lVar7 = lVar7 + 0x3b0;
LAB_03938310:
  puVar1 = (uint *)(param_3 + 0x14);
  fVar11 = 0.001;
  if (0.001 <= *(float *)(lVar7 + 0x58)) {
    fVar11 = *(float *)(lVar7 + 0x58);
  }
  fVar14 = 0.001;
  if (0.001 <= *(float *)(lVar7 + 0x5c)) {
    fVar14 = *(float *)(lVar7 + 0x5c);
  }
  fVar12 = 1.0 - *(float *)(lVar7 + 0x38);
  fVar13 = 1.0;
  if (fVar12 <= 1.0) {
    fVar13 = fVar12;
  }
  fStack_7c = 0.0;
  if (0.0 <= fVar12) {
    fStack_7c = fVar13;
  }
  fVar13 = ABS(*(float *)(lVar7 + 0x78));
  if (ABS(*(float *)(lVar7 + 0x78)) <= ABS(*(float *)(lVar7 + 0x7c))) {
    fVar13 = ABS(*(float *)(lVar7 + 0x7c));
  }
  fVar12 = fVar11;
  if (fVar14 <= fVar11) {
    fVar12 = fVar14;
  }
  local_80 = 0.0;
  if (!bVar6) {
    local_80 = fStack_7c;
  }
  local_78 = CONCAT44(fVar13 + (1.0 / fVar12) * 1.1,
                      fStack_7c + *(float *)(lVar7 + 0x3c) * (1.0 - fStack_7c));
  do {
    uVar10 = *puVar1;
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar10 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar10 & 0x7fffffff) != 0) {
    if ((int)uVar10 < 0) {
      if ((int)*puVar1 < 0) {
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_3);
    }
  }
  do {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
    puVar5 = PTR_DAT_04bd0fc8;
    puVar4 = PTR_DAT_04bcf2e0;
  } while (cVar3 != '\0');
  lVar8 = 0xc0;
  if (*(uint *)(param_3 + 0x30) < 9) {
    lVar8 = 0;
  }
  iVar2 = *(int *)(*(long *)(param_3 + 0x38) + lVar8);
  if (iVar2 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar2,0x10,&local_80);
  }
  fVar13 = 1.0;
  fVar12 = 1.0;
  if (*(int *)(lVar7 + 0x18) == 0) {
    fVar12 = (float)(*(int *)(param_2 + 0x28) * *(int *)(param_2 + 0x28) +
                    *(int *)(param_2 + 0x2c) * *(int *)(param_2 + 0x2c));
    fVar13 = SQRT(fVar12);
    if (NAN(fVar13)) {
      fVar13 = sqrtf(fVar12);
    }
    fVar12 = fVar13 / (float)*(int *)(param_2 + 0x28);
    fVar13 = fVar13 / (float)*(int *)(param_2 + 0x2c);
  }
  local_80 = fVar11 * fVar12;
  fStack_7c = fVar14 * fVar13;
  fVar14 = *(float *)(*(long *)(param_2 + 0x10) + 0x360);
  fVar11 = 1.0;
  if (fVar14 <= 1.0) {
    fVar11 = fVar14;
  }
  fVar13 = 0.0;
  if (0.0 <= fVar14) {
    fVar13 = fVar11;
  }
  local_78 = (ulong)(uint)fVar13;
  do {
    uVar10 = *puVar1;
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar10 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar10 & 0x7fffffff) != 0) {
    if ((int)uVar10 < 0) {
      if ((int)*puVar1 < 0) {
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_3);
    }
  }
  do {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar8 = 0xd8;
  if (*(uint *)(param_3 + 0x30) < 10) {
    lVar8 = 0;
  }
  iVar2 = *(int *)(*(long *)(param_3 + 0x38) + lVar8);
  if (iVar2 != -1) {
    (**(code **)puVar4)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)puVar5 + 0x70),
                        *(undefined8 *)(*(long *)puVar5 + 0x18),(long)iVar2,0x10,&local_80);
  }
  lVar8 = *(long *)(param_2 + 0x10);
  do {
    uVar10 = *puVar1;
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar10 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar10 & 0x7fffffff) != 0) {
    if ((int)uVar10 < 0) {
      if ((int)*puVar1 < 0) {
        lVar9 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar9 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_3);
    }
  }
  do {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar9 = 0x108;
  if (*(uint *)(param_3 + 0x30) < 0xc) {
    lVar9 = 0;
  }
  iVar2 = *(int *)(*(long *)(param_3 + 0x38) + lVar9);
  if (iVar2 != -1) {
    (**(code **)puVar4)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)puVar5 + 0x70),
                        *(undefined8 *)(*(long *)puVar5 + 0x18),(long)iVar2,0x10,lVar8 + 0x3a0);
  }
  local_80 = *(float *)(lVar7 + 0x78);
  fStack_7c = *(float *)(lVar7 + 0x7c);
  local_78 = 0;
  do {
    uVar10 = *puVar1;
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar10 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar10 & 0x7fffffff) != 0) {
    if ((int)uVar10 < 0) {
      if ((int)*puVar1 < 0) {
        lVar7 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar7 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_3);
    }
  }
  do {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar7 = 0xf0;
  if (*(uint *)(param_3 + 0x30) < 0xb) {
    lVar7 = 0;
  }
  iVar2 = *(int *)(*(long *)(param_3 + 0x38) + lVar7);
  if (iVar2 != -1) {
    (**(code **)puVar4)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)puVar5 + 0x70),
                        *(undefined8 *)(*(long *)puVar5 + 0x18),(long)iVar2,0x10,&local_80);
  }
  return;
}

