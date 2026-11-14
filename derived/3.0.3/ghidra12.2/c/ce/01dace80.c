
void FUN_01dace80(void)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  puVar4 = PTR_DAT_04bb27d0;
  plVar6 = *(long **)PTR_DAT_04bb27d0;
  iVar2 = *(int *)(plVar6[2] + 0xaa0);
  if (iVar2 == 3) {
    lVar7 = *plVar6;
    bVar3 = *(byte *)(lVar7 + 0x473);
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
      if (7 < bVar3) {
        pbVar1 = (byte *)(lVar7 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar7 + 0x472) != bVar3)) goto LAB_01dacf14;
    }
    if (((int)plVar6[0x10] == 3) &&
       ((*(byte *)(lVar7 + 0x476) < 2 && (*(long *)PTR_DAT_04bb4770 != 0)))) {
      FUN_014b0df0();
    }
  }
LAB_01dacf14:
  if (*(long *)PTR_DAT_04bb27f0 != 0) {
    FUN_026c3ae8();
  }
  lVar7 = **(long **)puVar4;
  bVar3 = *(byte *)(lVar7 + 0x473);
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar1 = (byte *)(lVar7 + 0x48);
    }
    if ((*pbVar1 >> 3 & 1) != 0) {
      bVar5 = *(byte *)(lVar7 + 0x472) == bVar3;
      goto LAB_01dacf6c;
    }
  }
  bVar5 = true;
LAB_01dacf6c:
  if (iVar2 != 3 && bVar5 != false) {
    lVar7 = *(long *)PTR_DAT_04bc14a0;
    memset((void *)(lVar7 + 8),0xff,0x180);
    FUN_020d4430(lVar7);
  }
  puVar4 = PTR_DAT_04bb26a8;
  *(byte *)(*(long *)PTR_DAT_04bb28b0 + 0x61) = *(byte *)(*(long *)PTR_DAT_04bb28b0 + 0x61) | 1;
  *(uint *)(*(long *)puVar4 + 0xb389c) = *(uint *)(*(long *)puVar4 + 0xb389c) | 0x21;
  lVar7 = *(long *)PTR_DAT_04bc1368;
  if (*(long *)(lVar7 + 8) != lVar7) {
    lVar8 = (long)*(int *)(lVar7 + 0x14);
    plVar6 = (long *)(*(long *)(lVar7 + 8) - lVar8);
    do {
      (**(code **)(*plVar6 + 0x38))(plVar6,bVar5);
      plVar6 = (long *)(*(long *)((long)plVar6 + lVar8 + 8) - lVar8);
    } while (plVar6 != (long *)(lVar7 - lVar8));
  }
  return;
}

