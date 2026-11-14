
void FUN_01da6990(undefined2 *param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  void *__s;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined2 *puVar13;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined2 **)(param_1 + 0x10) = param_1 + 0x7c;
  *(undefined4 *)(param_1 + 0x14) = 0xb;
  *(undefined1 *)(param_1 + 0x16) = 0;
  puVar13 = param_1 + 0x2e;
  *(undefined1 *)puVar13 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0x40;
  *(undefined1 *)((long)param_1 + 0x9b) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1c) = 0xffffffff00000000;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined **)(param_1 + 0x24) = puVar1;
  *(undefined2 **)(param_1 + 0x28) = puVar13;
  puVar2 = PTR_DAT_04bb5128 + 0x10;
  *(undefined2 **)(param_1 + 0x54) = param_1 + 0x5a;
  *(undefined4 *)(param_1 + 0x58) = 0x40;
  *(undefined1 *)((long)param_1 + 0xf3) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  plVar11 = (long *)(param_1 + 0xc);
  *plVar11 = (long)puVar2;
  puVar4 = param_1 + 0x87;
  if (param_1 + 0x87 <= param_1 + 0x7d) {
    puVar4 = param_1 + 0x7d;
  }
  *(undefined **)(param_1 + 0x50) = puVar1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x83) = 0;
  memset(param_1 + 0x7c,0,((long)puVar4 + (-0xe1 - (long)plVar11) & 0xfffffffffffffffeU) + 2);
  puVar4 = param_1 + 0x8c;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x9c) = 0xffffffff00000000;
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(undefined1 *)(param_1 + 0xda) = 0;
  *(undefined **)(param_1 + 0xa4) = puVar1;
  *(undefined2 **)(param_1 + 0xa8) = param_1 + 0xae;
  *(undefined4 *)(param_1 + 0x94) = 0xb;
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xac) = 0x40;
  *(undefined1 *)((long)param_1 + 0x19b) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0x40;
  *(undefined1 *)((long)param_1 + 499) = 0;
  *(undefined8 *)(param_1 + 0x103) = 0;
  *(undefined **)(param_1 + 0xd0) = puVar1;
  *(undefined2 **)(param_1 + 0xd4) = param_1 + 0xda;
  puVar5 = param_1 + 0x107;
  if (param_1 + 0x107 <= param_1 + 0xfd) {
    puVar5 = param_1 + 0xfd;
  }
  *(undefined **)(param_1 + 0x8c) = puVar2;
  *(undefined2 **)(param_1 + 0x90) = param_1 + 0xfc;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  memset(param_1 + 0xfc,0,((long)puVar5 + (-0xe1 - (long)puVar4) & 0xfffffffffffffffeU) + 2);
  *(uint *)(param_1 + 0x108) = param_2;
  uVar6 = *(uint *)(*(long *)PTR_DAT_04bb8930 + 0x20);
  if ((int)param_2 < (int)uVar6) {
    if (uVar6 <= param_2) {
      param_2 = 0;
    }
    __s = *(void **)(param_1 + 0x10);
    puVar12 = (undefined1 *)
              (*(long *)(*(long *)PTR_DAT_04bb8930 + 0x28) + (long)(int)param_2 * 0x50);
    *(undefined1 *)param_1 = *puVar12;
    *(undefined1 *)((long)param_1 + 1) = puVar12[1];
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar12 + 8);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(puVar12 + 0x14);
    if ((__s != (void *)0x0) && (*(uint *)(param_1 + 0x14) != 0)) {
      pvVar3 = (void *)((long)__s + (ulong)*(uint *)(param_1 + 0x14) * 2);
      if (pvVar3 <= (void *)((long)__s + 2U)) {
        pvVar3 = (void *)((long)__s + 2U);
      }
      memset(__s,0,((long)pvVar3 + ~(ulong)__s & 0xfffffffffffffffe) + 2);
      puVar13 = *(undefined2 **)(param_1 + 0x28);
    }
    *(undefined1 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x1c) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    *(undefined1 *)puVar13 = 0;
    **(undefined1 **)(param_1 + 0x54) = 0;
    puVar8 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0xc) + 0x10))(plVar11);
    uVar7 = *(undefined4 *)(puVar12 + 0x28);
    uVar9 = *(undefined8 *)(puVar12 + 0x20);
    *puVar8 = *(undefined8 *)(puVar12 + 0x18);
    puVar8[1] = uVar9;
    *(undefined4 *)(puVar8 + 2) = uVar7;
    *(uint *)(param_1 + 10) = (uint)(byte)puVar12[0x12];
    (**(code **)(*(long *)(param_1 + 0x8c) + 0x38))(puVar4);
    puVar8 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x8c) + 0x10))(puVar4);
    uVar9 = *(undefined8 *)(puVar12 + 0x34);
    uVar10 = *(undefined8 *)(puVar12 + 0x2c);
    *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar12 + 0x3c);
    *puVar8 = uVar10;
    puVar8[1] = uVar9;
    *(uint *)(param_1 + 0x88) = (uint)(byte)puVar12[0x13];
  }
  return;
}

