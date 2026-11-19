
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_038504a0(float param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  undefined1 local_144 [255];
  undefined1 local_45;
  
  if (*(char *)(param_2 + 0xae) == '\0') {
    return true;
  }
  lVar6 = *(long *)(param_2 + 0x78);
  if (lVar6 == 0) {
    param_3 = 0;
    uVar8 = 0;
    uVar7 = _SUB_00000018;
  }
  else {
    uVar8 = *(uint *)(lVar6 + 0x18);
    if (uVar8 <= param_3) {
      param_3 = 0;
    }
    uVar7 = uVar8;
  }
  uVar1 = param_3;
  if (uVar8 <= param_3) {
    uVar1 = 0;
  }
  if (((int)uVar1 < 0) || ((int)uVar7 <= (int)uVar1)) {
    local_45 = 0;
    local_148 = 0x100;
    puStack_150 = local_144;
    local_144[0] = 0;
    local_158 = PTR_DAT_04bb21f8 + 0x10;
    lVar6 = *(long *)(*(long *)(*(long *)(lVar6 + 0x50) + 0x10) + 8);
    FUN_038d1270(&local_158,"%s.as",lVar6 + *(int *)(lVar6 + 0x24) + (long)*(int *)(lVar6 + 8));
    fVar10 = 0.0;
  }
  else {
    puStack_150 = *(undefined1 **)(*(long *)(lVar6 + 0x20) + (ulong)uVar1 * 0x10);
    lVar6 = *(long *)((long)puStack_150 + 0x70);
    uVar3 = *(ushort *)(lVar6 + 0x5a);
    if ((short)uVar3 < 0) {
      plVar5 = (long *)0x0;
    }
    else {
      uVar9 = (ulong)uVar3;
      if (3 < uVar3) {
        uVar9 = 0;
      }
      plVar5 = *(long **)(lVar6 + uVar9 * 8);
    }
    fVar10 = 0.0;
    if (plVar5 == *(long **)(lVar6 + 0x90) && *(long **)(lVar6 + 0x90) != (long *)0x0) {
      puVar2 = (undefined8 *)(lVar6 + 0x28) + (uint)(int)(short)uVar3;
      if (3 < (uint)(int)(short)uVar3) {
        puVar2 = (undefined8 *)(lVar6 + 0x28);
      }
      local_158 = *(undefined **)((long)puStack_150 + 0x18);
      fVar10 = (float)(**(code **)(*plVar5 + 0x50))(plVar5,&local_158,*puVar2);
    }
  }
  uVar8 = param_3;
  if (*(uint *)(param_2 + 0x80) <= param_3) {
    uVar8 = 0;
  }
  fVar12 = *(float *)(*(long *)(param_2 + 0x88) + (long)(int)uVar8 * 0xe8 + 0xc0);
  if (*(char *)(param_2 + 0xae) == '\0') {
    if (fVar10 == fVar12) {
LAB_038506d4:
      return fVar10 == param_1;
    }
  }
  else {
    lVar6 = *(long *)(param_2 + 0x78);
    if (lVar6 == 0) {
      uVar8 = 0;
      uVar7 = _SUB_00000018;
    }
    else {
      uVar8 = *(uint *)(lVar6 + 0x18);
      uVar7 = uVar8;
    }
    if (uVar8 <= param_3) {
      param_3 = 0;
    }
    if (((int)param_3 < 0) || ((int)uVar7 <= (int)param_3)) {
      local_45 = 0;
      local_148 = 0x100;
      puStack_150 = local_144;
      local_144[0] = 0;
      local_158 = PTR_DAT_04bb21f8 + 0x10;
      lVar6 = *(long *)(*(long *)(*(long *)(lVar6 + 0x50) + 0x10) + 8);
      FUN_038d1270(&local_158,"%s.as",lVar6 + *(int *)(lVar6 + 0x24) + (long)*(int *)(lVar6 + 8));
      if (fVar10 == fVar12) {
        return false;
      }
    }
    else {
      fVar11 = *(float *)(*(long *)(*(long *)(lVar6 + 0x20) + (ulong)param_3 * 0x10) + 0xa0);
      if (fVar10 == fVar12) {
        if (fVar11 == 0.0) {
          return false;
        }
        goto LAB_038506d4;
      }
      if (fVar11 < 0.0) {
        if (fVar10 < fVar12) {
          return param_1 < fVar12 && fVar10 <= param_1;
        }
        return param_1 < fVar12 || fVar10 <= param_1;
      }
    }
  }
  if (fVar10 <= fVar12) {
    bVar4 = fVar12 < param_1 || param_1 <= fVar10;
  }
  else {
    bVar4 = fVar12 < param_1 && param_1 <= fVar10;
  }
  return bVar4;
}

