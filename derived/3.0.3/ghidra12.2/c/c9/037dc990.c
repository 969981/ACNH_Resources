
void FUN_037dc990(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *__dest;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  void *__src;
  
  FUN_037be8c0();
  *(undefined4 *)((long)param_1 + 0x5ec) = 0;
  *param_1 = &PTR_LAB_04b530a0;
  *(undefined2 *)(param_1 + 0xbe) = 0;
  FUN_03797434(param_1 + 0xbf);
  param_1[0x10b] = 0x3ecccccd;
  param_1[0x10c] = 0x1040500000000;
  *(undefined1 *)(param_1 + 0x10d) = 0x10;
  uVar6 = DAT_055f4180;
  param_1[0x107] = DAT_055f4178;
  puVar1 = PTR_DAT_04bdf0c8;
  param_1[0x108] = uVar6;
  uVar7 = DAT_055f4190;
  uVar6 = DAT_055f4188;
  *(undefined1 *)(param_1 + 0x10f) = 1;
  *(undefined4 *)((long)param_1 + 0x87c) = 0;
  param_1[0x110] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x109] = uVar6;
  param_1[0x10a] = uVar7;
  param_1[0x10e] = puVar1;
  puVar2 = PTR_DAT_04bdf1d8;
  param_1[0x114] = 0;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  param_1[0x115] = puVar1;
  puVar2 = puVar2 + 0x10;
  *(undefined1 *)(param_1 + 0x116) = 1;
  *(undefined4 *)((long)param_1 + 0x8b4) = 0;
  param_1[0x117] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  *(undefined1 *)(param_1 + 0x11c) = 0;
  param_1[0x111] = puVar2;
  param_1[0x118] = puVar2;
  puVar3 = PTR_DAT_04bc3e70 + 0x10;
  param_1[0x11e] = 0;
  param_1[0x11d] = puVar3;
  *(undefined4 *)(param_1 + 0x11f) = 0x5a002d;
  *(undefined8 *)((long)param_1 + 0x8fc) = 0x200c040404060600;
  *(undefined1 *)((long)param_1 + 0x904) = 3;
  FUN_03797434(param_1 + 0x121);
  uVar8 = nn::os::GetSystemTick();
  param_1[0x16c] = 0x12c00000000;
  param_1[0x16b] = 0;
  uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  *(undefined1 *)(param_1 + 0x16d) = 0;
  param_1[0x16e] = 0;
  *(undefined4 *)(param_1 + 0x16f) = 0;
  *(uint *)(param_1 + 0x169) = uVar8;
  param_1[0x170] = 0;
  uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
  param_1[0x171] = 0;
  *(undefined4 *)(param_1 + 0x172) = 0;
  *(uint *)((long)param_1 + 0xb4c) = uVar8;
  *(undefined4 *)((long)param_1 + 0xb9c) = 0;
  param_1[0x174] = puVar1;
  uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
  *(undefined1 *)(param_1 + 0x175) = 1;
  *(undefined4 *)((long)param_1 + 0xbac) = 0;
  param_1[0x176] = 0;
  param_1[0x177] = puVar2;
  param_1[0x17a] = 0;
  param_1[0x179] = 0;
  param_1[0x178] = 0;
  *(uint *)(param_1 + 0x16a) = uVar8;
  param_1[0x17b] = puVar1;
  __dest = (void *)((long)param_1 + 0xc24);
  *(undefined8 *)((long)param_1 + 0xb94) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x17c) = 1;
  *(undefined4 *)((long)param_1 + 0xbe4) = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = puVar2;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  *(uint *)((long)param_1 + 0xb54) = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 4;
  puVar1 = PTR_DAT_04bb2a08 + 0x10;
  param_1[0x183] = __dest;
  *(undefined4 *)(param_1 + 0x184) = 0x20;
  puVar2 = PTR_PTR_04bb2238;
  lVar9 = *(long *)PTR_PTR_04bb2238;
  *(undefined1 *)((long)param_1 + 0xc43) = 0;
  param_1[0x182] = puVar1;
  (**(code **)(lVar9 + 0x18))(puVar2);
  __src = *(void **)(puVar2 + 8);
  if (__dest != __src) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
    lVar9 = 0;
    do {
      if (*(char *)(*(long *)(puVar2 + 8) + lVar9) == '\0') goto LAB_037dcc1c;
      lVar4 = *(long *)(puVar2 + 8) + lVar9;
      if (*(char *)(lVar4 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_037dcc1c;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_037dcc1c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_037dcc1c:
    iVar5 = (int)lVar9;
    if (*(int *)(param_1 + 0x184) <= (int)lVar9) {
      iVar5 = *(int *)(param_1 + 0x184) + -1;
    }
    memcpy(__dest,__src,(long)iVar5);
    *(undefined1 *)((long)__dest + (long)iVar5) = 0;
  }
  puVar1 = PTR_DAT_04bb2028;
  param_1[0x18a] = 0;
  puVar2 = PTR_DAT_04bc4060;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x189] = puVar2 + 0x10;
  puVar2 = PTR_DAT_04bc3f30;
  param_1[0x182] = puVar1 + 0x10;
  *(undefined4 *)(param_1 + 0x193) = 0;
  param_1[399] = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  *(undefined8 *)((long)param_1 + 0xc8d) = 0;
  param_1[0x18e] = puVar2 + 0x10;
  puVar2 = PTR_DAT_04bc3e60;
  param_1[0x197] = 0;
  *(undefined8 *)((long)param_1 + 0xcbd) = 0;
  *(undefined4 *)(param_1 + 0x199) = 0;
  *(undefined1 *)((long)param_1 + 0xd14) = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  *(undefined4 *)(param_1 + 0x19a) = 0;
  param_1[0x19b] = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  param_1[0x19d] = 0;
  *(undefined4 *)(param_1 + 0x19e) = 0;
  param_1[0x1a1] = (undefined1 *)((long)param_1 + 0xd14);
  *(undefined4 *)(param_1 + 0x1a2) = 0x20;
  *(undefined1 *)((long)param_1 + 0xd33) = 0;
  param_1[0x1a0] = puVar1 + 0x10;
  param_1[0x194] = puVar2 + 0x10;
  param_1[0x19f] = 0xffffffff00000000;
  return;
}

