
/* WARNING: Removing unreachable block (ram,0x00350ca0) */

void FUN_00350a60(long param_1,long *param_2,uint param_3,byte param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  undefined4 uVar10;
  byte *pbVar11;
  ulong *puVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  int *piVar17;
  int *piVar18;
  byte bVar19;
  long lVar20;
  uint uVar21;
  undefined4 uVar22;
  uint in_stack_ffffffffffffff38;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_90 [8];
  
  iVar13 = 0x40;
  if (*(char *)(param_1 + 0xba) != '\0') {
    iVar13 = 0x60;
  }
  if (*param_2 == 0) {
    pbVar11 = *(byte **)(param_1 + 0xb0);
    uVar14 = (*(long *)(pbVar11 + 0x20) + (long)iVar13 * (long)*(int *)(param_1 + 0x9c)) - 1U &
             -*(long *)(pbVar11 + 0x20);
    if ((*pbVar11 & 1) == 0) {
      uVar16 = *(ulong *)(pbVar11 + 0x40);
      *(ulong *)(pbVar11 + 0x40) = uVar16 + uVar14;
    }
    else {
      puVar12 = *(ulong **)(pbVar11 + 0x40);
      do {
        uVar16 = *puVar12;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar8) {
          *puVar12 = uVar16 + uVar14;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
  }
  else {
    pbVar11 = *(byte **)(param_1 + 0xb0);
    uVar14 = (*(long *)(pbVar11 + 0x20) + (long)*(int *)(param_1 + 0x9c) * (long)iVar13 * 2) - 1U &
             -*(long *)(pbVar11 + 0x20);
    if ((*pbVar11 & 1) == 0) {
      uVar16 = *(ulong *)(pbVar11 + 0x40);
      *(ulong *)(pbVar11 + 0x40) = uVar16 + uVar14;
    }
    else {
      puVar12 = *(ulong **)(pbVar11 + 0x40);
      do {
        uVar16 = *puVar12;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar8) {
          *puVar12 = uVar16 + uVar14;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
  }
  *(int *)(param_1 + 4) = (int)uVar16;
  uVar21 = *(uint *)(param_1 + 0x9c);
  uVar22 = *(undefined4 *)((long)param_2 + 0x14);
  uVar3 = (undefined4)param_2[2];
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (uVar21 == 0) {
    uVar15 = 0;
  }
  else {
    uVar14 = 0;
    uVar15 = 0;
    lVar20 = param_1 + 0x10;
    do {
      uVar16 = *(ulong *)(*(long *)(param_1 + 0xa0) + uVar14 * 0x38 + 0x28) & 0xfffffffffffffffe;
      bVar19 = 0;
      if (uVar15 != 0) {
        do {
          if (*(ulong *)(lVar20 + (ulong)bVar19 * 0x10) == uVar16) {
            lVar9 = lVar20 + (ulong)bVar19 * 0x10;
            *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
            *(byte *)(*(long *)(param_1 + 0xa8) + uVar14) = bVar19;
            goto joined_r0x00350c00;
          }
          bVar19 = bVar19 + 1;
        } while (bVar19 < uVar15);
      }
      puVar12 = (ulong *)(lVar20 + (ulong)uVar15 * 0x10);
      *puVar12 = uVar16;
      puVar12[1] = 1;
      lVar9 = *(long *)(param_1 + 0xa0);
      bVar6 = *(byte *)(uVar16 + 0x17);
      *(uint *)((long)puVar12 + 0xc) = (uint)bVar6;
      if ((*(byte *)(lVar9 + uVar14 * 0x38 + 0x28) & 1) != 0) {
        *(uint *)((long)puVar12 + 0xc) = bVar6 | 2;
      }
      uVar15 = uVar15 + 1;
      if (7 < uVar15) break;
      *(byte *)(*(long *)(param_1 + 0xa8) + uVar14) = bVar19;
joined_r0x00350c00:
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar21);
    uVar16 = (ulong)*(uint *)(param_1 + 4);
  }
  uVar16 = uVar16 & 0xffffffff;
  *(uint *)(param_1 + 0x90) = uVar15;
  lVar20 = *(long *)(*(long *)(param_1 + 0xb0) + 0x38);
  uVar21 = *(uint *)(param_1 + 0x90);
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[6] = 0;
  local_90[7] = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  if (0 < (int)uVar21) {
    if (uVar21 == 1) {
      lVar9 = 0;
      iVar13 = 0;
    }
    else {
      lVar9 = 0;
      iVar13 = 0;
      piVar18 = (int *)((ulong)local_90 | 4);
      piVar17 = (int *)(param_1 + 0x28);
      do {
        iVar4 = piVar17[-4];
        lVar9 = lVar9 + -2;
        iVar5 = *piVar17;
        piVar18[-1] = iVar13;
        *piVar18 = iVar4 + iVar13;
        iVar13 = iVar5 + iVar4 + iVar13;
        piVar18 = piVar18 + 2;
        piVar17 = piVar17 + 8;
      } while (-lVar9 != ((ulong)uVar21 & 0xfffffffe));
      lVar9 = -lVar9;
      if ((uVar21 & 1) == 0) goto LAB_00350cf4;
    }
    local_90[lVar9] = iVar13;
  }
LAB_00350cf4:
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if (lVar20 == 0) {
    return;
  }
  uVar21 = *(uint *)(param_1 + 0x9c);
  uVar10 = 1;
  if (lVar1 != 0) {
    uVar10 = 2;
    if ((param_3 & 1) == 0) {
      if ((int)uVar21 < 1) {
        return;
      }
      uVar15 = 0;
      do {
        in_stack_ffffffffffffff38 = uVar15;
        FUN_00350ea8(uVar22,param_1,uVar16,lVar2,uVar3,lVar1,local_90,lVar20,2,&local_b0,uVar15,
                     param_4 & 1);
        uVar15 = uVar15 + 1;
      } while (uVar21 != uVar15);
    }
    else {
      if ((int)uVar21 < 1) {
        return;
      }
      uVar15 = uVar21 + 1;
      do {
        in_stack_ffffffffffffff38 = uVar15 - 2;
        FUN_00350ea8(uVar22,param_1,uVar16,lVar2,uVar3,lVar1,local_90,lVar20,2,&local_b0,
                     in_stack_ffffffffffffff38,param_4 & 1);
        uVar15 = uVar15 - 1;
      } while (1 < uVar15);
    }
  }
  if ((param_3 & 1) == 0) {
    if (0 < (int)uVar21) {
      uVar15 = 0;
      do {
        in_stack_ffffffffffffff38 =
             CONCAT31((int3)(in_stack_ffffffffffffff38 >> 8),param_4) & 0xffffff01;
        FUN_00351134(uVar22,param_1,uVar16,lVar2,uVar3,local_90,lVar20,uVar10,&local_b0,uVar15,
                     in_stack_ffffffffffffff38);
        uVar15 = uVar15 + 1;
      } while (uVar21 != uVar15);
    }
  }
  else if (0 < (int)uVar21) {
    uVar21 = uVar21 + 1;
    do {
      in_stack_ffffffffffffff38 =
           CONCAT31((int3)(in_stack_ffffffffffffff38 >> 8),param_4) & 0xffffff01;
      FUN_00351134(uVar22,param_1,uVar16,lVar2,uVar3,local_90,lVar20,uVar10,&local_b0,uVar21 - 2,
                   in_stack_ffffffffffffff38);
      uVar21 = uVar21 - 1;
    } while (1 < uVar21);
  }
  return;
}

