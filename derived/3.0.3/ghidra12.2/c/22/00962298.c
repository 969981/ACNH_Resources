
void FUN_00962298(long param_1,int *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  size_t __size;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  iVar4 = *param_2;
  *(int *)(param_1 + 0x38) = iVar4;
  iVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(int *)(param_1 + 0x3c) = iVar1;
  puVar3 = PTR_DAT_04bb2698;
  uVar2 = iVar1 * iVar4;
  if (0 < (int)uVar2) {
    lVar10 = *(long *)PTR_DAT_04bb2698;
    if (lVar10 == 0) {
      pvVar7 = malloc((ulong)uVar2 * 0x34);
    }
    else {
      plVar6 = param_3;
      if (param_3 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar10 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_00962348;
      }
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(ulong)uVar2 * 0x34,8);
    }
    if (pvVar7 != (void *)0x0) {
      *(uint *)(param_1 + 0x48) = uVar2;
      *(void **)(param_1 + 0x50) = pvVar7;
    }
  }
LAB_00962348:
  uVar2 = *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x38);
  if (0 < (int)uVar2) {
    lVar10 = *(long *)puVar3;
    __size = (ulong)uVar2 << 2;
    if (lVar10 == 0) {
      pvVar7 = malloc(__size);
    }
    else {
      plVar6 = param_3;
      if (param_3 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar10 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_009623cc;
      }
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,__size,8);
    }
    if (pvVar7 != (void *)0x0) {
      memset(pvVar7,0,__size);
      *(uint *)(param_1 + 0x68) = uVar2;
      *(void **)(param_1 + 0x70) = pvVar7;
    }
  }
LAB_009623cc:
  if (((char)param_2[2] != '\0') &&
     (uVar2 = *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x38), 0 < (int)uVar2)) {
    lVar10 = *(long *)puVar3;
    if (lVar10 == 0) {
      pvVar7 = malloc((ulong)uVar2 * 0x34);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar9 = (undefined8 *)(lVar10 + 8);
        if (lVar5 != 0) {
          puVar9 = (undefined8 *)(lVar5 + 0xa8);
        }
        param_3 = (long *)*puVar9;
        if (param_3 == (long *)0x0) goto LAB_00962444;
      }
      pvVar7 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(ulong)uVar2 * 0x34,8);
    }
    if (pvVar7 != (void *)0x0) {
      *(uint *)(param_1 + 0x58) = uVar2;
      *(void **)(param_1 + 0x60) = pvVar7;
    }
  }
LAB_00962444:
  FUN_00961ef0(0,param_1,7);
  if (DAT_05aed670 == 0) {
    puVar9 = &DAT_055c04a0;
  }
  else {
    puVar9 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar9 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar9,0);
      puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar9 = &DAT_055c04a0;
      }
    }
  }
  if ((*(int *)(puVar9 + 7) == -0x17df00c3) && (uVar8 = FUN_03782c70(), (uVar8 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x120) = 1;
  }
  return;
}

