
void FUN_00156edc(long param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  
  uVar4 = param_2[9];
  if (uVar4 < 0x40) {
    puVar1 = param_2 + 10;
    *param_2 = *param_2 + uVar4 * 8;
    param_2[9] = uVar4 + 1;
    *(undefined1 *)((long)puVar1 + uVar4) = 0x80;
    uVar4 = param_2[9];
    if (uVar4 < 0x39) goto joined_r0x00156f68;
    if (uVar4 < 0x40) {
      do {
        uVar2 = uVar4 + 1;
        param_2[9] = uVar2;
        *(undefined1 *)((long)param_2 + uVar4 + 0x50) = 0;
        uVar4 = uVar2;
      } while (uVar2 != 0x40);
    }
    FUN_001570a8(param_2,puVar1);
    uVar4 = 0;
    do {
      param_2[9] = uVar4 + 1;
      *(undefined1 *)((long)param_2 + uVar4 + 0x50) = 0;
      uVar4 = uVar4 + 1;
joined_r0x00156f68:
    } while (uVar4 != 0x38);
    uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    param_2[0x11] = uVar4 >> 0x20 | uVar4 << 0x20;
    FUN_001570a8(param_2,puVar1);
    lVar5 = 0;
    puVar6 = (undefined1 *)(param_1 + 1);
    do {
      puVar6[-1] = (char)((ulong)*(undefined8 *)((long)param_2 + lVar5 + 8) >> 0x18);
      *puVar6 = (char)((ulong)*(undefined8 *)((long)param_2 + lVar5 + 8) >> 0x10);
      puVar6[1] = (char)((ulong)*(undefined8 *)((long)param_2 + lVar5 + 8) >> 8);
      lVar3 = lVar5 + 8;
      lVar5 = lVar5 + 8;
      puVar6[2] = (char)*(undefined8 *)((long)param_2 + lVar3);
      puVar6 = puVar6 + 4;
    } while (lVar5 != 0x40);
  }
  return;
}

