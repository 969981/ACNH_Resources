
undefined8 * FUN_001dc030(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  puVar3 = (undefined8 *)FUN_00187df4(0x70);
  puVar1 = PTR_DAT_04bc0ec8;
  *(undefined1 *)(puVar3 + 5) = 0;
  puVar3[7] = puVar3 + 5;
  puVar3[8] = 0x10;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  plVar8 = puVar3 + 4;
  *plVar8 = (long)(puVar1 + 0x10);
  FUN_0018b070(plVar8,uVar5,0xffffffffffffffff);
  *(undefined1 *)(puVar3 + 10) = 0;
  puVar3[0xc] = puVar3 + 10;
  puVar3[0xd] = 0x10;
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  puVar3[9] = puVar1 + 0x10;
  FUN_0018b070(puVar3 + 9,uVar5,0xffffffffffffffff);
  plVar9 = param_1 + 1;
  plVar2 = (long *)*plVar9;
  if ((long *)*plVar9 == (long *)0x0) {
    plVar7 = plVar9;
  }
  else {
    do {
      while (plVar9 = plVar2, uVar4 = FUN_0018b4e0(plVar8,plVar9 + 4), (uVar4 & 1) == 0) {
        plVar2 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar7 = plVar9 + 1;
          goto LAB_001dc0f0;
        }
      }
      plVar7 = plVar9;
      plVar2 = (long *)*plVar9;
    } while ((long *)*plVar9 != (long *)0x0);
  }
LAB_001dc0f0:
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = plVar9;
  *plVar7 = (long)puVar3;
  puVar6 = puVar3;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar6 = (undefined8 *)*plVar7;
  }
  FUN_03876250(param_1[1],puVar6);
  param_1[2] = param_1[2] + 1;
  return puVar3;
}

