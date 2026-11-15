
undefined8 FUN_02112f44(long param_1,long param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  ulong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  bVar4 = *(byte *)(*DAT_0537d558 + 0x473);
  if ((long)(char)bVar4 != 0xffffffffffffffff) {
    pbVar6 = (byte *)(*DAT_0537d558 + 0x48);
    uVar5 = (long)(char)bVar4 & 0xffffffff;
    pbVar2 = pbVar6 + uVar5 * 0x80;
    if (7 < bVar4) {
      pbVar2 = pbVar6;
    }
    if ((*pbVar2 >> 3 & 1) != 0) {
      lVar7 = DAT_0537d558[2] + 0x108 + uVar5 * 0xc;
      if (0xb < bVar4) {
        lVar7 = DAT_0537d558[2] + 0x108;
      }
      if (*(char *)(lVar7 + 10) == '\0') {
        lVar7 = *DAT_0537d558;
        bVar4 = *(byte *)(lVar7 + 0x473);
        pbVar6 = PTR_DAT_04bc1220;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar3 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar6 = (byte *)(lVar7 + 0x473);
          }
        }
        local_18 = 0;
        local_12 = 0;
        local_20 = (ulong)(CONCAT12(*pbVar6 >> 3,
                                    CONCAT11((char)(CONCAT14(*pbVar6,param_3 << 0x18) >> 0x1b),
                                             (char)(param_3 << 5))) & 0x1ffff | 6);
        local_14 = 0xff02;
        if (-1 < *(int *)(param_1 + 8)) {
          FUN_01db1df0(*DAT_0537d558 + 0x480,*(int *)(param_1 + 8),&local_18,&local_20,8,0);
        }
        return 0;
      }
    }
  }
  uVar1 = (*(ushort *)(param_2 + 7) >> 6) + 1;
  *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) & 0xf | (char)uVar1 * '@' | 0x20;
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xc0 | (byte)(uVar1 >> 2) & 0x3f;
  FUN_020ea498(DAT_053e5c10,param_3,0,0);
  return 1;
}

