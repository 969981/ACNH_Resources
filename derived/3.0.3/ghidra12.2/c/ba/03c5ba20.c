
void FUN_03c5ba20(undefined8 *param_1,uint param_2)

{
  size_t __size;
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *__s;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined8 *)((long)param_1 + 0x24) = 0x8000000080000000;
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = param_1 + 9;
  param_1[10] = param_1 + 9;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_04b81af8;
  param_1[1] = 0;
  param_1[0xb] = 0x800000000;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  if ((int)param_2 < 1) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb2698;
  __size = (ulong)param_2 << 4;
  if (lVar9 == 0) {
    __s = malloc(__size);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar9 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) goto LAB_03c5bb04;
    __s = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
  }
  if (__s != (void *)0x0) {
    memset(__s,0,__size);
    *(uint *)(param_1 + 0xe) = param_2;
    param_1[0xf] = __s;
  }
LAB_03c5bb04:
  uVar10 = (ulong)(param_2 * param_2);
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    puVar6 = malloc(uVar10 * 0x18);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar5 = (long *)(lVar9 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      return;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,uVar10 * 0x18,8);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar8 = uVar10 * 0x18 - 0x18;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar8;
    puVar7 = puVar6;
    if ((SUB164(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 4 & 1) == 0) {
      *puVar6 = 0;
      puVar6[1] = 0x800000003f800000;
      *(undefined4 *)(puVar6 + 2) = 0x80000000;
      puVar7 = puVar6 + 3;
      *(undefined2 *)((long)puVar6 + 0x14) = 0;
      *(undefined1 *)((long)puVar6 + 0x16) = 0;
    }
    if (0x17 < uVar8) {
      do {
        *puVar7 = 0;
        puVar7[1] = 0x800000003f800000;
        *(undefined4 *)(puVar7 + 2) = 0x80000000;
        *(undefined2 *)((long)puVar7 + 0x14) = 0;
        *(undefined1 *)((long)puVar7 + 0x16) = 0;
        *(undefined4 *)(puVar7 + 5) = 0x80000000;
        *(undefined2 *)((long)puVar7 + 0x2c) = 0;
        *(undefined1 *)((long)puVar7 + 0x2e) = 0;
        puVar7[3] = 0;
        puVar7[4] = 0x800000003f800000;
        puVar7 = puVar7 + 6;
      } while (puVar7 != puVar6 + uVar10 * 3);
    }
    *(uint *)(param_1 + 0xc) = param_2;
    *(uint *)((long)param_1 + 100) = param_2;
    param_1[0xd] = puVar6;
  }
  return;
}

