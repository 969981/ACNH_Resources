
void FUN_01e73e78(long param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  long lVar6;
  
  if ((*(int *)(param_1 + 0xb038) != 7) || (DAT_04c487d4 == -1)) goto LAB_01e73f8c;
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 1 & 1) == 0) goto LAB_01e73f8c;
  pcVar3 = (char *)&DAT_053fa400;
  if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
    lVar6 = *(long *)(param_1 + 8);
    if (lVar6 == 0) {
LAB_01e73f6c:
      pcVar5 = (char *)0x0;
    }
    else {
      uVar2 = *(uint *)(lVar6 + 0x508);
      if (uVar2 != 0xffffffff) {
        puVar4 = &DAT_053fe348 + (ulong)uVar2 * 0xba0;
        if (9 < uVar2) {
          puVar4 = &DAT_053fe348;
        }
        pcVar3 = puVar4 + 0x658;
        goto LAB_01e73f7c;
      }
      uVar2 = *(uint *)(lVar6 + 0x50c);
      if (uVar2 == 0xffffffff) goto LAB_01e73f6c;
      pcVar3 = &DAT_05454358 + (ulong)uVar2 * 0x2d8;
      if (0x10 < uVar2) {
        pcVar3 = &DAT_05454358;
      }
      pcVar5 = (char *)0x0;
      if (*pcVar3 != '\0') {
        pcVar5 = pcVar3;
      }
    }
    pcVar3 = (char *)&DAT_053fa400;
    if (pcVar5 != (char *)0x0) {
      pcVar3 = pcVar5 + 0x90;
    }
  }
LAB_01e73f7c:
  if (*(int *)(pcVar3 + 8) != 0x10) {
    param_2 = 0x1c2;
  }
LAB_01e73f8c:
  *(undefined4 *)(param_1 + 0xae5c) = param_2;
  return;
}

