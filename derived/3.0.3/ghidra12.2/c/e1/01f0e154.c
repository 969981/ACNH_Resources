
/* WARNING: Removing unreachable block (ram,0x01f0e218) */
/* WARNING: Removing unreachable block (ram,0x01f0e274) */

void FUN_01f0e154(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  FUN_01e9dbb0();
  *(undefined2 *)((long)param_1 + 0xaf64) = 0;
  *(undefined8 *)((long)param_1 + 0xaf54) = 0;
  *(undefined8 *)((long)param_1 + 0xaf5c) = 0;
  *(undefined8 *)((long)param_1 + 0xaf44) = 0;
  *(undefined8 *)((long)param_1 + 0xaf4c) = 0;
  *(undefined8 *)((long)param_1 + 0xaf34) = 0;
  *(undefined8 *)((long)param_1 + 0xaf3c) = 0;
  param_1[0x15ed] = 0;
  param_1[0x15ee] = 0;
  puVar5 = PTR_DAT_04bc2208;
  param_1[0x15ef] = 0;
  *(undefined4 *)(param_1 + 0x15f0) = 0;
  param_1[0x15f8] = puVar5 + 0x10;
  puVar1 = PTR_DAT_04bc2210 + 0x10;
  *(undefined2 *)((long)param_1 + 0xaf84) = 0;
  param_1[0x15f4] = puVar5 + 0x10;
  param_1[0x15f5] = param_1;
  param_1[0x15fc] = puVar1;
  param_1[0x15f1] = 0;
  param_1[0x15f2] = 0;
  *(undefined8 *)((long)param_1 + 0xaf95) = 0;
  param_1[0x15f6] = PTR_LAB_04bc21f8;
  param_1[0x15f7] = 0;
  param_1[0x1597] = param_1 + 0x15f4;
  param_1[0x1600] = &PTR_LAB_04a63db8;
  *(undefined1 *)(param_1 + 0x1604) = 0;
  *(undefined8 *)((long)param_1 + 0xb024) = 0;
  *param_1 = &PTR_LAB_04a637e8;
  param_1[0x1601] = 0;
  param_1[0x1602] = 0;
  param_1[0x1603] = 0;
  param_1[0x1606] = PTR_DAT_04bb2010 + 0x10;
  param_1[0x1607] = 0;
  puVar1 = PTR_FUN_04bc1df8;
  param_1[0x15fb] = 0;
  param_1[0x15f9] = param_1;
  param_1[0x15fa] = puVar1;
  param_1[0x158e] = param_1 + 0x15f8;
  puVar1 = PTR_LAB_04bc1df0;
  param_1[0x15ff] = 0;
  param_1[0x15fd] = param_1;
  param_1[0x15fe] = puVar1;
  if (*(int *)(param_1 + 0x1599) < *(int *)((long)param_1 + 0xaccc)) {
    *(undefined8 **)(param_1[0x159a] + (long)*(int *)(param_1 + 0x1599) * 8) = param_1 + 0x15fc;
    *(int *)(param_1 + 0x1599) = *(int *)(param_1 + 0x1599) + 1;
  }
  puVar1 = PTR_DAT_04bb3968;
  pfVar6 = (float *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x177f0) + 0xf0))();
  fVar8 = *pfVar6;
  pfVar6 = (float *)(**(code **)(*(long *)(*(long *)puVar1 + 0x17820) + 0xf0))();
  fVar9 = *pfVar6;
  lVar7 = param_1[1];
  uVar3 = *(uint *)(lVar7 + 0x294);
  uVar2 = *(uint *)(lVar7 + 0x288) ^ *(uint *)(lVar7 + 0x288) << 0xb;
  *(undefined4 *)(lVar7 + 0x288) = *(undefined4 *)(lVar7 + 0x28c);
  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
  uVar4 = *(undefined4 *)(lVar7 + 0x290);
  *(uint *)(lVar7 + 0x290) = uVar3;
  *(uint *)(lVar7 + 0x294) = uVar2;
  *(undefined4 *)(lVar7 + 0x28c) = uVar4;
  *(int *)(param_1 + 0x1605) =
       (int)((ulong)uVar2 * (ulong)(uint)((int)(fVar9 * 30.0) - (int)(fVar8 * 30.0)) >> 0x20) +
       (int)(fVar8 * 30.0);
  param_1[0x15ab] = param_1[0x15ab] | 0x8000000000;
  return;
}

