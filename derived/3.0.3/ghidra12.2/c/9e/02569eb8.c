
void FUN_02569eb8(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((long)param_1 + 0x6dc) = 0x400000004;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = FUN_0251e98c(1);
  pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x150) + 0xf0))(lVar2 + 0x150);
  fVar10 = *pfVar3;
  pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x180) + 0xf0))(lVar2 + 0x180);
  fVar11 = *pfVar3;
  pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x1b0) + 0xf0))(lVar2 + 0x1b0);
  fVar6 = *pfVar3;
  if (fVar11 <= fVar6) {
    fVar11 = fVar6 * 1.5;
  }
  fVar5 = *(float *)((long)param_1 + 0x3c);
  if (fVar5 != 0.0) {
    fVar7 = 0.0;
    fVar8 = 0.0 - fVar5;
    fVar9 = -fVar8;
    if (0.0 <= fVar8) {
      fVar9 = fVar8;
    }
    if (fVar6 < fVar9) {
      fVar10 = fVar10 * fVar8;
      fVar7 = fVar6;
      if (fVar8 <= 0.0) {
        fVar7 = -fVar11;
        fVar11 = -fVar6;
      }
      if (fVar10 <= fVar11) {
        fVar11 = fVar10;
      }
      if (fVar7 <= fVar10) {
        fVar7 = fVar11;
      }
      fVar7 = fVar5 + fVar7;
    }
    *(float *)((long)param_1 + 0x3c) = fVar7;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0xdb) = 4;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)((long)param_1 + 0x6f4) = 0;
  *(undefined8 *)((long)param_1 + 0x704) = 0;
  param_1[0xff] = 0;
  memset((void *)((long)param_1 + 0x43c),0,0x29c);
  *(undefined4 *)((long)param_1 + 0x6ec) = param_2;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_054f0960);
      puVar4 = &DAT_054f0958;
      if (iVar1 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar4 = &DAT_054f0958;
    }
  }
  else {
    puVar4 = (undefined8 *)(DAT_054f5738 + 0x204);
    if ((ulong)*(byte *)((long)param_1 + 0x6e4) < 8) {
      puVar4 = puVar4 + *(byte *)((long)param_1 + 0x6e4);
    }
  }
  *(uint *)((long)puVar4 + 4) = *(uint *)((long)puVar4 + 4) | 1;
  return;
}

