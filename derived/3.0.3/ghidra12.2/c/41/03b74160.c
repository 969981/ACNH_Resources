
void FUN_03b74160(undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 *__dest;
  undefined1 *__src;
  
  __dest = (undefined1 *)((long)param_1 + 0x2c);
  *__dest = 0;
  param_1[4] = __dest;
  *(undefined4 *)(param_1 + 5) = 0x20;
  *(undefined1 *)((long)param_1 + 0x4b) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[2] = &DAT_0407ebb1;
  param_1[3] = &PTR_LAB_048f9700;
  *param_1 = &PTR_LAB_04b78098;
  param_1[1] = &PTR_LAB_048f9770;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (undefined1 *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_03b7423c;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_03b7423c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_03b7423c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_03b7423c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 5) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 5) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    __dest[iVar2] = 0;
  }
  *(undefined2 *)(param_1 + 0x12) = 0;
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  *param_1 = &PTR_FUN_04b78030;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  param_1[2] = param_1[4];
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x11] = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0xd4) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0xdc) = &DAT_3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0xe4) = 0x3dcccccd3f800000;
  *(undefined1 *)((long)param_1 + 0x10c) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0x3dcccccd3dcccccd;
  *(undefined8 *)((long)param_1 + 0xf4) = 0x3f000000;
  *(undefined2 *)((long)param_1 + 0x104) = 0x101;
  *(undefined1 *)((long)param_1 + 0x106) = 1;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x10;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x94) = 0x4396000043480000;
  *(undefined8 *)((long)param_1 + 0x9c) = 0x4448000042c80000;
  *(undefined8 *)((long)param_1 + 0xa4) = 0x4120000043c80000;
  *(undefined8 *)((long)param_1 + 0xac) = 0x803dcccccd;
  *(undefined8 *)((long)param_1 + 0xb4) = 0x3f4ccccd40a00000;
  *(undefined8 *)((long)param_1 + 0xbc) = 0x3e99999a3f4ccccd;
  *(undefined8 *)((long)param_1 + 0xc4) = 0x3e4ccccd3f800000;
  *(undefined8 *)((long)param_1 + 0xcc) = 0x3f8000003e4ccccd;
  return;
}

