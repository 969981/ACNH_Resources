
undefined8 FUN_03eaa544(undefined8 *param_1,uint *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  if ((int)param_3 < 0) {
    return 0;
  }
  puVar3 = (uint *)*param_1;
  cVar1 = *(char *)(param_1 + 1);
  uVar4 = *puVar3 >> 8;
  if (cVar1 == '\0') {
    if (uVar4 <= param_3) {
      return 0;
    }
  }
  else {
    uVar4 = uVar4 & 0xff00 | *puVar3 >> 0x18 | (uVar4 & 0xff) << 0x10;
    if (uVar4 <= param_3) {
      return 0;
    }
  }
  uVar4 = *(uint *)((long)puVar3 + (ulong)param_3 * 4 + (ulong)(uVar4 + 3 & 0x1fffffc) + 4);
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)((long)puVar3 + (ulong)param_3 + 4);
  uVar2 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  if (cVar1 != '\0') {
    uVar4 = uVar2 >> 0x10 | uVar2 << 0x10;
  }
  *param_2 = uVar4;
  return 1;
}

