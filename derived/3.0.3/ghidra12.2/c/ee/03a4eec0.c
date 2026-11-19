
void _INIT_8612(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  
  uVar4 = FUN_03a4ec30(0x5a);
  puVar3 = PTR_DAT_04bb2a08;
  uVar1 = 0;
  if (uVar4 != 0xffffffff) {
    uVar1 = uVar4;
  }
  if (uVar1 < 2) {
    puVar5 = (undefined8 *)(&PTR_s_Depth_32_04b6e180)[uVar1];
  }
  else {
    puVar5 = &DAT_0407ebb1;
  }
  DAT_05aea5bb = 0;
  DAT_05aea598 = 0x20;
  DAT_05aea588 = PTR_DAT_04bb2a08 + 0x10;
  DAT_05aea590 = &DAT_05aea59c;
  if (puVar5 != (undefined8 *)&DAT_05aea59c) {
    lVar7 = 0;
    do {
      if (*(char *)((long)puVar5 + lVar7) == '\0') {
LAB_03a4ef78:
        iVar6 = (int)lVar7;
joined_r0x03a4ef7c:
        if (0x1f < iVar6) {
          iVar6 = 0x1f;
        }
        goto LAB_03a4ef84;
      }
      if (*(char *)((long)puVar5 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_03a4ef78;
      }
      if (*(char *)((long)puVar5 + lVar7 + 2) == '\0') {
        iVar6 = (int)lVar7 + 2;
        goto joined_r0x03a4ef7c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    iVar6 = 0;
LAB_03a4ef84:
    memcpy(&DAT_05aea59c,puVar5,(long)iVar6);
    (&DAT_05aea59c)[iVar6] = 0;
  }
  puVar2 = PTR_DAT_04bb2028;
  DAT_05aea588 = PTR_DAT_04bb2028 + 0x10;
  uVar4 = FUN_03a4ed5c(0x26);
  uVar1 = 0;
  if (uVar4 != 0xffffffff) {
    uVar1 = uVar4;
  }
  if (uVar1 < 4) {
    puVar5 = (undefined8 *)(&PTR_s_R32_G32_float_04b6e1d0)[uVar1];
  }
  else {
    puVar5 = &DAT_0407ebb1;
  }
  DAT_05aea5f3 = 0;
  DAT_05aea5d0 = 0x20;
  DAT_05aea5c0 = puVar3 + 0x10;
  DAT_05aea5c8 = &DAT_05aea5d4;
  if (puVar5 != (undefined8 *)&DAT_05aea5d4) {
    lVar7 = 0;
    do {
      if (*(char *)((long)puVar5 + lVar7) == '\0') {
LAB_03a4f058:
        iVar6 = (int)lVar7;
joined_r0x03a4f05c:
        if (0x1f < iVar6) {
          iVar6 = 0x1f;
        }
        goto LAB_03a4f064;
      }
      if (*(char *)((long)puVar5 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_03a4f058;
      }
      if (*(char *)((long)puVar5 + lVar7 + 2) == '\0') {
        iVar6 = (int)lVar7 + 2;
        goto joined_r0x03a4f05c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    iVar6 = 0;
LAB_03a4f064:
    memcpy(&DAT_05aea5d4,puVar5,(long)iVar6);
    (&DAT_05aea5d4)[iVar6] = 0;
  }
  DAT_05aea5c0 = puVar2 + 0x10;
  return;
}

