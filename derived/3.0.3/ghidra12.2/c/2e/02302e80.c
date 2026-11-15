
uint FUN_02302e80(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *local_50;
  uint local_48;
  ulong local_44;
  uint local_34;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    return 0;
  }
  local_50 = PTR_DAT_04bbc600 + 0x10;
  local_48 = *(uint *)(param_1 + 8);
  lVar9 = *(long *)PTR_DAT_04bbc218;
  lVar7 = *(long *)(lVar9 + 0x18);
  uVar5 = local_48;
  if (*(uint *)(lVar9 + 0x10) <= local_48) {
    uVar5 = 0;
  }
  puVar11 = *(uint **)(lVar7 + (long)(int)uVar5 * 0x18 + 0x10);
  if (0 < (int)*puVar11) {
    uVar4 = *(uint *)(param_1 + 0xc);
    lVar8 = (long)(int)uVar4;
    if (uVar4 < *(uint *)(lVar7 + (long)(int)uVar5 * 0x18 + 8)) {
      uVar10 = 0;
      local_44 = (ulong)uVar4;
      lVar12 = 0x78;
      do {
        if (((uVar10 < puVar11[lVar8 * 4]) && (*(long *)(puVar11 + lVar8 * 4 + 2) != 0)) &&
           (*(int *)(*(long *)(puVar11 + lVar8 * 4 + 2) + lVar12 + -0x4c) == 0)) {
          if (-1 < (int)(uint)uVar10) {
            uVar5 = local_48;
            if (*(uint *)(lVar9 + 0x10) <= local_48) {
              uVar5 = 0;
            }
            local_34 = local_48;
            if (((uVar4 < *(uint *)(lVar7 + (long)(int)uVar5 * 0x18 + 8)) &&
                (lVar7 = *(long *)(lVar7 + (long)(int)uVar5 * 0x18 + 0x10),
                (uint)uVar10 < *(uint *)(lVar7 + lVar8 * 0x10))) &&
               ((lVar7 = *(long *)(lVar7 + lVar8 * 0x10 + 8), lVar7 != 0 &&
                (puVar13 = *(undefined8 **)(lVar7 + lVar12), puVar13 != (undefined8 *)0x0)))) {
              if (((*PTR_DAT_04bbc768 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbc768), iVar6 != 0)) {
                *(undefined **)PTR_DAT_04bbc760 = PTR_DAT_04bbc660 + 0x10;
                __cxa_guard_release(PTR_DAT_04bbc768);
              }
              uVar10 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bbc760);
              if ((uVar10 & 1) != 0) {
                uVar1 = *param_3;
                *(undefined8 *)((long)puVar13 + 0x14) = param_3[1];
                *(undefined8 *)((long)puVar13 + 0xc) = uVar1;
                uVar1 = param_3[2];
                uVar3 = param_3[3];
                uVar2 = param_3[4];
                *(undefined8 *)((long)puVar13 + 0x34) = param_3[5];
                *(undefined8 *)((long)puVar13 + 0x2c) = uVar2;
                *(undefined8 *)((long)puVar13 + 0x24) = uVar3;
                *(undefined8 *)((long)puVar13 + 0x1c) = uVar1;
              }
            }
            uVar5 = FUN_01393290(param_1,param_2,&local_50);
            goto LAB_0230303c;
          }
          break;
        }
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 0x518;
        local_44 = local_44 + 0x100000000;
      } while (*puVar11 != uVar10);
    }
  }
  uVar5 = 0;
LAB_0230303c:
  return uVar5 & 1;
}

