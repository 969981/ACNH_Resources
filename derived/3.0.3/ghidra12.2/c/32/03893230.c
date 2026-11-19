
undefined8 FUN_03893230(long param_1)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  byte local_24 [4];
  
  puVar2 = PTR_DAT_04bcb7d8;
  local_24[0] = (**(code **)(**(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68) + 0x80))();
  if (local_24[0] == 0xff) {
LAB_03893388:
    uVar6 = 0;
  }
  else {
    plVar4 = *(long **)(*(long *)puVar2 + 0x68);
    if (*(byte *)(plVar4 + 4) == local_24[0]) {
      lVar8 = param_1 + 0x4c8;
    }
    else {
      cVar3 = (**(code **)(*plVar4 + 0x158))(plVar4,local_24);
      uVar9 = (uint)cVar3;
      if (*(uint *)(param_1 + 0x4a8) <= uVar9) {
        uVar9 = 0;
      }
      lVar8 = *(long *)(param_1 + 0x4b0) + (long)(int)uVar9 * 0x70;
    }
    if (0 < (int)*(uint *)(param_1 + 0x590)) {
      uVar9 = 0;
      do {
        uVar10 = uVar9;
        if (*(uint *)(lVar8 + 0x58) <= uVar9) {
          uVar10 = 0;
        }
        cVar3 = *(char *)(*(long *)(lVar8 + 0x60) + (ulong)uVar10);
        if ((int)cVar3 != 0xffffffff) {
          uVar10 = (uint)cVar3;
          if (*(uint *)(lVar8 + 0x30) < (uint)(int)cVar3 || *(uint *)(lVar8 + 0x30) == uVar10) {
            uVar10 = 0;
          }
          lVar5 = *(long *)(*(long *)(lVar8 + 0x38) +
                           (-(ulong)(uVar10 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar10 << 4));
          if (lVar5 != 0) {
            uVar7 = uVar9;
            if (*(uint *)(param_1 + 0x520) <= uVar9) {
              uVar7 = 0;
            }
            cVar3 = *(char *)(*(long *)(param_1 + 0x528) + (ulong)uVar7);
            if ((int)cVar3 != 0xffffffff) {
              uVar7 = (uint)cVar3;
              if (*(uint *)(param_1 + 0x4f8) < (uint)(int)cVar3 ||
                  *(uint *)(param_1 + 0x4f8) == uVar7) {
                uVar7 = 0;
              }
              if (*(long *)(*(long *)(param_1 + 0x500) +
                           (-(ulong)(uVar7 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar7 << 4)) !=
                  lVar5) goto LAB_03893388;
              lVar5 = *(long *)(param_1 + 0x500) + (long)(int)uVar7 * 0x10;
              lVar1 = *(long *)(lVar8 + 0x38) + (long)(int)uVar10 * 0x10;
              if ((*(char *)(lVar5 + 8) != *(char *)(lVar1 + 8)) ||
                 (*(char *)(lVar5 + 9) != *(char *)(lVar1 + 9))) goto LAB_03893388;
            }
          }
        }
        uVar9 = uVar9 + 1;
      } while (*(uint *)(param_1 + 0x590) != uVar9);
    }
    uVar6 = 1;
  }
  return uVar6;
}

