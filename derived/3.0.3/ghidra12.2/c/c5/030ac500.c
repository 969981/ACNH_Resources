
/* WARNING: Removing unreachable block (ram,0x030ac540) */

undefined8 FUN_030ac500(long *param_1,undefined4 param_2)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  void *__dest;
  void *__src;
  
  puVar8 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x50);
  if (((*PTR_DAT_04bc8190 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8190), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc8188 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc8190);
  }
  if (puVar8 == (undefined8 *)0x0) {
    return 1;
  }
  uVar4 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc8188);
  if ((uVar4 & 1) == 0) {
    return 1;
  }
  *(undefined4 *)((long)puVar8 + 0x5d4) = param_2;
  __dest = (void *)puVar8[0xbc];
  (**(code **)(*param_1 + 0x18))(param_1);
  __src = (void *)param_1[1];
  if (__dest != __src) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar6 = 0;
    do {
      if (*(char *)(param_1[1] + lVar6) == '\0') goto LAB_030ac5fc;
      lVar1 = param_1[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_030ac5fc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_030ac5fc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_030ac5fc:
    iVar3 = (int)lVar6;
    if (*(int *)(puVar8 + 0xbd) <= (int)lVar6) {
      iVar3 = *(int *)(puVar8 + 0xbd) + -1;
    }
    memcpy(__dest,__src,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  pbVar7 = PTR_DAT_04bb32e0;
  if (lVar6 == 0) {
LAB_030ac684:
    if (7 < *pbVar7) {
LAB_030ac690:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar6 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar6 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar2 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar7 = (byte *)(lVar6 + 0x471);
          }
        }
        bVar5 = *pbVar7;
        if (bVar5 < 8) goto LAB_030ac700;
      }
      pbVar7 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_030ac684;
      }
      goto LAB_030ac690;
    }
  }
  bVar5 = *pbVar7;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
LAB_030ac700:
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  *(byte *)(puVar8 + 0x3f) = bVar5;
  FUN_0345a3f0();
  return 1;
}

