
void FUN_029efe90(int *param_1,int *param_2)

{
  long *plVar1;
  uint *puVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  int local_194;
  undefined **local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined8 uStack_178;
  undefined1 local_170 [256];
  undefined8 local_70;
  long local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined **ppuStack_40;
  undefined1 *local_38;
  
  local_170[0] = 0;
  param_2[0] = -1;
  param_2[1] = -1;
  iVar3 = *param_1;
  local_180 = local_170;
  uStack_178 = 0x10000000000;
  local_194 = 0;
  if (iVar3 != 99999 && -1 < iVar3) {
    local_194 = iVar3;
  }
  local_190 = &PTR_LAB_048f9770;
  puStack_188 = &DAT_0405db6e;
  FUN_02a21700(&local_180,&local_190,2,&local_194);
  local_70 = 0;
  local_68 = 0;
  local_60 = 0xff;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  ppuStack_40 = &PTR_LAB_048f9770;
  local_38 = local_180;
  uVar4 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_70,&ppuStack_40);
  if (((((uVar4 & 1) != 0) && (local_68 != 0)) && (*(uint *)(local_68 + 0x18) != 0)) &&
     (plVar1 = (long *)((ulong)*(uint *)(local_68 + 0x18) + local_68), *plVar1 == 0x101feff464e494d)
     ) {
    uVar6 = *(uint *)(plVar1 + 8);
    uVar5 = *(uint *)((long)plVar1 + 0x14);
    if (uVar6 != 0) {
      puVar2 = (uint *)((ulong)uVar6 + (long)(plVar1 + 8));
      uVar4 = (ulong)*puVar2;
      if (*puVar2 != 0) {
        lVar7 = -(long)puVar2;
        do {
          lVar7 = lVar7 + -8;
          if (puVar2[1] == 0x1a74aea6) {
            lVar7 = (ulong)puVar2[2] - lVar7;
            if ((lVar7 != 0) && (*(short *)(lVar7 + 4) != 0)) {
              fVar8 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 8));
              fVar8 = (fVar8 / (float)uVar5) * 30.0;
              uVar6 = 0;
              if (fVar8 != (float)(int)fVar8) {
                uVar6 = (uint)(0.0 <= fVar8);
              }
              *param_2 = uVar6 + (int)fVar8;
            }
            break;
          }
          uVar4 = uVar4 - 1;
          puVar2 = puVar2 + 2;
        } while (uVar4 != 0);
      }
    }
    fVar8 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar1 + 0x1c));
    fVar8 = (fVar8 / (float)uVar5) * 30.0;
    uVar5 = 0;
    if (fVar8 != (float)(int)fVar8) {
      uVar5 = (uint)(0.0 <= fVar8);
    }
    param_2[1] = uVar5 + (int)fVar8;
  }
  return;
}

