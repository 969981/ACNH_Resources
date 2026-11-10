
undefined8 FUN_00114f80(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = *(long *)(param_3 + 8);
  if (CONCAT11(*(undefined1 *)(lVar4 + 0x26),*(undefined1 *)(lVar4 + 0x27)) == 0) goto LAB_00115264;
  cVar1 = *(char *)(param_3 + 0x60);
  if (cVar1 == '\x01') {
    bVar2 = *(byte *)(param_2 + 0x50);
  }
  else if (cVar1 == '\x02') {
    bVar2 = *(byte *)(param_2 + 0x50);
  }
  else {
    if (cVar1 == '\x03') {
      uVar5 = *(uint *)(lVar4 + 0x70);
    }
    else {
      uVar5 = (*(uint *)(lVar4 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar4 + 8) & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    }
    if ((uVar5 | 1) == 0x20003) {
      if (*(byte *)(param_2 + 0x50) - 3 < 4) {
        if ((ushort)(CONCAT11(*(undefined1 *)(lVar4 + 0x1a),*(undefined1 *)(lVar4 + 0x1b)) >> 1) <
            *(ushort *)(param_2 + 0x4c)) goto LAB_00115264;
      }
      else if ((*(byte *)(param_2 + 0x50) < 2) &&
              ((ushort)(CONCAT11(*(undefined1 *)(lVar4 + 0x16),*(undefined1 *)(lVar4 + 0x17)) >> 1)
               < *(ushort *)(param_2 + 0x4c))) goto LAB_00115264;
    }
    bVar2 = *(byte *)(param_2 + 0x50);
  }
  if (bVar2 < 7) {
                    /* WARNING: Could not recover jumptable at 0x00115008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&UNK_0011500c + (ulong)(byte)(&DAT_04057674)[bVar2] * 4))();
    return uVar3;
  }
LAB_00115264:
  *(undefined1 *)(param_3 + 0x5f) = 4;
  return 0;
}

