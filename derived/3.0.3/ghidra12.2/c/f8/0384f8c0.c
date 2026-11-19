
void FUN_0384f8c0(long param_1,long *param_2,uint param_3,uint param_4)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  void *__dest;
  void *__src;
  long lVar7;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar3 = *(uint *)(*(long *)(param_1 + 0x78) + 0x18);
  }
  if (uVar3 <= param_3) {
    param_3 = 0;
  }
  uVar3 = param_3;
  if (*(uint *)(param_1 + 0x80) <= param_3) {
    uVar3 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + (long)(int)uVar3 * 0xe8 + 0xc0) = 0;
  lVar7 = *(long *)(param_1 + 0x88);
  uVar3 = param_3;
  if (*(uint *)(param_1 + 0x80) <= param_3) {
    uVar3 = 0;
  }
  lVar5 = lVar7 + (long)(int)uVar3 * 0xe8;
  __dest = *(void **)(lVar5 + 0x68);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') {
LAB_0384f9c8:
        iVar4 = (int)lVar6;
        goto LAB_0384f9cc;
      }
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0384f9c8;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0384f9c8;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    iVar4 = 0;
LAB_0384f9cc:
    if (*(int *)(lVar5 + 0x70) <= iVar4) {
      iVar4 = *(int *)(lVar5 + 0x70) + -1;
    }
    memcpy(__dest,__src,(long)iVar4);
    *(undefined1 *)((long)__dest + (long)iVar4) = 0;
  }
  (**(code **)(*(long *)(lVar5 + 0x60) + 0x18))((long *)(lVar5 + 0x60));
  uVar2 = FUN_006bd550(*(undefined8 *)(lVar5 + 0x68),0);
  *(undefined4 *)(lVar7 + (long)(int)uVar3 * 0xe8 + 0xb8) = uVar2;
  uVar3 = param_3;
  if (*(uint *)(param_1 + 0x80) <= param_3) {
    uVar3 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + (long)(int)uVar3 * 0xe8 + 0xc4) =
       *(undefined4 *)(param_1 + 0xb0);
  uVar3 = param_3;
  if (*(uint *)(param_1 + 0x80) <= param_3) {
    uVar3 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + (long)(int)uVar3 * 0xe8 + 200) = 0;
  if (*(char *)(param_1 + 0xae) == '\0') {
    return;
  }
  FUN_03ec2f1c(*(undefined8 *)(param_1 + 0x78),param_2,param_3,param_4 & 1,0,0);
  return;
}

