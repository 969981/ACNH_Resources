
void FUN_030cdfe0(undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  float *pfVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  float fVar14;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined *local_40;
  undefined4 local_38;
  
  puVar1 = PTR_DAT_04bb2720;
  lVar11 = *(long *)(param_4 + 0x250);
  if (lVar11 == 0) {
    return;
  }
  local_48 = 0;
  local_50 = 0;
  lVar8 = *(long *)PTR_DAT_04bb2720;
  if (lVar8 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar8 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar8 + 0x338));
      iVar4 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  uVar6 = FUN_017baf44(*(undefined4 *)(puVar12 + 7));
  if ((uVar6 & 1) == 0) {
    puVar7 = (undefined4 *)FUN_0252d9bc(0);
    if (puVar7 == (undefined4 *)0x0) goto LAB_030ce12c;
    uVar13 = *puVar7;
    param_2 = (float)puVar7[1];
    puVar7 = puVar7 + 2;
  }
  else {
    lVar8 = *(long *)puVar1;
    iVar4 = 0;
    if (lVar8 != 0) {
      if (*(long *)(lVar8 + 0x330) == 0) {
        iVar4 = 0;
      }
      else {
        puVar12 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar8 + 0x338));
        iVar5 = FUN_006bd550(*puVar12,0);
        iVar4 = 0;
        if (iVar5 == 0x758f7eaf) {
          lVar8 = *(long *)puVar1;
          iVar4 = 0;
          if (lVar8 != 0) {
            lVar8 = *(long *)(lVar8 + 0x330);
            iVar4 = 0;
            if (lVar8 != 0) {
              iVar4 = *(int *)(lVar8 + 0x244);
            }
          }
        }
      }
    }
    if (DAT_05292438 != iVar4) goto LAB_030ce12c;
    uVar13 = *(undefined4 *)(param_4 + 0x44c);
    puVar7 = (undefined4 *)(param_4 + 0x454);
    param_2 = *(float *)(param_4 + 0x450);
  }
  local_50 = CONCAT44(param_2,uVar13);
  local_48 = *puVar7;
LAB_030ce12c:
  local_58 = &DAT_3f8000003f800000;
  local_64 = (float)FUN_030cd3bc(param_4,&local_50);
  local_60 = param_2;
  if (*(char *)(param_4 + 0xe14) != '\0') {
    uVar2 = *(uint *)(param_4 + 0xe18);
    pfVar9 = *(float **)(param_4 + 0xe20);
    fVar14 = *pfVar9;
    if (local_64 <= *pfVar9) {
      fVar14 = local_64;
    }
    bVar3 = pfVar9[1 < uVar2] <= local_64;
    local_64 = pfVar9[1 < uVar2];
    if (bVar3) {
      local_64 = fVar14;
    }
    lVar8 = 0xc;
    if (uVar2 < 4) {
      lVar8 = 0;
    }
    fVar14 = pfVar9[(ulong)(2 < uVar2) * 2];
    if (param_2 <= pfVar9[(ulong)(2 < uVar2) * 2]) {
      fVar14 = param_2;
    }
    local_60 = *(float *)((long)pfVar9 + lVar8);
    if (*(float *)((long)pfVar9 + lVar8) <= param_2) {
      local_60 = fVar14;
    }
  }
  plVar10 = *(long **)(lVar11 + 0x1d0);
  puVar1 = PTR_DAT_04bc0cb8 + 0x10;
  local_38 = 8;
  local_5c = param_3;
  local_40 = puVar1;
  (**(code **)(*plVar10 + 0x18))(plVar10,&local_40);
  (**(code **)(plVar10[3] + 0x98))(plVar10[1],&local_64);
  plVar10 = *(long **)(lVar11 + 0x1d0);
  local_38 = 10;
  local_40 = puVar1;
  (**(code **)(*plVar10 + 0x18))(plVar10,&local_40);
  (**(code **)(plVar10[3] + 0xb8))(plVar10[1],&local_58);
  return;
}

