
uint FUN_022e39a0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
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
  lVar5 = *(long *)(lVar7 + 0x18);
  uVar3 = local_48;
  if (*(uint *)(lVar7 + 0x10) <= local_48) {
    uVar3 = 0;
  }
  puVar9 = *(uint **)(lVar5 + (long)(int)uVar3 * 0x18 + 0x10);
  if (0 < (int)*puVar9) {
    uVar2 = *(uint *)(param_1 + 0xc);
    lVar6 = (long)(int)uVar2;
    if (uVar2 < *(uint *)(lVar5 + (long)(int)uVar3 * 0x18 + 8)) {
      uVar8 = 0;
      local_44 = (ulong)uVar2;
      lVar10 = 0x78;
      do {
        if (((uVar8 < puVar9[lVar6 * 4]) && (*(long *)(puVar9 + lVar6 * 4 + 2) != 0)) &&
           (*(int *)(*(long *)(puVar9 + lVar6 * 4 + 2) + lVar10 + -0x4c) == 0)) {
          if (-1 < (int)(uint)uVar8) {
            uVar3 = local_48;
            if (*(uint *)(lVar7 + 0x10) <= local_48) {
              uVar3 = 0;
            }
            local_34 = local_48;
            if (((uVar2 < *(uint *)(lVar5 + (long)(int)uVar3 * 0x18 + 8)) &&
                (lVar5 = *(long *)(lVar5 + (long)(int)uVar3 * 0x18 + 0x10),
                (uint)uVar8 < *(uint *)(lVar5 + lVar6 * 0x10))) &&
               ((lVar5 = *(long *)(lVar5 + lVar6 * 0x10 + 8), lVar5 != 0 &&
                (puVar11 = *(undefined8 **)(lVar5 + lVar10), puVar11 != (undefined8 *)0x0)))) {
              if (((*PTR_DAT_04bbc718 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbc718), iVar4 != 0)) {
                *(undefined **)PTR_DAT_04bbc710 = PTR_DAT_04bbc660 + 0x10;
                __cxa_guard_release(PTR_DAT_04bbc718);
              }
              uVar8 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bbc710);
              if ((uVar8 & 1) != 0) {
                uVar1 = *param_3;
                *(undefined4 *)((long)puVar11 + 0xf) = *(undefined4 *)((long)param_3 + 3);
                *(undefined4 *)((long)puVar11 + 0xc) = uVar1;
                FUN_0131aa38((long)puVar11 + 0x14,param_3 + 2);
                uVar1 = param_3[0x25];
                *(undefined2 *)((long)puVar11 + 0xa4) = *(undefined2 *)(param_3 + 0x26);
                *(undefined4 *)(puVar11 + 0x14) = uVar1;
              }
            }
            uVar3 = FUN_01392f28(param_1,param_2,&local_50);
            goto LAB_022e3b64;
          }
          break;
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x518;
        local_44 = local_44 + 0x100000000;
      } while (*puVar9 != uVar8);
    }
  }
  uVar3 = 0;
LAB_022e3b64:
  return uVar3 & 1;
}

