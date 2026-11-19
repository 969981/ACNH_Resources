
void FUN_03c235d0(long param_1,long *param_2,uint param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  size_t __size;
  long lVar10;
  undefined8 *puVar11;
  
  puVar3 = PTR_DAT_04bb2698;
  if (0 < (int)param_3) {
    lVar10 = *(long *)PTR_DAT_04bb2698;
    __size = ((ulong)param_3 + (ulong)param_3 * 4) * 8;
    if (lVar10 == 0) {
      pvVar5 = malloc(__size);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar10 + 8);
        if (lVar4 != 0) {
          param_2 = (long *)(lVar4 + 0xa8);
        }
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) goto LAB_03c236ec;
      }
      pvVar5 = (void *)(**(code **)(*param_2 + 0x30))(param_2,__size,8);
    }
    if (pvVar5 != (void *)0x0) {
      lVar10 = (ulong)param_3 * 0x28;
      uVar8 = lVar10 - 0x28;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar8;
      pvVar7 = pvVar5;
      if ((SUB164(auVar2 * ZEXT816(0xcccccccccccccccd),8) >> 5 & 1) == 0) {
        pvVar7 = (void *)((long)pvVar5 + 0x28);
        *(undefined4 *)((long)pvVar5 + 8) = 0;
        *(undefined8 *)((long)pvVar5 + 0x10) = 0;
        *(undefined4 *)((long)pvVar5 + 0x18) = 0;
        *(undefined8 *)((long)pvVar5 + 0x20) = 0;
      }
      if (0x27 < uVar8) {
        do {
          *(undefined4 *)((long)pvVar7 + 8) = 0;
          *(undefined8 *)((long)pvVar7 + 0x10) = 0;
          *(undefined4 *)((long)pvVar7 + 0x18) = 0;
          *(undefined8 *)((long)pvVar7 + 0x20) = 0;
          *(undefined4 *)((long)pvVar7 + 0x30) = 0;
          *(undefined8 *)((long)pvVar7 + 0x38) = 0;
          *(undefined4 *)((long)pvVar7 + 0x40) = 0;
          *(undefined8 *)((long)pvVar7 + 0x48) = 0;
          pvVar7 = (void *)((long)pvVar7 + 0x50);
        } while (pvVar7 != (void *)((long)pvVar5 + lVar10));
      }
      *(uint *)(param_1 + 8) = param_3;
      *(void **)(param_1 + 0x10) = pvVar5;
      goto joined_r0x03c236f4;
    }
  }
LAB_03c236ec:
  param_3 = *(uint *)(param_1 + 8);
joined_r0x03c236f4:
  if (0 < (int)param_3) {
    uVar9 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0x10);
      uVar1 = uVar9;
      if (param_3 <= uVar9) {
        uVar1 = 0;
      }
      uVar8 = (ulong)uVar1;
      *(undefined8 *)(lVar10 + uVar8 * 0x28) = 0;
      puVar11 = (undefined8 *)(lVar10 + uVar8 * 0x28 + 0x10);
      pvVar5 = (void *)*puVar11;
      if (pvVar5 != (void *)0x0) {
        lVar4 = *(long *)puVar3;
        if (lVar4 == 0) {
          free(pvVar5);
        }
        else {
          plVar6 = (long *)FUN_038cb610(lVar4,pvVar5);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x38))(plVar6,pvVar5);
          }
        }
        *puVar11 = 0;
        *(undefined4 *)(lVar10 + uVar8 * 0x28 + 8) = 0;
      }
      puVar11 = (undefined8 *)(lVar10 + uVar8 * 0x28 + 0x20);
      pvVar5 = (void *)*puVar11;
      if (pvVar5 != (void *)0x0) {
        lVar4 = *(long *)puVar3;
        if (lVar4 == 0) {
          free(pvVar5);
        }
        else {
          plVar6 = (long *)FUN_038cb610(lVar4,pvVar5);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x38))(plVar6,pvVar5);
          }
        }
        *puVar11 = 0;
        *(undefined4 *)(lVar10 + uVar8 * 0x28 + 0x18) = 0;
      }
      param_3 = *(uint *)(param_1 + 8);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)param_3);
  }
  return;
}

