
/* WARNING: Removing unreachable block (ram,0x0372351c) */
/* WARNING: Removing unreachable block (ram,0x0372350c) */
/* WARNING: Removing unreachable block (ram,0x03723554) */

undefined8 FUN_037234d0(float *param_1,float *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *local_90;
  undefined8 local_88;
  undefined *puStack_80;
  int local_78;
  int iStack_74;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  int local_58;
  int iStack_54;
  
  puVar1 = PTR_DAT_04bb2010;
  lVar7 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_70 = PTR_DAT_04bb2010 + 0x10;
  local_68 = 0;
  local_58 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_54 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  lVar8 = *(long *)(lVar7 + 0xd0);
  local_60 = local_70;
  if (lVar8 == 0) {
    puVar4 = &DAT_05586008;
  }
  else {
    lVar9 = lVar8 + 0x130 + (ulong)*(uint *)(lVar8 + 0x198) * 0x30;
    if (1 < *(uint *)(lVar8 + 0x198)) {
      lVar9 = lVar8 + 0x130;
    }
    puVar4 = (undefined2 *)FUN_012eb21c(lVar9,&local_60,&local_70);
  }
  puVar2 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(puVar4);
  lVar8 = *(long *)puVar2;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_90 = puVar1 + 0x10;
      local_88 = 0;
      local_78 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
      iStack_74 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
      lVar7 = *(long *)(lVar7 + 0xd0);
      puStack_80 = local_90;
      if (lVar7 == 0) {
        puVar5 = &DAT_05586008;
      }
      else {
        lVar8 = lVar7 + 0x130 + (ulong)*(uint *)(lVar7 + 0x198) * 0x30;
        if (1 < *(uint *)(lVar7 + 0x198)) {
          lVar8 = lVar7 + 0x130;
        }
        puVar5 = (undefined2 *)FUN_012eb21c(lVar8,&puStack_80,&local_90);
        lVar8 = *(long *)puVar2;
      }
      uVar3 = FUN_0277d6c4(puVar5);
      if (*(long *)puVar2 != 0) {
        lVar7 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if (((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
           (uVar6 = FUN_0277d7b4(puVar5,puVar4), (uVar6 & 1) != 0)) {
          if ((int)local_88 == (int)local_68) {
            if (local_88._4_4_ == local_68._4_4_) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

