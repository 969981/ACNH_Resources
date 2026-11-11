
void FUN_00409330(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined1 auVar15 [16];
  
  if ((ulong)((param_1[2] - *param_1 >> 6) * -0x3333333333333333) < param_2) {
    if (0xcccccccccccccc < param_2) {
      auVar15 = FUN_00405c80(param_1);
      plVar5 = auVar15._0_8_;
      lVar9 = plVar5[1] - *plVar5 >> 6;
      uVar1 = lVar9 * -0x3333333333333333 + 1;
      if (0xcccccccccccccc < uVar1) {
        FUN_00405c80(plVar5);
                    /* WARNING: Does not return */
        pcVar3 = (code *)UndefinedInstructionException(0,0x4095f8);
        (*pcVar3)();
      }
      lVar8 = plVar5[2] - *plVar5 >> 6;
      uVar10 = lVar8 * -0x6666666666666666;
      if (uVar10 <= uVar1) {
        uVar10 = uVar1;
      }
      if (0x66666666666665 < (ulong)(lVar8 * -0x3333333333333333)) {
        uVar10 = 0xcccccccccccccc;
      }
      if (uVar10 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = FUN_00187df4(uVar10 * 0x140);
      }
      plVar13 = (long *)(lVar8 + lVar9 * 0x40);
      lVar4 = lVar8 + uVar10 * 0x140;
      FUN_00405930(plVar13,auVar15._8_8_);
      puVar11 = (undefined8 *)*plVar5;
      puVar12 = (undefined8 *)plVar5[1];
      puVar2 = PTR_DAT_04bc0ef0 + 0x10;
      *plVar13 = (long)puVar2;
      if (puVar12 == puVar11) {
        *plVar5 = (long)plVar13;
        plVar5[1] = (long)(plVar13 + 0x28);
        plVar5[2] = lVar4;
      }
      else {
        plVar7 = (long *)(lVar8 + lVar9 * 0x40);
        do {
          plVar7 = plVar7 + -0x28;
          puVar12 = puVar12 + -0x28;
          FUN_00405930(plVar7,puVar12);
          *plVar7 = (long)puVar2;
        } while (puVar12 != puVar11);
        puVar12 = (undefined8 *)*plVar5;
        puVar11 = (undefined8 *)plVar5[1];
        *plVar5 = (long)plVar7;
        plVar5[1] = (long)(plVar13 + 0x28);
        plVar5[2] = lVar4;
        while (puVar11 != puVar12) {
          puVar11 = puVar11 + -0x28;
          (**(code **)*puVar11)(puVar11);
        }
      }
      if (puVar12 == (undefined8 *)0x0) {
        return;
      }
      FUN_00187e4c(puVar12);
      return;
    }
    lVar8 = (param_1[1] - *param_1) / 0x140;
    lVar4 = FUN_00187df4(param_2 * 0x140);
    lVar9 = lVar4 + param_2 * 0x140;
    lVar14 = lVar4 + lVar8 * 0x140;
    puVar11 = (undefined8 *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
    if (puVar12 == puVar11) {
      *param_1 = lVar14;
      param_1[1] = lVar14;
      param_1[2] = lVar9;
    }
    else {
      puVar6 = (undefined8 *)(lVar4 + lVar8 * 0x140);
      do {
        puVar6 = puVar6 + -0x28;
        puVar12 = puVar12 + -0x28;
        FUN_00405930(puVar6,puVar12);
        *puVar6 = &PTR_FUN_04a42788;
      } while (puVar12 != puVar11);
      puVar12 = (undefined8 *)*param_1;
      puVar11 = (undefined8 *)param_1[1];
      *param_1 = (long)puVar6;
      param_1[1] = lVar14;
      param_1[2] = lVar9;
      while (puVar11 != puVar12) {
        puVar11 = puVar11 + -0x28;
        (**(code **)*puVar11)(puVar11);
      }
    }
    if (puVar12 != (undefined8 *)0x0) {
      FUN_00187e4c(puVar12);
      return;
    }
  }
  return;
}

