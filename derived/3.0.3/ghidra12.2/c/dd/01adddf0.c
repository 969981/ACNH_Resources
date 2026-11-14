
undefined8 FUN_01adddf0(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 local_40;
  undefined8 local_38;
  
  if (DAT_04c487d4 == 0xffff) {
    return 0;
  }
  puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
  if (0xff < DAT_04c487d4) {
    puVar5 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar5 >> 5 & 1) == 0) {
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
    if (0xff < DAT_04c487d4) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar5 >> 6 & 1) != 0) goto LAB_01added8;
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
    if (0xff < DAT_04c487d4) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar5 >> 7 & 1) != 0) goto LAB_01added8;
  }
  else {
LAB_01added8:
    local_38 = 0;
    local_40 = (uint)CONCAT12(*(undefined1 *)(param_2 + 2),1);
    uVar4 = FUN_01adc980(param_1,&local_40);
    if ((uVar4 & 1) != 0) {
      puVar5 = *(uint **)(param_1 + 0x10);
      if (puVar5 == (uint *)0x0) {
        return 0;
      }
      uVar3 = *puVar5;
      if (uVar3 == 0) {
        return 0;
      }
      if (puVar5 == (uint *)(ulong)uVar3) {
        return 0;
      }
      puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      if (*puVar6 == 0) {
        return 0;
      }
      uVar3 = puVar6[1];
      if (uVar3 == 0) {
        return 0;
      }
      if ((ulong)(ushort)puVar6[2] == 0) {
        return 0;
      }
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 == 0) {
        return 0;
      }
      uVar2 = 0;
      if ((ulong)uVar3 != 0) {
        uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar3);
      }
      if (*puVar6 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      if (DAT_05326ec0 <= uVar2) {
        return 0;
      }
      if (*(short *)(DAT_05326ec8 + (long)(int)uVar2 * 2) != 0x78) {
        return 0;
      }
      if (*(long *)(param_2 + 8) == 0) {
        return 1;
      }
      uVar4 = FUN_016f2b38();
      goto joined_r0x01ade0ec;
    }
    if (DAT_04c487d4 == 0xffff) {
      return 0;
    }
  }
  puVar5 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 8);
  if (0xff < DAT_04c487d4) {
    puVar5 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar5 & 1) != 0) {
    return 0;
  }
  puVar5 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 8);
  if (0xff < DAT_04c487d4) {
    puVar5 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar5 >> 1 & 1) == 0) {
    return 0;
  }
  local_40 = 0x19;
  if ((*puVar5 >> 0x19 & 1) != 0) {
    return 0;
  }
  puVar5 = *(uint **)(param_1 + 0x10);
  if (puVar5 == (uint *)0x0) {
    return 0;
  }
  uVar3 = *puVar5;
  if (uVar3 == 0) {
    return 0;
  }
  if (puVar5 == (uint *)(ulong)uVar3) {
    return 0;
  }
  puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
  if (*puVar6 == 0) {
    return 0;
  }
  uVar3 = puVar6[1];
  if (uVar3 == 0) {
    return 0;
  }
  if ((ulong)(ushort)puVar6[2] == 0) {
    return 0;
  }
  lVar1 = 0xc;
  if (*(char *)((long)puVar6 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  if ((ulong)uVar3 != 0) {
    uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar3);
  }
  if (*puVar6 <= uVar2) {
    uVar2 = 0xffffffff;
  }
  if (DAT_05326ec0 <= uVar2) {
    return 0;
  }
  if (*(short *)(DAT_05326ec8 + (long)(int)uVar2 * 2) != 0x78) {
    return 0;
  }
  if (*(long *)(param_2 + 8) == 0) {
    return 1;
  }
  uVar4 = FUN_016f2b38();
joined_r0x01ade0ec:
  if ((uVar4 & 1) == 0) {
    return 1;
  }
  return 0;
}

