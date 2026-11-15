
void FUN_021b21b0(long param_1,short *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  int local_28;
  uint local_24;
  
  if (*param_2 == -2) {
    return;
  }
  if (*(long *)PTR_DAT_04bb4828 == 0) {
    return;
  }
  uVar4 = FUN_01c272b0(*(long *)PTR_DAT_04bb4828,&local_28,param_2);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    uVar9 = 0;
    puVar5 = DAT_055c1b60;
    do {
      if (*(int *)(puVar5 + -1) == local_28) goto LAB_021b2238;
      puVar5 = (undefined8 *)puVar5[1];
      uVar9 = uVar9 + 1;
    } while (puVar5 != &DAT_055c1b58);
  }
  uVar9 = 0xffff;
LAB_021b2238:
  puVar10 = (uint *)(param_1 + 0x55c28);
  lVar6 = *DAT_0537d558;
  bVar8 = *(byte *)(lVar6 + 0x473);
  if ((long)(char)bVar8 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x80;
    if (7 < bVar8) {
      pbVar1 = (byte *)(lVar6 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar6 + 0x472) != bVar8)) {
      puVar10 = (uint *)(param_1 + 0x55c30);
    }
  }
  lVar6 = FUN_0265c2a0(*puVar10);
  if (lVar6 != 0) {
    if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar5 == (undefined8 *)0x0)) {
      iVar3 = *(int *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x10764);
    }
    else {
      uVar4 = (**(code **)*puVar5)();
      iVar3 = *(int *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x10764);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
    if (iVar3 == 4) {
      local_24 = *puVar10;
      lVar6 = *(long *)PTR_DAT_04bb4760 + (ulong)local_24 * 0x15;
      if (0x6c < local_24) {
        lVar6 = *(long *)PTR_DAT_04bb4760;
      }
      if (((uVar9 ^ 0xffffffff) & 0xffff) == 0) {
LAB_021b23c0:
        bVar8 = 0xff;
        uVar7 = 0xff;
      }
      else {
        local_24 = 3;
        puVar2 = (uint *)((long)PTR_DAT_04bc39f8 + ((long)(short)uVar9 & 0xffffffffU) * 2 * 4);
        if ((uVar9 & 0xff00) != 0) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 >> 3 & 1) != 0) {
          if (DAT_055c1b60 != &DAT_055c1b58) {
            uVar7 = 0;
            puVar5 = DAT_055c1b60;
            do {
              if (*(int *)(puVar5 + -1) == 0x6622bd46) {
                bVar8 = (byte)(uVar7 >> 8);
                goto LAB_021b23d4;
              }
              puVar5 = (undefined8 *)puVar5[1];
              uVar7 = uVar7 + 1;
            } while (puVar5 != &DAT_055c1b58);
          }
          goto LAB_021b23c0;
        }
        bVar8 = (byte)(uVar9 >> 8);
        uVar7 = uVar9;
      }
LAB_021b23d4:
      *(char *)(lVar6 + 4) = (char)uVar7;
      *(byte *)(lVar6 + 5) = *(byte *)(lVar6 + 5) & 0xfc | bVar8 & 3;
      *(byte *)(lVar6 + 7) = *(byte *)(lVar6 + 7) & 0xf7 | 4;
    }
  }
  lVar6 = FUN_0265c2a0(puVar10[1]);
  if (lVar6 == 0) {
    return;
  }
  if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar5 == (undefined8 *)0x0)) {
    iVar3 = *(int *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x10764);
  }
  else {
    uVar4 = (**(code **)*puVar5)();
    iVar3 = *(int *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x10764);
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  if (iVar3 != 4) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb4760 + (ulong)puVar10[1] * 0x15;
  if (0x6c < puVar10[1]) {
    lVar6 = *(long *)PTR_DAT_04bb4760;
  }
  if (((uVar9 ^ 0xffffffff) & 0xffff) != 0) {
    puVar10 = (uint *)((long)PTR_DAT_04bc39f8 + ((long)(short)uVar9 & 0xffffffffU) * 2 * 4);
    if ((uVar9 & 0xff00) != 0) {
      puVar10 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar10 >> 3 & 1) == 0) {
LAB_021b253c:
      bVar8 = (byte)(uVar9 >> 8);
      goto LAB_021b2540;
    }
    if (DAT_055c1b60 != &DAT_055c1b58) {
      uVar9 = 0;
      puVar5 = DAT_055c1b60;
      do {
        if (*(int *)(puVar5 + -1) == 0x6622bd46) goto LAB_021b253c;
        puVar5 = (undefined8 *)puVar5[1];
        uVar9 = uVar9 + 1;
      } while (puVar5 != &DAT_055c1b58);
    }
  }
  uVar9 = 0xff;
  bVar8 = 0xff;
LAB_021b2540:
  *(char *)(lVar6 + 4) = (char)uVar9;
  *(byte *)(lVar6 + 5) = *(byte *)(lVar6 + 5) & 0xfc | bVar8 & 3;
  *(byte *)(lVar6 + 7) = *(byte *)(lVar6 + 7) & 0xf7 | 4;
  return;
}

