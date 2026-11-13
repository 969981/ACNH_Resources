
void FUN_012e78b0(uint *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  size_t __size;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar3 = PTR_DAT_04bb2698;
  uVar2 = *(int *)((long)param_2 + 0xc) * (int)param_2[1];
  uVar8 = (ulong)uVar2;
  if ((int)uVar2 < 1) goto LAB_012e7a2c;
  __size = uVar8 << 3;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar6 = malloc(__size);
    if (puVar6 != (undefined8 *)0x0) goto LAB_012e79b4;
LAB_012e7948:
    lVar7 = *(long *)puVar3;
    if (lVar7 != 0) goto LAB_012e7950;
LAB_012e79e8:
    puVar6 = malloc(__size);
  }
  else {
    plVar4 = (long *)*param_2;
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB_012e7948;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
    if (puVar6 == (undefined8 *)0x0) goto LAB_012e7948;
LAB_012e79b4:
    puVar9 = puVar6;
    do {
      puVar10 = puVar9 + 1;
      *puVar9 = 0xfffe;
      FUN_0277d4ac(puVar9);
      puVar9 = puVar10;
    } while (puVar10 != puVar6 + uVar8);
    *param_1 = uVar2;
    *(undefined8 **)(param_1 + 2) = puVar6;
    lVar7 = *(long *)puVar3;
    if (lVar7 == 0) goto LAB_012e79e8;
LAB_012e7950:
    plVar4 = (long *)*param_2;
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB_012e7a2c;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
  }
  if (puVar6 != (undefined8 *)0x0) {
    puVar9 = puVar6;
    do {
      puVar10 = puVar9 + 1;
      *puVar9 = 0xfffe;
      FUN_0277d4ac(puVar9);
      puVar9 = puVar10;
    } while (puVar10 != puVar6 + uVar8);
    param_1[4] = uVar2;
    *(undefined8 **)(param_1 + 6) = puVar6;
  }
LAB_012e7a2c:
  uVar2 = *(uint *)(param_2 + 1);
  uVar1 = *(uint *)((long)param_2 + 0xc);
  lVar7 = *param_2;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar1;
  FUN_03856c54(param_1 + 10,uVar1 * uVar2,lVar7);
  uVar2 = *(uint *)(param_2 + 1);
  uVar1 = *(uint *)((long)param_2 + 0xc);
  lVar7 = *param_2;
  param_1[0x16] = uVar2;
  param_1[0x17] = uVar1;
  FUN_03856c54(param_1 + 0x12,uVar1 * uVar2,lVar7);
  param_1[0x18] = *(uint *)(param_2 + 1);
  param_1[0x19] = *(uint *)((long)param_2 + 0xc);
  return;
}

