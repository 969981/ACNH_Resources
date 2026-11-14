
void FUN_019550d0(long param_1,undefined2 *param_2,undefined2 *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  short sVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  code *pcVar11;
  uint uVar12;
  ulong uVar13;
  byte bVar14;
  long lVar15;
  uint local_68;
  int local_64;
  
  if (param_2 == (undefined2 *)0x0) {
    return;
  }
  lVar15 = *(long *)PTR_DAT_04bb4008;
  if (lVar15 != 0) {
    uVar5 = FUN_0277d6c4(param_3);
    uVar8 = FUN_01a12390(lVar15,7,uVar5);
    if ((uVar8 & 1) != 0) {
      *param_2 = *param_3;
      *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 1);
      *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)((long)param_3 + 3);
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
      param_2[4] = 0x1ff;
      return;
    }
  }
  puVar1 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if (param_4 != (ulong *)0x0) {
    puVar1 = param_4;
  }
  uVar8 = *puVar1;
  uVar13 = uVar8 >> 0x20;
  if (param_5 == 0) {
    bVar14 = 0x17;
  }
  else {
    bVar14 = *(byte *)(param_5 + 4);
  }
  if ((uint)bVar14 < ((uint)(uVar8 >> 0x20) & 0xff)) {
    *param_2 = *param_3;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 1);
    *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)((long)param_3 + 3);
    uVar5 = *(undefined4 *)(param_3 + 2);
    param_2[4] = 0;
    *(undefined4 *)(param_2 + 2) = uVar5;
    return;
  }
  local_64 = ((uint)uVar8 >> 0x10 & 0xff) - 1;
  if (DAT_05574040 == 0) {
LAB_01955250:
    uVar12 = 0;
  }
  else {
    puVar10 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar15 = (**(code **)(*(long *)*puVar10 + 0x38))();
      if (lVar15 == 0) goto LAB_01955250;
      lVar15 = lVar15 + 0x70;
    }
    else if (((puVar10 == (undefined8 *)0x0) || ((long *)puVar10[0x26] == (long *)0x0)) ||
            (lVar15 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar15 == 0))
    goto LAB_01955250;
    if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar10 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar10)();
      uVar6 = uVar6 ^ 1;
    }
    uVar12 = *(uint *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x1e3604);
    if (1 < uVar12) {
      uVar12 = 0;
    }
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
  }
  uVar6 = 0;
  local_68 = uVar12;
  do {
    iVar3 = local_64;
    uVar12 = (uint)uVar13;
    if ((uVar12 & 0xfc) == 4) {
      uVar9 = 1;
    }
    else if ((uVar12 & 0xf8) == 8) {
      uVar9 = 2;
    }
    else if ((uVar12 & 0xff) == 0x10) {
      uVar9 = 3;
    }
    else if ((uVar12 - 0x11 & 0xff) < 2) {
      uVar9 = 4;
    }
    else {
      uVar9 = 5;
      if ((uVar12 - 0x13 & 0xfc) != 0) {
        uVar9 = 0;
      }
    }
    if ((1 << (ulong)uVar9 & uVar6) == 0) {
      lVar15 = FUN_01950d30(param_1,&local_68);
      if (lVar15 != 0) {
        uVar7 = FUN_0277d6c4(param_3);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
           (lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8), lVar15 != 0)) {
          uVar7 = uVar9 + iVar3 * 6;
          plVar2 = (long *)(param_1 + 0x170) + (ulong)uVar7 * 2;
          if (0x47 < uVar7) {
            plVar2 = (long *)(param_1 + 0x170);
          }
          pcVar11 = (code *)*plVar2;
          if ((plVar2[1] & 1U) != 0) {
            pcVar11 = *(code **)(pcVar11 + *(long *)(lVar15 + (plVar2[1] >> 1)));
          }
          sVar4 = (*pcVar11)();
          if (sVar4 != 0) {
            *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | (byte)(1 << (ulong)(uVar7 % 6));
          }
        }
      }
      uVar6 = uVar6 | 1 << (ulong)uVar9 & 0xffU;
    }
    uVar13 = (ulong)(uVar12 + 1);
  } while ((uVar12 + 1 & 0xff) <= (uint)bVar14);
  *param_2 = *param_3;
  uVar12 = (uint)*(byte *)(param_2 + 4) - (*(byte *)(param_2 + 4) >> 1 & 0x55555555);
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 1);
  uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
  uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
  uVar12 = uVar12 + (uVar12 >> 8);
  *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)((long)param_3 + 3);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
  *(bool *)((long)param_2 + 9) = (uVar12 + (uVar12 >> 0x10) & 0x3f) != 0;
  return;
}

