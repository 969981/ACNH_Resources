
void FUN_01c692f0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *puVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined *local_98;
  undefined1 local_90;
  undefined1 local_8f;
  undefined *local_88;
  undefined1 local_80;
  undefined2 local_7f;
  undefined1 local_7d;
  long local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined2 local_66;
  
  puVar4 = *(undefined8 **)(param_1 + 0xf0);
  puVar9 = *(undefined8 **)(param_1 + 0xf8);
  while (puVar9 != puVar4) {
    puVar9 = puVar9 + -7;
    (**(code **)*puVar9)(puVar9);
  }
  *(undefined8 **)(param_1 + 0xf8) = puVar4;
  puVar6 = PTR_DAT_04bc0f50;
  if ((long *)*param_2 != param_2 + 1) {
    puVar1 = PTR_DAT_04bc0f60 + 0x10;
    puVar2 = PTR_DAT_04bc0f50 + 0x10;
    plVar10 = (long *)*param_2;
    do {
      local_66 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_8f = (undefined1)plVar10[4];
      local_90 = 0;
      local_80 = 0;
      local_7f = 0;
      local_7d = 0;
      local_98 = puVar2;
      local_88 = puVar1;
      FUN_003fe2d4(&local_88,plVar10 + 5);
      plVar5 = *(long **)(param_1 + 0xf8);
      if (plVar5 == *(long **)(param_1 + 0x100)) {
        FUN_01c694d0((long *)(param_1 + 0xf0),&local_98);
        plVar5 = (long *)plVar10[1];
        if ((long *)plVar10[1] != (long *)0x0) goto LAB_01c69484;
LAB_01c69494:
        do {
          plVar8 = (long *)plVar10[2];
          bVar7 = (long *)*plVar8 != plVar10;
          plVar10 = plVar8;
        } while (bVar7);
      }
      else {
        plVar5[2] = (long)&PTR_FUN_04a42998;
        *plVar5 = (long)&PTR_LAB_04a42958;
        *(undefined1 *)(plVar5 + 1) = local_90;
        *(undefined1 *)((long)plVar5 + 9) = local_8f;
        *(undefined1 *)(plVar5 + 3) = local_80;
        *(undefined1 *)((long)plVar5 + 0x19) = (undefined1)local_7f;
        *(undefined1 *)((long)plVar5 + 0x1a) = local_7f._1_1_;
        *(undefined1 *)((long)plVar5 + 0x1b) = local_7d;
        plVar5[4] = local_78;
        *(undefined4 *)(plVar5 + 5) = (undefined4)local_70;
        *(undefined4 *)((long)plVar5 + 0x2c) = local_70._4_4_;
        *(undefined1 *)(plVar5 + 6) = local_68;
        puVar3 = PTR_DAT_04bc0f60 + 0x10;
        *(undefined2 *)((long)plVar5 + 0x32) = local_66;
        plVar5[2] = (long)puVar3;
        *plVar5 = (long)(puVar6 + 0x10);
        *(long **)(param_1 + 0xf8) = plVar5 + 7;
        plVar5 = (long *)plVar10[1];
        if ((long *)plVar10[1] == (long *)0x0) goto LAB_01c69494;
LAB_01c69484:
        do {
          plVar8 = plVar5;
          plVar5 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      plVar10 = plVar8;
    } while (plVar8 != param_2 + 1);
  }
  return;
}

