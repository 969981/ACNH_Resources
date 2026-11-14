
void FUN_0189add0(long *param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  float *pfVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined4 uVar13;
  float fVar14;
  
  if (*(char *)((long)param_1 + 0x36a) == '\0') {
    *(undefined1 *)((long)param_1 + 0x36a) = 1;
    (**(code **)(*(long *)param_1[0x60] + 0x160))((long *)param_1[0x60],param_2 + 0x18);
    lVar9 = param_1[0x60];
    *(undefined4 *)((long)param_1 + 0x31c) = *(undefined4 *)(lVar9 + 0x2b0);
    uVar2 = *(uint *)(lVar9 + 0x2b4);
    *(uint *)(param_1 + 100) = uVar2;
    *(undefined4 *)((long)param_1 + 0x324) = *(undefined4 *)(lVar9 + 0x2b8);
    pfVar8 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar2 >> 0x14) & 0xff0));
    *(float *)(param_1 + 0x6c) = *pfVar8 + pfVar8[1] * (float)(uVar2 & 0xffffff) * 5.9604645e-08;
    *(float *)((long)param_1 + 0x364) =
         pfVar8[2] + pfVar8[3] * (float)(uVar2 & 0xffffff) * 5.9604645e-08;
    (**(code **)(*param_1 + 0x110))(param_1,param_2);
    lVar9 = param_1[0x60];
    *(undefined4 *)(lVar9 + 0x284) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(lVar9 + 0x288) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(lVar9 + 0x28c) = *(undefined4 *)(param_2 + 0x10);
  }
  *(undefined1 *)((long)param_1 + 0x36a) = 2;
  lVar9 = param_1[9];
  if (lVar9 != 0) {
    param_1[0x78] = lVar9;
    puVar4 = PTR_DAT_04bb3fb8;
    puVar3 = PTR_DAT_04bb3fb0;
    if (*(long *)(lVar9 + 0xb0) != lVar9 + 0xa8) {
      lVar12 = (long)*(int *)(lVar9 + 0xbc);
      plVar11 = (long *)(*(long *)(lVar9 + 0xb0) - lVar12);
      puVar1 = PTR_DAT_04bb3040 + 0x10;
      do {
        if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
          *(undefined **)puVar3 = puVar1;
          __cxa_guard_release(puVar4);
        }
        if ((plVar11 != (long *)0x0) &&
           (uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar3), (uVar6 & 1) != 0))
        goto LAB_0189af60;
        plVar11 = (long *)(*(long *)((long)plVar11 + lVar12 + 8) - lVar12);
      } while (plVar11 != (long *)((lVar9 + 0xa8) - lVar12));
    }
    plVar11 = (long *)0x0;
LAB_0189af60:
    param_1[0x74] = (long)plVar11;
  }
  uVar10 = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)((long)param_1 + 900) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)param_1 + 0x37c) = uVar10;
  puVar7 = (undefined4 *)(**(code **)(*(long *)(param_1[0x77] + 200) + 0xf0))();
  uVar13 = *puVar7;
  *(undefined8 *)((long)param_1 + 0x38c) = 0x3f80000040200000;
  *(undefined4 *)(param_1 + 0x71) = uVar13;
  puVar7 = (undefined4 *)(**(code **)(*(long *)(param_1[0x77] + 0xf8) + 0xf0))();
  *(undefined4 *)((long)param_1 + 0x394) = *puVar7;
  pfVar8 = (float *)(**(code **)(*(long *)(param_1[0x77] + 0x128) + 0xf0))(param_1[0x77] + 0x128);
  fVar14 = *pfVar8;
  *(float *)(param_1 + 0x73) = fVar14;
  if (fVar14 < *(float *)((long)param_1 + 0x394)) {
    *(float *)(param_1 + 0x73) = *(float *)((long)param_1 + 0x394);
  }
  return;
}

