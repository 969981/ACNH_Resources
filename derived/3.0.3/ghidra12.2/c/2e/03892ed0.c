
undefined8 FUN_03892ed0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  char local_38 [4];
  byte local_34 [4];
  
  puVar2 = PTR_DAT_04bcb7d8;
  plVar9 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68);
  local_34[0] = (**(code **)(*plVar9 + 0x80))(plVar9);
  if (local_34[0] != 0xff) {
    plVar5 = *(long **)(*(long *)puVar2 + 0x68);
    if (*(byte *)(plVar5 + 4) == local_34[0]) {
      lVar10 = param_1 + 0x4c8;
    }
    else {
      cVar3 = (**(code **)(*plVar5 + 0x158))(plVar5,local_34);
      uVar11 = (uint)cVar3;
      if (*(uint *)(param_1 + 0x4a8) <= uVar11) {
        uVar11 = 0;
      }
      lVar10 = *(long *)(param_1 + 0x4b0) + (long)(int)uVar11 * 0x70;
    }
    uVar6 = (ulong)*(uint *)(lVar10 + 0x58);
    if (0 < (int)*(uint *)(lVar10 + 0x58)) {
      if (**(char **)(lVar10 + 0x60) == -1) {
        uVar8 = 0;
        do {
          if (uVar6 - 1 == uVar8) {
            return 0;
          }
          lVar7 = uVar8 + 1;
          uVar8 = uVar8 + 1;
        } while ((*(char **)(lVar10 + 0x60))[lVar7] == -1);
        if (uVar6 <= uVar8) {
          return 0;
        }
      }
      uVar11 = 0;
      do {
        uVar1 = uVar11;
        if ((uint)uVar6 <= uVar11) {
          uVar1 = 0;
        }
        local_38[0] = *(char *)(*(long *)(lVar10 + 0x60) + (ulong)uVar1);
        if (((local_38[0] != -1) &&
            (uVar6 = (**(code **)(*plVar9 + 0xf0))(plVar9,local_38), (uVar6 & 1) != 0)) &&
           (uVar6 = (**(code **)(*plVar9 + 0x90))(plVar9,local_38), (uVar6 & 1) == 0)) {
          plVar5 = *(long **)(*(long *)puVar2 + 0x68);
          lVar7 = param_1 + 0x4c8;
          if ((char)plVar5[4] != local_38[0]) {
            cVar3 = (**(code **)(*plVar5 + 0x158))(plVar5,local_38);
            uVar1 = (uint)cVar3;
            if (*(uint *)(param_1 + 0x4a8) <= uVar1) {
              uVar1 = 0;
            }
            lVar7 = *(long *)(param_1 + 0x4b0) + (long)(int)uVar1 * 0x70;
          }
          iVar4 = memcmp(*(void **)(lVar10 + 0x60),*(void **)(lVar7 + 0x60),
                         (ulong)*(uint *)(lVar7 + 0x58));
          if (iVar4 != 0) {
            return 0;
          }
        }
        uVar6 = (ulong)*(uint *)(lVar10 + 0x58);
        uVar11 = uVar11 + 1;
        if ((int)*(uint *)(lVar10 + 0x58) <= (int)uVar11) {
          return 1;
        }
      } while( true );
    }
  }
  return 0;
}

