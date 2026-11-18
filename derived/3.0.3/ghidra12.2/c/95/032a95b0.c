
void FUN_032a95b0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  FUN_038bbe20(param_1 + 0x128);
  FUN_032ac5bc(DAT_0572cc78);
  lVar5 = DAT_0572cc78;
  puVar2 = PTR_DAT_04bc95f0;
  DAT_0572cc98 = 0;
  if (DAT_0572cc78 != 0) {
    plVar3 = *(long **)(DAT_0572cc78 + 0x118);
    *(undefined8 *)(DAT_0572cc78 + 0x118) = 0;
    *(undefined8 *)(lVar5 + 0x120) = 0;
    *(undefined **)(lVar5 + 0x10) = puVar2 + 0x10;
    puVar2 = PTR_DAT_04bb28c8;
    if (plVar3 != (long *)0x0 && *(long *)PTR_DAT_04bb28c8 != 0) {
      (**(code **)(*plVar3 + 0x18))();
      if ((*(long **)(lVar5 + 0x118) != (long *)0x0) && (*(long *)puVar2 != 0)) {
        (**(code **)(**(long **)(lVar5 + 0x118) + 0x18))();
      }
    }
    *(long *)(lVar5 + 0x70) = (long)(PTR_DAT_04bc9600 + 0x10);
    if (*(long **)(lVar5 + 0xf0) != (long *)0x0) {
      (**(code **)(**(long **)(lVar5 + 0xf0) + 8))();
    }
    FUN_032e25f0((long *)(lVar5 + 0x70));
    if (*(long **)(lVar5 + 0x40) != (long *)0x0) {
      (**(code **)(**(long **)(lVar5 + 0x40) + 8))();
    }
    if (DAT_0572cc80 != (long *)0x0) {
      (**(code **)(*DAT_0572cc80 + 0x38))(DAT_0572cc80,lVar5);
    }
    DAT_0572cc78 = 0;
  }
  lVar5 = *(long *)PTR_DAT_04bc9298;
  lVar6 = *(long *)(lVar5 + 0x210);
  plVar3 = *(long **)(lVar6 + 8);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
    *(undefined8 *)(lVar6 + 8) = 0;
  }
  *(undefined1 *)(lVar5 + 0x208) = 0;
  FUN_032a564c(param_1);
  puVar1 = *(undefined8 **)(param_1 + 0x120);
  while (puVar1 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)puVar1[2];
    puVar1[2] = 0;
    lVar5 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    if (*(undefined8 **)(param_1 + 0x120) == puVar1) {
      *(undefined8 **)(param_1 + 0x120) = puVar4;
    }
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = lVar5;
    }
    puVar1 = puVar4;
    if (lVar5 != 0) {
      *(undefined8 **)(lVar5 + 0x10) = puVar4;
    }
  }
  return;
}

