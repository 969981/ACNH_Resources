
void FUN_01393c20(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  size_t __size;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  uint uVar13;
  
  puVar3 = PTR_DAT_04bb2698;
  uVar1 = *(uint *)(param_2 + 1);
  uVar12 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    lVar10 = *(long *)PTR_DAT_04bb2698;
    if (lVar10 == 0) {
      puVar6 = malloc(uVar12 << 4);
    }
    else {
      plVar4 = (long *)*param_2;
      if (plVar4 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar10 + 8);
        if (lVar5 != 0) {
          plVar4 = (long *)(lVar5 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_01393d3c;
      }
      puVar6 = (undefined4 *)(**(code **)(*plVar4 + 0x30))(plVar4,uVar12 << 4,8);
    }
    if (puVar6 != (undefined4 *)0x0) {
      uVar9 = uVar12 & 3;
      puVar8 = puVar6;
      if ((uVar1 & 3) != 0) {
        do {
          *puVar8 = 0;
          uVar9 = uVar9 - 1;
          *(undefined8 *)(puVar8 + 2) = 0;
          puVar8 = puVar8 + 4;
        } while (uVar9 != 0);
      }
      if (2 < (uVar12 - 1 & 0xfffffffffffffff)) {
        do {
          *puVar8 = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          puVar8[4] = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          puVar8[8] = 0;
          *(undefined8 *)(puVar8 + 10) = 0;
          puVar8[0xc] = 0;
          *(undefined8 *)(puVar8 + 0xe) = 0;
          puVar8 = puVar8 + 0x10;
        } while (puVar8 != puVar6 + uVar12 * 4);
      }
      *(uint *)(param_1 + 8) = uVar1;
      *(undefined4 **)(param_1 + 0x10) = puVar6;
      goto joined_r0x01393d44;
    }
  }
LAB_01393d3c:
  uVar1 = *(uint *)(param_1 + 8);
  puVar6 = *(undefined4 **)(param_1 + 0x10);
joined_r0x01393d44:
  if ((uVar1 == 0) || (uVar2 = *(uint *)((long)param_2 + 0xc), (int)uVar2 < 1)) {
    return;
  }
  uVar13 = 0;
  do {
    if (0 < (int)uVar2) {
      uVar12 = (ulong)uVar2;
      __size = uVar12 * 0x518 + 8;
      lVar10 = *(long *)puVar3;
      if (lVar10 == 0) {
        puVar7 = malloc(__size);
      }
      else {
        plVar4 = (long *)*param_2;
        if (plVar4 == (long *)0x0) {
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar4 = (long *)(lVar10 + 8);
          if (lVar5 != 0) {
            plVar4 = (long *)(lVar5 + 0xa8);
          }
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_01393e40;
        }
        puVar7 = (ulong *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
      }
      if (puVar7 != (ulong *)0x0) {
        lVar10 = uVar12 * 0x518;
        *puVar7 = uVar12;
        puVar11 = puVar7 + 1;
        do {
          FUN_01394080(puVar11);
          puVar11 = puVar11 + 0xa3;
          lVar10 = lVar10 + -0x518;
        } while (lVar10 != 0);
        *(uint *)((long)puVar6 + ((long)((ulong)uVar13 << 0x20) >> 0x1c)) = uVar2;
        *(ulong **)(puVar6 + (long)(int)uVar13 * 4 + 2) = puVar7 + 1;
      }
    }
LAB_01393e40:
    uVar13 = uVar13 + 1;
    if (uVar1 == uVar13) {
      return;
    }
    uVar2 = *(uint *)((long)param_2 + 0xc);
  } while( true );
}

