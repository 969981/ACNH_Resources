
void FUN_026f0170(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  
  if (*(int *)(param_1 + 0x94) == 1 && *(int *)(param_1 + 0x90) == param_2) {
    lVar6 = 0;
  }
  else if ((*(int *)(param_1 + 0x9c) == 1) && (*(int *)(param_1 + 0x98) == param_2)) {
    lVar6 = 1;
  }
  else {
    if (((((*(int *)(param_1 + 0xa4) != 1) || (*(int *)(param_1 + 0xa0) != param_2)) &&
         ((*(int *)(param_1 + 0xac) != 1 || (*(int *)(param_1 + 0xa8) != param_2)))) &&
        ((*(int *)(param_1 + 0xb4) != 1 || (*(int *)(param_1 + 0xb0) != param_2)))) &&
       (((*(int *)(param_1 + 0xbc) != 1 || (*(int *)(param_1 + 0xb8) != param_2)) &&
        ((*(int *)(param_1 + 0xc4) != 1 || (*(int *)(param_1 + 0xc0) != param_2)))))) {
      if (*(int *)(param_1 + 0xcc) != 1) {
        return;
      }
      if (*(int *)(param_1 + 200) != param_2) {
        return;
      }
    }
    if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0xa0) == param_2)) {
      lVar6 = 2;
    }
    else if ((*(int *)(param_1 + 0xac) == 1) && (*(int *)(param_1 + 0xa8) == param_2)) {
      lVar6 = 3;
    }
    else if ((*(int *)(param_1 + 0xb4) == 1) && (*(int *)(param_1 + 0xb0) == param_2)) {
      lVar6 = 4;
    }
    else if ((*(int *)(param_1 + 0xbc) == 1) && (*(int *)(param_1 + 0xb8) == param_2)) {
      lVar6 = 5;
    }
    else if ((*(int *)(param_1 + 0xc4) == 1) && (*(int *)(param_1 + 0xc0) == param_2)) {
      lVar6 = 6;
    }
    else {
      if (*(int *)(param_1 + 0xcc) != 1) {
        return;
      }
      if (*(int *)(param_1 + 200) != param_2) {
        return;
      }
      lVar6 = 7;
    }
  }
  ((int *)(param_1 + 0x90))[lVar6 * 2 + 1] = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + lVar6 * 8 + 0x60), lVar4 != 0)) {
    pvVar7 = *(void **)(lVar4 + 0x10);
    if (pvVar7 != (void *)0x0) {
      memset(pvVar7,0,0x74a40);
      *(undefined8 *)((long)pvVar7 + 0x40) = 0;
      *(undefined2 *)((long)pvVar7 + 0xe) = 0xffff;
      *(undefined8 *)((long)pvVar7 + 0x46) = 0;
      *(undefined2 *)((long)pvVar7 + 0x4e) = 0xffff;
      FUN_027ee494((long)pvVar7 + 0x110);
      FUN_028119e0((long)pvVar7 + 0x37be0);
      lVar4 = *(long *)(*(long *)(param_1 + 0x10) + lVar6 * 8 + 0x60);
    }
    pvVar7 = *(void **)(lVar4 + 0x18);
    if (pvVar7 != (void *)0x0) {
      memset(pvVar7,0,0x74a40);
      *(undefined8 *)((long)pvVar7 + 0x40) = 0;
      *(undefined2 *)((long)pvVar7 + 0xe) = 0xffff;
      *(undefined8 *)((long)pvVar7 + 0x46) = 0;
      *(undefined2 *)((long)pvVar7 + 0x4e) = 0xffff;
      FUN_027ee494((long)pvVar7 + 0x110);
      FUN_028119e0((long)pvVar7 + 0x37be0);
    }
  }
  if ((*(long *)(param_1 + 0x60) != 0) && ((uint)lVar6 < *(uint *)(param_1 + 0x58))) {
    pvVar7 = (void *)(*(long *)(param_1 + 0x60) + lVar6 * 0x300);
    memset(pvVar7,0,0x300);
    *(undefined8 *)((long)pvVar7 + 0x40) = 0;
    *(undefined2 *)((long)pvVar7 + 0xe) = 0xffff;
    *(undefined8 *)((long)pvVar7 + 0x46) = 0;
    *(undefined2 *)((long)pvVar7 + 0x4e) = 0xffff;
    memset((void *)((long)pvVar7 + 0x100),0,0x200);
    uVar5 = 0;
    do {
      uVar2 = uVar5 << 2;
      uVar3 = uVar5 >> 0x1f;
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar1;
      *(undefined4 *)((long)pvVar7 + 0x100 + (-uVar3 & 0xfffffffc00000000 | uVar2)) = 0;
    } while (uVar1 != 0x80);
  }
  return;
}

