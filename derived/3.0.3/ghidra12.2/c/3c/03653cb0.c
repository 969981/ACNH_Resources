
void FUN_03653cb0(long param_1,uint param_2,long param_3,uint param_4,uint param_5,byte param_6)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  uint *puVar4;
  
  if (0xff < param_4) {
    uVar2 = (ulong)(param_4 >> 8);
    plVar3 = (long *)(param_1 + (ulong)(param_2 >> 8) * 0x10 + 0x958);
    puVar4 = (uint *)(param_1 + (ulong)(param_2 >> 8) * 4 + 0x550);
    do {
      uVar1 = (ulong)param_5;
      uVar2 = uVar2 - 1;
      *puVar4 = param_5;
      *(byte *)(plVar3 + -1) = (param_6 ^ 0xff) & 1;
      param_5 = param_5 + 0x100;
      *plVar3 = param_3 + uVar1;
      plVar3 = plVar3 + 2;
      puVar4 = puVar4 + 1;
    } while (uVar2 != 0);
  }
  if ((param_2 & 0xfffff000) == 0x2000) {
    *(undefined8 *)(param_1 + 0x610) = *(undefined8 *)(param_1 + 0x5d0);
    *(undefined8 *)(param_1 + 0xc50) = *(undefined8 *)(param_1 + 0xb50);
    *(undefined8 *)(param_1 + 0xc58) = *(undefined8 *)(param_1 + 0xb58);
    *(undefined8 *)(param_1 + 0xc60) = *(undefined8 *)(param_1 + 0xb60);
    *(undefined8 *)(param_1 + 0xc68) = *(undefined8 *)(param_1 + 0xb68);
    *(undefined4 *)(param_1 + 0x618) = *(undefined4 *)(param_1 + 0x5d8);
    *(undefined8 *)(param_1 + 0xc78) = *(undefined8 *)(param_1 + 0xb78);
    *(undefined8 *)(param_1 + 0xc70) = *(undefined8 *)(param_1 + 0xb70);
    *(undefined4 *)(param_1 + 0x61c) = *(undefined4 *)(param_1 + 0x5dc);
    *(undefined8 *)(param_1 + 0xc88) = *(undefined8 *)(param_1 + 0xb88);
    *(undefined8 *)(param_1 + 0xc80) = *(undefined8 *)(param_1 + 0xb80);
    *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(param_1 + 0x5e0);
    *(undefined8 *)(param_1 + 0xc98) = *(undefined8 *)(param_1 + 0xb98);
    *(undefined8 *)(param_1 + 0xc90) = *(undefined8 *)(param_1 + 0xb90);
    *(undefined4 *)(param_1 + 0x624) = *(undefined4 *)(param_1 + 0x5e4);
    *(undefined8 *)(param_1 + 0xca8) = *(undefined8 *)(param_1 + 0xba8);
    *(undefined8 *)(param_1 + 0xca0) = *(undefined8 *)(param_1 + 0xba0);
    *(undefined4 *)(param_1 + 0x628) = *(undefined4 *)(param_1 + 0x5e8);
    *(undefined8 *)(param_1 + 0xcb8) = *(undefined8 *)(param_1 + 3000);
    *(undefined8 *)(param_1 + 0xcb0) = *(undefined8 *)(param_1 + 0xbb0);
    *(undefined4 *)(param_1 + 0x62c) = *(undefined4 *)(param_1 + 0x5ec);
    *(undefined8 *)(param_1 + 0xcc8) = *(undefined8 *)(param_1 + 0xbc8);
    *(undefined8 *)(param_1 + 0xcc0) = *(undefined8 *)(param_1 + 0xbc0);
    *(undefined4 *)(param_1 + 0x630) = *(undefined4 *)(param_1 + 0x5f0);
    *(undefined8 *)(param_1 + 0xcd8) = *(undefined8 *)(param_1 + 0xbd8);
    *(undefined8 *)(param_1 + 0xcd0) = *(undefined8 *)(param_1 + 0xbd0);
    *(undefined4 *)(param_1 + 0x634) = *(undefined4 *)(param_1 + 0x5f4);
    *(undefined8 *)(param_1 + 0xce8) = *(undefined8 *)(param_1 + 0xbe8);
    *(undefined8 *)(param_1 + 0xce0) = *(undefined8 *)(param_1 + 0xbe0);
    *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x5f8);
    *(undefined8 *)(param_1 + 0xcf8) = *(undefined8 *)(param_1 + 0xbf8);
    *(undefined8 *)(param_1 + 0xcf0) = *(undefined8 *)(param_1 + 0xbf0);
    *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x5fc);
    *(undefined8 *)(param_1 + 0xd08) = *(undefined8 *)(param_1 + 0xc08);
    *(undefined8 *)(param_1 + 0xd00) = *(undefined8 *)(param_1 + 0xc00);
    *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_1 + 0x600);
    *(undefined8 *)(param_1 + 0xd18) = *(undefined8 *)(param_1 + 0xc18);
    *(undefined8 *)(param_1 + 0xd10) = *(undefined8 *)(param_1 + 0xc10);
    *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(param_1 + 0x604);
    *(undefined8 *)(param_1 + 0xd28) = *(undefined8 *)(param_1 + 0xc28);
    *(undefined8 *)(param_1 + 0xd20) = *(undefined8 *)(param_1 + 0xc20);
    *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)(param_1 + 0x608);
    *(undefined8 *)(param_1 + 0xd38) = *(undefined8 *)(param_1 + 0xc38);
    *(undefined8 *)(param_1 + 0xd30) = *(undefined8 *)(param_1 + 0xc30);
  }
  return;
}

