
void FUN_03f24ec0(long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  void *pvVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  puVar6 = PTR_DAT_04bb2698;
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  uVar13 = (ulong)param_2;
  if (0 < (int)param_2) {
    lVar14 = *(long *)PTR_DAT_04bb2698;
    if (lVar14 == 0) {
      puVar9 = malloc(uVar13 * 0x14);
    }
    else {
      plVar8 = param_3;
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar8 = (long *)(lVar14 + 8);
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_03f24fe8;
      }
      puVar9 = (undefined1 *)(**(code **)(*plVar8 + 0x30))(plVar8,uVar13 * 0x14,8);
    }
    if (puVar9 != (undefined1 *)0x0) {
      uVar12 = uVar13 * 0x14 - 0x14;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar12;
      puVar11 = puVar9;
      if ((SUB164(auVar5 * ZEXT816(0xcccccccccccccccd),8) >> 4 & 1) == 0) {
        puVar11 = puVar9 + 0x14;
        *puVar9 = 0;
        *(undefined8 *)(puVar9 + 4) = 0;
        *(undefined8 *)(puVar9 + 0xc) = 0x7f7fffff00000000;
      }
      if (0x13 < uVar12) {
        do {
          *puVar11 = 0;
          *(undefined8 *)(puVar11 + 4) = 0;
          *(undefined8 *)(puVar11 + 0xc) = 0x7f7fffff00000000;
          puVar11[0x14] = 0;
          *(undefined8 *)(puVar11 + 0x18) = 0;
          *(undefined8 *)(puVar11 + 0x20) = 0x7f7fffff00000000;
          puVar11 = puVar11 + 0x28;
        } while (puVar11 != puVar9 + uVar13 * 0x14);
      }
      *(uint *)(param_1 + 0x30) = param_2;
      *(undefined1 **)(param_1 + 0x38) = puVar9;
    }
  }
LAB_03f24fe8:
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = 0x40 / (int)param_2;
  }
  uVar4 = (param_2 - 1) - (param_2 - 1 >> 1 & 0x55555555);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
  uVar4 = uVar4 + (uVar4 >> 8);
  uVar1 = uVar4 + (uVar4 >> 0x10) & 0x3f;
  uVar4 = (iVar3 - 1U) - (iVar3 - 1U >> 1 & 0x55555555);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
  uVar4 = uVar4 + (uVar4 >> 8);
  *(uint *)(param_1 + 0x4c) = 0x20 - uVar1;
  *(uint *)(param_1 + 0x50) = uVar4 + (uVar4 >> 0x10) & 0x3f;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(int *)(param_1 + 0x48) = -1 << (ulong)(-uVar1 & 0x1f);
  if (0 < (int)param_2) {
    lVar14 = *(long *)puVar6;
    if (lVar14 == 0) {
      pvVar10 = malloc(uVar13 * 0xc);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar2 = (undefined8 *)(lVar14 + 8);
        if (lVar7 != 0) {
          puVar2 = (undefined8 *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*puVar2;
        if (param_3 == (long *)0x0) goto LAB_03f250dc;
      }
      pvVar10 = (void *)(**(code **)(*param_3 + 0x30))(param_3,uVar13 * 0xc,8);
    }
    if (pvVar10 != (void *)0x0) {
      *(uint *)(param_1 + 0x58) = param_2;
      *(void **)(param_1 + 0x60) = pvVar10;
    }
  }
LAB_03f250dc:
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

