
void FUN_0026a000(int *param_1,long param_2,int *param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  Result *pRVar7;
  int *piVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 *puVar14;
  int local_4b8;
  ErrorResultVariant aEStack_4b4 [12];
  int local_4a8;
  ErrorResultVariant aEStack_4a4 [28];
  undefined1 auStack_488 [64];
  undefined1 auStack_448 [64];
  undefined1 auStack_408 [64];
  undefined1 auStack_3c8 [64];
  long local_388 [14];
  long local_318 [14];
  long local_2a8 [14];
  long local_238 [14];
  long local_1c8 [9];
  long local_180 [9];
  long local_138 [9];
  long local_f0 [9];
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined1 local_a4;
  undefined8 local_98 [4];
  int local_74;
  ErrorResultVariant aEStack_70 [12];
  undefined4 local_64;
  
  uVar5 = FUN_0026ce20();
  if (((((uVar5 & 1) != 0) || (*(char *)(param_2 + 0xd1) != '\0')) || (DAT_04c61168 == 0)) ||
     (*(long *)(param_2 + 0x368) == 0)) {
    local_74 = 0;
    pRVar7 = (Result *)&local_74;
LAB_0026a050:
    local_4a8 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4a4,pRVar7);
    piVar8 = &local_4a8;
    goto LAB_0026a05c;
  }
  iVar3 = param_3[0xe];
  *(char *)(param_2 + 0xd3) = (char)iVar3;
  if ((((char)iVar3 != '\0') && (*(char *)(param_2 + 0xaf) != '\0')) &&
     (FUN_0026a4a4(param_1,param_2,*(undefined8 *)(param_3 + 4),(char)param_3[6]), *param_1 != 0)) {
    return;
  }
  local_74 = 0;
  local_4a8 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_70,(Result *)&local_4a8);
  if ((char)param_3[3] == '\0') {
    uVar10 = 0;
    uVar9 = 0;
  }
  else {
    if (*(long **)(param_2 + 0x38) == (long *)0x0) {
      uVar9 = 1;
    }
    else {
      uVar5 = (**(code **)(**(long **)(param_2 + 0x38) + 0x50))();
      if ((uVar5 & 1) == 0) {
        local_4b8 = 0;
        pRVar7 = (Result *)&local_4b8;
        goto LAB_0026a050;
      }
      uVar9 = (undefined1)param_3[3];
    }
    uVar10 = (undefined1)*(undefined4 *)(param_2 + 0xa8);
  }
  puVar4 = PTR_DAT_04bccf00;
  PTR_DAT_04bccf00[0x119] = uVar10;
  *(undefined1 *)(param_2 + 0xad) = uVar9;
  FUN_00232ac4(&local_4a8);
  if (*(void **)(param_3 + 0xc) == (void *)0x0) {
    memset(&local_4a8,0,0x20);
  }
  else {
    memcpy(&local_4a8,*(void **)(param_3 + 0xc),0x20);
  }
  if ((*(char *)(param_2 + 0xb0) == '\0') && (1 < *(byte *)(param_3 + 6))) {
    local_4b8 = 0x10c07;
LAB_0026a17c:
    local_64 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4b4,(Result *)&local_64);
    piVar8 = &local_4b8;
  }
  else {
    nn::account::Initialize();
    (**(code **)(local_1c8[0] + 0x18))(local_1c8);
    (**(code **)(local_388[0] + 0x18))(local_388);
    local_a8 = 0xff;
    memset(auStack_488,0,0x40);
    local_98[0] = 0;
    FUN_03875e50(param_2 + 0x128);
    *(undefined1 *)(param_2 + 0x198) = 0xff;
    *(undefined8 *)(param_2 + 0x1a0) = 0;
    *(undefined8 *)(param_2 + 0x1a8) = 0;
    (**(code **)(local_180[0] + 0x18))(local_180);
    (**(code **)(local_318[0] + 0x18))(local_318);
    local_a7 = 0xff;
    memset(auStack_448,0,0x40);
    local_98[1] = 0;
    FUN_03875e50(param_2 + 0x1b0);
    *(undefined1 *)(param_2 + 0x220) = 0xff;
    *(undefined8 *)(param_2 + 0x228) = 0;
    *(undefined8 *)(param_2 + 0x230) = 0;
    (**(code **)(local_138[0] + 0x18))(local_138);
    (**(code **)(local_2a8[0] + 0x18))(local_2a8);
    local_a6 = 0xff;
    memset(auStack_408,0,0x40);
    local_98[2] = 0;
    FUN_03875e50(param_2 + 0x238);
    *(undefined1 *)(param_2 + 0x2a8) = 0xff;
    *(undefined8 *)(param_2 + 0x2b0) = 0;
    *(undefined8 *)(param_2 + 0x2b8) = 0;
    (**(code **)(local_f0[0] + 0x18))(local_f0);
    (**(code **)(local_238[0] + 0x18))(local_238);
    local_a5 = 0xff;
    memset(auStack_3c8,0,0x40);
    local_98[3] = 0;
    uVar6 = FUN_03875e50(param_2 + 0x2c0);
    *(undefined1 *)(param_2 + 0x330) = 0xff;
    *(undefined8 *)(param_2 + 0x338) = 0;
    *(undefined8 *)(param_2 + 0x340) = 0;
    *(undefined1 *)(param_2 + 0x348) = 0;
    lVar12 = *(long *)(param_3 + 4);
    if ((lVar12 != 0) && ((char)param_3[6] != '\0')) {
      puVar14 = *(undefined8 **)(param_3 + 8);
      uVar13 = 0;
      do {
        uVar6 = FUN_0026a5c4(&local_4b8,uVar6,lVar12);
        if (local_4b8 == 0) {
          uVar6 = FUN_00227af0(&local_4b8,param_2 + 0x128 + (ulong)*(byte *)(param_2 + 0x348) * 0x88
                               ,lVar12);
          bVar2 = *(byte *)(param_2 + 0x348);
          lVar11 = param_2 + 0x128 + (ulong)bVar2 * 0x88;
          *(undefined1 *)(lVar11 + 0x70) = *(undefined1 *)(lVar12 + 0x70);
          *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(lVar12 + 0x78);
          *(undefined8 *)(lVar11 + 0x80) = *(undefined8 *)(lVar12 + 0x80);
          if (puVar14 != (undefined8 *)0x0) {
            local_98[bVar2] = *puVar14;
          }
          *(byte *)(param_2 + 0x348) = bVar2 + 1;
        }
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 0x88;
        puVar14 = puVar14 + 1;
      } while (uVar13 < *(byte *)(param_3 + 6));
    }
    local_a4 = 4;
    FUN_00261e1c(*(undefined8 *)(param_2 + 0x368),&local_4a8);
    *(char *)(param_2 + 0x11b) = (char)param_3[6];
    lVar12 = DAT_04c61168;
    *(undefined1 *)(param_2 + 0x11a) = *(undefined1 *)((long)param_3 + 0x19);
    *(undefined4 *)(*(long *)(param_2 + 0x18) + 0x60) = 10000;
    iVar3 = param_3[2];
    iVar1 = *param_3;
    *(int *)(*(long *)(param_2 + 0x20) + 100) = iVar3 * 3 + iVar1;
    lVar11 = *(long *)(param_2 + 0x80);
    *(int *)(lVar11 + 0x70) = iVar1;
    *(int *)(lVar11 + 0x74) = iVar3;
    FUN_002ba134(&local_4b8,lVar12,param_3[1]);
    *(short *)(puVar4 + 0xe0) = (short)*param_3;
    *(int *)(puVar4 + 0xdc) = param_3[1];
    FUN_00266dc8(*(undefined8 *)(param_2 + 0x50));
    if (*(long *)(param_2 + 0x350) != 0) {
      FUN_002831d0();
    }
    if (*(char *)(DAT_04c61168 + 0x5b) == '\0') {
LAB_0026a42c:
      FUN_002b9b10(&local_4b8,DAT_04c61168,*(undefined8 *)(param_3 + 10));
      FUN_00229780(&local_74,&local_4b8);
      if (local_74 == 0) {
        *(undefined8 *)(param_2 + 200) = 0;
        *(undefined1 *)(param_2 + 0xd0) = 0;
        FUN_0027fcfc(*(undefined8 *)(param_2 + 0x20));
        if (*(long *)(param_2 + 0x38) != 0) {
          FUN_0027a95c();
        }
        *(undefined2 *)(param_2 + 0x370) = 0;
        local_4b8 = 0;
        *(undefined4 *)(param_2 + 0xa4) = 1;
        *(undefined1 *)(param_2 + 0xd1) = 1;
        goto LAB_0026a17c;
      }
    }
    else {
      FUN_002b9c9c(&local_4b8,DAT_04c61168,0);
      FUN_00229780(&local_74,&local_4b8);
      if (local_74 == 0) goto LAB_0026a42c;
    }
    piVar8 = &local_74;
  }
LAB_0026a05c:
  FUN_002296c4(param_1,piVar8);
  return;
}

