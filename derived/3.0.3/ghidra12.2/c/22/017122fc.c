
undefined8 FUN_017122fc(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  if (*(long *)(param_1 + 0x1138) == 0) {
    puVar5 = &DAT_04c931a0;
  }
  else {
    puVar5 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x1138) + 0x88) + 0x60);
  }
  local_18 = *(undefined4 *)(puVar5 + 0xb);
  puVar4 = (uint *)FUN_0171ec68(&local_18);
  if (((puVar4 != (uint *)0x0) && (uVar3 = *puVar4, uVar3 != 0)) && (puVar4 != (uint *)(ulong)uVar3)
     ) {
    puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
    if (((*puVar6 != 0) && (uVar3 = puVar6[1], uVar3 != 0)) && ((ulong)(ushort)puVar6[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar3 != 0) {
          uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar3);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_05248f30) && (*(short *)(DAT_05248f38 + (long)(int)uVar2 * 2) == 2)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

