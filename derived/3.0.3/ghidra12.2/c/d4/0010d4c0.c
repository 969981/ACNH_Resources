
ulong FUN_0010d4c0(long param_1,undefined8 param_2,long param_3,ushort param_4,ushort param_5,
                  char param_6)

{
  short sVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined2 local_98;
  undefined2 local_96;
  ushort local_94;
  ushort local_92;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined2 *local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  uint local_50;
  ushort local_4c;
  ushort local_4a;
  undefined2 local_48;
  
  local_98 = *(undefined2 *)(param_3 + 4);
  local_96 = *(undefined2 *)(param_3 + 6);
  local_94 = param_4 & 0xff;
  local_48 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_92 = param_5 & 0xff;
  local_80 = param_1 + 0x6f510;
  lStack_68 = param_3 + 0xc;
  local_70 = &local_98;
  local_60 = param_3 + 0x7c;
  lStack_58 = param_3 + 0xec;
  local_4c = (ushort)*(byte *)(param_3 + 0x15c);
  local_4a = (ushort)*(byte *)(param_3 + 0x15d);
  local_50 = (uint)*(byte *)(param_3 + 0x15e);
  uStack_78 = param_2;
  if (param_6 == '\0') {
    uVar6 = 0;
    uVar2 = 0;
    puVar5 = (undefined8 *)(param_1 + 0x6f510);
    do {
      pcVar3 = (code *)*puVar5;
      if (pcVar3 != (code *)0x0) {
        if (1 < *(byte *)(puVar5 + 9) - 1) {
          if (*(byte *)(puVar5 + 9) == 3) {
            uVar4 = *(uint *)(pcVar3 + 0x70) & 0xfffffffe;
          }
          else {
            uVar4 = (*(uint *)(pcVar3 + 8) & 0xff00ff00) >> 8 |
                    (*(uint *)(pcVar3 + 8) & 0xff00ff) << 8;
            uVar4 = uVar4 >> 0x10 & 0xfffffffe | uVar4 << 0x10;
          }
          if (uVar4 != 0xe0000) {
            if ((short)uVar2 < 0) {
              return uVar2;
            }
            goto LAB_0010d6cc;
          }
        }
        local_48 = (undefined2)uVar6;
        sVar1 = (*pcVar3)(param_1,6,&local_90);
        uVar4 = (uint)sVar1;
        uVar2 = (ulong)uVar4;
        if ((int)uVar4 < 0) goto LAB_0010d6e0;
      }
LAB_0010d6cc:
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 10;
    } while (uVar6 < 0x14);
  }
  else {
    uVar6 = 0;
    uVar2 = 0;
    pbVar7 = (byte *)(param_1 + 0x6f558);
    do {
      pcVar3 = *(code **)(pbVar7 + -0x48);
      if (pcVar3 != (code *)0x0) {
        if (*pbVar7 - 1 < 2) {
LAB_0010d588:
          local_48 = (undefined2)uVar6;
          sVar1 = (*pcVar3)(param_1,6,&local_90);
          uVar4 = (uint)sVar1;
          uVar2 = (ulong)uVar4;
          if ((int)uVar4 < 0) {
LAB_0010d6e0:
            return (ulong)(uVar4 << 8 | 0xffff8090);
          }
        }
        else {
          if (*pbVar7 == 3) {
            uVar4 = *(uint *)(pcVar3 + 0x70);
            if ((int)uVar4 < 0xe0000) goto LAB_0010d608;
LAB_0010d5bc:
            if (uVar4 - 0xe0000 < 2) goto LAB_0010d588;
            if ((uVar4 + 0xbffb0000 < 2) || (uVar4 == 0x40000006)) {
              uVar2 = FUN_001284e0(param_1,param_2,param_3,uVar6 & 0xffffffff);
              if ((short)uVar2 < 0) {
                return uVar2;
              }
              goto LAB_0010d638;
            }
          }
          else {
            uVar4 = (*(uint *)(pcVar3 + 8) & 0xff00ff00) >> 8 |
                    (*(uint *)(pcVar3 + 8) & 0xff00ff) << 8;
            uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
            if (0xdffff < (int)uVar4) goto LAB_0010d5bc;
LAB_0010d608:
            if ((uVar4 - 0x50000 < 2) || (uVar4 == 6)) {
              uVar2 = FUN_0013a440(param_1,param_2,param_3,uVar6 & 0xffffffff);
            }
          }
          if ((short)uVar2 < 0) {
            return uVar2;
          }
        }
      }
LAB_0010d638:
      uVar6 = uVar6 + 1;
      pbVar7 = pbVar7 + 0x50;
    } while (uVar6 < 0x14);
  }
  return uVar2;
}

