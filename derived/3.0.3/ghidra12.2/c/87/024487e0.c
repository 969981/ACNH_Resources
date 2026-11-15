
void FUN_024487e0(long param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  char *__dest;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  int local_1a0;
  undefined1 *local_150;
  int local_148;
  char *local_f8;
  int local_f0;
  undefined1 local_a8;
  undefined1 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  uint local_44;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  lVar8 = *(long *)puVar3;
  if (lVar8 == 0) goto LAB_02448a98;
  lVar9 = *(long *)(lVar9 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
     (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02448a98;
  local_50 = 0;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  local_60 = &PTR_FUN_04a36b50;
  uVar4 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar3 == 0) {
LAB_0244897c:
    local_44 = 0xbc;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0244897c;
    lVar8 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
       (puVar6 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8), puVar6 == (uint *)0x0)
       ) goto LAB_0244897c;
    local_44 = 0;
    uVar4 = *puVar6;
    if ((uVar4 != 0) && (puVar6 != (uint *)(ulong)uVar4)) {
      puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
      local_44 = 0;
      if (*puVar7 != 0) {
        uVar4 = puVar7[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar8 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar6 - lVar8) / (ulong)uVar4);
            }
            if (*puVar7 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (local_44 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), local_44 < 0xbd))
            goto LAB_02448988;
          }
        }
        local_44 = 0;
      }
    }
  }
LAB_02448988:
  local_1b0 = 0x96;
  if (local_44 == 0x96) {
    FUN_0257a010(&local_1b0);
    if (local_f8 != "PlayerWait") {
      iVar1 = 10;
      if (local_f0 < 0xb) {
        iVar1 = local_f0 + -1;
      }
      memcpy(local_f8,"PlayerWait",(long)iVar1);
      local_f8[iVar1] = '\0';
    }
    __dest = (char *)CONCAT44(uStack_1a4,local_1a8);
    if (__dest != "Player_GetDemo_Easter") {
      iVar1 = 0x15;
      if (local_1a0 < 0x16) {
        iVar1 = local_1a0 + -1;
      }
      memcpy(__dest,"Player_GetDemo_Easter",(long)iVar1);
      __dest[iVar1] = '\0';
    }
    if (local_150 != &DAT_04066c7f) {
      iVar1 = 4;
      if (local_148 < 5) {
        iVar1 = local_148 + -1;
      }
      memcpy(local_150,&DAT_04066c7f,(long)iVar1);
      local_150[iVar1] = 0;
    }
    local_84 = 0;
    local_a8 = 1;
    local_7c = 1;
    local_80 = 5;
    FUN_024480f0(param_1,&local_1b0);
    return;
  }
LAB_02448a98:
  uVar5 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
  if ((uVar5 & 1) == 0) {
    local_1a8 = 0;
    local_1b0 = 6;
    local_1ac = 1;
    FUN_02374e74(param_1,&local_1b0);
  }
  return;
}

