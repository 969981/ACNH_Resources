
/* WARNING: Removing unreachable block (ram,0x03eb1880) */

undefined8 FUN_03eb17a0(void)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((*(long *)PTR_DAT_04bb26f0 != 0) && (*(int *)(*(long *)PTR_DAT_04bb26f0 + 0x32c) == 1)) {
    uVar1 = *(uint *)(*(long *)PTR_DAT_04bb26e8 + 0x460);
    uVar4 = (ulong)uVar1;
    if ((int)uVar1 < 1) {
      bVar2 = false;
    }
    else {
      piVar6 = *(int **)(*(long *)PTR_DAT_04bb26e8 + 0x468);
      if (*piVar6 == 1) goto LAB_03eb185c;
      uVar5 = 0;
      do {
        if (uVar4 - 1 == uVar5) {
          uVar5 = uVar4;
          break;
        }
        lVar3 = uVar5 + 1;
        uVar5 = uVar5 + 1;
      } while (piVar6[lVar3] != 1);
      bVar2 = uVar5 < uVar4;
    }
    if (((*(uint *)(*(long *)PTR_DAT_04bbdb80 + 0x490) >> 1 & 1) == 0) && (!bVar2)) {
      lVar3 = *(long *)PTR_DAT_04bb2648;
      goto LAB_03eb1874;
    }
  }
LAB_03eb185c:
  lVar3 = *(long *)PTR_DAT_04bb2648;
LAB_03eb1874:
  return **(undefined8 **)(lVar3 + 0x378);
}

