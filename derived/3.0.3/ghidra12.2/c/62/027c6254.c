
bool FUN_027c6254(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined8 local_48;
  undefined *local_40;
  char *pcStack_38;
  
  lVar8 = *(long *)PTR_DAT_04bb46b0;
  if (lVar8 != 0) {
    puVar9 = *(undefined8 **)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x453) & 1) == 0) {
      lVar8 = (**(code **)(*(long *)*puVar9 + 0x38))();
      if (lVar8 != 0) {
        lVar8 = lVar8 + 0x70;
LAB_027c62c4:
        if ((*(long **)(lVar8 + 0x1c28d8) == (long *)0x0) ||
           (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x1c28d8), puVar9 == (undefined8 *)0x0)) {
          uVar5 = 1;
        }
        else {
          uVar5 = (**(code **)*puVar9)();
          uVar5 = uVar5 ^ 1;
        }
        uVar2 = *(uint *)(*(long *)(lVar8 + 0x1c28c0) + *(long *)(lVar8 + 0x1c28b8));
        if (3 < uVar2) {
          uVar2 = 0;
        }
        local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar2);
        if ((((uVar5 & 1) == 0) && (*(long *)(lVar8 + 0x1c28d8) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x1c28d8) + 8), puVar9 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar9)();
        }
        if (uVar2 != 2) {
          return false;
        }
      }
    }
    else if (((puVar9 != (undefined8 *)0x0) && ((long *)puVar9[0x26] != (long *)0x0)) &&
            (lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar8 != 0)) goto LAB_027c62c4;
  }
  puVar4 = PTR_DAT_04bb2020;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "CampFirstCamperVisit";
  uVar7 = FUN_0273f0a0(&local_40);
  if ((uVar7 & 1) != 0) {
    return true;
  }
  if ((*(long *)PTR_DAT_04bb32f0 != 0) &&
     (((lVar8 = *(long *)PTR_DAT_04bb27d0, lVar8 == 0 || (*(long *)(lVar8 + 0x28) == 0)) ||
      (*(int *)(lVar8 + 0x80) != 1)))) {
    sVar3 = *(short *)PTR_DAT_04bb6298;
    if (sVar3 != -1) {
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
      if (0xff < (uint)(int)sVar3) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) goto LAB_027c6408;
    }
    local_40 = puVar4 + 0x10;
    pcStack_38 = "TodayGlobalEventId";
    iVar6 = FUN_0273ea30(&local_40);
    if (iVar6 != 0xffff) {
      return false;
    }
  }
LAB_027c6408:
  if (*(short *)(param_1 + 0x10c) == 0) {
    return 0 < *param_2;
  }
  if (-1 < *param_2) {
    local_40 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    local_48 = *(undefined8 *)(param_1 + 0x10c);
    iVar6 = FUN_00a82474(&local_40,&local_48);
    if (2 < iVar6) {
      uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
      if (iVar6 - 3U < 3) {
        fVar10 = *(float *)(&DAT_0417ba64 + (long)(int)(iVar6 - 3U) * 4);
      }
      else {
        fVar10 = 0.2;
      }
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar5;
      return (float)(uVar5 >> 9 | 0x3f800000) + -1.0 <= fVar10;
    }
  }
  return false;
}

