
void FUN_0394e1a0(long param_1,int param_2,uint param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  ulong *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  size_t sVar13;
  long lVar14;
  int iVar15;
  
  puVar6 = PTR_DAT_04bb2698;
  if (0 < param_2) {
    lVar14 = *(long *)PTR_DAT_04bb2698;
    if (lVar14 == 0) {
      pvVar9 = malloc((long)(param_2 << 3));
    }
    else {
      plVar8 = param_4;
      if (param_4 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar8 = (long *)(lVar14 + 8);
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_0394e240;
      }
      pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(long)(param_2 << 3),8);
    }
    if (pvVar9 != (void *)0x0) {
      *(void **)(param_1 + 0x10) = pvVar9;
      *(undefined4 *)(param_1 + 8) = 0;
      *(int *)(param_1 + 0xc) = param_2;
    }
  }
LAB_0394e240:
  if ((int)param_3 < 1) goto LAB_0394e3e4;
  lVar14 = *(long *)puVar6;
  sVar13 = (ulong)param_3 * 0x168 + 8;
  if (lVar14 == 0) {
    puVar10 = malloc(sVar13);
joined_r0x0394e2c4:
    if (puVar10 != (ulong *)0x0) {
      *puVar10 = (ulong)param_3;
      puVar1 = PTR_DAT_04bb2028 + 0x10;
      puVar2 = PTR_DAT_04bb21f8 + 0x10;
      lVar14 = 0;
      do {
        puVar12 = (undefined8 *)((long)puVar10 + lVar14 + 0x34);
        *(undefined4 *)((long)puVar10 + lVar14 + 0x18) = 0;
        *(undefined ***)((long)puVar10 + lVar14 + 8) = &PTR_LAB_04b67a90;
        *(undefined8 *)((long)puVar10 + lVar14 + 0x10) = 0;
        *(undefined8 **)((long)puVar10 + lVar14 + 0x28) = puVar12;
        *(undefined4 *)((long)puVar10 + lVar14 + 0x30) = 0x20;
        *(undefined1 *)((long)puVar10 + lVar14 + 0x53) = 0;
        if (puVar12 != &DAT_0407ebb1) {
          *(undefined1 *)puVar12 = 0;
        }
        lVar7 = lVar14 + 0x168;
        puVar11 = (undefined1 *)((long)puVar10 + lVar14 + 0x6c);
        *puVar11 = 0;
        *(undefined **)((long)puVar10 + lVar14 + 0x20) = puVar1;
        *(undefined1 **)((long)puVar10 + lVar14 + 0x60) = puVar11;
        *(undefined4 *)((long)puVar10 + lVar14 + 0x68) = 0x100;
        *(undefined1 *)((long)puVar10 + lVar14 + 0x16b) = 0;
        *(undefined **)((long)puVar10 + lVar14 + 0x58) = puVar2;
        lVar14 = lVar7;
      } while ((ulong)param_3 * 0x168 != lVar7);
      *(uint *)(param_1 + 0x18) = param_3;
      *(ulong **)(param_1 + 0x20) = puVar10 + 1;
    }
    lVar14 = *(long *)puVar6;
    sVar13 = (size_t)(int)(param_3 << 3);
    if (lVar14 == 0) goto LAB_0394e480;
    if (param_4 == (long *)0x0) {
LAB_0394e394:
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar14 + 8);
      if (lVar7 != 0) {
        puVar12 = (undefined8 *)(lVar7 + 0xa8);
      }
      param_4 = (long *)*puVar12;
      if (param_4 == (long *)0x0) goto LAB_0394e3e4;
    }
    pvVar9 = (void *)(**(code **)(*param_4 + 0x30))(param_4,sVar13,8);
  }
  else {
    plVar8 = param_4;
    if (param_4 != (long *)0x0) {
LAB_0394e290:
      puVar10 = (ulong *)(**(code **)(*plVar8 + 0x30))(plVar8,sVar13,8);
      goto joined_r0x0394e2c4;
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar14 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_0394e290;
    lVar14 = *(long *)puVar6;
    sVar13 = (size_t)(int)(param_3 << 3);
    if (lVar14 != 0) goto LAB_0394e394;
LAB_0394e480:
    pvVar9 = malloc(sVar13);
  }
  if (pvVar9 != (void *)0x0) {
    *(void **)(param_1 + 0x30) = pvVar9;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(uint *)(param_1 + 0x2c) = param_3;
  }
LAB_0394e3e4:
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar4 != 0) {
    lVar14 = *(long *)(param_1 + 0x20);
    iVar15 = 0;
    do {
      puVar12 = *(undefined8 **)(lVar14 + (long)iVar15 * 0x168 + 0x58);
      if (puVar12 != &DAT_0407ebb1) {
        iVar5 = *(int *)(lVar14 + (long)iVar15 * 0x168 + 0x60);
        iVar3 = 0;
        if (iVar5 < 1) {
          iVar3 = iVar5 + -1;
        }
        memset(puVar12,0,(long)iVar3);
        *(undefined1 *)((long)puVar12 + (long)iVar3) = 0;
      }
      lVar7 = lVar14 + (long)iVar15 * 0x168;
      *(int *)(lVar7 + 0x10) = iVar15;
      iVar15 = iVar15 + 1;
      *(long *)(lVar7 + 8) = param_1;
    } while (iVar4 != iVar15);
  }
  return;
}

