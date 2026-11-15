
long FUN_022f23cc(undefined8 param_1,long param_2,undefined1 param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined2 uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  
  if (DAT_05486910 == -1) {
    lVar6 = 0;
  }
  else if (DAT_05486950 == -1) {
    lVar6 = 1;
  }
  else if (DAT_05486990 == -1) {
    lVar6 = 2;
  }
  else if (DAT_054869d0 == -1) {
    lVar6 = 3;
  }
  else if (DAT_05486a10 == -1) {
    lVar6 = 4;
  }
  else if (DAT_05486a50 == -1) {
    lVar6 = 5;
  }
  else if (DAT_05486a90 == -1) {
    lVar6 = 6;
  }
  else if (DAT_05486ad0 == -1) {
    lVar6 = 7;
  }
  else if (DAT_05486b10 == -1) {
    lVar6 = 8;
  }
  else if (DAT_05486b50 == -1) {
    lVar6 = 9;
  }
  else if (DAT_05486b90 == -1) {
    lVar6 = 10;
  }
  else if (DAT_05486bd0 == -1) {
    lVar6 = 0xb;
  }
  else if (DAT_05486c10 == -1) {
    lVar6 = 0xc;
  }
  else if (DAT_05486c50 == -1) {
    lVar6 = 0xd;
  }
  else if (DAT_05486c90 == -1) {
    lVar6 = 0xe;
  }
  else if (DAT_05486cd0 == -1) {
    lVar6 = 0xf;
  }
  else if (DAT_05486d10 == -1) {
    lVar6 = 0x10;
  }
  else if (DAT_05486d50 == -1) {
    lVar6 = 0x11;
  }
  else if (DAT_05486d90 == -1) {
    lVar6 = 0x12;
  }
  else {
    if (DAT_05486dd0 != -1) {
      return 0xffffffff;
    }
    lVar6 = 0x13;
  }
  lVar5 = lVar6 * 0x40;
  puVar7 = (undefined1 *)((long)&DAT_05486945 + lVar5 + 1);
  *puVar7 = 0;
  *(undefined8 *)(&DAT_05486928 + lVar6 * 0x10) = 0;
  (&DAT_05486938)[lVar6 * 0x10] = 0;
  *(undefined8 *)(&DAT_0548693c + lVar6 * 0x10) = 0xffff000000000000;
  *(undefined2 *)(&DAT_05486944 + lVar5) = 0;
  uVar4 = DAT_04c487d4;
  (&DAT_05486910)[lVar6 * 8] = param_1;
  (&DAT_05486928)[lVar6 * 0x10] = *(undefined4 *)(param_2 + 0x10);
  (&DAT_0548692c)[lVar6 * 0x10] = *(undefined4 *)(param_2 + 0x14);
  (&DAT_05486938)[lVar6 * 0x10] = *(undefined4 *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  (&DAT_05486942)[lVar6 * 0x20] = uVar4;
  (&DAT_05486944)[lVar5] = param_3;
  (&DAT_05486940)[lVar6 * 0x20] = 0x21;
  (&DAT_0548693c)[lVar6 * 0x10] = uVar2;
  lVar5 = **(long **)PTR_DAT_04bb27d0;
  if (1 < *(byte *)(lVar5 + 0x476)) {
    bVar3 = *(byte *)(lVar5 + 0x473);
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar5 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
      if (7 < bVar3) {
        pbVar1 = (byte *)(lVar5 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar5 + 0x472) != bVar3)) {
        return lVar6;
      }
    }
    FUN_022f3680(&DAT_05486945 + lVar6 * 0x20);
    FUN_022f3680(puVar7);
  }
  return lVar6;
}

