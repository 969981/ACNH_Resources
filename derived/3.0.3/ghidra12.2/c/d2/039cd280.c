
void FUN_039cd280(long param_1,long *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  
  *(undefined4 *)(param_1 + 0x1c) = 0x804;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 7;
  lVar6 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar5 = malloc(0xb10);
    if (pvVar5 == (void *)0x0) goto LAB_039cd434;
LAB_039cd31c:
    *(undefined4 *)((long)pvVar5 + 0x10) = 0;
    *(undefined1 *)((long)pvVar5 + 0x60) = 0;
    *(undefined8 *)((long)pvVar5 + 0x70) = 0;
    *(undefined8 *)((long)pvVar5 + 0x75) = 0;
    *(undefined8 *)((long)pvVar5 + 0x18) = 0;
    *(undefined ***)((long)pvVar5 + 0x20) = &PTR_LAB_04b6aef8;
    *(undefined8 *)((long)pvVar5 + 0x28) = 0x3f4ccccd3f800000;
    *(undefined8 *)((long)pvVar5 + 0x30) = 0x3f8000003e4ccccd;
    *(undefined8 *)((long)pvVar5 + 0x38) = 0x3f8000003e4ccccd;
    *(undefined ***)((long)pvVar5 + 0x40) = &PTR_LAB_04b6af30;
    *(undefined8 *)((long)pvVar5 + 0x48) = 0x40a000003f800000;
    *(undefined8 *)((long)pvVar5 + 0x50) = 0x3dcccccd40a00000;
    *(undefined ***)((long)pvVar5 + 0x58) = &PTR_LAB_04b6af68;
    *(undefined8 *)((long)pvVar5 + 100) = 0x41a0000041700000;
    lVar6 = 0;
    do {
      lVar3 = lVar6 + 0x14;
      *(undefined1 *)((long)pvVar5 + lVar6 + 0x7d) = 0;
      *(undefined1 *)((long)pvVar5 + lVar6 + 0x82) = 0;
      *(undefined1 *)((long)pvVar5 + lVar6 + 0x87) = 0;
      *(undefined1 *)((long)pvVar5 + lVar6 + 0x8c) = 0;
      lVar6 = lVar3;
    } while (lVar3 != 0x500);
    *(undefined ***)((long)pvVar5 + 0x5a8) = &PTR_LAB_04b6aef8;
    lVar6 = 0x605;
    *(undefined4 *)((long)pvVar5 + 0x598) = 0;
    *(undefined8 *)((long)pvVar5 + 0x5a0) = 0;
    *(undefined8 *)((long)pvVar5 + 0x5b0) = 0x3f4ccccd3f800000;
    *(undefined8 *)((long)pvVar5 + 0x5b8) = 0x3f8000003e4ccccd;
    *(undefined8 *)((long)pvVar5 + 0x5c0) = 0x3f8000003e4ccccd;
    *(undefined ***)((long)pvVar5 + 0x5c8) = &PTR_LAB_04b6af30;
    *(undefined8 *)((long)pvVar5 + 0x5d0) = 0x40a000003f800000;
    *(undefined8 *)((long)pvVar5 + 0x5d8) = 0x3dcccccd40a00000;
    *(undefined ***)((long)pvVar5 + 0x5e0) = &PTR_LAB_04b6af68;
    *(undefined1 *)((long)pvVar5 + 0x5e8) = 0;
    *(undefined8 *)((long)pvVar5 + 0x5ec) = 0x41a0000041700000;
    *(undefined8 *)((long)pvVar5 + 0x5f8) = 0;
    *(undefined8 *)((long)pvVar5 + 0x5fd) = 0;
    do {
      puVar2 = (undefined1 *)((long)pvVar5 + lVar6);
      lVar6 = lVar6 + 0x14;
      *puVar2 = 0;
      puVar2[5] = 0;
      puVar2[10] = 0;
      puVar2[0xf] = 0;
    } while (lVar6 != 0xb05);
    iVar8 = 2;
    *(void **)(param_1 + 0x10) = pvVar5;
    *(undefined4 *)(param_1 + 8) = 2;
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB_039cd434;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0xb10,8);
    if (pvVar5 != (void *)0x0) goto LAB_039cd31c;
LAB_039cd434:
    iVar8 = *(int *)(param_1 + 8);
    if (iVar8 == 0) goto LAB_039cd570;
    pvVar5 = *(void **)(param_1 + 0x10);
  }
  iVar9 = 0;
  do {
    puVar7 = (undefined8 *)((long)pvVar5 + (long)iVar9 * 0x588);
    *puVar7 = 0;
    *(undefined4 *)(puVar7 + 1) = 0;
    puVar1 = (uint *)(puVar7 + 2);
    puVar7[0xe] = 0;
    *(undefined8 *)((long)puVar7 + 0x75) = 0;
    lVar6 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      plVar4 = malloc(0x18);
      if (plVar4 == (long *)0x0) goto LAB_039cd4ec;
LAB_039cd4cc:
      *puVar1 = 3;
      *(long **)((long)pvVar5 + (long)iVar9 * 0x588 + 0x18) = plVar4;
    }
    else {
      plVar4 = param_2;
      if (param_2 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar6 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_039cd4ec;
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x18,8);
      if (plVar4 != (long *)0x0) goto LAB_039cd4cc;
LAB_039cd4ec:
      plVar4 = *(long **)((long)pvVar5 + (long)iVar9 * 0x588 + 0x18);
    }
    *plVar4 = (long)pvVar5 + (long)iVar9 * 0x588 + 0x20;
    *(long *)(*(long *)((long)pvVar5 + (long)iVar9 * 0x588 + 0x18) + (ulong)(1 < *puVar1) * 8) =
         (long)pvVar5 + (long)iVar9 * 0x588 + 0x40;
    *(long *)(*(long *)((long)pvVar5 + (long)iVar9 * 0x588 + 0x18) + (ulong)(2 < *puVar1) * 0x10) =
         (long)pvVar5 + (long)iVar9 * 0x588 + 0x58;
    lVar6 = 0x8d;
    *(undefined4 *)((long)pvVar5 + (long)iVar9 * 0x588 + 0x580) = 0;
    do {
      lVar3 = lVar6 + (long)iVar9 * 0x588;
      lVar6 = lVar6 + 0x14;
      *(undefined2 *)((long)pvVar5 + lVar3 + -0x10) = 0;
      *(undefined2 *)((long)pvVar5 + lVar3 + -0xb) = 0;
      *(undefined2 *)((long)pvVar5 + lVar3 + -6) = 0;
      *(undefined2 *)((long)pvVar5 + lVar3 + -1) = 0;
    } while (lVar6 != 0x58d);
    iVar9 = iVar9 + 1;
  } while (iVar8 != iVar9);
LAB_039cd570:
  *(undefined4 *)(param_1 + 0x24) = 0x42b80000;
  return;
}

