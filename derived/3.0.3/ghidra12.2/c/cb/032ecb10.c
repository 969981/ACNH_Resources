
void FUN_032ecb10(undefined8 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  void *__dest;
  void *__src;
  ulong __n;
  undefined4 local_38;
  undefined4 uStack_34;
  
  *(undefined1 *)(param_1 + 0xd2) = 0;
  FUN_032e81e0();
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  FUN_03363ed0(param_1 + 0x8a,*(undefined8 *)param_1[4]);
  puVar4 = (undefined8 *)param_1[4];
  if (param_2 == 0) {
    *(undefined4 *)((long)puVar4 + 0xc) = 0;
    *(undefined2 *)*puVar4 = 0;
  }
  else {
    FUN_03363ed0(puVar4,param_2);
  }
  uVar3 = *(undefined4 *)((long)param_1[4] + 0xc);
  *(undefined4 *)param_1 = uVar3;
  *(undefined4 *)((long)param_1 + 4) = uVar3;
  FUN_03363ed0(param_1 + 0x8a,*(undefined8 *)param_1[4]);
  __dest = (void *)param_1[0xef];
  (**(code **)(param_1[0xd3] + 0x18))(param_1 + 0xd3);
  __src = (void *)param_1[0xd4];
  if (__dest != __src) {
    (**(code **)(param_1[0xd3] + 0x18))(param_1 + 0xd3);
    lVar5 = 0;
    do {
      if (*(short *)(param_1[0xd4] + lVar5 * 2) == 0) goto LAB_032ecc0c;
      lVar1 = param_1[0xd4] + lVar5 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar5 = lVar5 + 1;
        goto LAB_032ecc0c;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar5 = lVar5 + 2;
        goto LAB_032ecc0c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_032ecc0c:
    uVar2 = (uint)lVar5;
    if (*(int *)(param_1 + 0xf0) <= (int)(uint)lVar5) {
      uVar2 = *(int *)(param_1 + 0xf0) - 1;
    }
    __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(__dest,__src,__n);
    *(undefined2 *)((long)__dest + __n) = 0;
  }
  *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)param_1;
  FUN_03363ed0(param_1 + 0x8f,param_1[0x8d]);
  *(undefined4 *)((long)param_1 + 0x614) = *(undefined4 *)((long)param_1 + 0x60c);
  local_38 = *(undefined4 *)((long)param_1 + 0xc);
  uStack_34 = *(undefined4 *)param_1;
  puVar4 = (undefined8 *)param_1[2];
  *(undefined4 *)(param_1 + 0xc3) = *(undefined4 *)(param_1 + 0xc2);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,&local_38);
  }
  return;
}

