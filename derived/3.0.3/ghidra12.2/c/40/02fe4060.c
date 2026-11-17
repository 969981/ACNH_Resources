
void FUN_02fe4060(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar2 = PTR_DAT_04bb32e0;
  puVar1 = PTR_DAT_04bb2698;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0x15) = 0;
  bVar8 = *puVar2;
  lVar10 = *(long *)puVar1;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  *(byte *)(param_1 + 4) = bVar8;
  if (lVar10 == 0) {
    puVar5 = malloc(0xc0);
joined_r0x02fe4170:
    if (puVar5 != (undefined8 *)0x0) {
      iVar6 = 4;
      *puVar5 = 0;
      puVar5[1] = 0xffffffffffffffff;
      puVar5[2] = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 3) = 0;
      puVar5[4] = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar5 + 0x1c) = 0;
      *(undefined1 *)(puVar5 + 5) = 0;
      puVar5[8] = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 9) = 0;
      puVar5[10] = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar5 + 0x4c) = 0;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      puVar5[0xe] = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 0xf) = 0;
      puVar5[0x10] = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar5 + 0x7c) = 0;
      *(undefined1 *)(puVar5 + 0x11) = 0;
      puVar5[0x14] = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 0x15) = 0;
      puVar5[0x16] = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar5 + 0xac) = 0;
      *(undefined1 *)(puVar5 + 0x17) = 0;
      puVar5[6] = 0;
      puVar5[7] = 0xffffffffffffffff;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0xffffffffffffffff;
      puVar5[0x12] = 0;
      puVar5[0x13] = 0xffffffffffffffff;
      *param_1 = 4;
      *(undefined8 **)(param_1 + 2) = puVar5;
      goto LAB_02fe4180;
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar10 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) {
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0xc0,8);
      goto joined_r0x02fe4170;
    }
  }
  iVar6 = *param_1;
  if (iVar6 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(param_1 + 2);
LAB_02fe4180:
  iVar7 = 0;
  do {
    puVar9 = puVar5 + (long)iVar7 * 6;
    iVar7 = iVar7 + 1;
    *puVar9 = 0;
    puVar9[1] = 0xffffffffffffffff;
    puVar9[2] = 0xffffffffffffffff;
    *(undefined4 *)(puVar9 + 3) = 0;
    *(undefined1 *)((long)puVar9 + 0x1c) = 0;
    *(undefined1 *)(puVar9 + 5) = 0;
  } while (iVar6 != iVar7);
  return;
}

