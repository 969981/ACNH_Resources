
void FUN_009b4cac(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  
  FUN_009b3624();
  if ((*(short *)(param_1 + 0xf5b50) == 0) &&
     ((DAT_04cd19d8 == 0 || (*(int *)(DAT_04cd19d8 + 0x15c) == 0)))) {
    if (DAT_04c487d4 != -1) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x12 & 1) != 0) {
        return;
      }
    }
    lVar4 = *(long *)PTR_DAT_04bb4fb8;
    if (lVar4 == 0) {
      bVar5 = 0;
    }
    else {
      bVar5 = *(char *)(lVar4 + 0x13d4) != '\0' && *(char *)(lVar4 + 0x13d6) != '\0';
      if (*(char *)(lVar4 + 0x27c4) != '\0' && *(char *)(lVar4 + 0x27c6) != '\0') {
        bVar5 = bVar5 + 1;
      }
      if (*(char *)(lVar4 + 0x3bb4) != '\0' && *(char *)(lVar4 + 0x3bb6) != '\0') {
        bVar5 = bVar5 + 1;
      }
      if (*(char *)(lVar4 + 0x4fa4) != '\0' && *(char *)(lVar4 + 0x4fa6) != '\0') {
        bVar5 = bVar5 + 1;
      }
      if (*(char *)(lVar4 + 0x6394) != '\0' && *(char *)(lVar4 + 0x6396) != '\0') {
        bVar5 = bVar5 + 1;
      }
      if (*(char *)(lVar4 + 0x7784) != '\0' && *(char *)(lVar4 + 0x7786) != '\0') {
        bVar5 = bVar5 + 1;
      }
      if (*(char *)(lVar4 + 0x8b74) != '\0' && *(char *)(lVar4 + 0x8b76) != '\0') {
        bVar5 = bVar5 + 1;
      }
      if (*(char *)(lVar4 + 0x9f64) != '\0' && *(char *)(lVar4 + 0x9f66) != '\0') {
        bVar5 = bVar5 + 1;
      }
    }
    if (3 < bVar5) {
      bVar5 = 4;
    }
    if ((1 < bVar5) || (*(int *)(param_1 + 0xf5b5c) == 0)) {
      if (lVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (uint)(*(char *)(lVar4 + 0x13d4) != '\0' && *(char *)(lVar4 + 0x13d6) != '\0');
        if (*(char *)(lVar4 + 0x27c4) != '\0' && *(char *)(lVar4 + 0x27c6) != '\0') {
          uVar3 = uVar3 + 1;
        }
        if (*(char *)(lVar4 + 0x3bb4) != '\0' && *(char *)(lVar4 + 0x3bb6) != '\0') {
          uVar3 = uVar3 + 1;
        }
        if (*(char *)(lVar4 + 0x4fa4) != '\0' && *(char *)(lVar4 + 0x4fa6) != '\0') {
          uVar3 = uVar3 + 1;
        }
        if (*(char *)(lVar4 + 0x6394) != '\0' && *(char *)(lVar4 + 0x6396) != '\0') {
          uVar3 = uVar3 + 1;
        }
        if (*(char *)(lVar4 + 0x7784) != '\0' && *(char *)(lVar4 + 0x7786) != '\0') {
          uVar3 = uVar3 + 1;
        }
        if (*(char *)(lVar4 + 0x8b74) != '\0' && *(char *)(lVar4 + 0x8b76) != '\0') {
          uVar3 = uVar3 + 1;
        }
        if (*(char *)(lVar4 + 0x9f64) != '\0' && *(char *)(lVar4 + 0x9f66) != '\0') {
          uVar3 = uVar3 + 1;
        }
      }
      if (3 < uVar3) {
        uVar3 = 4;
      }
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      if (*(uint *)(param_1 + 0xf5b68) < 2) {
        uVar2 = (uint)DAT_04c487d4;
        if (uVar2 != 0xffffffff) {
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar2 * 8);
          if (0xff < uVar2) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar1 >> 0x12 & 1) != 0) {
            return;
          }
        }
        if ((DAT_0537d558 == (long *)0x0) ||
           ((*(int *)(*DAT_0537d558 + 0x508) != 4 &&
            ((*(int *)(DAT_0537f040 + 8) == 0 || (**(char **)(DAT_05358908 + 0x2070) == '\0')))))) {
          *(undefined4 *)(param_1 + 0xf5b68) = 1;
          *(uint *)(param_1 + 0xf5b6c) = uVar3;
          *(undefined4 *)(param_1 + 0xf5b78) = 0x96;
        }
      }
    }
  }
  return;
}

