
/* WARNING: Removing unreachable block (ram,0x0212e66c) */
/* WARNING: Removing unreachable block (ram,0x0212e634) */
/* WARNING: Removing unreachable block (ram,0x0212e5fc) */
/* WARNING: Removing unreachable block (ram,0x0212e5c4) */
/* WARNING: Removing unreachable block (ram,0x0212e58c) */
/* WARNING: Removing unreachable block (ram,0x0212e554) */
/* WARNING: Removing unreachable block (ram,0x0212e51c) */
/* WARNING: Removing unreachable block (ram,0x0212e538) */
/* WARNING: Removing unreachable block (ram,0x0212e570) */
/* WARNING: Removing unreachable block (ram,0x0212e5a8) */
/* WARNING: Removing unreachable block (ram,0x0212e5e0) */
/* WARNING: Removing unreachable block (ram,0x0212e618) */
/* WARNING: Removing unreachable block (ram,0x0212e650) */
/* WARNING: Removing unreachable block (ram,0x0212e694) */

void FUN_0212e410(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  byte bVar6;
  
  *param_1 = &PTR_LAB_04a750e0;
  memset(param_1 + 1,0,0x1f8);
  puVar4 = PTR_DAT_04bb37e0;
  puVar3 = PTR_DAT_04bb32e0;
  puVar2 = PTR_DAT_04bb3238;
  lVar5 = -0x1f8;
  do {
    *(undefined8 *)((long)param_1 + lVar5 + 0x200) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0x208) = 0xff;
    *(undefined4 *)((long)param_1 + lVar5 + 0x214) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x21c) = 0xfffe;
    FUN_0277d4ac();
    *(undefined4 *)((long)param_1 + lVar5 + 0x204) = *(undefined4 *)puVar2;
    bVar6 = *puVar3;
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    lVar1 = lVar5 + 0x24;
    *(byte *)((long)param_1 + lVar5 + 0x208) = bVar6;
    *(undefined8 *)((long)param_1 + lVar5 + 0x20c) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x214) = 0;
    *(undefined2 *)((long)param_1 + lVar5 + 0x21c) = *(undefined2 *)puVar4;
    *(undefined *)((long)param_1 + lVar5 + 0x21e) = puVar4[2];
    *(undefined *)((long)param_1 + lVar5 + 0x21f) = puVar4[3];
    *(undefined4 *)((long)param_1 + lVar5 + 0x220) = *(undefined4 *)(puVar4 + 4);
    lVar5 = lVar1;
  } while (lVar1 != 0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x5a] = param_2;
  param_1[0x5b] = 0;
  param_1[0x50] = param_1 + 0x51;
  param_1[0x4f] = 0x900000000;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined4 *)((long)param_1 + 0x74) = 3;
  *(undefined4 *)(param_1 + 0x13) = 4;
  *(undefined4 *)((long)param_1 + 0xbc) = 5;
  *(undefined4 *)(param_1 + 0x1c) = 6;
  *(undefined4 *)((long)param_1 + 0x104) = 7;
  *(undefined4 *)(param_1 + 0x25) = 8;
  *(undefined4 *)((long)param_1 + 0x14c) = 9;
  *(undefined4 *)(param_1 + 0x2e) = 10;
  *(undefined4 *)((long)param_1 + 0x194) = 0xb;
  *(undefined4 *)(param_1 + 0x37) = 0xc;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((long)param_1 + 0x1dc) = 0xd;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  return;
}

