
void FUN_007c0df0(long param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  uVar9 = (ulong)param_2;
  if ((int)param_2 < 1) goto LAB_007c0fa8;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar6 = malloc(uVar9 * 0x18);
joined_r0x007c0e88:
    if (pvVar6 != (void *)0x0) {
      lVar10 = 0;
      do {
        puVar1 = (undefined4 *)((long)pvVar6 + lVar10);
        lVar10 = lVar10 + 0x18;
        *(undefined2 *)(puVar1 + 2) = 0xfffe;
        *(undefined4 *)((long)puVar1 + 0xb) = 0;
        puVar1[4] = 0x42c80000;
        *(undefined2 *)(puVar1 + 5) = 0;
        *puVar1 = 0;
        *(undefined2 *)(puVar1 + 1) = 0;
        *(undefined1 *)((long)puVar1 + 10) = 0xff;
        *(byte *)((long)puVar1 + 6) = *(byte *)((long)puVar1 + 6) & 0xf0;
      } while (uVar9 * 0x18 != lVar10);
      *(uint *)(param_1 + 8) = param_2;
      *(void **)(param_1 + 0x10) = pvVar6;
    }
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar10 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) {
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,uVar9 * 0x18,8);
      goto joined_r0x007c0e88;
    }
  }
  lVar10 = *(long *)puVar2;
  if (lVar10 == 0) {
    puVar7 = malloc(uVar9 * 0x30);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar5 = (long *)(lVar10 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) goto LAB_007c0fa8;
    puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,uVar9 * 0x30,8);
  }
  if (puVar7 != (undefined8 *)0x0) {
    puVar8 = puVar7;
    do {
      *puVar8 = &PTR_LAB_049140b0;
      *(undefined2 *)(puVar8 + 2) = 0xfffe;
      *(undefined4 *)((long)puVar8 + 0x13) = 0;
      *(undefined4 *)(puVar8 + 3) = 0x42c80000;
      *(undefined2 *)((long)puVar8 + 0x1c) = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined2 *)((long)puVar8 + 0xc) = 0;
      *(undefined1 *)((long)puVar8 + 0x12) = 0xff;
      *(undefined1 *)(puVar8 + 4) = 0;
      puVar8[5] = 0;
      *(byte *)((long)puVar8 + 0xe) = *(byte *)((long)puVar8 + 0xe) & 0xf0;
      puVar8 = puVar8 + 6;
    } while (puVar8 != puVar7 + uVar9 * 6);
    *(uint *)(param_1 + 0x18) = param_2;
    *(undefined8 **)(param_1 + 0x20) = puVar7;
  }
LAB_007c0fa8:
  *(uint *)(param_1 + 0x28) = param_2;
  return;
}

