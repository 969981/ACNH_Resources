
/* WARNING: Removing unreachable block (ram,0x01c895bc) */

undefined8 FUN_01c894a0(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  undefined8 *puVar13;
  
  puVar4 = PTR_DAT_04bb21d0;
  if ((param_2 & 1) != 0) {
    lVar8 = *(long *)PTR_DAT_04bb21d0;
    piVar10 = *(int **)(lVar8 + 0x28);
    iVar6 = *piVar10;
    piVar10[8] = 0;
    if (iVar6 != 0) {
      lVar11 = *(long *)(piVar10 + 2);
      iVar12 = 0;
      do {
        *(undefined1 *)(lVar11 + (long)iVar12 * 0x1040 + 0x103c) = 0;
        iVar12 = iVar12 + 1;
      } while (iVar6 != iVar12);
    }
    pcVar9 = *(char **)(lVar8 + 0x2070);
    *(undefined1 *)(lVar8 + 0x207b) = 0;
    *(undefined1 *)(lVar8 + 0x207f) = 0;
    if (*pcVar9 != '\0') {
      pcVar9[2] = '\0';
      pcVar9[0] = '\0';
      pcVar9[1] = '\x01';
    }
    FUN_01cab1e0(*(undefined8 *)PTR_DAT_04bc10a8);
    FUN_01c845c4(*(undefined8 *)PTR_DAT_04bc1060);
    puVar5 = PTR_DAT_04bb21d8;
    **(undefined4 **)PTR_DAT_04bc1078 = 0;
    puVar13 = *(undefined8 **)(*(long *)puVar5 + 0x3d0);
    if (((*PTR_DAT_04bc1448 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc1448), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bc1440 = PTR_DAT_04bc1450 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc1448);
    }
    if (puVar13 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)0x0;
    }
    else {
      uVar7 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc1440);
      if ((uVar7 & 1) == 0) {
        puVar13 = (undefined8 *)0x0;
      }
    }
    (*(code *)**(undefined8 **)puVar13[8])();
    FUN_01c939d8(*(undefined8 *)(*(long *)puVar4 + 0xf88));
    FUN_0338b3f0(*(long *)PTR_DAT_04bb2230 + 0x3a8);
    if (*(char *)(*(long *)PTR_DAT_04bb2118 + 0x548) == '\0') {
      nn::oe::SetFocusHandlingMode(0);
    }
    else {
      *(undefined1 *)(*(long *)PTR_DAT_04bb2118 + 0x549) = 1;
    }
    lVar8 = *(long *)PTR_DAT_04bb8930;
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (uVar2 != 0xffffffff) {
      lVar11 = *(long *)(lVar8 + 0x10);
      if (*(uint *)(lVar8 + 8) <= uVar2) {
        uVar2 = 0;
      }
      lVar8 = lVar11 + (long)(int)uVar2 * 0x58;
      bVar3 = *(byte *)(lVar8 + 0x10);
      bVar1 = bVar3 & 0xc1;
      *(byte *)(lVar8 + 0x10) = bVar1;
      if (bVar3 != bVar1) {
        lVar11 = lVar11 + (long)(int)uVar2 * 0x58;
        *(undefined2 *)(lVar11 + 0x3c) = 0;
        *(undefined4 *)(lVar11 + 0x50) = 0x1e;
      }
    }
    *(undefined1 *)(*(long *)PTR_DAT_04bb4910 + 0x88) = 1;
  }
  return 1;
}

