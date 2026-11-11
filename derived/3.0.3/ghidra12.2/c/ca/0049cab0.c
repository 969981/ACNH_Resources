
undefined8 FUN_0049cab0(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  char *pcVar8;
  
  uVar6 = FUN_0049ccd0();
  if (*(uint *)(param_1 + 1) == uVar6) {
    if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar6) {
      FUN_00426990(PTR_DAT_048607b8,param_1,0x20);
      uVar6 = *(uint *)(param_1 + 1);
    }
    puVar2 = (undefined8 *)(*param_1 + (long)(int)uVar6 * 0x20);
    uVar4 = param_2[1];
    *puVar2 = *param_2;
    puVar2[1] = uVar4;
    uVar5 = *param_3;
    *(undefined1 *)(puVar2 + 3) = 0;
    *(undefined4 *)(puVar2 + 2) = uVar5;
    if (*(char *)(param_3 + 2) != '\0') {
      *(undefined4 *)((long)puVar2 + 0x14) = param_3[1];
      *(undefined1 *)(puVar2 + 3) = 1;
    }
    *(uint *)(param_1 + 1) = uVar6 + 1;
    return 1;
  }
  lVar7 = *param_1;
  lVar3 = lVar7 + ((long)((ulong)uVar6 << 0x20) >> 0x1b);
  *(undefined4 *)(lVar3 + 0x10) = *param_3;
  if (*(char *)(param_3 + 2) == '\0') {
    pcVar8 = (char *)(lVar7 + (long)(int)uVar6 * 0x20 + 0x18);
    if (*pcVar8 == '\0') {
      return 0;
    }
    *pcVar8 = '\0';
    return 0;
  }
  pcVar8 = (char *)(lVar7 + (long)(int)uVar6 * 0x20 + 0x18);
  puVar1 = (undefined4 *)(lVar3 + 0x14);
  if (*pcVar8 == '\0') {
    *puVar1 = param_3[1];
    *pcVar8 = '\x01';
    return 0;
  }
  *puVar1 = param_3[1];
  return 0;
}

