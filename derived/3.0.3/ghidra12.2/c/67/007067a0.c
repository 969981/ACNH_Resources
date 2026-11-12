
undefined8 FUN_007067a0(long param_1,int param_2,short *param_3,undefined4 param_4)

{
  uint *puVar1;
  short *psVar2;
  short sVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  short local_34 [2];
  
  lVar9 = *(long *)(param_1 + 0x318);
  if (((((lVar9 != 0) && ((*(byte *)(lVar9 + 0x2d8) & 1) != 0)) &&
       (lVar9 = *(long *)(lVar9 + 0x2e0), lVar9 != 0)) &&
      ((lVar10 = *(long *)(lVar9 + 0x18), (*(byte *)(lVar9 + 8) & 10) == 2 && lVar10 != 0 &&
       (*(long *)(lVar10 + 0x188) != 0)))) &&
     (*(int *)(*(long *)(lVar10 + 0x188) + 0x20) == *(int *)(lVar10 + 400))) {
    FUN_03be6c50();
  }
  puVar1 = (uint *)(param_1 + 0x300);
  *(undefined4 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x304) = 0;
  puVar7 = PTR_DAT_04bb3170;
  sVar3 = *(short *)PTR_DAT_04bb3170;
  *(short *)(param_1 + 0x30c) = sVar3;
  if (*(int *)(param_1 + 0x2b8) != 0) {
    *(undefined4 *)(param_1 + 0x278) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 3;
  }
  if (param_2 - 0xfU < 0xe) {
    psVar2 = (short *)(param_1 + 0x2d8);
    if (*param_3 == sVar3) {
      if (((DAT_04c8c100 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04c8c100), iVar8 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      if (0 < (int)DAT_04c8c0f0) {
        uVar13 = 0;
        do {
          if (*(int *)(DAT_04c8c0f8 + uVar13 * 4) == 0) goto LAB_007068a8;
          uVar13 = uVar13 + 1;
        } while (DAT_04c8c0f0 != uVar13);
      }
      uVar13 = 0;
LAB_007068a8:
      uVar12 = (uint)uVar13;
      local_34[0] = 0;
      puVar11 = &DAT_04c8c0f0;
      if (((DAT_04c8c100 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), puVar11 = (uint *)PTR_DAT_04bb3120,
         iVar8 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
        puVar11 = (uint *)PTR_DAT_04bb3120;
      }
      if (*puVar11 <= uVar12) {
        uVar12 = 0;
      }
      local_34[0] = (short)(*(int *)(*(long *)(puVar11 + 2) + (long)(int)uVar12 * 4) << 0xb);
    }
    else {
      FUN_007ef010(local_34,param_3);
    }
    uVar13 = FUN_01596728(psVar2);
    if (((uVar13 & 1) == 0) || (*psVar2 != local_34[0])) {
      uVar14 = *(undefined8 *)(DAT_05231900 + 0x100);
      if ((*(ushort *)(param_1 + 0x2e8) >> 1 & 1) != 0) {
        FUN_015a30c0(uVar14,psVar2);
      }
      *(short *)(param_1 + 0x30c) = local_34[0];
      uVar13 = FUN_015a2a64(uVar14,psVar2,local_34,&DAT_0414e688,0,0,1);
      if ((uVar13 & 1) == 0) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 & 0xfffffffb | 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      *(int *)(param_1 + 0x304) = param_2;
      *(undefined4 *)(param_1 + 0x308) = param_4;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 & 0xfffffffd | 2;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    else {
      *(undefined4 *)(param_1 + 0x300) = 0;
      uVar4 = *(undefined2 *)puVar7;
      *(undefined8 *)(param_1 + 0x304) = 0;
      *(int *)(param_1 + 0x278) = param_2;
      *(undefined2 *)(param_1 + 0x30c) = uVar4;
      *(undefined4 *)(param_1 + 700) = param_4;
      *(long *)(param_1 + 0x2c0) = param_1 + 0x2c8;
      lVar9 = 0;
      if (*(long *)(param_1 + 0x2f0) != 0) {
        lVar9 = *(long *)(param_1 + 0x2f0) + 0x10;
      }
      *(undefined4 *)(param_1 + 0x2b8) = 1;
      *(long *)(param_1 + 0x2d0) = lVar9;
    }
  }
  else {
    *(int *)(param_1 + 0x278) = param_2;
    *(undefined4 *)(param_1 + 700) = param_4;
    *(undefined4 *)(param_1 + 0x2b8) = 1;
  }
  return 1;
}

