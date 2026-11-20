
undefined8 FUN_03eaa938(undefined8 *param_1,uint *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = (uint *)*param_1;
  if (puVar4 != (uint *)0x0) {
    uVar2 = *puVar4 >> 8;
    cVar1 = *(char *)(param_1 + 1);
    if (cVar1 != '\0') {
      uVar2 = uVar2 & 0xff00 | *puVar4 >> 0x18 | (uVar2 & 0xff) << 0x10;
    }
    if (uVar2 != 0) {
      *(undefined1 *)(param_2 + 1) = *(undefined1 *)((long)puVar4 + (long)param_3 * 8 + 7);
      uVar2 = puVar4[(long)param_3 * 2 + 2];
      uVar3 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      if (cVar1 != '\0') {
        uVar2 = uVar3 >> 0x10 | uVar3 << 0x10;
      }
      *param_2 = uVar2;
      return 1;
    }
  }
  return 0;
}

