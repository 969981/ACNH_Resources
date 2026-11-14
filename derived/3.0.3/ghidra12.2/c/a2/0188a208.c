
void FUN_0188a208(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar3 = FUN_0189add0();
  lVar4 = FUN_018899f4(uVar3,param_2);
  param_1[0x7a] = lVar4;
  plVar10 = (long *)param_1[9];
  if (((*PTR_DAT_04bb3fc8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3fc8), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb3fc0 = PTR_DAT_04bb3fd0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3fc8);
  }
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3fc0);
    if ((uVar5 & 1) == 0) {
      plVar10 = (long *)0x0;
    }
  }
  param_1[0x7e] = (long)plVar10;
  uVar3 = (**(code **)(*param_1 + 0x1b0))(param_1);
  lVar4 = FUN_01889ed0(uVar3,param_2);
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x558;
    pfVar6 = (float *)(**(code **)(*(long *)(lVar4 + 0x558) + 0xf0))(lVar1);
    fVar13 = *pfVar6;
    lVar7 = (**(code **)(*(long *)(lVar4 + 0x558) + 0xf0))(lVar1);
    fVar14 = *(float *)(lVar7 + 4);
    lVar4 = (**(code **)(*(long *)(lVar4 + 0x558) + 0xf0))(lVar1);
    fVar15 = *(float *)(lVar4 + 8);
    puVar8 = (undefined4 *)(**(code **)(*(long *)param_1[0x60] + 0x148))();
    uVar11 = (undefined4)(long)(fVar13 * 11930465.0);
    uVar12 = (undefined4)(long)(fVar14 * 11930465.0);
    *puVar8 = uVar11;
    puVar8[1] = uVar12;
    uVar9 = (undefined4)(long)(fVar15 * 11930465.0);
    puVar8[2] = uVar9;
    *(undefined4 *)((long)param_1 + 0x31c) = uVar11;
    *(undefined4 *)(param_1 + 100) = uVar12;
    *(undefined4 *)((long)param_1 + 0x324) = uVar9;
  }
  return;
}

