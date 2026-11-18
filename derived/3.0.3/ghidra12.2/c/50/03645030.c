
/* WARNING: Type propagation algorithm not settling */

void FUN_03645030(long param_1,uint *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  *param_2 = (uint)*(byte *)(*(long *)(param_1 + 0x40) + 0x39);
  param_2[1] = (uint)*(byte *)(*(long *)(param_1 + 0x40) + 0x3a);
  param_2[2] = (uint)*(byte *)(*(long *)(param_1 + 0x40) + 0x3b);
  param_2[3] = (uint)*(byte *)(*(long *)(param_1 + 0x40) + 0x59);
  param_2[4] = *(uint *)(*(long *)(param_1 + 0x40) + 0x44);
  param_2[5] = *(uint *)(*(long *)(param_1 + 0x40) + 0x40);
  lVar3 = *(long *)(param_1 + 0x48);
  if (*(int *)(lVar3 + 0x138) == 0) {
    uVar4 = 0;
  }
  else {
    uVar6 = 0;
    do {
      uVar4 = uVar6 + *(uint *)(lVar3 + 0x13c);
      *(undefined1 *)((long)param_2 + uVar6 + 0x18) =
           *(undefined1 *)
            (*(long *)(*(long *)(param_1 + 0x48) + (uVar4 >> 8 & 0xffffff) * 0x10 + 0xc00) +
            (uVar4 & 0xff));
      uVar6 = uVar6 + 1;
      uVar4 = (ulong)*(uint *)(lVar3 + 0x138);
    } while (uVar6 < uVar4);
    lVar3 = *(long *)(param_1 + 0x48);
  }
  if (*(int *)(lVar3 + 0x160) == 0) {
    uVar6 = 0;
    iVar2 = *(int *)(lVar3 + 0x188);
  }
  else {
    uVar8 = 0;
    do {
      uVar6 = uVar8 + *(uint *)(lVar3 + 0x164);
      *(undefined1 *)((long)param_2 + uVar8 + uVar4 + 0x18) =
           *(undefined1 *)
            (*(long *)(*(long *)(param_1 + 0x48) + (uVar6 >> 8 & 0xffffff) * 0x10 + 0xc00) +
            (uVar6 & 0xff));
      uVar8 = uVar8 + 1;
      uVar6 = (ulong)*(uint *)(lVar3 + 0x160);
    } while (uVar8 < uVar6);
    lVar3 = *(long *)(param_1 + 0x48);
    iVar2 = *(int *)(lVar3 + 0x188);
  }
  if (iVar2 == 0) {
    uVar8 = 0;
    iVar2 = *(int *)(lVar3 + 0x1b0);
  }
  else {
    uVar10 = 0;
    do {
      uVar8 = uVar10 + *(uint *)(lVar3 + 0x18c);
      *(undefined1 *)((long)param_2 + uVar10 + uVar6 + uVar4 + 0x18) =
           *(undefined1 *)
            (*(long *)(*(long *)(param_1 + 0x48) + (uVar8 >> 8 & 0xffffff) * 0x10 + 0xc00) +
            (uVar8 & 0xff));
      uVar10 = uVar10 + 1;
      uVar8 = (ulong)*(uint *)(lVar3 + 0x188);
    } while (uVar10 < uVar8);
    lVar3 = *(long *)(param_1 + 0x48);
    iVar2 = *(int *)(lVar3 + 0x1b0);
  }
  if (iVar2 == 0) {
    uVar10 = 0;
    iVar2 = *(int *)(lVar3 + 0x1d8);
  }
  else {
    uVar11 = 0;
    do {
      uVar10 = uVar11 + *(uint *)(lVar3 + 0x1b4);
      *(undefined1 *)((long)param_2 + uVar11 + uVar6 + uVar8 + uVar4 + 0x18) =
           *(undefined1 *)
            (*(long *)(*(long *)(param_1 + 0x48) + (uVar10 >> 8 & 0xffffff) * 0x10 + 0xc00) +
            (uVar10 & 0xff));
      uVar11 = uVar11 + 1;
      uVar10 = (ulong)*(uint *)(lVar3 + 0x1b0);
    } while (uVar11 < uVar10);
    lVar3 = *(long *)(param_1 + 0x48);
    iVar2 = *(int *)(lVar3 + 0x1d8);
  }
  if (iVar2 == 0) {
    uVar11 = 0;
    iVar2 = *(int *)(lVar3 + 0x200);
  }
  else {
    uVar12 = 0;
    do {
      uVar11 = uVar12 + *(uint *)(lVar3 + 0x1dc);
      *(undefined1 *)((long)param_2 + uVar12 + uVar6 + uVar10 + uVar8 + uVar4 + 0x18) =
           *(undefined1 *)
            (*(long *)(*(long *)(param_1 + 0x48) + (uVar11 >> 8 & 0xffffff) * 0x10 + 0xc00) +
            (uVar11 & 0xff));
      uVar12 = uVar12 + 1;
      uVar11 = (ulong)*(uint *)(lVar3 + 0x1d8);
    } while (uVar12 < uVar11);
    lVar3 = *(long *)(param_1 + 0x48);
    iVar2 = *(int *)(lVar3 + 0x200);
  }
  if (iVar2 != 0) {
    uVar12 = 0;
    do {
      uVar1 = uVar12 + *(uint *)(lVar3 + 0x204);
      *(undefined1 *)((long)param_2 + uVar12 + uVar6 + uVar11 + uVar10 + uVar8 + uVar4 + 0x18) =
           *(undefined1 *)
            (*(long *)(*(long *)(param_1 + 0x48) + (uVar1 >> 8 & 0xffffff) * 0x10 + 0xc00) +
            (uVar1 & 0xff));
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(lVar3 + 0x200));
    lVar3 = *(long *)(param_1 + 0x48);
  }
  lVar3 = *(long *)(lVar3 + 0x20);
  uVar5 = *(undefined8 *)(lVar3 + 0x1f00);
  uVar7 = *(undefined8 *)(lVar3 + 0x1f08);
  uVar9 = *(undefined8 *)(lVar3 + 0x1f10);
  *(undefined8 *)(param_2 + 0xc0c) = *(undefined8 *)(lVar3 + 0x1f18);
  *(undefined8 *)(param_2 + 0xc0a) = uVar9;
  *(undefined8 *)(param_2 + 0xc08) = uVar7;
  *(undefined8 *)(param_2 + 0xc06) = uVar5;
  memcpy(param_2 + 0xc0e,*(void **)(*(long *)(param_1 + 0x48) + 0x28),0x100);
  return;
}

