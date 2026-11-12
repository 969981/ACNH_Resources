
void FUN_00a7d284(byte *param_1,undefined1 param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  byte bVar3;
  
  if (DAT_04da56d0 == 0) {
    return;
  }
  if (*(byte *)(DAT_04da56d0 + 0x3d0) < 8 && *(char *)(DAT_04da56d0 + 0x3d1) != '\x04') {
    if (*(byte *)(DAT_04da56d0 + 0x3d2) < 8 && *(char *)(DAT_04da56d0 + 0x3d3) != '\x04') {
      if (*(byte *)(DAT_04da56d0 + 0x3d4) < 8 && *(char *)(DAT_04da56d0 + 0x3d5) != '\x04') {
        pbVar1 = (byte *)(DAT_04da56d0 + 0x3d6);
        puVar2 = (undefined1 *)(DAT_04da56d0 + 0x3d7);
        if ((*(byte *)(DAT_04da56d0 + 0x3d6) < 8) && (*(char *)(DAT_04da56d0 + 0x3d7) != '\x04')) {
          pbVar1 = (byte *)(DAT_04da56d0 + 0x3d8);
          puVar2 = (undefined1 *)(DAT_04da56d0 + 0x3d9);
          if ((*(byte *)(DAT_04da56d0 + 0x3d8) < 8) && (*(char *)(DAT_04da56d0 + 0x3d9) != '\x04'))
          {
            pbVar1 = (byte *)(DAT_04da56d0 + 0x3da);
            puVar2 = (undefined1 *)(DAT_04da56d0 + 0x3db);
            if ((*(byte *)(DAT_04da56d0 + 0x3da) < 8) && (*(char *)(DAT_04da56d0 + 0x3db) != '\x04')
               ) {
              pbVar1 = (byte *)(DAT_04da56d0 + 0x3dc);
              puVar2 = (undefined1 *)(DAT_04da56d0 + 0x3dd);
              if ((*(byte *)(DAT_04da56d0 + 0x3dc) < 8) &&
                 (*(char *)(DAT_04da56d0 + 0x3dd) != '\x04')) {
                pbVar1 = (byte *)(DAT_04da56d0 + 0x3de);
                puVar2 = (undefined1 *)(DAT_04da56d0 + 0x3df);
                if ((*(byte *)(DAT_04da56d0 + 0x3de) < 8) &&
                   (*(char *)(DAT_04da56d0 + 0x3df) != '\x04')) {
                  return;
                }
              }
            }
          }
        }
      }
      else {
        pbVar1 = (byte *)(DAT_04da56d0 + 0x3d4);
        puVar2 = (undefined1 *)(DAT_04da56d0 + 0x3d5);
      }
    }
    else {
      pbVar1 = (byte *)(DAT_04da56d0 + 0x3d2);
      puVar2 = (undefined1 *)(DAT_04da56d0 + 0x3d3);
    }
  }
  else {
    pbVar1 = (byte *)(DAT_04da56d0 + 0x3d0);
    puVar2 = (undefined1 *)(DAT_04da56d0 + 0x3d1);
  }
  bVar3 = *param_1;
  *puVar2 = param_2;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  *pbVar1 = bVar3;
  return;
}

