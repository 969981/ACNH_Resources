
undefined8 FUN_00990960(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  size_t sVar9;
  uint uVar10;
  undefined8 uVar11;
  
  puVar2 = PTR_DAT_04bb2698;
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  uVar10 = *(uint *)(param_2 + 8);
  if (0 < (int)uVar10) {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    sVar9 = (ulong)uVar10 * 0x18;
    if (lVar8 == 0) {
      pvVar5 = malloc(sVar9);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar8 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB_00990a94;
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,sVar9,8);
    }
    if (pvVar5 != (void *)0x0) {
      uVar1 = ((uint)((sVar9 - 0x18) / 0x18) & 0xfffffff) + 1;
      uVar7 = (ulong)uVar1 & 3;
      pvVar6 = pvVar5;
      if ((uVar1 & 3) != 0) {
        do {
          *(undefined4 *)((long)pvVar6 + 8) = 0;
          uVar7 = uVar7 - 1;
          *(undefined8 *)((long)pvVar6 + 0x10) = 0;
          pvVar6 = (void *)((long)pvVar6 + 0x18);
        } while (uVar7 != 0);
      }
      if (0x47 < sVar9 - 0x18) {
        do {
          *(undefined4 *)((long)pvVar6 + 8) = 0;
          *(undefined8 *)((long)pvVar6 + 0x10) = 0;
          *(undefined4 *)((long)pvVar6 + 0x20) = 0;
          *(undefined8 *)((long)pvVar6 + 0x28) = 0;
          *(undefined4 *)((long)pvVar6 + 0x38) = 0;
          *(undefined8 *)((long)pvVar6 + 0x40) = 0;
          *(undefined4 *)((long)pvVar6 + 0x50) = 0;
          *(undefined8 *)((long)pvVar6 + 0x58) = 0;
          pvVar6 = (void *)((long)pvVar6 + 0x60);
        } while (pvVar6 != (void *)((long)pvVar5 + sVar9));
      }
      *(uint *)(param_1 + 0x290) = uVar10;
      *(void **)(param_1 + 0x298) = pvVar5;
      goto LAB_00990aa0;
    }
  }
LAB_00990a94:
  if (*(int *)(param_1 + 0x290) == 0) {
    return 1;
  }
  pvVar5 = *(void **)(param_1 + 0x298);
LAB_00990aa0:
  uVar10 = 0;
  uVar11 = 1;
  do {
    lVar8 = (long)(int)uVar10;
    if (*(uint *)(param_2 + 8) <= uVar10) {
      lVar8 = 0;
    }
    uVar1 = *(uint *)(*(long *)(param_2 + 0x10) + lVar8 * 4);
    if (uVar1 != 0) {
      if (0 < (int)uVar1) {
        lVar8 = *(long *)puVar2;
        sVar9 = (ulong)uVar1 << 2;
        if (lVar8 == 0) {
          pvVar6 = malloc(sVar9);
        }
        else {
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar4 = (long *)(lVar8 + 8);
          if (lVar3 != 0) {
            plVar4 = (long *)(lVar3 + 0xa8);
          }
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_00990ab4;
          pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,sVar9,8);
        }
        if (pvVar6 != (void *)0x0) {
          memset(pvVar6,0,sVar9);
          *(uint *)((long)pvVar5 + (long)(int)uVar10 * 0x18 + 8) = uVar1;
          *(void **)((long)pvVar5 + (long)(int)uVar10 * 0x18 + 0x10) = pvVar6;
          goto LAB_00990ab8;
        }
      }
LAB_00990ab4:
      uVar11 = 0;
    }
LAB_00990ab8:
    uVar10 = uVar10 + 1;
    if (*(uint *)(param_1 + 0x290) == uVar10) {
      return uVar11;
    }
  } while( true );
}

