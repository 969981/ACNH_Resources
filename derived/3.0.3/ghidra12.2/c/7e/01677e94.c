
/* WARNING: Removing unreachable block (ram,0x01677fe0) */
/* WARNING: Removing unreachable block (ram,0x01677ff0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_01677e94(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined *local_60;
  undefined8 local_58;
  int local_50;
  int iStack_4c;
  undefined *local_48;
  int local_40;
  int iStack_3c;
  int local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  local_30 = 0;
  local_60 = PTR_DAT_04bb2018 + 0x10;
  fVar10 = (float)*(int *)(param_1 + 8) * 0.5;
  uVar3 = 0;
  if (fVar10 != (float)(int)fVar10) {
    uVar3 = (uint)(fVar10 < 0.0);
  }
  fVar11 = (float)*(int *)(param_1 + 0xc) * 0.5;
  uVar5 = 0;
  if (fVar11 != (float)(int)fVar11) {
    uVar5 = (uint)(fVar11 < 0.0);
  }
  local_58 = (undefined *)CONCAT44((int)fVar11 - uVar5,(int)fVar10 - uVar3);
  local_28 = 0;
  local_24 = 1;
  local_30 = 2;
  local_24 = 1;
  local_28 = 0;
  local_34 = param_2;
  uVar4 = FUN_0097dd50(&local_60,&local_30);
  if ((uVar4 & 1) == 0) {
    local_50 = *(int *)(param_1 + 8);
    iStack_4c = *(int *)(param_1 + 0xc);
    fVar11 = (float)local_50 * 0.5;
    fVar10 = (float)iStack_4c * 0.5;
    uVar3 = 0;
    if (fVar11 != (float)(int)fVar11) {
      uVar3 = (uint)(fVar11 < 0.0);
    }
    uVar5 = 0;
    if (fVar10 != (float)(int)fVar10) {
      uVar5 = (uint)(fVar10 < 0.0);
    }
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) == 0) {
      iVar6 = 0;
    }
    else {
      lVar7 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xb0);
      iVar6 = 0;
      if (lVar7 != 0) {
        uVar9 = ((int)fVar11 - uVar3) - *(int *)(lVar7 + 0x28);
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar2 = ((int)fVar10 - uVar5) - *(int *)(lVar7 + 0x2c);
        if ((uVar9 < uVar1 && uVar2 <= *(uint *)(lVar7 + 0x1c)) &&
            (uVar1 <= uVar9 || *(uint *)(lVar7 + 0x1c) != uVar2)) {
          uVar9 = uVar9 + uVar1 * uVar2;
LAB_01678074:
          if (*(uint *)(lVar7 + 0x30) <= uVar9) {
            uVar9 = 0;
          }
          puVar8 = (undefined8 *)(*(long *)(lVar7 + 0x38) + (long)(int)uVar9 * 0x68);
        }
        else {
          if (*(char *)(lVar7 + 0x88) != '\0') {
            uVar9 = ((int)fVar11 - uVar3) - *(int *)(lVar7 + 0x98);
            uVar5 = ((int)fVar10 - uVar5) - *(int *)(lVar7 + 0x9c);
            uVar3 = *(uint *)(lVar7 + 0xa0);
            if ((uVar9 < uVar3 && uVar5 <= *(uint *)(lVar7 + 0xa4)) &&
                (uVar3 <= uVar9 || *(uint *)(lVar7 + 0xa4) != uVar5)) {
              uVar9 = uVar9 + uVar3 * uVar5 + *(int *)(lVar7 + 0x8c);
              goto LAB_01678074;
            }
          }
          puVar8 = &DAT_051a50f0;
        }
        iVar6 = (int)*(char *)(puVar8 + 2);
      }
    }
    if (iVar6 == local_34) {
      local_40 = local_50 + 1;
      iStack_3c = iStack_4c + 1;
      local_60 = PTR_DAT_04bbc1a0 + 0x10;
      local_58 = PTR_DAT_04bb2010 + 0x10;
      local_48 = local_58;
      uVar3 = FUN_0097d8e0(&local_60);
      goto LAB_016780e4;
    }
  }
  uVar3 = 0;
LAB_016780e4:
  return uVar3 & 1;
}

