
uint * FUN_03eaa9a0(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar6 = (uint *)*param_1;
  if (puVar6 != (uint *)0x0) {
    uVar2 = *puVar6;
    uVar5 = uVar2 >> 8;
    if (*(char *)(param_1 + 1) == '\0') {
      if (0xff < uVar2) {
        iVar4 = 0;
        do {
          uVar2 = uVar5 + iVar4;
          if ((int)uVar2 < 0 != SCARRY4(uVar5,iVar4)) {
            uVar2 = uVar2 + 1;
          }
          uVar3 = (int)uVar2 >> 1;
          uVar1 = *(uint *)((long)puVar6 +
                           (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3) + 4) &
                  0xffffff;
          if (param_2 == uVar1) goto LAB_03eaaa70;
          if ((int)(param_2 - uVar1) < 1) {
            uVar5 = uVar3;
          }
          else {
            iVar4 = uVar3 + 1;
          }
        } while (iVar4 < (int)uVar5);
      }
    }
    else {
      uVar5 = uVar5 & 0xff00 | uVar2 >> 0x18 | (uVar5 & 0xff) << 0x10;
      if (uVar5 != 0) {
        iVar4 = 0;
        do {
          uVar2 = uVar5 + iVar4;
          if ((int)uVar2 < 0 != SCARRY4(uVar5,iVar4)) {
            uVar2 = uVar2 + 1;
          }
          uVar1 = (int)uVar2 >> 1;
          uVar3 = *(uint *)((long)puVar6 +
                           (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3) + 4);
          uVar3 = uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | uVar3 >> 0x10 & 0xff;
          if (param_2 == uVar3) {
LAB_03eaaa70:
            return puVar6 + ((long)((ulong)uVar2 << 0x20) >> 0x21) * 2 + 1;
          }
          if ((int)(param_2 - uVar3) < 1) {
            uVar5 = uVar1;
          }
          else {
            iVar4 = uVar1 + 1;
          }
        } while (iVar4 < (int)uVar5);
      }
    }
  }
  return (uint *)0x0;
}

