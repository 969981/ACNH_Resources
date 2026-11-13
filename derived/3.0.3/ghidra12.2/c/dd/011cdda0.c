
/* WARNING: Removing unreachable block (ram,0x011ce0fc) */
/* WARNING: Removing unreachable block (ram,0x011cdfe0) */
/* WARNING: Removing unreachable block (ram,0x011cdff0) */
/* WARNING: Removing unreachable block (ram,0x011cdffc) */
/* WARNING: Removing unreachable block (ram,0x011ce10c) */
/* WARNING: Removing unreachable block (ram,0x011ce118) */

bool FUN_011cdda0(long param_1,long param_2,uint param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  char cVar6;
  long lVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  undefined1 local_58 [8];
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  byte local_40;
  undefined8 local_38;
  undefined *local_30;
  int local_28;
  int local_24;
  
  local_28 = *(int *)(param_1 + 0xb0);
  local_24 = *(int *)(param_1 + 0xb4);
  local_50 = (undefined *)CONCAT44(local_50._4_4_,param_4);
  local_30 = PTR_DAT_04bb2010 + 0x10;
  switch(param_4) {
  case 0:
    local_24 = local_24 + 2;
    break;
  case 1:
    local_28 = local_28 + 2;
    break;
  case 2:
    local_24 = local_24 + -2;
  default:
    break;
  case 3:
    local_28 = local_28 + -2;
  }
  if (0 < (int)param_3) {
    uVar5 = 0;
    lVar7 = param_2;
    do {
      lVar1 = lVar7;
      if (999 < uVar5) {
        lVar1 = param_2;
      }
      if ((*(int *)(lVar1 + 0xfc) == 2) &&
         (local_28 == *(int *)(lVar1 + 0xb0) && local_24 == *(int *)(lVar1 + 0xb4))) {
        local_38 = 0xfffe;
        FUN_0277d4ac(&local_38);
        if ((*(byte *)(lVar1 + 0x10a) >> 3 & 1) != 0) {
          return false;
        }
        uVar5 = FUN_0277d7b4(param_1,lVar1);
        goto joined_r0x011cde9c;
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 0x120;
    } while (param_3 != uVar5);
  }
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  local_48 = 0;
  if (DAT_05aed670 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  local_44 = *(undefined4 *)(puVar12 + 7);
  local_40 = FUN_017baf44();
  local_40 = local_40 & 1;
  local_50 = PTR_DAT_04bb6268 + 0x10;
  FUN_01a5033c(local_58,&local_50,0,&local_30,0);
  uVar5 = FUN_0277d7b4(param_1,&local_38);
joined_r0x011cde9c:
  if ((uVar5 & 1) == 0) {
    return false;
  }
  fVar13 = (float)*(int *)(param_1 + 0xb0) * 0.5;
  fVar14 = (float)*(int *)(param_1 + 0xb4) * 0.5;
  uVar9 = 0;
  if (fVar13 != (float)(int)fVar13) {
    uVar9 = (uint)(fVar13 < 0.0);
  }
  uVar10 = 0;
  if (fVar14 != (float)(int)fVar14) {
    uVar10 = (uint)(fVar14 < 0.0);
  }
  cVar8 = '\0';
  if (*(long *)(DAT_0519d040 + 0x1f8) != 0) {
    lVar7 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xb0);
    cVar8 = '\0';
    if (lVar7 != 0) {
      uVar11 = ((int)fVar13 - uVar9) - *(int *)(lVar7 + 0x28);
      uVar3 = *(uint *)(lVar7 + 0x18);
      uVar2 = ((int)fVar14 - uVar10) - *(int *)(lVar7 + 0x2c);
      if ((uVar11 < uVar3 && uVar2 <= *(uint *)(lVar7 + 0x1c)) &&
          (uVar3 <= uVar11 || *(uint *)(lVar7 + 0x1c) != uVar2)) {
        uVar11 = uVar11 + uVar3 * uVar2;
LAB_011ce08c:
        if (*(uint *)(lVar7 + 0x30) <= uVar11) {
          uVar11 = 0;
        }
        puVar12 = (undefined8 *)(*(long *)(lVar7 + 0x38) + (long)(int)uVar11 * 0x68);
      }
      else {
        if (*(char *)(lVar7 + 0x88) != '\0') {
          uVar11 = ((int)fVar13 - uVar9) - *(int *)(lVar7 + 0x98);
          uVar10 = ((int)fVar14 - uVar10) - *(int *)(lVar7 + 0x9c);
          uVar9 = *(uint *)(lVar7 + 0xa0);
          if ((uVar11 < uVar9 && uVar10 <= *(uint *)(lVar7 + 0xa4)) &&
              (uVar9 <= uVar11 || *(uint *)(lVar7 + 0xa4) != uVar10)) {
            uVar11 = uVar11 + uVar9 * uVar10 + *(int *)(lVar7 + 0x8c);
            goto LAB_011ce08c;
          }
        }
        puVar12 = &DAT_051a50f0;
      }
      cVar8 = *(char *)(puVar12 + 2);
    }
  }
  fVar14 = (float)local_28 * 0.5;
  fVar13 = (float)local_24 * 0.5;
  uVar9 = 0;
  if (fVar14 != (float)(int)fVar14) {
    uVar9 = (uint)(fVar14 < 0.0);
  }
  uVar10 = 0;
  if (fVar13 != (float)(int)fVar13) {
    uVar10 = (uint)(fVar13 < 0.0);
  }
  cVar6 = '\0';
  if (*(long *)(DAT_0519d040 + 0x1f8) == 0) goto LAB_011ce1dc;
  lVar7 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xb0);
  cVar6 = '\0';
  if (lVar7 == 0) goto LAB_011ce1dc;
  uVar11 = ((int)fVar14 - uVar9) - *(int *)(lVar7 + 0x28);
  if ((uVar11 < *(uint *)(lVar7 + 0x18)) &&
     (uVar3 = ((int)fVar13 - uVar10) - *(int *)(lVar7 + 0x2c), uVar3 < *(uint *)(lVar7 + 0x1c))) {
    uVar11 = uVar11 + *(uint *)(lVar7 + 0x18) * uVar3;
LAB_011ce1b4:
    if (*(uint *)(lVar7 + 0x30) <= uVar11) {
      uVar11 = 0;
    }
    puVar12 = (undefined8 *)(*(long *)(lVar7 + 0x38) + (long)(int)uVar11 * 0x68);
  }
  else if (*(char *)(lVar7 + 0x88) == '\0') {
    puVar12 = &DAT_051a50f0;
  }
  else {
    uVar9 = ((int)fVar14 - uVar9) - *(int *)(lVar7 + 0x98);
    puVar12 = &DAT_051a50f0;
    if ((uVar9 < *(uint *)(lVar7 + 0xa0)) &&
       (uVar10 = ((int)fVar13 - uVar10) - *(int *)(lVar7 + 0x9c), uVar10 < *(uint *)(lVar7 + 0xa4)))
    {
      uVar11 = uVar9 + *(uint *)(lVar7 + 0xa0) * uVar10 + *(int *)(lVar7 + 0x8c);
      goto LAB_011ce1b4;
    }
  }
  cVar6 = *(char *)(puVar12 + 2);
LAB_011ce1dc:
  return cVar8 == cVar6;
}

