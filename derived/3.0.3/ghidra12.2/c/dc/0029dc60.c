
void FUN_0029dc60(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  void *__src;
  undefined4 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *__src_00;
  long lVar9;
  undefined8 *__s;
  ulong uVar10;
  undefined4 local_4b8;
  ErrorResultVariant aEStack_4b4 [12];
  int local_4a8 [4];
  undefined4 local_498;
  ErrorResultVariant aEStack_494 [28];
  undefined1 auStack_478 [256];
  undefined1 auStack_378 [736];
  undefined1 local_98 [4];
  char local_94;
  byte local_93;
  undefined4 local_64;
  
  if (param_3 == 0) {
    local_4a8[0] = 0;
    local_498 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_494,(Result *)local_4a8);
    puVar6 = &local_498;
  }
  else {
    FUN_00232ac4(&local_498);
    uVar4 = FUN_0026c8a4(DAT_04c603c8);
    FUN_00262560(local_4a8,uVar4,param_3,&local_498);
    if ((((local_4a8[0] == 0) && (local_94 == '\x04')) && (uVar7 = (ulong)local_93, local_93 != 0))
       && (*(int *)(DAT_04c60f48 + 0x250) != 0)) {
      uVar10 = 0;
      puVar8 = auStack_378;
      __src_00 = auStack_478;
      lVar9 = DAT_04c60f48;
      do {
        if (*(int *)(lVar9 + 0x250) != 0) {
          lVar5 = FUN_002237a8(lVar9 + 0x240);
          lVar1 = 0;
          if (lVar5 != 0) {
            lVar1 = lVar5 - *(int *)(lVar9 + 0x254);
          }
          *(undefined4 *)(lVar1 + 0xa0) = 0;
          *(undefined8 *)(lVar1 + 0x90) = 0;
          *(undefined8 *)(lVar1 + 0x98) = 0;
          *(undefined8 *)(lVar1 + 0x18) = 0;
          *(undefined8 *)(lVar1 + 0x80) = 0;
          *(undefined8 *)(lVar1 + 0x88) = 0;
          *(undefined8 *)(lVar1 + 0x70) = 0;
          *(undefined8 *)(lVar1 + 0x78) = 0;
          __s = (undefined8 *)(lVar1 + 0x10);
          *__s = 0;
          *(undefined8 *)(lVar1 + 0x60) = 0;
          *(undefined8 *)(lVar1 + 0x68) = 0;
          *(undefined8 *)(lVar1 + 0x50) = 0;
          *(undefined8 *)(lVar1 + 0x58) = 0;
          *(undefined8 *)(lVar1 + 0x40) = 0;
          *(undefined8 *)(lVar1 + 0x48) = 0;
          *(undefined8 *)(lVar1 + 0x30) = 0;
          *(undefined8 *)(lVar1 + 0x38) = 0;
          *(undefined8 *)(lVar1 + 0x20) = 0;
          *(undefined8 *)(lVar1 + 0x28) = 0;
          FUN_002236bc(lVar9 + 0x228,lVar9 + 0x228,lVar1);
          memset(__s,0,0x51);
          memset((void *)(lVar1 + 100),0,0x40);
          *(undefined2 *)(lVar1 + 0x61) = 0;
          *(undefined1 *)(lVar1 + 99) = 0xff;
          bVar2 = FUN_00227ad4(puVar8);
          if ((bVar2 & 0xc0) != 0) {
            bVar2 = 0x3f;
          }
          *(byte *)(lVar1 + 0x61) = bVar2;
          __src = (void *)FUN_00227acc(puVar8);
          memcpy(__s,__src,(ulong)*(byte *)(lVar1 + 0x61));
          memcpy((void *)(lVar1 + 100),__src_00,0x40);
          uVar3 = FUN_00227d94(puVar8);
          *(undefined1 *)(lVar1 + 0x62) = uVar3;
          *(undefined1 *)(lVar1 + 99) = local_98[uVar10];
          uVar7 = (ulong)local_93;
          lVar9 = DAT_04c60f48;
        }
        uVar10 = uVar10 + 1;
        puVar8 = puVar8 + 0x70;
        __src_00 = __src_00 + 0x40;
      } while (uVar10 < uVar7);
    }
    local_4b8 = 0;
    local_64 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4b4,(Result *)&local_64);
    puVar6 = &local_4b8;
  }
  FUN_002296c4(param_1,puVar6);
  return;
}

