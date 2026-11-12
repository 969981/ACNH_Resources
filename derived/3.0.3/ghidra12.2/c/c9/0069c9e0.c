
void FUN_0069c9e0(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  void *__src;
  size_t __n;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  uVar4 = *(uint *)(param_1 + 2);
  uVar6 = (ulong)uVar4;
  if (0 < (int)uVar4) {
    __src = (void *)*param_1;
    iVar5 = 0;
    __n = 0;
    do {
      if (*(long *)((long)__src + __n) == *param_2) {
        if (iVar5 != 1) {
          if (0 < -iVar5) {
            memmove((void *)((long)__src + 0x88),__src,__n);
          }
          goto LAB_0069ca88;
        }
        break;
      }
      __n = __n + 0x88;
      iVar5 = iVar5 + -1;
    } while (uVar6 * 0x88 != __n);
  }
  if (param_1[1] == (long)(int)uVar4) {
    uVar6 = (ulong)(uVar4 - 1);
    *(uint *)(param_1 + 2) = uVar4 - 1;
  }
  iVar5 = (int)uVar6;
  if (0 < iVar5) {
    memmove((void *)(*param_1 + 0x88),(void *)*param_1,uVar6 * 0x88);
    iVar5 = (int)param_1[2];
  }
  *(int *)(param_1 + 2) = iVar5 + 1;
LAB_0069ca88:
  *(long *)*param_1 = *param_2;
  lVar7 = *param_1;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[3];
  *(undefined8 *)(lVar7 + 0x18) = param_3[2];
  *(undefined8 *)(lVar7 + 0x20) = uVar3;
  *(undefined8 *)(lVar7 + 8) = uVar1;
  *(undefined8 *)(lVar7 + 0x10) = uVar2;
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  uVar3 = param_3[7];
  *(undefined8 *)(lVar7 + 0x38) = param_3[6];
  *(undefined8 *)(lVar7 + 0x40) = uVar3;
  *(undefined8 *)(lVar7 + 0x28) = uVar1;
  *(undefined8 *)(lVar7 + 0x30) = uVar2;
  uVar1 = param_3[8];
  uVar2 = param_3[9];
  uVar3 = param_3[0xb];
  *(undefined8 *)(lVar7 + 0x58) = param_3[10];
  *(undefined8 *)(lVar7 + 0x60) = uVar3;
  *(undefined8 *)(lVar7 + 0x48) = uVar1;
  *(undefined8 *)(lVar7 + 0x50) = uVar2;
  uVar1 = param_3[0xc];
  uVar2 = param_3[0xd];
  uVar3 = param_3[0xf];
  *(undefined8 *)(lVar7 + 0x78) = param_3[0xe];
  *(undefined8 *)(lVar7 + 0x80) = uVar3;
  *(undefined8 *)(lVar7 + 0x68) = uVar1;
  *(undefined8 *)(lVar7 + 0x70) = uVar2;
  return;
}

