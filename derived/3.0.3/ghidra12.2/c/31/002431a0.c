
void FUN_002431a0(undefined8 param_1,long *param_2,ushort *param_3,uint param_4)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if ((param_3 == (ushort *)0x0) || (uVar3 = (**(code **)(*param_2 + 0x38))(), param_4 < uVar3)) {
    local_40 = 0x10c07;
  }
  else {
    *(ushort *)((long)param_2 + 0x256) = *param_3 >> 8 | *param_3 << 8;
    *(ushort *)(param_2 + 0x4b) = param_3[1] >> 8 | param_3[1] << 8;
    *(ushort *)((long)param_2 + 0x25a) = param_3[2] >> 8 | param_3[2] << 8;
    *(ushort *)((long)param_2 + 0x25c) = param_3[3] >> 8 | param_3[3] << 8;
    *(bool *)((long)param_2 + 0x25e) = (char)param_3[4] != '\0';
    *(bool *)((long)param_2 + 0x25f) = *(char *)((long)param_3 + 9) != '\0';
    uVar3 = (*(uint *)(param_3 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_3 + 5) & 0xff00ff) << 8;
    *(uint *)(param_2 + 1) = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (*(uint *)(param_3 + 7) & 0xff00ff00) >> 8 | (*(uint *)(param_3 + 7) & 0xff00ff) << 8;
    *(uint *)((long)param_2 + 0xc) = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (*(uint *)(param_3 + 9) & 0xff00ff00) >> 8 | (*(uint *)(param_3 + 9) & 0xff00ff) << 8;
    *(uint *)(param_2 + 4) = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (*(uint *)(param_3 + 0xb) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0xb) & 0xff00ff) << 8;
    *(uint *)((long)param_2 + 0x24) = uVar3 >> 0x10 | uVar3 << 0x10;
    lVar4 = 0;
    do {
      puVar2 = (uint *)((long)param_2 + lVar4 + 0x3c);
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x1a);
      lVar1 = lVar4 + 0x50;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[-5] = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x1e);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[-4] = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x22);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[-3] = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x26);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[-2] = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x2a);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[-1] = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x2e);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      *puVar2 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x32);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[1] = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x36);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[2] = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x3a);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[3] = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x3e);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[4] = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x42);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[5] = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x46);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[6] = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x4a);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[7] = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x4e);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[8] = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x52);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[9] = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x56);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[10] = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x5a);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x5e);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[0xc] = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x62);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[0xd] = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)param_3 + lVar4 + 0x66);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      puVar2[0xe] = uVar3 >> 0x10 | uVar3 << 0x10;
      lVar4 = lVar1;
    } while (lVar1 != 0x1e0);
    local_40 = 0;
    uVar3 = (uint)(byte)param_3[0xfd];
    if (0x13 < uVar3) {
      uVar3 = 0x14;
    }
    *(uint *)(param_2 + 0x41) = uVar3;
    uVar3 = (uint)*(byte *)((long)param_3 + 0x1fb);
    if (0x13 < uVar3) {
      uVar3 = 0x14;
    }
    *(uint *)((long)param_2 + 0x20c) = uVar3;
    uVar3 = (uint)(byte)param_3[0xfe];
    if (0x13 < uVar3) {
      uVar3 = 0x14;
    }
    *(uint *)(param_2 + 0x42) = uVar3;
    uVar3 = (uint)*(byte *)((long)param_3 + 0x1fd);
    if (0x13 < uVar3) {
      uVar3 = 0x14;
    }
    *(uint *)((long)param_2 + 0x214) = uVar3;
    uVar3 = (uint)(byte)param_3[0xff];
    if (0x13 < uVar3) {
      uVar3 = 0x14;
    }
    *(uint *)(param_2 + 0x43) = uVar3;
    uVar3 = (uint)*(byte *)((long)param_3 + 0x1ff);
    if (0x13 < uVar3) {
      uVar3 = 0x14;
    }
    *(uint *)((long)param_2 + 0x21c) = uVar3;
    uVar3 = (*(uint *)(param_3 + 0x100) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0x100) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0x44) = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (*(uint *)(param_3 + 0x102) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0x102) & 0xff00ff) << 8;
    *(uint *)((long)param_2 + 0x224) = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (*(uint *)(param_3 + 0x104) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0x104) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0x45) = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (*(uint *)(param_3 + 0x106) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0x106) & 0xff00ff) << 8;
    *(uint *)((long)param_2 + 0x22c) = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (*(uint *)(param_3 + 0x108) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0x108) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0x46) = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (*(uint *)(param_3 + 0x10a) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0x10a) & 0xff00ff) << 8;
    *(uint *)((long)param_2 + 0x234) = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (*(uint *)(param_3 + 0x10c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0x10c) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0x47) = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (*(uint *)(param_3 + 0x10e) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0x10e) & 0xff00ff) << 8;
    *(uint *)((long)param_2 + 0x23c) = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (*(uint *)(param_3 + 0x110) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0x110) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0x48) = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (*(uint *)(param_3 + 0x112) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0x112) & 0xff00ff) << 8;
    *(uint *)((long)param_2 + 0x244) = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (*(uint *)(param_3 + 0x114) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0x114) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0x49) = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (*(uint *)(param_3 + 0x116) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0x116) & 0xff00ff) << 8;
    *(uint *)((long)param_2 + 0x24c) = uVar3 >> 0x10 | uVar3 << 0x10;
    *(bool *)(param_2 + 0x4a) = (char)param_3[0x118] != '\0';
    *(bool *)((long)param_2 + 0x251) = *(char *)((long)param_3 + 0x231) != '\0';
    *(bool *)((long)param_2 + 0x252) = (char)param_3[0x119] != '\0';
    *(bool *)((long)param_2 + 0x253) = *(char *)((long)param_3 + 0x233) != '\0';
    *(bool *)((long)param_2 + 0x254) = (char)param_3[0x11a] != '\0';
    *(bool *)((long)param_2 + 0x255) = *(char *)((long)param_3 + 0x235) != '\0';
    uVar3 = (*(uint *)(param_3 + 0x11b) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0x11b) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0x4c) = uVar3 >> 0x10 | uVar3 << 0x10;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

