
/* WARNING: Removing unreachable block (ram,0x0184ef00) */
/* WARNING: Removing unreachable block (ram,0x0184ef10) */
/* WARNING: Removing unreachable block (ram,0x0184ef1c) */

undefined8 FUN_0184eeac(float param_1,float param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  float *pfVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined1 auStack_a0 [16];
  long local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined **local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  float local_5c [2];
  float local_54;
  undefined *local_50;
  int local_48;
  int iStack_44;
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined4 local_14;
  
  puVar1 = PTR_DAT_04bb2010;
  local_48 = *(int *)(param_4 + 8);
  iStack_44 = *(int *)(param_4 + 0xc);
  local_50 = PTR_DAT_04bb2010 + 0x10;
  local_78 = (undefined **)((ulong)local_78 & 0xffffffff00000000);
  lVar7 = *(long *)(DAT_0519d040 + 0x1f8);
  if (((((lVar7 == 0) || (local_48 < *(int *)(lVar7 + 0x20) || *(int *)(lVar7 + 0x30) < local_48))
       || (iStack_44 < *(int *)(lVar7 + 0x24))) ||
      ((*(int *)(lVar7 + 0x34) < iStack_44 ||
       (uVar4 = FUN_01a1ddd0(&local_50,PTR_LAB_04bbe6c0), (uVar4 & 1) != 0)))) ||
     (uVar4 = FUN_01a1d5d0(&local_50), (uVar4 & 1) != 0)) {
LAB_0184ef78:
    uVar8 = 0;
  }
  else {
    local_54 = (float)iStack_44 * 5.0 + 2.5;
    local_5c[0] = (float)local_48 * 5.0 + 2.5;
    if ((*(long *)PTR_DAT_04bb2200 != 0) && (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x50) != 0)) {
      local_78 = (undefined **)((ulong)local_78 & 0xffffffff00000000);
    }
    fVar10 = (float)FUN_015cb8d4(0,local_5c,0);
    if (param_1 < fVar10) {
      return 0;
    }
    local_70 = 0;
    local_78 = &PTR_LAB_049ffa38;
    if (DAT_05aed670 == 0) {
      puVar9 = &DAT_055c04a0;
    }
    else {
      puVar9 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar9 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar9,0);
        puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar2 != 0x758f7eaf) {
          puVar9 = &DAT_055c04a0;
        }
      }
    }
    local_6c = *(undefined4 *)(puVar9 + 7);
    local_68 = FUN_017baf44();
    local_68 = local_68 & 1;
    local_88 = puVar1 + 0x10;
    uStack_80 = 0;
    puVar5 = (undefined2 *)FUN_01a5190c(&local_78,0,&local_50,&local_88);
    local_18 = *puVar5;
    local_16 = *(undefined1 *)(puVar5 + 1);
    local_15 = *(undefined1 *)((long)puVar5 + 3);
    local_14 = *(undefined4 *)(puVar5 + 2);
    iVar2 = FUN_0277ebd0(&local_18);
    lVar7 = DAT_05150358;
    if (iVar2 != 0) {
      if ((((DAT_05150358 == 0) || (*(long *)(DAT_05150358 + 0xb0) == 0)) ||
          (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0)) ||
         (((*(long *)(DAT_05150358 + 0x488) == 0 ||
           (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0)) ||
          ((*(long *)(DAT_05150358 + 0x2b0) == 0 ||
           (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0)))))) {
LAB_0184f184:
        uVar4 = FUN_0277e294(&local_18);
        if ((uVar4 & 1) == 0) goto LAB_0184f1d8;
        iVar2 = FUN_0277ebd0(&local_18);
        if ((iVar2 == 3) && (uVar4 = FUN_0097b580(&local_18,&local_88,param_4,1), (uVar4 & 1) == 0))
        {
          return 1;
        }
        FUN_01ad5d04(auStack_a0,&local_18);
        fVar10 = (float)FUN_01ae8c70(auStack_a0);
      }
      else {
        uVar3 = FUN_0277d6c4(&local_18);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((*(uint *)(lVar7 + 0x1d8) <= uVar3) ||
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0184f184;
        FUN_0124c030(auStack_a0,&local_18);
        fVar10 = 0.0;
        if ((local_90 != 0) &&
           (pfVar6 = (float *)FUN_01246470(local_90,0,0xc315945,*(undefined8 *)PTR_DAT_04bbbca8),
           pfVar6 != (float *)0x0)) {
          fVar10 = *pfVar6;
        }
      }
      if (param_2 < fVar10) goto LAB_0184ef78;
    }
LAB_0184f1d8:
    uVar8 = 1;
  }
  return uVar8;
}

