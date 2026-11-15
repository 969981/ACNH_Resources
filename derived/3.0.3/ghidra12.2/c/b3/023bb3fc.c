
/* WARNING: Removing unreachable block (ram,0x023bb6a0) */

void FUN_023bb3fc(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  int iVar7;
  uint *puVar8;
  undefined8 *puVar9;
  float fVar10;
  float local_4c;
  float fStack_48;
  float local_44;
  
  iVar4 = *(int *)(param_1 + 0x178);
  if (iVar4 == 0) {
    if (6 < *(uint *)(param_1 + 0x1c04)) goto LAB_023bb61c;
    if (DAT_054f5738 == 0) {
      if ((DAT_054f08d8 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f08d8);
        puVar8 = &DAT_054f08d0;
        if (iVar4 != 0) {
          DAT_054f08d0 = 0;
          __cxa_guard_release(&DAT_054f08d8);
        }
      }
      else {
        puVar8 = &DAT_054f08d0;
      }
    }
    else {
      puVar8 = (uint *)(DAT_054f5738 + 0x200);
    }
    *puVar8 = *puVar8 | 0x400;
    iVar4 = *(int *)(param_1 + 0x178);
  }
  if (iVar4 == 1) {
    fStack_48 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar9 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_4c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_44 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar9 + 0x4f,&local_4c);
    if ((*(int *)(param_1 + 0x178) != 0) || ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
      iVar4 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
      plVar2 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar2 = *(long **)(param_1 + 0x4c8);
      }
      lVar5 = (**(code **)(*plVar2 + 0x148))();
      iVar7 = iVar4 - *(int *)(lVar5 + 4);
      if (0xb60b5e < iVar7 + 0x5b05afU) {
        iVar3 = 0x15555560;
        iVar4 = -0x15555560;
        iVar7 = (int)((float)iVar7 * 0.2);
        if (iVar7 < 1) {
          iVar3 = -0x5b05b0;
        }
        else {
          iVar4 = 0x5b05b0;
        }
        iVar1 = iVar7;
        if (iVar3 <= iVar7) {
          iVar1 = iVar3;
        }
        if (iVar4 <= iVar7) {
          iVar4 = iVar1;
        }
        iVar4 = iVar4 + *(int *)(lVar5 + 4);
      }
      *(int *)(lVar5 + 4) = iVar4;
    }
  }
LAB_023bb61c:
  local_4c = *(float *)(param_1 + 0x1810);
  if ((int)local_4c - 2U < 3) {
    puVar9 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)(param_1 + 0x4c8);
    }
    fVar10 = (float)FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  }
  else {
    if (local_4c != 8.40779e-45) {
      return;
    }
    fVar10 = -20.0;
    if ((*(long *)PTR_DAT_04bb2200 != 0) &&
       (lVar5 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar5 != 0)) {
      local_4c = 0.0;
      lVar5 = *(long *)(lVar5 + 0x118);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x280);
        fVar10 = 0.0;
        if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 8), lVar5 != 0)) {
          pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x488) + 0xf0))(lVar5 + 0x488);
          fVar10 = *pfVar6;
        }
        lVar5 = FUN_0251e98c(1);
        pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x1560) + 0xf0))(lVar5 + 0x1560);
        fVar10 = fVar10 + *pfVar6;
      }
    }
    puVar9 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)(param_1 + 0x4c8);
    }
  }
  *(float *)((long)puVar9 + 0x2ec) = fVar10;
  *(undefined1 *)((long)puVar9 + 0x2e5) = 1;
  return;
}

