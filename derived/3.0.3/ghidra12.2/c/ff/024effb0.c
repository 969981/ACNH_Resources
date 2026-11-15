
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_024effb0(long param_1,int param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  undefined *local_90;
  uint local_88;
  uint local_84;
  undefined *local_80;
  int local_78;
  int iStack_74;
  
  puVar4 = PTR_DAT_04bb27c8;
  if ((param_2 != 0x6622bd46) && (param_2 != -0x24a26848)) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  local_84 = *(uint *)(param_1 + 0x14);
  local_90 = PTR_DAT_04bb2010 + 0x10;
  uVar1 = *(int *)(param_1 + 0x24) + 1;
  local_88 = uVar3;
  if ((param_3 & 1) == 0) {
    if (uVar1 != local_84) {
      puVar2 = PTR_DAT_04bb2018 + 0x10;
      do {
        local_78 = 0;
        local_80 = (undefined *)0x0;
        local_80 = (undefined *)0x20;
        local_78 = 0;
        lVar7 = *(long *)puVar4;
        if (((lVar7 != 0) && (*(long *)(lVar7 + 0x90) != 0)) &&
           (uVar5 = FUN_0094b728(lVar7 + 0x28,&local_90,&local_80), (uVar5 & 1) != 0)) {
          return 1;
        }
        local_78 = 0;
        local_80 = (undefined *)0x0;
        local_80 = (undefined *)0x2;
        local_78 = 0;
        lVar7 = *(long *)puVar4;
        if (((lVar7 != 0) && (*(long *)(lVar7 + 0x90) != 0)) &&
           (uVar5 = FUN_0094b728(lVar7 + 0x28,&local_90,&local_80), (uVar5 & 1) != 0)) {
          return 1;
        }
        local_78 = 0;
        local_80 = (undefined *)0x0;
        local_80 = (undefined *)0x1000;
        local_78 = 0;
        lVar7 = *(long *)puVar4;
        if (((lVar7 != 0) && (*(long *)(lVar7 + 0x90) != 0)) &&
           (uVar5 = FUN_0094b728(lVar7 + 0x28,&local_90,&local_80), (uVar5 & 1) != 0)) {
          return 1;
        }
        fVar8 = (float)(int)local_88 * 0.5;
        uVar6 = 0;
        if (fVar8 != (float)(int)fVar8) {
          uVar6 = (uint)(fVar8 < 0.0);
        }
        local_78 = (int)fVar8 - uVar6;
        fVar8 = (float)(int)local_84 * 0.5;
        uVar6 = 0;
        if (fVar8 != (float)(int)fVar8) {
          uVar6 = (uint)(fVar8 < 0.0);
        }
        iStack_74 = (int)fVar8 - uVar6;
        local_80 = puVar2;
        uVar5 = FUN_01318220(&local_80);
        if ((uVar5 & 1) != 0) {
          return 1;
        }
        if (((*(long *)puVar4 != 0) && (lVar7 = *(long *)(*(long *)puVar4 + 0x90), lVar7 != 0)) &&
           (-1 < (int)local_88)) {
          if (((-1 < (int)local_84) && (local_88 < *(uint *)(lVar7 + 0x38))) &&
             (((local_84 < *(uint *)(lVar7 + 0x3c) &&
               ((uVar6 = local_88 + *(uint *)(lVar7 + 0x38) * local_84,
                uVar6 < *(uint *)(lVar7 + 0x68) && (*(long *)(lVar7 + 0x70) != 0)))) &&
              ((*(uint *)(*(long *)(lVar7 + 0x70) + (long)(int)uVar6 * 4) >> 3 & 1) != 0)))) {
            return 1;
          }
          if (((((-1 < (int)local_84) && (local_88 < *(uint *)(lVar7 + 0x38))) &&
               (local_84 < *(uint *)(lVar7 + 0x3c))) &&
              ((uVar6 = local_88 + *(uint *)(lVar7 + 0x38) * local_84,
               uVar6 < *(uint *)(lVar7 + 0x68) && (*(long *)(lVar7 + 0x70) != 0)))) &&
             ((*(uint *)(*(long *)(lVar7 + 0x70) + (long)(int)uVar6 * 4) >> 5 & 1) != 0)) {
            return 1;
          }
        }
        if ((int)local_88 < *(int *)(param_1 + 0x20)) {
          local_88 = local_88 + 1;
        }
        else {
          local_84 = local_84 + 1;
          local_88 = *(uint *)(param_1 + 0x10);
        }
      } while ((uVar3 != local_88) || (uVar1 != local_84));
    }
  }
  else if (uVar1 != local_84) {
    puVar2 = PTR_DAT_04bb2018 + 0x10;
    do {
      local_78 = 0;
      local_80 = (undefined *)0x0;
      local_80 = (undefined *)0x20;
      local_78 = 0;
      lVar7 = *(long *)puVar4;
      if (((lVar7 != 0) && (*(long *)(lVar7 + 0x90) != 0)) &&
         (uVar5 = FUN_0094b728(lVar7 + 0x28,&local_90,&local_80), (uVar5 & 1) != 0)) {
        return 1;
      }
      local_78 = 0;
      local_80 = (undefined *)0x0;
      local_80 = (undefined *)0x2;
      local_78 = 0;
      lVar7 = *(long *)puVar4;
      if (((lVar7 != 0) && (*(long *)(lVar7 + 0x90) != 0)) &&
         (uVar5 = FUN_0094b728(lVar7 + 0x28,&local_90,&local_80), (uVar5 & 1) != 0)) {
        return 1;
      }
      local_78 = 0;
      local_80 = (undefined *)0x0;
      local_80 = (undefined *)0x1000;
      local_78 = 0;
      lVar7 = *(long *)puVar4;
      if (((lVar7 != 0) && (*(long *)(lVar7 + 0x90) != 0)) &&
         (uVar5 = FUN_0094b728(lVar7 + 0x28,&local_90,&local_80), (uVar5 & 1) != 0)) {
        return 1;
      }
      fVar8 = (float)(int)local_88 * 0.5;
      uVar6 = 0;
      if (fVar8 != (float)(int)fVar8) {
        uVar6 = (uint)(fVar8 < 0.0);
      }
      local_78 = (int)fVar8 - uVar6;
      fVar8 = (float)(int)local_84 * 0.5;
      uVar6 = 0;
      if (fVar8 != (float)(int)fVar8) {
        uVar6 = (uint)(fVar8 < 0.0);
      }
      iStack_74 = (int)fVar8 - uVar6;
      local_80 = puVar2;
      uVar5 = FUN_01318220(&local_80);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      if ((int)local_88 < *(int *)(param_1 + 0x20)) {
        local_88 = local_88 + 1;
      }
      else {
        local_84 = local_84 + 1;
        local_88 = *(uint *)(param_1 + 0x10);
      }
    } while ((uVar3 != local_88) || (uVar1 != local_84));
  }
  return 0;
}

