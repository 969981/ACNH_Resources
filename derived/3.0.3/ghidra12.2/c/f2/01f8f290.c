
undefined1 * FUN_01f8f290(undefined1 *param_1,long param_2)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  
  __dest = param_1 + 0x74;
  *param_1 = (char)*(undefined4 *)(param_2 + 0x18);
  param_1[1] = (char)*(undefined4 *)(param_2 + 0x1c);
  param_1[2] = (char)*(undefined4 *)(param_2 + 0x28);
  param_1[3] = (char)*(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x24) = uVar3;
  *(undefined8 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 100);
  param_1[0x3c] = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x3d) = *(undefined8 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x74);
  param_1[0x4c] = *(undefined1 *)(param_2 + 0x78);
  param_1[0x4d] = *(undefined1 *)(param_2 + 0x79);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x98);
  param_1[0x70] = *(undefined1 *)(param_2 + 0x9c);
  param_1[0x71] = *(undefined1 *)(param_2 + 0x9d);
  param_1[0x72] = *(undefined1 *)(param_2 + 0x9e);
  param_1[0x73] = *(undefined1 *)(param_2 + 0x9f);
  plVar4 = (long *)(param_2 + 0xa0);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  lVar6 = 0;
  do {
    if (*(char *)(*(long *)(param_2 + 0xa8) + lVar6) == '\0') {
LAB_01f8f404:
      iVar5 = (int)lVar6;
joined_r0x01f8f408:
      if (0x1f < iVar5) goto LAB_01f8f434;
      goto LAB_01f8f40c;
    }
    lVar1 = *(long *)(param_2 + 0xa8) + lVar6;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_01f8f404;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      iVar5 = (int)lVar6 + 2;
      goto joined_r0x01f8f408;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  iVar5 = 0;
LAB_01f8f40c:
  (**(code **)(*(long *)(param_2 + 0xa0) + 0x18))(plVar4);
  memcpy(__dest,*(void **)(param_2 + 0xa8),(long)iVar5);
  __dest[iVar5] = 0;
LAB_01f8f434:
  plVar4 = (long *)(param_2 + 0xd8);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  lVar6 = 0;
  do {
    if (*(char *)(*(long *)(param_2 + 0xe0) + lVar6) == '\0') {
LAB_01f8f494:
      iVar5 = (int)lVar6;
joined_r0x01f8f498:
      if (0x1f < iVar5) {
        return param_1;
      }
      goto LAB_01f8f49c;
    }
    lVar1 = *(long *)(param_2 + 0xe0) + lVar6;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_01f8f494;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      iVar5 = (int)lVar6 + 2;
      goto joined_r0x01f8f498;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  iVar5 = 0;
LAB_01f8f49c:
  (**(code **)(*(long *)(param_2 + 0xd8) + 0x18))(plVar4);
  memcpy(param_1 + 0x94,*(void **)(param_2 + 0xe0),(long)iVar5);
  __dest[(long)iVar5 + 0x20] = 0;
  return param_1;
}

