
uint FUN_022a3e00(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  undefined8 *puVar11;
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
  lVar4 = *(long *)(lVar7 + 0x18);
  uVar2 = local_48;
  if (*(uint *)(lVar7 + 0x10) <= local_48) {
    uVar2 = 0;
  }
  puVar9 = *(uint **)(lVar4 + (long)(int)uVar2 * 0x18 + 0x10);
  if (0 < (int)*puVar9) {
    uVar1 = *(uint *)(param_1 + 0xc);
    lVar6 = (long)(int)uVar1;
    if (uVar1 < *(uint *)(lVar4 + (long)(int)uVar2 * 0x18 + 8)) {
      uVar8 = 0;
      local_44 = (ulong)uVar1;
      lVar10 = 0x78;
      do {
        if (((uVar8 < puVar9[lVar6 * 4]) && (*(long *)(puVar9 + lVar6 * 4 + 2) != 0)) &&
           (*(int *)(*(long *)(puVar9 + lVar6 * 4 + 2) + lVar10 + -0x4c) == 0)) {
          if (-1 < (int)(uint)uVar8) {
            uVar2 = local_48;
            if (*(uint *)(lVar7 + 0x10) <= local_48) {
              uVar2 = 0;
            }
            local_34 = local_48;
            if (((uVar1 < *(uint *)(lVar4 + (long)(int)uVar2 * 0x18 + 8)) &&
                (lVar4 = *(long *)(lVar4 + (long)(int)uVar2 * 0x18 + 0x10),
                (uint)uVar8 < *(uint *)(lVar4 + lVar6 * 0x10))) &&
               ((lVar4 = *(long *)(lVar4 + lVar6 * 0x10 + 8), lVar4 != 0 &&
                (puVar11 = *(undefined8 **)(lVar4 + lVar10), puVar11 != (undefined8 *)0x0)))) {
              if (((*PTR_DAT_04bbc778 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbc778), iVar3 != 0)) {
                *(undefined **)PTR_DAT_04bbc770 = PTR_DAT_04bbc660 + 0x10;
                __cxa_guard_release(PTR_DAT_04bbc778);
              }
              uVar8 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bbc770);
              if ((uVar8 & 1) != 0) {
                uVar5 = *param_3;
                *(undefined4 *)((long)puVar11 + 0x14) = *(undefined4 *)(param_3 + 1);
                *(undefined8 *)((long)puVar11 + 0xc) = uVar5;
              }
            }
            uVar2 = FUN_01393290(param_1,param_2,&local_50);
            goto LAB_022a3fa8;
          }
          break;
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x518;
        local_44 = local_44 + 0x100000000;
      } while (*puVar9 != uVar8);
    }
  }
  uVar2 = 0;
LAB_022a3fa8:
  return uVar2 & 1;
}

