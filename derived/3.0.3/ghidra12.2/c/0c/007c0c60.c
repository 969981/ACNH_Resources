
void FUN_007c0c60(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  uVar8 = (ulong)param_2;
  if ((int)param_2 < 1) goto LAB_007c0dcc;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    pvVar5 = malloc(uVar8 << 4);
joined_r0x007c0cf0:
    if (pvVar5 != (void *)0x0) {
      lVar9 = 0;
      do {
        puVar6 = (undefined8 *)((long)pvVar5 + lVar9);
        lVar9 = lVar9 + 0x10;
        *(undefined1 *)(puVar6 + 1) = 0;
        *(undefined4 *)((long)puVar6 + 10) = 0xfffffffe;
        *(undefined2 *)((long)puVar6 + 0xe) = 0;
        *puVar6 = 0;
      } while (uVar8 * 0x10 != lVar9);
      *(uint *)(param_1 + 8) = param_2;
      *(void **)(param_1 + 0x10) = pvVar5;
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar9 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) {
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,uVar8 << 4,8);
      goto joined_r0x007c0cf0;
    }
  }
  lVar9 = *(long *)puVar1;
  if (lVar9 == 0) {
    puVar6 = malloc(uVar8 * 0x28);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar9 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) goto LAB_007c0dcc;
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,uVar8 * 0x28,8);
  }
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = puVar6;
    do {
      *(undefined1 *)(puVar7 + 2) = 0;
      *(undefined4 *)((long)puVar7 + 0x12) = 0xfffffffe;
      *(undefined2 *)((long)puVar7 + 0x16) = 0;
      *(undefined1 *)(puVar7 + 3) = 0;
      puVar7[4] = 0;
      *puVar7 = &PTR_LAB_04913018;
      puVar7[1] = 0;
      puVar7 = puVar7 + 5;
    } while (puVar7 != puVar6 + uVar8 * 5);
    *(uint *)(param_1 + 0x18) = param_2;
    *(undefined8 **)(param_1 + 0x20) = puVar6;
  }
LAB_007c0dcc:
  *(uint *)(param_1 + 0x28) = param_2;
  return;
}

