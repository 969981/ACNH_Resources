
void FUN_030af2b0(long *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  size_t __size;
  long lVar11;
  
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  if (0 < (int)param_2) {
    lVar11 = *(long *)PTR_DAT_04bb2698;
    __size = ((ulong)param_2 + (ulong)param_2 * 2) * 0x20;
    if (lVar11 == 0) {
      pvVar6 = malloc(__size);
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar11 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_030af420;
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
    }
    if (pvVar6 != (void *)0x0) {
      lVar11 = (ulong)param_2 * 0x60;
      uVar9 = lVar11 - 0x60;
      uVar1 = ((uint)(uVar9 / 0x60) & 0x3ffffff) + 1;
      uVar10 = (ulong)uVar1 & 3;
      pvVar8 = pvVar6;
      if ((uVar1 & 3) != 0) {
        do {
          *(undefined8 *)((long)pvVar8 + 0x40) = 0;
          *(undefined8 *)((long)pvVar8 + 0x48) = 0;
          uVar10 = uVar10 - 1;
          *(undefined8 *)((long)pvVar8 + 0x54) = 0x1ffffffff;
          *(undefined8 *)((long)pvVar8 + 0x30) = 0;
          *(undefined8 *)((long)pvVar8 + 0x38) = 0;
          *(undefined8 *)((long)pvVar8 + 0x20) = 0;
          *(undefined8 *)((long)pvVar8 + 0x28) = 0;
          *(undefined8 *)((long)pvVar8 + 0x10) = 0;
          *(undefined8 *)((long)pvVar8 + 0x18) = 0;
          pvVar8 = (void *)((long)pvVar8 + 0x60);
        } while (uVar10 != 0);
      }
      if (0x11f < uVar9) {
        do {
          *(undefined8 *)((long)pvVar8 + 0x40) = 0;
          *(undefined8 *)((long)pvVar8 + 0x48) = 0;
          *(undefined8 *)((long)pvVar8 + 0x54) = 0x1ffffffff;
          *(undefined8 *)((long)pvVar8 + 0xb4) = 0x1ffffffff;
          *(undefined8 *)((long)pvVar8 + 0x114) = 0x1ffffffff;
          *(undefined8 *)((long)pvVar8 + 0x174) = 0x1ffffffff;
          *(undefined8 *)((long)pvVar8 + 0x30) = 0;
          *(undefined8 *)((long)pvVar8 + 0x38) = 0;
          *(undefined8 *)((long)pvVar8 + 0x20) = 0;
          *(undefined8 *)((long)pvVar8 + 0x28) = 0;
          *(undefined8 *)((long)pvVar8 + 0x10) = 0;
          *(undefined8 *)((long)pvVar8 + 0x18) = 0;
          *(undefined8 *)((long)pvVar8 + 0x70) = 0;
          *(undefined8 *)((long)pvVar8 + 0x78) = 0;
          *(undefined8 *)((long)pvVar8 + 0x80) = 0;
          *(undefined8 *)((long)pvVar8 + 0x88) = 0;
          *(undefined8 *)((long)pvVar8 + 0x90) = 0;
          *(undefined8 *)((long)pvVar8 + 0x98) = 0;
          *(undefined8 *)((long)pvVar8 + 0xa0) = 0;
          *(undefined8 *)((long)pvVar8 + 0xa8) = 0;
          *(undefined8 *)((long)pvVar8 + 0x100) = 0;
          *(undefined8 *)((long)pvVar8 + 0x108) = 0;
          *(undefined8 *)((long)pvVar8 + 0xf0) = 0;
          *(undefined8 *)((long)pvVar8 + 0xf8) = 0;
          *(undefined8 *)((long)pvVar8 + 0xe0) = 0;
          *(undefined8 *)((long)pvVar8 + 0xe8) = 0;
          *(undefined8 *)((long)pvVar8 + 0xd0) = 0;
          *(undefined8 *)((long)pvVar8 + 0xd8) = 0;
          *(undefined8 *)((long)pvVar8 + 0x160) = 0;
          *(undefined8 *)((long)pvVar8 + 0x168) = 0;
          *(undefined8 *)((long)pvVar8 + 0x150) = 0;
          *(undefined8 *)((long)pvVar8 + 0x158) = 0;
          *(undefined8 *)((long)pvVar8 + 0x140) = 0;
          *(undefined8 *)((long)pvVar8 + 0x148) = 0;
          *(undefined8 *)((long)pvVar8 + 0x130) = 0;
          *(undefined8 *)((long)pvVar8 + 0x138) = 0;
          pvVar8 = (void *)((long)pvVar8 + 0x180);
        } while (pvVar8 != (void *)((long)pvVar6 + lVar11));
      }
      *param_1 = (long)pvVar6;
      *(undefined8 *)((long)param_1 + 0xc) = 0;
      *(uint *)(param_1 + 1) = param_2;
    }
  }
LAB_030af420:
  lVar11 = *(long *)puVar2;
  if (lVar11 == 0) {
    puVar7 = malloc(0x20);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    puVar7 = (undefined8 *)(lVar11 + 8);
    if (lVar4 != 0) {
      puVar7 = (undefined8 *)(lVar4 + 0xa8);
    }
    puVar7 = (undefined8 *)(**(code **)(*(long *)*puVar7 + 0x30))((long *)*puVar7,0x20,8);
  }
  *(undefined1 *)(puVar7 + 2) = 0;
  *puVar7 = &PTR_LAB_04afc090;
  puVar7[1] = 0;
  puVar7[3] = 0;
  param_1[3] = (long)puVar7;
  return;
}

