
void FUN_0390e390(long param_1,uint param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  
  if (0 < (int)param_2) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    if (lVar6 == 0) {
      pvVar4 = malloc((ulong)param_2 << 3);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar6 + 8);
        if (lVar3 != 0) {
          param_3 = (long *)(lVar3 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) goto LAB_0390e418;
      }
      pvVar4 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(ulong)param_2 << 3,8);
    }
    if (pvVar4 != (void *)0x0) {
      *(uint *)(param_1 + 0x108) = param_2;
      *(void **)(param_1 + 0x110) = pvVar4;
    }
  }
LAB_0390e418:
  iVar2 = *(int *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (iVar2 != 0) {
    lVar6 = *(long *)(param_1 + 0x110);
    uVar5 = 0;
    do {
      *(undefined8 *)(lVar6 + (-(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3)) = 0;
      uVar1 = uVar5 + 1;
      uVar5 = uVar1 & 0xffffffff;
    } while (iVar2 != (int)uVar1);
  }
  *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) & 0xfc | 2;
  return;
}

