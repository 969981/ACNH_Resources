
void FUN_01ca4940(long param_1,undefined8 *param_2)

{
  ulong *__s;
  long lVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  void *pvVar8;
  void *pvVar9;
  ulong *puVar10;
  long *plVar11;
  ulong uVar12;
  
  uVar2 = *param_2;
  uVar6 = param_2[2];
  pvVar8 = *(void **)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0xd8) = param_2[1];
  *(undefined8 *)(param_1 + 0xe0) = uVar6;
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  uVar2 = param_2[4];
  *(undefined8 *)(param_1 + 0xe8) = param_2[3];
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  uVar2 = param_2[6];
  *(undefined8 *)(param_1 + 0xf8) = param_2[5];
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  uVar2 = param_2[8];
  *(undefined8 *)(param_1 + 0x108) = param_2[7];
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  uVar2 = param_2[10];
  *(undefined8 *)(param_1 + 0x118) = param_2[9];
  *(undefined8 *)(param_1 + 0x120) = uVar2;
  plVar11 = param_2 + 0xb;
  (**(code **)(*plVar11 + 0x18))(plVar11);
  pvVar9 = (void *)param_2[0xc];
  if (pvVar8 != pvVar9) {
    (**(code **)(param_2[0xb] + 0x18))(plVar11);
    lVar5 = 0;
    do {
      if (*(short *)(param_2[0xc] + lVar5 * 2) == 0) goto LAB_01ca4a0c;
      lVar1 = param_2[0xc] + lVar5 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar5 = lVar5 + 1;
        goto LAB_01ca4a0c;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar5 = lVar5 + 2;
        goto LAB_01ca4a0c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_01ca4a0c:
    uVar7 = (uint)lVar5;
    if (*(int *)(param_1 + 0x138) <= (int)(uint)lVar5) {
      uVar7 = *(int *)(param_1 + 0x138) - 1;
    }
    uVar12 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar7 << 1;
    memcpy(pvVar8,pvVar9,uVar12);
    *(undefined2 *)((long)pvVar8 + uVar12) = 0;
  }
  pvVar8 = *(void **)(param_1 + 0x150);
  plVar11 = param_2 + 0xf;
  (**(code **)(*plVar11 + 0x18))(plVar11);
  pvVar9 = (void *)param_2[0x10];
  if (pvVar8 != pvVar9) {
    (**(code **)(param_2[0xf] + 0x18))(plVar11);
    lVar5 = 0;
    do {
      if (*(short *)(param_2[0x10] + lVar5 * 2) == 0) goto LAB_01ca4aac;
      lVar1 = param_2[0x10] + lVar5 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar5 = lVar5 + 1;
        goto LAB_01ca4aac;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar5 = lVar5 + 2;
        goto LAB_01ca4aac;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_01ca4aac:
    uVar7 = (uint)lVar5;
    if (*(int *)(param_1 + 0x158) <= (int)(uint)lVar5) {
      uVar7 = *(int *)(param_1 + 0x158) - 1;
    }
    uVar12 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar7 << 1;
    memcpy(pvVar8,pvVar9,uVar12);
    *(undefined2 *)((long)pvVar8 + uVar12) = 0;
  }
  puVar10 = *(ulong **)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x13);
  uVar3 = *(undefined2 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)((long)param_2 + 0x9c);
  *(undefined2 *)(param_1 + 0x170) = uVar3;
  *(undefined1 *)(param_1 + 200) = 1;
  pvVar8 = (void *)param_2[1];
  uVar4 = *(ushort *)(param_2 + 2);
  __s = puVar10 + 1;
  memset(__s,0,0x1400);
  uVar7 = (uint)uVar4;
  if (0x13ff < uVar7) {
    uVar7 = 0x1400;
  }
  *puVar10 = (ulong)uVar7;
  memcpy(__s,pvVar8,(ulong)uVar7);
  return;
}

