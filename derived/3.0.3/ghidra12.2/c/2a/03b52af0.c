
long FUN_03b52af0(long param_1,void *param_2,ulong param_3,long *param_4)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  
  if (param_3 < *(ulong *)(param_1 + 0x178)) {
    lVar11 = 0;
  }
  else {
    lVar5 = *(long *)PTR_DAT_04bb29d0;
    bVar12 = false;
    lVar11 = 0;
    puVar1 = (uint *)(param_1 + 0x110);
    do {
      uVar4 = *(uint *)(param_1 + 0x13c);
      iVar6 = -uVar4;
      do {
        if (iVar6 + *(int *)(param_1 + 0x138) < 1) {
          return lVar11;
        }
        uVar10 = (ulong)(*(int *)(param_1 + 0x128) - 1U & uVar4);
        lVar13 = *(long *)(*(long *)(param_1 + 0x130) + uVar10 * 8);
        if (lVar13 == 0) {
          return lVar11;
        }
        *(undefined8 *)(*(long *)(param_1 + 0x130) + uVar10 * 8) = 0;
        uVar4 = uVar4 + 1;
        DataMemoryBarrier(2,3);
        iVar6 = iVar6 + -1;
        *(uint *)(param_1 + 0x13c) = uVar4;
      } while (lVar13 == -1);
      memcpy(param_2,*(void **)(lVar13 + 8),*(size_t *)(param_1 + 0x178));
      uVar10 = *(ulong *)(param_1 + 0x178);
      uVar4 = *(uint *)(param_1 + 0x110);
      while (uVar7 = uVar4, (int)(uVar7 - *(int *)(param_1 + 0x114)) < *(int *)(param_1 + 0x100)) {
        while (uVar4 = *puVar1, uVar7 == *puVar1) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            DataMemoryBarrier(2,3);
            *(long *)(*(long *)(param_1 + 0x108) +
                     (ulong)(*(int *)(param_1 + 0x100) - 1U & uVar7) * 8) = lVar13;
            goto LAB_03b52c2c;
          }
        }
      }
LAB_03b52c2c:
      uVar8 = *(ulong *)(param_1 + 0x178);
      uVar9 = uVar8;
      if (!bVar12) {
        *param_4 = (lVar5 * 5 * (*(long *)(lVar13 + 0x10) - *(long *)(param_1 + 0x188))) / 1000 +
                   *(long *)(param_1 + 0x180);
        uVar9 = *(ulong *)(param_1 + 0x178);
      }
      lVar11 = uVar8 + lVar11;
      bVar12 = true;
      param_2 = (void *)((long)param_2 + (uVar10 & 0xfffffffffffffffe));
    } while (uVar9 <= param_3 - lVar11);
  }
  return lVar11;
}

