
uint FUN_022f2690(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined *local_50;
  uint local_48;
  ulong local_44;
  uint local_34;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    return 0;
  }
  local_50 = PTR_DAT_04bbc600 + 0x10;
  local_48 = *(uint *)(param_1 + 8);
  lVar7 = *(long *)PTR_DAT_04bbc218;
  lVar5 = *(long *)(lVar7 + 0x18);
  uVar3 = local_48;
  if (*(uint *)(lVar7 + 0x10) <= local_48) {
    uVar3 = 0;
  }
  puVar10 = *(uint **)(lVar5 + (long)(int)uVar3 * 0x18 + 0x10);
  if (0 < (int)*puVar10) {
    uVar2 = *(uint *)(param_1 + 0xc);
    lVar6 = (long)(int)uVar2;
    if (uVar2 < *(uint *)(lVar5 + (long)(int)uVar3 * 0x18 + 8)) {
      uVar9 = 0;
      local_44 = (ulong)uVar2;
      lVar11 = 0x78;
      do {
        if (((uVar9 < puVar10[lVar6 * 4]) && (*(long *)(puVar10 + lVar6 * 4 + 2) != 0)) &&
           (*(int *)(*(long *)(puVar10 + lVar6 * 4 + 2) + lVar11 + -0x4c) == 0)) {
          if (-1 < (int)(uint)uVar9) {
            uVar3 = local_48;
            if (*(uint *)(lVar7 + 0x10) <= local_48) {
              uVar3 = 0;
            }
            local_34 = local_48;
            if (((uVar2 < *(uint *)(lVar5 + (long)(int)uVar3 * 0x18 + 8)) &&
                (lVar5 = *(long *)(lVar5 + (long)(int)uVar3 * 0x18 + 0x10),
                (uint)uVar9 < *(uint *)(lVar5 + lVar6 * 0x10))) &&
               ((lVar5 = *(long *)(lVar5 + lVar6 * 0x10 + 8), lVar5 != 0 &&
                (puVar12 = *(undefined8 **)(lVar5 + lVar11), puVar12 != (undefined8 *)0x0)))) {
              if (((*PTR_DAT_04bbc6e8 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbc6e8), iVar4 != 0)) {
                *(undefined **)PTR_DAT_04bbc6e0 = PTR_DAT_04bbc660 + 0x10;
                __cxa_guard_release(PTR_DAT_04bbc6e8);
              }
              uVar9 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bbc6e0);
              if ((uVar9 & 1) != 0) {
                uVar1 = *param_3;
                uVar8 = param_3[2];
                puVar12[3] = param_3[1];
                puVar12[4] = uVar8;
                puVar12[2] = uVar1;
              }
            }
            uVar3 = FUN_01392f28(param_1,param_2,&local_50);
            goto LAB_022f2838;
          }
          break;
        }
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 0x518;
        local_44 = local_44 + 0x100000000;
      } while (*puVar10 != uVar9);
    }
  }
  uVar3 = 0;
LAB_022f2838:
  return uVar3 & 1;
}

