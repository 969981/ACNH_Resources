
uint FUN_022ccb20(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
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
  lVar8 = *(long *)PTR_DAT_04bbc218;
  lVar6 = *(long *)(lVar8 + 0x18);
  uVar4 = local_48;
  if (*(uint *)(lVar8 + 0x10) <= local_48) {
    uVar4 = 0;
  }
  puVar11 = *(uint **)(lVar6 + (long)(int)uVar4 * 0x18 + 0x10);
  if (0 < (int)*puVar11) {
    uVar3 = *(uint *)(param_1 + 0xc);
    lVar7 = (long)(int)uVar3;
    if (uVar3 < *(uint *)(lVar6 + (long)(int)uVar4 * 0x18 + 8)) {
      uVar10 = 0;
      local_44 = (ulong)uVar3;
      lVar12 = 0x78;
      do {
        if (((uVar10 < puVar11[lVar7 * 4]) && (*(long *)(puVar11 + lVar7 * 4 + 2) != 0)) &&
           (*(int *)(*(long *)(puVar11 + lVar7 * 4 + 2) + lVar12 + -0x4c) == 0)) {
          if (-1 < (int)(uint)uVar10) {
            uVar4 = local_48;
            if (*(uint *)(lVar8 + 0x10) <= local_48) {
              uVar4 = 0;
            }
            local_34 = local_48;
            if (((uVar3 < *(uint *)(lVar6 + (long)(int)uVar4 * 0x18 + 8)) &&
                (lVar6 = *(long *)(lVar6 + (long)(int)uVar4 * 0x18 + 0x10),
                (uint)uVar10 < *(uint *)(lVar6 + lVar7 * 0x10))) &&
               ((lVar6 = *(long *)(lVar6 + lVar7 * 0x10 + 8), lVar6 != 0 &&
                (puVar13 = *(undefined8 **)(lVar6 + lVar12), puVar13 != (undefined8 *)0x0)))) {
              if (((*PTR_DAT_04bbc708 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbc708), iVar5 != 0)) {
                *(undefined **)PTR_DAT_04bbc700 = PTR_DAT_04bbc660 + 0x10;
                __cxa_guard_release(PTR_DAT_04bbc708);
              }
              uVar10 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bbc700);
              if ((uVar10 & 1) != 0) {
                *(undefined8 *)((long)puVar13 + 0xc) = *param_3;
                uVar1 = param_3[1];
                uVar9 = param_3[2];
                uVar2 = param_3[3];
                *(undefined8 *)((long)puVar13 + 0x2c) = param_3[4];
                *(undefined8 *)((long)puVar13 + 0x24) = uVar2;
                *(undefined8 *)((long)puVar13 + 0x1c) = uVar9;
                *(undefined8 *)((long)puVar13 + 0x14) = uVar1;
                uVar1 = param_3[5];
                uVar9 = param_3[6];
                uVar2 = param_3[7];
                *(undefined8 *)((long)puVar13 + 0x4c) = param_3[8];
                *(undefined8 *)((long)puVar13 + 0x44) = uVar2;
                *(undefined8 *)((long)puVar13 + 0x3c) = uVar9;
                *(undefined8 *)((long)puVar13 + 0x34) = uVar1;
                uVar1 = param_3[9];
                uVar2 = param_3[10];
                uVar9 = param_3[0xb];
                *(undefined4 *)((long)puVar13 + 0x6c) = *(undefined4 *)(param_3 + 0xc);
                *(undefined8 *)((long)puVar13 + 100) = uVar9;
                *(undefined8 *)((long)puVar13 + 0x5c) = uVar2;
                *(undefined8 *)((long)puVar13 + 0x54) = uVar1;
                *(undefined4 *)(puVar13 + 0xe) = *(undefined4 *)((long)param_3 + 100);
                *(undefined1 *)((long)puVar13 + 0x74) = *(undefined1 *)(param_3 + 0xd);
              }
            }
            uVar4 = FUN_01393290(param_1,param_2,&local_50);
            goto LAB_022ccd1c;
          }
          break;
        }
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 0x518;
        local_44 = local_44 + 0x100000000;
      } while (*puVar11 != uVar10);
    }
  }
  uVar4 = 0;
LAB_022ccd1c:
  return uVar4 & 1;
}

