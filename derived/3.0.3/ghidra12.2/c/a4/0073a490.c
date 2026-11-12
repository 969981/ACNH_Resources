
void FUN_0073a490(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  void *pvVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  size_t sVar14;
  long lVar15;
  
  *(int *)(param_1 + 0x22b) = (int)*(char *)(param_2 + 0xcc);
  uVar5 = (**(code **)(*param_1 + 0xf8))();
  puVar4 = PTR_DAT_04bb2698;
  if ((int)uVar5 < 2) {
    return;
  }
  sVar14 = (ulong)uVar5 * 0x98 + 8;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    puVar8 = malloc(sVar14);
joined_r0x0073a544:
    if (puVar8 != (ulong *)0x0) {
      uVar12 = (ulong)uVar5;
      uVar13 = uVar12 * 0x98 - 0x98;
      puVar10 = puVar8 + 1;
      *puVar8 = uVar12;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar13;
      puVar11 = puVar10;
      if ((SUB164(auVar3 * ZEXT816(0xd79435e50d79435f),8) >> 7 & 1) == 0) {
        *(undefined1 *)((long)puVar8 + 0x1c) = 0;
        puVar8[2] = (ulong)((long)puVar8 + 0x1c);
        *(undefined4 *)(puVar8 + 3) = 0x80;
        *(undefined1 *)((long)puVar8 + 0x9b) = 0;
        puVar8[1] = (ulong)(PTR_DAT_04bb2d88 + 0x10);
        puVar11 = puVar8 + 0x14;
      }
      if (0x97 < uVar13) {
        puVar1 = PTR_DAT_04bb2d88 + 0x10;
        do {
          *(undefined4 *)(puVar11 + 2) = 0x80;
          *(undefined1 *)((long)puVar11 + 0x93) = 0;
          *(undefined1 *)((long)puVar11 + 0x14) = 0;
          *(undefined4 *)(puVar11 + 0x15) = 0x80;
          *(undefined1 *)((long)puVar11 + 299) = 0;
          *puVar11 = (ulong)puVar1;
          puVar11[1] = (ulong)((long)puVar11 + 0x14);
          *(undefined1 *)((long)puVar11 + 0xac) = 0;
          puVar11[0x13] = (ulong)puVar1;
          puVar11[0x14] = (ulong)((long)puVar11 + 0xac);
          puVar11 = puVar11 + 0x26;
        } while (puVar11 != puVar10 + uVar12 * 0x13);
      }
      *(uint *)(param_1 + 0x217) = uVar5;
      param_1[0x218] = (long)puVar10;
    }
    lVar15 = *(long *)puVar4;
    sVar14 = (size_t)(int)(uVar5 << 3);
    if (lVar15 != 0) {
      if (param_3 == (long *)0x0) {
LAB_0073a624:
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar2 = (undefined8 *)(lVar15 + 8);
        if (lVar6 != 0) {
          puVar2 = (undefined8 *)(lVar6 + 0xa8);
        }
        param_3 = (long *)*puVar2;
        if (param_3 == (long *)0x0) {
          return;
        }
      }
      pvVar9 = (void *)(**(code **)(*param_3 + 0x30))(param_3,sVar14,8);
      goto joined_r0x0073a668;
    }
  }
  else {
    plVar7 = param_3;
    if (param_3 != (long *)0x0) {
LAB_0073a520:
      puVar8 = (ulong *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar14,8);
      goto joined_r0x0073a544;
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar7 = (long *)(lVar15 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_0073a520;
    lVar15 = *(long *)puVar4;
    sVar14 = (size_t)(int)(uVar5 << 3);
    if (lVar15 != 0) goto LAB_0073a624;
  }
  pvVar9 = malloc(sVar14);
joined_r0x0073a668:
  if (pvVar9 != (void *)0x0) {
    param_1[0x21a] = (long)pvVar9;
    *(undefined4 *)(param_1 + 0x219) = 0;
    *(uint *)((long)param_1 + 0x10cc) = uVar5;
  }
  return;
}

