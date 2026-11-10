
uint FUN_00227cb0(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  
  pbVar4 = *(byte **)(param_1 + 8);
  if (pbVar4 != (byte *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x14);
    if (uVar1 != 0) {
      if (*(int *)(param_1 + 0x18) == 1) {
        bVar2 = *pbVar4;
        if (bVar2 == 0) {
          return 0;
        }
        uVar3 = 0;
        pbVar5 = pbVar4;
        do {
          if ((char)bVar2 < '\0') {
            if ((byte)(bVar2 + 0x3e) < 0x1e) {
              lVar6 = 2;
            }
            else if ((bVar2 & 0xf0) == 0xe0) {
              lVar6 = 3;
            }
            else if ((bVar2 & 0xf8) == 0xf0) {
              lVar6 = 4;
            }
            else if ((bVar2 & 0xfc) == 0xf8) {
              lVar6 = 5;
            }
            else {
              if ((bVar2 & 0xfe) != 0xfc) {
                return uVar3;
              }
              lVar6 = 6;
            }
          }
          else {
            lVar6 = 1;
          }
          pbVar5 = pbVar5 + lVar6;
          uVar3 = uVar3 + 1;
          bVar2 = *pbVar5;
        } while (bVar2 != 0 && (long)pbVar5 - (long)pbVar4 < (long)(ulong)uVar1);
      }
      else {
        uVar3 = 0;
        if (*(int *)(param_1 + 0x18) == 2) {
          uVar3 = uVar1 >> 1;
        }
      }
      return uVar3;
    }
  }
  return 0;
}

