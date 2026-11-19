
void FUN_03bbe490(undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *__dest;
  undefined1 *__src;
  
  __dest = (undefined1 *)((long)param_1 + 0x2c);
  *__dest = 0;
  puVar3 = PTR_DAT_04bb2020;
  *(undefined4 *)(param_1 + 5) = 0x20;
  *(undefined1 *)((long)param_1 + 0x4b) = 0;
  *param_1 = &PTR_LAB_04b7aa50;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[1] = puVar3 + 0x10;
  param_1[2] = &DAT_0407ebb1;
  *(undefined8 *)((long)param_1 + 0xec) = 0xffffffffffffffff;
  param_1[3] = &PTR_LAB_048f9700;
  param_1[4] = __dest;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined2 *)((long)param_1 + 0xf4) = 0;
  param_1[0x1f] = 0x4396000043480000;
  param_1[0x20] = 0x4448000042c80000;
  param_1[0x21] = 0x4120000043c80000;
  param_1[0x22] = 0x803dcccccd;
  param_1[0x23] = 0x3f4ccccd40a00000;
  param_1[0x24] = 0x3e99999a3f4ccccd;
  param_1[0x25] = 0x3e4ccccd3f800000;
  param_1[0x26] = 0x3f8000003e4ccccd;
  param_1[0x27] = &DAT_3f8000003f800000;
  param_1[0x28] = &DAT_3f8000003f800000;
  param_1[0x29] = 0x3dcccccd3f800000;
  param_1[0x2a] = 0x3dcccccd3dcccccd;
  *(undefined2 *)(param_1 + 0x2d) = 0x101;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)((long)param_1 + 0x16a) = 1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x2b] = 0x3f000000;
  param_1[0x2c] = 0;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (undefined1 *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_03bbe62c;
      lVar1 = param_2[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03bbe62c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_03bbe62c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_03bbe62c:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 5) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 5) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    __dest[iVar2] = 0;
  }
  param_1[2] = param_1[4];
  return;
}

