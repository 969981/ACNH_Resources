
void FUN_012ea040(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  undefined8 local_c8;
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  char *local_68;
  
  uVar8 = FUN_02640eb0();
  if ((uVar8 & 1) != 0) {
    uVar8 = 0;
    do {
      nn::os::WaitLightEvent
                ((LightEventType *)
                 (*(long *)(param_1 + 8 + (-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3)) +
                 0x78));
      uVar9 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar9;
    } while (uVar9 != 0x39);
    uVar9 = 0;
    lVar1 = param_1 + 0x1d0;
    while( true ) {
      lVar10 = lVar1 + ((long)((ulong)uVar9 << 0x20) >> 0x1b);
      *(undefined8 *)(lVar10 + 8) = 0;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      puVar7 = PTR_DAT_04bb27a8;
      uVar11 = uVar9 + 1;
      if (uVar11 == 0x39) break;
      uVar9 = uVar9 + 2;
      lVar10 = lVar1 + ((long)((ulong)uVar11 << 0x20) >> 0x1b);
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(undefined8 *)(lVar10 + 8) = 0;
    }
    puVar2 = PTR_DAT_04bb5070 + 0x10;
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    uVar9 = 0;
    do {
      if (uVar9 == 0) {
        lVar10 = *(long *)(*(long *)puVar7 + 0x1f8);
      }
      else {
        plVar4 = (long *)(*(long *)puVar7 + 0x30);
        plVar5 = plVar4 + uVar9;
        if (0x38 < uVar9) {
          plVar5 = plVar4;
        }
        lVar10 = *plVar5;
      }
      if ((lVar10 != 0) && ((uVar9 != 0 || ((*(byte *)(lVar10 + 8) & 1) == 0)))) {
        lVar6 = lVar1 + (ulong)uVar9 * 0x20;
        if (0x38 < uVar9) {
          lVar6 = lVar1;
        }
        *(long *)(lVar6 + 8) = lVar10;
        *(undefined **)(lVar6 + 0x10) = PTR_FUN_04bbbcd0;
        *(undefined8 *)(lVar6 + 0x18) = 0;
        uVar8 = (ulong)uVar9;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = lVar1 + (ulong)uVar9 * 0x20;
        if (0x38 < uVar9) {
          uVar8 = 0;
          local_90 = lVar1;
        }
        lVar10 = *(long *)(param_1 + 8 + uVar8 * 8);
        local_68 = "ItemLayerCacheUpdate";
        uStack_88 = 0;
        local_a0 = 0;
        local_a8 = 1;
        local_a6 = 1;
        local_98 = (*(undefined8 **)PTR_DAT_04bb49a8)[1];
        local_b0 = puVar2;
        local_70 = puVar3;
        if (lVar10 == 0) {
          local_c0 = &local_b0;
          local_c8 = 0;
          uStack_b8 = 0;
          FUN_03f45184(**(undefined8 **)PTR_DAT_04bb49a8,&local_c8);
        }
        else {
          FUN_03f44830(lVar10,&local_b0);
        }
        uVar8 = (ulong)uVar9;
        if (0x38 < uVar9) {
          uVar8 = 0;
        }
        *(undefined4 *)(param_1 + 0x8f0 + uVar8 * 4) = 1;
      }
      uVar11 = 0x39;
      if ((int)uVar9 < 0x39) {
        uVar11 = uVar9 + 1;
      }
      uVar9 = uVar11;
    } while (uVar11 != 0x39);
  }
  return;
}

