
void FUN_0040a490(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  lVar7 = *param_1;
  if ((ulong)((param_1[2] - lVar7 >> 5) * -0x5555555555555555) < param_2) {
    if (0x2aaaaaaaaaaaaaa < param_2) {
      FUN_01c6b598(param_1);
                    /* WARNING: Does not return */
      pcVar5 = (code *)UndefinedInstructionException(0,0x40a658);
      (*pcVar5)();
    }
    lVar8 = param_1[1];
    lVar6 = FUN_00187df4(param_2 * 0x60);
    lVar2 = lVar6 + param_2 * 0x60;
    puVar9 = (undefined8 *)*param_1;
    puVar3 = (undefined8 *)param_1[1];
    lVar6 = lVar6 + (lVar8 - lVar7);
    if (puVar3 == puVar9) {
      *param_1 = lVar6;
      param_1[1] = lVar6;
      param_1[2] = lVar2;
    }
    else {
      lVar7 = 0;
      puVar1 = PTR_DAT_04bc0fb0 + 0x10;
      do {
        lVar8 = lVar6 + lVar7;
        uVar4 = *(undefined1 *)((long)puVar3 + lVar7 + -0x58);
        *(undefined ***)(lVar8 + -0x60) = &PTR_LAB_04a42cb0;
        *(undefined8 *)(lVar8 + -0x50) = &PTR_LAB_04a426b8;
        *(undefined1 *)(lVar8 + -0x58) = uVar4;
        *(undefined1 *)(lVar8 + -0x48) = 0;
        *(undefined1 **)(lVar8 + -0x38) = (undefined1 *)(lVar8 + -0x48);
        *(undefined8 *)(lVar8 + -0x30) = 0x10;
        FUN_0018b070((undefined8 *)(lVar8 + -0x50),*(undefined8 *)((long)puVar3 + lVar7 + -0x38),
                     0xffffffffffffffff);
        *(undefined8 *)(lVar8 + -0x28) = &PTR_LAB_04a426b8;
        *(undefined1 *)(lVar8 + -0x20) = 0;
        *(undefined1 **)(lVar8 + -0x10) = (undefined1 *)(lVar8 + -0x20);
        *(undefined8 *)(lVar8 + -8) = 0x10;
        FUN_0018b070((undefined8 *)(lVar8 + -0x28),*(undefined8 *)((long)puVar3 + lVar7 + -0x10),
                     0xffffffffffffffff);
        lVar7 = lVar7 + -0x60;
        *(undefined **)(lVar8 + -0x60) = puVar1;
      } while ((undefined8 *)((long)puVar3 + lVar7) != puVar9);
      puVar3 = (undefined8 *)*param_1;
      puVar9 = (undefined8 *)param_1[1];
      *param_1 = lVar6 + lVar7;
      param_1[1] = lVar6;
      param_1[2] = lVar2;
      while (puVar9 != puVar3) {
        puVar9 = puVar9 + -0xc;
        (**(code **)*puVar9)(puVar9);
      }
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00187e4c(puVar3);
      return;
    }
  }
  return;
}

