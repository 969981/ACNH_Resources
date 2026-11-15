
void FUN_0219d7e0(long param_1,uint param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  uint *puVar15;
  ushort uVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  uint local_78;
  uint local_74;
  uint local_70;
  undefined1 uStack_69;
  uint local_68;
  uint local_64;
  
  puVar5 = PTR_DAT_04bb27d0;
  if (*(char *)(param_1 + 0x55bd5) == '\0') {
    return;
  }
  uVar19 = (ulong)param_2;
  lVar12 = **(long **)PTR_DAT_04bb27d0;
  if ((param_4 & 1) == 0) {
    bVar3 = *(byte *)(lVar12 + 0x473);
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      pbVar9 = (byte *)(lVar12 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
      if (7 < bVar3) {
        pbVar9 = (byte *)(lVar12 + 0x48);
      }
      if (((*pbVar9 >> 3 & 1) != 0) && (*(byte *)(lVar12 + 0x472) != bVar3)) {
        return;
      }
    }
  }
  puVar14 = &DAT_053fe348 + uVar19 * 0xba0;
  if (9 < param_2) {
    puVar14 = &DAT_053fe348;
  }
  lVar21 = *(long *)(puVar14 + 0xaa0);
  lVar7 = *(long *)PTR_DAT_04bb4760;
  bVar3 = *(byte *)(lVar12 + 0x476);
  lVar12 = lVar7 + (ulong)param_2 * 0x15;
  if (0x6c < param_2) {
    lVar12 = lVar7;
  }
  local_68 = param_2;
  local_64 = param_2;
  if (1 < bVar3) {
    if (DAT_04c487d4 == 0xffff) {
LAB_0219d960:
      uVar16 = 0xffff;
    }
    else {
      local_64 = 3;
      puVar15 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
      if (0xff < DAT_04c487d4) {
        puVar15 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar16 = DAT_04c487d4;
      if ((*puVar15 >> 3 & 1) != 0) {
        if (DAT_055c1b60 != &DAT_055c1b58) {
          uVar16 = 0;
          puVar18 = DAT_055c1b60;
          do {
            if (*(int *)(puVar18 + -1) == 0x6622bd46) goto LAB_0219d964;
            puVar18 = (undefined8 *)puVar18[1];
            uVar16 = uVar16 + 1;
          } while (puVar18 != &DAT_055c1b58);
        }
        goto LAB_0219d960;
      }
    }
LAB_0219d964:
    uVar1 = (ushort)*(byte *)(lVar12 + 4) | (*(byte *)(lVar12 + 5) & 3) << 8;
    if (0x1ff < uVar1) {
      uVar1 = uVar1 | 0xfc00;
    }
    if (uVar1 != uVar16) {
      FUN_020ea330(lVar7,uVar19,0);
    }
    if ((*(byte *)(lVar12 + 7) >> 1 & 1) == 0) {
      return;
    }
    bVar4 = *(byte *)(lVar12 + 7) >> 4;
    local_64 = bVar4 & 3;
    if ((bVar4 & 3) != 0) {
      return;
    }
  }
  if ((lVar21 != 0) && (*(char *)(lVar21 + 9) != '\0')) {
    if (bVar3 < 2) {
      if ((param_3 & 1) == 0) goto LAB_0219d9fc;
    }
    else {
      uVar20 = (uint)*(byte *)(lVar12 + 4) | (*(byte *)(lVar12 + 5) & 3) << 8;
      if (0x1ff < uVar20) {
        uVar20 = uVar20 | 0xfffffc00;
      }
      uVar8 = FUN_01d69340(*(undefined8 *)(*(long *)puVar5 + 0x10),uVar20,1);
      if ((uVar8 & 1) != 0) {
        return;
      }
    }
    uVar8 = FUN_021506f4(puVar14 + 0x8b0,param_2);
    if ((uVar8 & 1) == 0) {
      return;
    }
  }
LAB_0219d9fc:
  uVar8 = FUN_0214d690(puVar14 + 0x8b0,param_2,param_3 & 1,param_4 & 1);
  if (((uVar8 & 1) == 0) && ((param_4 & 1) == 0)) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  puVar18 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar7 = (**(code **)(*(long *)*puVar18 + 0x38))();
    if (lVar7 == 0) {
      return;
    }
    lVar7 = lVar7 + 0x70;
  }
  else {
    if (puVar18 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar18[0x26] == (long *)0x0) {
      return;
    }
    lVar7 = (**(code **)(*(long *)puVar18[0x26] + 0x38))();
    if (lVar7 == 0) {
      return;
    }
  }
  if ((*(long **)(lVar7 + 0xd0) == (long *)0x0) ||
     (puVar18 = (undefined8 *)**(long **)(lVar7 + 0xd0), puVar18 == (undefined8 *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)*puVar18)();
    uVar8 = uVar8 & 0xffffffff;
  }
  FUN_0252d4c8(&uStack_69);
  lVar21 = *(long *)(lVar7 + 0xb8) + *(long *)(lVar7 + 0xb0);
  lVar2 = lVar21 + uVar19 * 0x13230;
  if (9 < param_2) {
    lVar2 = lVar21;
  }
  uVar20 = *(uint *)(lVar2 + 0x10764);
  local_64 = uVar20;
  if (*(long *)(puVar14 + 0xaa0) == 0) goto LAB_0219ddfc;
  local_70 = *(uint *)(*(long *)(puVar14 + 0xaa0) + 4);
  if ((local_70 == 5) && (uVar20 == 7)) goto joined_r0x0219ddf0;
  if ((int)*(uint *)(DAT_053e0208 + 0x168f0) < 1) {
    if ((((*(long *)(DAT_053e0208 + 0x167e0) != 0) &&
         (puVar15 = *(uint **)(*(long *)(DAT_053e0208 + 0x167e0) + 8), puVar15 != (uint *)0x0)) &&
        ((*(uint *)(DAT_053e0208 + 0x167f8) <= local_70 ||
         (*(char *)(*(long *)(DAT_053e0208 + 0x16800) + (long)(int)local_70) != '\0')))) &&
       (((local_70 < *puVar15 && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)))) {
      iVar17 = 0xc;
      if (*(char *)((long)puVar15 + 10) != '\0') {
        iVar17 = 0x1c;
      }
      lVar21 = (ulong)(puVar15[1] * local_70 + (uint)(ushort)puVar15[2] * 8 + iVar17) +
               (long)puVar15;
      if (lVar21 != 0) goto LAB_0219db40;
    }
LAB_0219ddfc:
    puVar15 = &local_64;
    uVar11 = 0;
LAB_0219de18:
    FUN_021dafb0(&local_68,puVar15,&uStack_69,0,uVar11,(param_4 ^ 0xffffffff) & 1);
  }
  else {
    if (*(uint *)(DAT_053e0208 + 0x168f0) <= local_70) goto LAB_0219ddfc;
    uVar6 = local_70;
    if (*(uint *)(DAT_053e0208 + 0x168e0) <= local_70) {
      uVar6 = 0;
    }
    lVar21 = *(long *)(*(long *)(DAT_053e0208 + 0x168e8) + (ulong)uVar6 * 8);
    if (lVar21 == 0) goto LAB_0219ddfc;
LAB_0219db40:
    uVar6 = (uint)*(byte *)(lVar12 + 4) | (*(byte *)(lVar12 + 5) & 3) << 8;
    if (0x1ff < uVar6) {
      uVar6 = uVar6 | 0xfffffc00;
    }
    uVar6 = FUN_01d69340(*(undefined8 *)(*(long *)puVar5 + 0x10),uVar6,1);
    pbVar9 = (byte *)FUN_021534b0(lVar21,2,0x378b2f14,*(undefined8 *)PTR_DAT_04bc2aa0);
    if ((pbVar9 == (byte *)0x0) || (local_74 = (uint)*pbVar9, 4 < *pbVar9)) {
      local_74 = 0;
    }
    if (local_74 == 0) {
      if (local_70 != 0xe) {
        if ((((param_3 | uVar6 ^ 0xffffffff) & 1) != 0) && (local_70 == 1)) {
          if ((uVar6 & 1) != 0) {
            local_74 = 0xf;
            uVar19 = FUN_0290cbcc(&local_74);
            if (((uVar19 & 1) == 0) && ((param_4 & 1) == 0)) goto LAB_0219ddfc;
          }
          local_74 = 1;
          FUN_021dafb0(&local_68,&local_74,&uStack_69,0,0,(param_4 ^ 0xffffffff) & 1);
          FUN_021956e0(puVar14);
          goto joined_r0x0219ddf0;
        }
        local_74 = 0;
        if (local_70 == 0x21) {
          local_74 = 7;
          FUN_021dafb0(&local_68,&local_74,&uStack_69,0,0,0);
          goto joined_r0x0219ddf0;
        }
        goto LAB_0219ddfc;
      }
      local_74 = 0;
      uVar19 = FUN_02b67a30(&local_74,param_2);
      if ((uVar19 & 1) == 0) goto LAB_0219ddfc;
      puVar15 = &local_78;
      local_78 = 1;
      if (local_74 != (int)*(char *)(*(long *)(lVar7 + 0xb8) + *(long *)(lVar7 + 0xb0) + 0x1e335c))
      {
        local_78 = 2;
      }
LAB_0219ded4:
      uVar11 = 1;
      goto LAB_0219de18;
    }
    local_74 = FUN_0219ceb0(lVar21);
    switch(local_74) {
    case 1:
      uVar20 = 3;
      local_64 = 3;
      break;
    case 2:
      uVar20 = 1;
      local_64 = 1;
      break;
    case 3:
      uVar20 = 2;
      local_64 = 2;
      break;
    case 4:
      uVar20 = 0;
      local_64 = 0;
    }
    if (((uVar6 & 1) == 0) &&
       (((param_3 & 1) == 0 ||
        (uVar10 = FUN_020e9b90(lVar12,*(undefined2 *)PTR_DAT_04bbdeb0), (uVar10 & 1) == 0)))) {
      local_74 = 7;
      uVar10 = FUN_0290cbcc(&local_74);
      if (((uVar10 & 1) == 0) ||
         (uVar10 = FUN_020e9b90(lVar12,*(undefined2 *)PTR_DAT_04bb6298), (uVar10 & 1) == 0)) {
        if ((uVar20 == 1) && ((param_4 & 1) == 0)) {
          local_74 = 1;
          plVar13 = (long *)PTR_DAT_04bb3968;
        }
        else {
          if ((uVar20 != 0) || ((param_4 & 1) != 0)) {
            puVar15 = &local_64;
            goto LAB_0219ded4;
          }
          plVar13 = &DAT_053e0208;
          local_74 = 0;
        }
        if ((param_2 < 10) && ((&DAT_053fee41)[uVar19 * 0xba0] != '\0')) {
          FUN_01e2caf8(*plVar13 + 0xda0,&DAT_053fe850 + uVar19 * 0xba0,1,&local_74,0,0);
        }
      }
    }
  }
  FUN_021956e0(puVar14);
joined_r0x0219ddf0:
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar7 + 0xd0) != 0)) &&
     (puVar18 = *(undefined8 **)(*(long *)(lVar7 + 0xd0) + 8), puVar18 != (undefined8 *)0x0)) {
    (**(code **)*puVar18)();
  }
  return;
}

