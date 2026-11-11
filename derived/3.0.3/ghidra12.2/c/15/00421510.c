
undefined1  [16] FUN_00421510(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  
  puVar4 = (undefined8 *)FUN_00187df4(0x70);
  puVar2 = PTR_DAT_04bc0ec8;
  uVar6 = *param_2;
  *(undefined1 *)(puVar4 + 5) = 0;
  puVar4[7] = puVar4 + 5;
  puVar4[8] = 0x10;
  puVar1 = puVar2 + 0x10;
  plVar8 = puVar4 + 4;
  *plVar8 = (long)puVar1;
  FUN_0018b070(plVar8,uVar6,0xffffffffffffffff);
  uVar6 = param_2[1];
  plVar9 = puVar4 + 9;
  *plVar9 = (long)puVar1;
  *(undefined1 *)(puVar4 + 10) = 0;
  puVar4[0xc] = puVar4 + 10;
  puVar4[0xd] = 0x10;
  FUN_0018b070(plVar9,uVar6,0xffffffffffffffff);
  plVar11 = param_1 + 1;
  plVar3 = (long *)*plVar11;
  plVar10 = plVar11;
  if ((long *)*plVar11 != (long *)0x0) {
    do {
      while( true ) {
        plVar11 = plVar3;
        uVar5 = FUN_0018b4e0(plVar8,plVar11 + 4);
        if ((uVar5 & 1) != 0) break;
        uVar5 = FUN_0018b4e0(plVar11 + 4,plVar8);
        if ((uVar5 & 1) == 0) {
          puVar7 = (undefined8 *)*plVar10;
          if (puVar7 != (undefined8 *)0x0) {
            if (puVar4 != (undefined8 *)0x0) {
              puVar2 = puVar2 + 0x10;
              puVar4[9] = puVar2;
              FUN_0018b1a0(plVar9);
              puVar4[4] = puVar2;
              FUN_0018b1a0(plVar8);
              FUN_00187e4c(puVar4);
            }
            uVar6 = 0;
            goto LAB_0042166c;
          }
          goto LAB_00421630;
        }
        plVar10 = plVar11 + 1;
        plVar3 = (long *)*plVar10;
        if ((long *)*plVar10 == (long *)0x0) goto LAB_00421630;
      }
      plVar3 = (long *)*plVar11;
      plVar10 = plVar11;
    } while ((long *)*plVar11 != (long *)0x0);
  }
LAB_00421630:
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = plVar11;
  *plVar10 = (long)puVar4;
  puVar7 = puVar4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar7 = (undefined8 *)*plVar10;
  }
  FUN_03876250(param_1[1],puVar7);
  uVar6 = 1;
  param_1[2] = param_1[2] + 1;
  puVar7 = puVar4;
LAB_0042166c:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = puVar7;
  return auVar12;
}

