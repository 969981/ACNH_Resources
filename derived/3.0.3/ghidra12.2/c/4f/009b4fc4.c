
void FUN_009b4fc4(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  
  FUN_009b3624();
  if (*(short *)(param_1 + 0xf5b50) != 0) {
    return;
  }
  if ((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
    return;
  }
  if (DAT_04c487d4 != -1) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x12 & 1) != 0) {
      return;
    }
  }
  lVar8 = *(long *)PTR_DAT_04bb4fb8;
  if (lVar8 == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = *(char *)(lVar8 + 0x13d4) != '\0' && *(char *)(lVar8 + 0x13d6) != '\0';
    if (*(char *)(lVar8 + 0x27c4) != '\0' && *(char *)(lVar8 + 0x27c6) != '\0') {
      bVar6 = bVar6 + 1;
    }
    if (*(char *)(lVar8 + 0x3bb4) != '\0' && *(char *)(lVar8 + 0x3bb6) != '\0') {
      bVar6 = bVar6 + 1;
    }
    if (*(char *)(lVar8 + 0x4fa4) != '\0' && *(char *)(lVar8 + 0x4fa6) != '\0') {
      bVar6 = bVar6 + 1;
    }
    if (*(char *)(lVar8 + 0x6394) != '\0' && *(char *)(lVar8 + 0x6396) != '\0') {
      bVar6 = bVar6 + 1;
    }
    if (*(char *)(lVar8 + 0x7784) != '\0' && *(char *)(lVar8 + 0x7786) != '\0') {
      bVar6 = bVar6 + 1;
    }
    if (*(char *)(lVar8 + 0x8b74) != '\0' && *(char *)(lVar8 + 0x8b76) != '\0') {
      bVar6 = bVar6 + 1;
    }
    if (*(char *)(lVar8 + 0x9f64) != '\0' && *(char *)(lVar8 + 0x9f66) != '\0') {
      bVar6 = bVar6 + 1;
    }
  }
  if (3 < bVar6) {
    bVar6 = 4;
  }
  if ((bVar6 < 2) && (*(int *)(param_1 + 0xf5b5c) != 0)) {
    return;
  }
  uVar3 = (uint)DAT_04c487d4;
  if (uVar3 == 0xffffffff) {
    uVar7 = 0;
  }
  else {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < uVar3) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    uVar7 = *(uint *)(puVar1 + 4) & 1;
  }
  if (lVar8 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)(*(char *)(lVar8 + 0x13d4) != '\0' && *(char *)(lVar8 + 0x13d6) != '\0');
    if (*(char *)(lVar8 + 0x27c4) != '\0' && *(char *)(lVar8 + 0x27c6) != '\0') {
      uVar5 = uVar5 + 1;
    }
    if (*(char *)(lVar8 + 0x3bb4) != '\0' && *(char *)(lVar8 + 0x3bb6) != '\0') {
      uVar5 = uVar5 + 1;
    }
    if (*(char *)(lVar8 + 0x4fa4) != '\0' && *(char *)(lVar8 + 0x4fa6) != '\0') {
      uVar5 = uVar5 + 1;
    }
    if (*(char *)(lVar8 + 0x6394) != '\0' && *(char *)(lVar8 + 0x6396) != '\0') {
      uVar5 = uVar5 + 1;
    }
    if (*(char *)(lVar8 + 0x7784) != '\0' && *(char *)(lVar8 + 0x7786) != '\0') {
      uVar5 = uVar5 + 1;
    }
    if (*(char *)(lVar8 + 0x8b74) != '\0' && *(char *)(lVar8 + 0x8b76) != '\0') {
      uVar5 = uVar5 + 1;
    }
    if (*(char *)(lVar8 + 0x9f64) != '\0' && *(char *)(lVar8 + 0x9f66) != '\0') {
      uVar5 = uVar5 + 1;
    }
  }
  if (3 < uVar5) {
    uVar5 = 4;
  }
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  if (*(uint *)(param_1 + 0xf5b68) < 2) {
    if ((int)DAT_04c487d4 != 0xffffffff) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar3 * 8);
      if (0xff < uVar3) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x12 & 1) != 0) {
        return;
      }
    }
    if ((DAT_0537d558 == (long *)0x0) ||
       ((*(int *)(*DAT_0537d558 + 0x508) != 4 &&
        ((*(int *)(DAT_0537f040 + 8) == 0 || (**(char **)(DAT_05358908 + 0x2070) == '\0')))))) {
      *(uint *)(param_1 + 0xf5b78) = uVar7;
      uVar4 = 1;
      if (uVar7 == 0) {
        uVar4 = 2;
      }
      *(undefined4 *)(param_1 + 0xf5b68) = uVar4;
      *(uint *)(param_1 + 0xf5b6c) = uVar5;
    }
  }
  return;
}

