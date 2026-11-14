
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01af4104(undefined4 *param_1,undefined4 *param_2,short *param_3,short *param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_98 [8];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined **local_80;
  short local_78;
  short local_76;
  undefined4 local_74;
  long local_70;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_58 = 0;
  local_60 = *(undefined4 *)param_3;
  uStack_5c = *(undefined4 *)(param_3 + 2);
  local_68 = &PTR_FUN_04a36b50;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_60);
  lVar8 = DAT_0532a768;
  if (*(long *)puVar1 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      uVar2 = FUN_0277d6c4(param_3);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8), lVar8 != 0)) {
        local_58 = lVar8;
      }
    }
  }
  *(undefined2 *)param_2 = DAT_05586008;
  *(undefined1 *)((long)param_2 + 2) = DAT_0558600a;
  *(undefined1 *)((long)param_2 + 3) = DAT_0558600b;
  param_2[1] = DAT_0558600c;
  if (*param_3 != -2) {
    local_78 = *param_4;
    if (local_78 != -2) {
      local_76 = param_4[1];
      local_80 = &PTR_FUN_04a36b50;
      local_74 = *(undefined4 *)(param_4 + 2);
      lVar9 = *(long *)puVar1;
      local_70 = 0;
      uVar2 = FUN_0277d6c4(&local_78);
      lVar8 = DAT_0532a768;
      if (*(long *)puVar1 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          uVar2 = FUN_0277d6c4(param_4);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
             (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8), lVar8 != 0)) {
            local_70 = lVar8;
          }
        }
      }
      uVar7 = FUN_01af0020(&local_68);
      if ((((uVar7 & 1) != 0) && (uVar7 = FUN_01af0020(&local_80), (uVar7 & 1) != 0)) &&
         (uVar7 = FUN_01af28ac(&local_68,param_4), (uVar7 & 1) != 0)) {
        iVar3 = FUN_01af02d0(&local_68);
        iVar4 = FUN_01af02d0(&local_80);
        if (iVar3 != 0) {
          iVar5 = FUN_01af2610(&local_68);
          if (((iVar3 <= iVar5) && (iVar4 != 0)) &&
             (iVar5 = FUN_01af2610(&local_80), iVar4 <= iVar5)) {
            uVar2 = iVar4 + iVar3;
            uVar6 = FUN_01af2610(&local_68);
            if ((uVar6 & 0xff) < (uVar2 & 0xff)) {
              FUN_01af2bc0(&local_68,uVar6);
              FUN_01ad5d04(auStack_98,&local_60);
              FUN_01af2bc0(auStack_98,uVar2 - uVar6);
              *param_2 = local_90;
              param_2[1] = uStack_8c;
            }
            else {
              FUN_01af2bc0(&local_68,uVar2);
            }
            goto LAB_01af4320;
          }
        }
      }
    }
  }
  local_60 = _DAT_05586008;
  uStack_5c = DAT_0558600c;
LAB_01af4320:
  *param_1 = local_60;
  param_1[1] = uStack_5c;
  return;
}

