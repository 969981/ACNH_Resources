
undefined8 FUN_01c70550(ulong *param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  ushort *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  plVar1 = param_3 + 1;
  uVar5 = (ulong)*(ushort *)((ulong)plVar1 | 2);
  if (uVar5 < 0x3a) {
    if (param_1 != (ulong *)0x0) {
      *(undefined1 *)(param_1 + 8) = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *param_1 = uVar5;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      memcpy(param_1 + 1,(void *)((ulong)plVar1 | 4),uVar5);
    }
    puVar2 = (ushort *)(uVar5 + (long)((ulong)plVar1 | 4));
    uVar5 = (ulong)*puVar2;
    if (uVar5 < 0xd6) {
      puVar2 = puVar2 + 1;
      if (param_2 != (ulong *)0x0) {
        *(undefined8 *)((long)param_2 + 0xd5) = 0;
        param_2[1] = 0;
        param_2[0x19] = 0;
        param_2[0x1a] = 0;
        param_2[2] = 0;
        *param_2 = uVar5;
        param_2[0x17] = 0;
        param_2[0x18] = 0;
        param_2[0x15] = 0;
        param_2[0x16] = 0;
        param_2[0x13] = 0;
        param_2[0x14] = 0;
        param_2[0x11] = 0;
        param_2[0x12] = 0;
        param_2[0xf] = 0;
        param_2[0x10] = 0;
        param_2[0xd] = 0;
        param_2[0xe] = 0;
        param_2[0xb] = 0;
        param_2[0xc] = 0;
        param_2[9] = 0;
        param_2[10] = 0;
        param_2[7] = 0;
        param_2[8] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        memcpy(param_2 + 1,puVar2,uVar5);
      }
      plVar3 = (long *)(uVar5 + (long)puVar2);
      lVar4 = (long)plVar3 - (long)plVar1;
      if (plVar3 <= plVar1) {
        lVar4 = (long)plVar1 - (long)plVar3;
      }
      if (*param_3 == lVar4) {
        return 1;
      }
    }
  }
  if (param_1 != (ulong *)0x0) {
    *param_1 = 0;
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = 0;
  }
  return 0;
}

