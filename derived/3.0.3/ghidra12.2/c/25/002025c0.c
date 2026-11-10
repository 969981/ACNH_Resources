
undefined8 * FUN_002025c0(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  puVar3 = (undefined8 *)FUN_00187df4(0x58);
  puVar1 = PTR_DAT_04bc0ec8;
  *(undefined1 *)(puVar3 + 5) = 0;
  plVar7 = puVar3 + 4;
  *plVar7 = (long)(puVar1 + 0x10);
  puVar3[7] = puVar3 + 5;
  puVar3[8] = 0x10;
  FUN_0018b070(plVar7,*(undefined8 *)(param_2 + 0x18),0xffffffffffffffff);
  FUN_0018d618(puVar3 + 9,param_2 + 0x28);
  plVar8 = param_1 + 1;
  plVar2 = (long *)*plVar8;
  if ((long *)*plVar8 == (long *)0x0) {
    plVar6 = plVar8;
  }
  else {
    do {
      while (plVar8 = plVar2, uVar4 = FUN_0018b4e0(plVar7,plVar8 + 4), (uVar4 & 1) == 0) {
        plVar2 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          plVar6 = plVar8 + 1;
          goto LAB_00202664;
        }
      }
      plVar6 = plVar8;
      plVar2 = (long *)*plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
  }
LAB_00202664:
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = plVar8;
  *plVar6 = (long)puVar3;
  puVar5 = puVar3;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar5 = (undefined8 *)*plVar6;
  }
  FUN_03876250(param_1[1],puVar5);
  param_1[2] = param_1[2] + 1;
  return puVar3;
}

