
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_02624e04(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  uint *puVar9;
  char *pcVar10;
  uint *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 local_78;
  undefined *local_70;
  char *local_68;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *local_48;
  
  uVar8 = (param_2 & 0xffff) - (uint)*(ushort *)(param_1 + 0xea6e0);
  if (((*(uint *)(param_1 + 0xea6c0) <= uVar8) ||
      (puVar9 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar8 * 8),
      puVar9 == (uint *)0x0)) || (uVar8 = *puVar9, uVar8 == 0 || puVar9 == (uint *)(ulong)uVar8))
  goto switchD_02624f50_default;
  puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar8);
  if (((*puVar11 == 0) || (uVar8 = puVar11[1], uVar8 == 0)) || ((ulong)(ushort)puVar11[2] == 0))
  goto switchD_02624f50_default;
  lVar1 = 0xc;
  if (*(char *)((long)puVar11 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
  if (lVar1 == 0) goto switchD_02624f50_default;
  uVar2 = 0;
  if ((ulong)uVar8 != 0) {
    uVar2 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar8);
  }
  if (*puVar11 <= uVar2) {
    uVar2 = 0xffffffff;
  }
  if ((DAT_055577a0 <= uVar2) ||
     (sVar3 = *(short *)(DAT_055577a8 + (long)(int)uVar2 * 2), (ushort)(sVar3 - 3U) < 0xfffe))
  goto switchD_02624f50_default;
  if (sVar3 != 1) {
    pcVar10 = (char *)FUN_02633cd0(puVar9,0x1a,0x33ddefc8,0);
    puVar5 = PTR_DAT_04bb2020;
    local_68 = "";
    if (pcVar10 != (char *)0x0) {
      local_68 = pcVar10;
    }
    local_70 = PTR_DAT_04bb2020 + 0x10;
    if (local_68 == "Easter") {
LAB_02624fe4:
      uVar13 = *(undefined8 *)PTR_DAT_04bb32f0;
      local_48 = "Easter";
      local_78 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      local_50 = local_70;
      uVar12 = FUN_0087322c(uVar13,&local_50,&local_78,1,1);
      if ((uVar12 & 1) != 0) goto LAB_0262527c;
      local_60 = puVar5 + 0x10;
      pcStack_58 = "Easter";
      uVar12 = FUN_0087b568(uVar13,&local_60,&local_78,1,1);
      if ((uVar12 & 1) != 0) {
        return 1;
      }
    }
    else {
      uVar12 = 0;
      bVar7 = true;
      do {
        if (local_68[uVar12] != "Easter"[uVar12]) break;
        if (local_68[uVar12] == '\0') {
          if (bVar7) goto LAB_02624fe4;
          break;
        }
        bVar7 = uVar12 < 0x80000;
        uVar12 = uVar12 + 1;
      } while (uVar12 != 0x80001);
    }
    local_50 = puVar5 + 0x10;
    local_48 = "HarvestFestival";
    (**(code **)(local_70 + 0x18))(&local_70);
    (**(code **)(local_70 + 0x18))(&local_70);
    pcVar10 = local_68;
    (**(code **)(local_50 + 0x18))(&local_50);
    puVar6 = PTR_DAT_04bb32f0;
    if (pcVar10 == local_48) {
LAB_026250e0:
      uVar13 = *(undefined8 *)PTR_DAT_04bb32f0;
      local_78 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      local_48 = "HarvestFestival";
      local_50 = puVar5 + 0x10;
      uVar12 = FUN_0087322c(uVar13,&local_50,&local_78,1,1);
      if ((uVar12 & 1) == 0) {
        pcStack_58 = "HarvestFestival";
        local_60 = puVar5 + 0x10;
        uVar12 = FUN_0087b568(uVar13,&local_60,&local_78,1,1);
        if (((uVar12 & 1) == 0) &&
           (uVar12 = FUN_0087cc70(*(undefined8 *)puVar6,&local_78,1,1), (uVar12 & 1) == 0))
        goto LAB_0262515c;
      }
      goto LAB_0262527c;
    }
    uVar12 = 0;
    bVar7 = true;
    do {
      if (local_68[uVar12] != local_48[uVar12]) break;
      if (local_68[uVar12] == '\0') {
        if (bVar7) goto LAB_026250e0;
        break;
      }
      bVar7 = uVar12 < 0x80000;
      uVar12 = uVar12 + 1;
    } while (uVar12 != 0x80001);
LAB_0262515c:
    (**(code **)(local_70 + 0x18))(&local_70);
    (**(code **)(local_70 + 0x18))(&local_70);
    if (local_68 == "XmasEve") {
LAB_02625250:
      local_50 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      uVar12 = FUN_02633ad4(*(undefined8 *)PTR_DAT_04bb32f0,&local_50);
      if ((uVar12 & 1) != 0) goto LAB_0262527c;
    }
    else {
      uVar12 = 0;
      bVar7 = true;
      do {
        if (local_68[uVar12] != "XmasEve"[uVar12]) break;
        if (local_68[uVar12] == '\0') {
          if (bVar7) goto LAB_02625250;
          break;
        }
        bVar7 = uVar12 < 0x80000;
        uVar12 = uVar12 + 1;
      } while (uVar12 != 0x80001);
    }
    (**(code **)(local_70 + 0x18))(&local_70);
    (**(code **)(local_70 + 0x18))(&local_70);
    if (local_68 == "Carnival") {
LAB_026252f0:
      local_50 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      uVar12 = FUN_00e31150(*(undefined8 *)PTR_DAT_04bb32f0,&local_50,1,1);
      if ((uVar12 & 1) != 0) {
        return 1;
      }
    }
    else {
      uVar12 = 0;
      bVar7 = true;
      do {
        if (local_68[uVar12] != "Carnival"[uVar12]) break;
        if (local_68[uVar12] == '\0') {
          if (bVar7) goto LAB_026252f0;
          break;
        }
        bVar7 = uVar12 < 0x80000;
        uVar12 = uVar12 + 1;
      } while (uVar12 != 0x80001);
    }
    (**(code **)(local_70 + 0x18))(&local_70);
    (**(code **)(local_70 + 0x18))(&local_70);
    if (local_68 == "JuneBride") {
LAB_02625394:
      local_60 = (undefined *)FUN_00a82790(*(undefined8 *)PTR_DAT_04bb32e8);
      local_50 = puVar5 + 0x10;
      local_48 = "JuneBride";
      uVar12 = FUN_0087c200(*(undefined8 *)PTR_DAT_04bb32f0,&local_50,&local_60,1);
      if ((uVar12 & 1) != 0) {
        return 1;
      }
    }
    else {
      uVar12 = 0;
      bVar7 = true;
      do {
        if (local_68[uVar12] != "JuneBride"[uVar12]) break;
        if (local_68[uVar12] == '\0') {
          if (bVar7) goto LAB_02625394;
          break;
        }
        bVar7 = uVar12 < 0x80000;
        uVar12 = uVar12 + 1;
      } while (uVar12 != 0x80001);
    }
    goto switchD_02624f50_default;
  }
  uVar8 = FUN_03853b94();
  if ((DAT_055577c0 <= uVar8) ||
     (uVar4 = *(ushort *)(DAT_055577c8 + (long)(int)uVar8 * 2), uVar8 = (uint)uVar4, 8 < uVar4)) {
    uVar8 = 0;
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar8);
  switch(uVar8) {
  case 0:
    uVar12 = FUN_0122a3cc();
    break;
  case 1:
    uVar12 = FUN_01a190c0();
    break;
  case 2:
    uVar12 = FUN_0122a454();
    break;
  case 3:
    uVar12 = FUN_0122a1a8();
    break;
  case 4:
    uVar12 = FUN_01223640();
    break;
  case 5:
    if ((*(long *)PTR_DAT_04bb30a0 == 0) || (fVar14 = (float)FUN_00a8cd7c(), fVar14 <= 0.0))
    goto switchD_02624f50_default;
    goto LAB_0262527c;
  case 6:
    uVar12 = FUN_0122a318();
    break;
  case 7:
    uVar12 = FUN_01a19160();
    break;
  case 8:
    uVar12 = FUN_00a82790(*(undefined8 *)PTR_DAT_04bb32e8);
    if ((uVar12 & 0xff0000) == 0xa0000) goto LAB_0262527c;
  default:
    goto switchD_02624f50_default;
  }
  if ((uVar12 & 1) == 0) {
switchD_02624f50_default:
    uVar13 = 0;
  }
  else {
LAB_0262527c:
    uVar13 = 1;
  }
  return uVar13;
}

