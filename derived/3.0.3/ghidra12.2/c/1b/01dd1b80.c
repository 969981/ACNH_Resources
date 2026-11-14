
ulong * FUN_01dd1b80(long param_1,ulong *param_2,ulong *param_3,undefined1 *param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0xe0) + 0x20);
  if (iVar1 != 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 0xe0) + 0x28);
    lVar3 = (long)iVar1 * 8;
    do {
      lVar3 = lVar3 + -8;
      lVar4 = *plVar2;
      if (*param_2 == *(ulong *)(lVar4 + 0x20)) {
        if (*(int *)(lVar4 + 0x28) != 0) {
          plVar2 = *(long **)(lVar4 + 0x30);
          lVar3 = (long)*(int *)(lVar4 + 0x28) << 3;
          goto LAB_01dd1be0;
        }
        break;
      }
      plVar2 = plVar2 + 1;
    } while (*param_2 <= *(ulong *)(lVar4 + 0x20) && lVar3 != 0);
  }
  goto LAB_01dd1c08;
  while( true ) {
    if (uVar6 == *param_3) {
      if ((char)puVar5[0x16c] != '\0') {
        *param_4 = 0;
        return puVar5 + 0x16d;
      }
      if (((byte)puVar5[0x30e] >> 1 & 1) == 0) {
        *param_4 = 0;
        return (ulong *)0x0;
      }
      break;
    }
    plVar2 = plVar2 + 1;
    lVar3 = lVar3 + -8;
    if (lVar3 == 0) break;
LAB_01dd1be0:
    puVar5 = (ulong *)*plVar2;
    uVar6 = *puVar5;
    if (uVar6 == 0 || uVar6 < *param_3) break;
  }
LAB_01dd1c08:
  *param_4 = 1;
  return (ulong *)0x0;
}

