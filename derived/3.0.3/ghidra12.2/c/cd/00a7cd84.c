
char FUN_00a7cd84(byte *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  byte bVar4;
  
  if (DAT_04da56d0 == 0) {
    return '\x01';
  }
  cVar3 = *(char *)(DAT_04da56d0 + 0x3d1);
  if (*(byte *)(DAT_04da56d0 + 0x3d0) < 8 && cVar3 != '\x04') {
    bVar4 = *param_1;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (*(byte *)(DAT_04da56d0 + 0x3d0) == bVar4) {
      puVar1 = (undefined1 *)(DAT_04da56d0 + 0x3d0);
      puVar2 = (undefined1 *)(DAT_04da56d0 + 0x3d1);
      goto joined_r0x00a7cf20;
    }
  }
  cVar3 = *(char *)(DAT_04da56d0 + 0x3d3);
  if (*(byte *)(DAT_04da56d0 + 0x3d2) < 8 && cVar3 != '\x04') {
    bVar4 = *param_1;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (*(byte *)(DAT_04da56d0 + 0x3d2) == bVar4) {
      puVar1 = (undefined1 *)(DAT_04da56d0 + 0x3d2);
      puVar2 = (undefined1 *)(DAT_04da56d0 + 0x3d3);
      goto joined_r0x00a7cf20;
    }
  }
  cVar3 = *(char *)(DAT_04da56d0 + 0x3d5);
  if (*(byte *)(DAT_04da56d0 + 0x3d4) < 8 && cVar3 != '\x04') {
    bVar4 = *param_1;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (*(byte *)(DAT_04da56d0 + 0x3d4) == bVar4) {
      puVar1 = (undefined1 *)(DAT_04da56d0 + 0x3d4);
      puVar2 = (undefined1 *)(DAT_04da56d0 + 0x3d5);
      goto joined_r0x00a7cf20;
    }
  }
  if ((*(byte *)(DAT_04da56d0 + 0x3d6) < 8) &&
     (cVar3 = *(char *)(DAT_04da56d0 + 0x3d7), cVar3 != '\x04')) {
    bVar4 = *param_1;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (*(byte *)(DAT_04da56d0 + 0x3d6) == bVar4) {
      puVar1 = (undefined1 *)(DAT_04da56d0 + 0x3d6);
      puVar2 = (undefined1 *)(DAT_04da56d0 + 0x3d7);
      goto joined_r0x00a7cf20;
    }
  }
  if ((*(byte *)(DAT_04da56d0 + 0x3d8) < 8) &&
     (cVar3 = *(char *)(DAT_04da56d0 + 0x3d9), cVar3 != '\x04')) {
    bVar4 = *param_1;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (*(byte *)(DAT_04da56d0 + 0x3d8) == bVar4) {
      puVar1 = (undefined1 *)(DAT_04da56d0 + 0x3d8);
      puVar2 = (undefined1 *)(DAT_04da56d0 + 0x3d9);
      goto joined_r0x00a7cf20;
    }
  }
  if ((*(byte *)(DAT_04da56d0 + 0x3da) < 8) &&
     (cVar3 = *(char *)(DAT_04da56d0 + 0x3db), cVar3 != '\x04')) {
    bVar4 = *param_1;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (*(byte *)(DAT_04da56d0 + 0x3da) == bVar4) {
      puVar1 = (undefined1 *)(DAT_04da56d0 + 0x3da);
      puVar2 = (undefined1 *)(DAT_04da56d0 + 0x3db);
      goto joined_r0x00a7cf20;
    }
  }
  if ((*(byte *)(DAT_04da56d0 + 0x3dc) < 8) &&
     (cVar3 = *(char *)(DAT_04da56d0 + 0x3dd), cVar3 != '\x04')) {
    bVar4 = *param_1;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (*(byte *)(DAT_04da56d0 + 0x3dc) == bVar4) {
      puVar1 = (undefined1 *)(DAT_04da56d0 + 0x3dc);
      puVar2 = (undefined1 *)(DAT_04da56d0 + 0x3dd);
      goto joined_r0x00a7cf20;
    }
  }
  if (7 < *(byte *)(DAT_04da56d0 + 0x3de)) {
    return '\x02';
  }
  cVar3 = *(char *)(DAT_04da56d0 + 0x3df);
  if (cVar3 == '\x04') {
    return '\x02';
  }
  bVar4 = *param_1;
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  if (*(byte *)(DAT_04da56d0 + 0x3de) != bVar4) {
    return '\x02';
  }
  puVar1 = (undefined1 *)(DAT_04da56d0 + 0x3de);
  puVar2 = (undefined1 *)(DAT_04da56d0 + 0x3df);
joined_r0x00a7cf20:
  if (cVar3 == '\x02') {
    return '\x02';
  }
  *puVar1 = 0xff;
  *puVar2 = 4;
  return cVar3;
}

