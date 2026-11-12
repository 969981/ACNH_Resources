
void FUN_007599d4(undefined8 param_1,undefined4 *param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ushort *puVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  undefined1 auStack_62 [2];
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint *local_50;
  uint local_48;
  uint local_44;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_50 = (uint *)0x0;
  local_60 = PTR_DAT_04bc0510 + 0x10;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar3 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         (puVar8 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar8 != (uint *)0x0)) {
        uVar4 = *puVar8;
        local_50 = puVar8;
        if (uVar4 != 0 && puVar8 != (uint *)(ulong)uVar4) {
          puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
          if (((*puVar9 != 0) && (uVar4 = puVar9[1], uVar4 != 0)) && ((ulong)(ushort)puVar9[2] != 0)
             ) {
            lVar10 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar10 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar4);
              }
              if (*puVar9 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_48 = (uint)uVar2,
                 uVar2 < 0xbd)) goto LAB_00759b44;
            }
          }
        }
        local_48 = 0;
        goto LAB_00759b44;
      }
    }
  }
  local_48 = 0xbc;
LAB_00759b44:
  local_44 = 0xac;
  if (local_48 == 0xac) {
    FUN_01b086f4(auStack_62,&local_60);
  }
  else {
    uVar6 = FUN_01ae89e0(&local_60);
    if ((uVar6 & 1) == 0) {
      iVar5 = FUN_01afcfa0(&local_60);
      if ((iVar5 == 0) || (puVar7 = (ushort *)FUN_01afd600(&local_60), puVar7 == (ushort *)0x0)) {
        local_44 = 0;
      }
      else {
        uVar4 = *puVar7 >> 3 & 3;
        local_44 = 0;
        if (uVar4 != 3) {
          local_44 = uVar4;
        }
      }
      if (local_44 == 2) {
        FUN_01afd2f0(auStack_62,&local_60);
      }
      else {
        FUN_007ef010(auStack_62,PTR_DAT_04bb3170);
      }
    }
    else {
      FUN_01b08c14(auStack_62,&local_60);
    }
  }
  FUN_007596e0(param_1,auStack_62,param_3,param_4 & 1);
  return;
}

