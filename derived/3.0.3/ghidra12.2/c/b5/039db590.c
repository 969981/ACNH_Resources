
void _INIT_8604(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  undefined *__src;
  
  puVar5 = PTR_PTR_04bb2238;
  uVar8 = 0x20;
  uVar6 = 0x1000;
  do {
    uVar2 = uVar6;
    if (uVar8 <= uVar6) {
      uVar2 = 0;
    }
    uVar3 = 0;
    if (uVar8 <= uVar6) {
      uVar3 = uVar8;
    }
    uVar8 = uVar8 - uVar2;
    uVar6 = uVar6 - uVar3;
  } while (uVar8 != uVar6);
  uVar6 = 0x20;
  uVar2 = 0;
  if (uVar8 != 0) {
    uVar2 = 0x20 / uVar8;
  }
  DAT_05ae9b98 = uVar2 << 0xc;
  uVar8 = 0x1000;
  do {
    uVar2 = uVar8;
    if (uVar6 <= uVar8) {
      uVar2 = 0;
    }
    uVar3 = 0;
    if (uVar6 <= uVar8) {
      uVar3 = uVar6;
    }
    uVar6 = uVar6 - uVar2;
    uVar8 = uVar8 - uVar3;
  } while (uVar6 != uVar8);
  uVar8 = 0;
  if (uVar6 != 0) {
    uVar8 = 0x20 / uVar6;
  }
  DAT_05ae9b9c = uVar8 << 0xc;
  DAT_05ae9bb0 = 0x100;
  DAT_05ae9ba0 = PTR_DAT_04bb4520 + 0x10;
  DAT_05ae9ba8 = &DAT_05ae9bb4;
  DAT_05ae9cb3 = 0;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  __src = *(undefined **)(puVar5 + 8);
  if (__src != &DAT_05ae9bb4) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar7) == '\0') goto LAB_039db6bc;
      lVar1 = *(long *)(puVar5 + 8) + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_039db6bc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_039db6bc;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_039db6bc:
    iVar4 = (int)lVar7;
    if (DAT_05ae9bb0 <= (int)lVar7) {
      iVar4 = DAT_05ae9bb0 + -1;
    }
    memcpy(&DAT_05ae9bb4,__src,(long)iVar4);
    (&DAT_05ae9bb4)[iVar4] = 0;
  }
  DAT_05ae9ba0 = PTR_DAT_04bb21f8 + 0x10;
  return;
}

