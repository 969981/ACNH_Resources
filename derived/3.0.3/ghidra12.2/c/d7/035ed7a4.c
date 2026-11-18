
void FUN_035ed7a4(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  ushort uVar9;
  undefined8 uVar10;
  uint local_40;
  ushort local_3c;
  undefined1 local_3a;
  undefined2 local_39;
  undefined8 local_30;
  undefined4 local_28;
  
  puVar4 = &DAT_041021a0;
  if ((uint *)*param_2 != (uint *)0x0) {
    puVar4 = (uint *)*param_2;
  }
  uVar5 = *puVar4;
  uVar1 = (uVar5 & 0xf80000 | uVar5 >> 5 & 0x70000 |
          uVar5 >> 5 & 0x700 | uVar5 & 0xf800 | uVar5 >> 5 & 7 | (uVar5 >> 3 & 0x1f) << 3) -
          0x1000000;
  *(uint *)(param_1 + 0xb0) = uVar1;
  uVar6 = puVar4[1];
  uVar2 = (uVar6 & 0xf80000 | uVar6 >> 5 & 0x70000 |
          uVar6 >> 5 & 0x700 | uVar6 & 0xf800 | uVar6 >> 5 & 7 | (uVar6 >> 3 & 0x1f) << 3) -
          0x1000000;
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar7 = puVar4[2];
  uVar3 = (uVar7 & 0xf80000 | uVar7 >> 5 & 0x70000 |
          uVar7 >> 5 & 0x700 | uVar7 & 0xf800 | uVar7 >> 5 & 7 | (uVar7 >> 3 & 0x1f) << 3) -
          0x1000000;
  *(uint *)(param_1 + 0xb8) = uVar3;
  local_3c = (ushort)((uVar5 & 0xf800) >> 6) | (ushort)(uVar5 >> 3) & 0x1f |
             (ushort)(uVar1 >> 9) & 0x7c00 | 0x8000;
  uVar5 = puVar4[3];
  *(ushort *)(param_1 + 200) = local_3c;
  *(undefined8 *)(param_1 + 0x26) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2e) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x36) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3e) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x46) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x4e) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x56) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x5e) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(ushort *)(param_1 + 0xc0) = local_3c;
  *(ushort *)(param_1 + 0xd0) = local_3c;
  uVar1 = (uVar5 & 0xf80000 | uVar5 >> 5 & 0x70000 |
          uVar5 >> 5 & 0x700 | uVar5 & 0xf800 | uVar5 >> 5 & 7 | (uVar5 >> 3 & 0x1f) << 3) -
          0x1000000;
  *(uint *)(param_1 + 0xbc) = uVar1;
  uVar9 = (ushort)((uVar6 & 0xf800) >> 6) | (ushort)(uVar6 >> 3) & 0x1f |
          (ushort)(uVar2 >> 9) & 0x7c00 | 0x8000;
  *(ushort *)(param_1 + 0xc2) = uVar9;
  *(ushort *)(param_1 + 0xca) = uVar9;
  *(ushort *)(param_1 + 0xd2) = uVar9;
  uVar9 = (ushort)((uVar7 & 0xf800) >> 6) | (ushort)(uVar7 >> 3) & 0x1f |
          (ushort)(uVar3 >> 9) & 0x7c00 | 0x8000;
  *(ushort *)(param_1 + 0xc4) = uVar9;
  *(ushort *)(param_1 + 0xcc) = uVar9;
  *(ushort *)(param_1 + 0xd4) = uVar9;
  uVar9 = (ushort)((uVar5 & 0xf800) >> 6) | (ushort)(uVar5 >> 3) & 0x1f |
          (ushort)(uVar1 >> 9) & 0x7c00 | 0x8000;
  *(ushort *)(param_1 + 0xc6) = uVar9;
  *(ushort *)(param_1 + 0xce) = uVar9;
  *(ushort *)(param_1 + 0xd6) = uVar9;
  if ((*(char *)(param_1 + -0x1eb) == '\0') && (*(byte *)(param_1 + -0x1ee) < 3)) {
    uVar10 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0x26) = uVar10;
    *(undefined8 *)(param_1 + 0x6e) = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 0x76) = *(undefined8 *)(param_1 + 0xd0);
  }
  else {
    uVar10 = 0xffff;
  }
  uVar8 = (undefined2)uVar10;
  *(undefined2 *)(param_1 + 0x1e) = uVar8;
  *(undefined2 *)(param_1 + 0x20) = uVar8;
  *(undefined2 *)(param_1 + 0x22) = uVar8;
  *(undefined2 *)(param_1 + 0x24) = uVar8;
  local_3a = *(undefined1 *)((long)param_2 + 0xc);
  if (*(char *)(param_1 + -0x1eb) != '\0' || 2 < *(byte *)(param_1 + -0x1ee)) {
    local_3c = 0xffff;
  }
  local_28 = *(undefined4 *)(param_2 + 3);
  local_39 = *(undefined2 *)((long)param_2 + 0xd);
  local_30 = param_2[2];
  local_40 = *(uint *)(param_2 + 1) | 0xff000000;
  FUN_035bea70(param_1 + 0x178,&local_40);
  *(undefined1 *)(param_1 + 0x176) = 0;
  return;
}

