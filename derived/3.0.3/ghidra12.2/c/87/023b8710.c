
void FUN_023b8710(long param_1)

{
  byte *pbVar1;
  undefined1 uVar2;
  int *piVar3;
  long *plVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  byte bVar8;
  uint *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  int *piVar12;
  undefined4 local_50;
  undefined4 uStack_4c;
  char cStack_48;
  undefined1 uStack_47;
  char cStack_46;
  undefined1 uStack_45;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  int local_34;
  
  uVar2 = 6;
  if (*(char *)(param_1 + 0x190d) != '\0') {
    uVar2 = *(undefined1 *)(param_1 + 0x190e);
  }
  if (*(int *)(param_1 + 0x178) == 1) {
    FUN_023164ec(param_1,uVar2);
    return;
  }
  *(undefined4 *)(param_1 + 0x1908) = 0;
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  *(undefined8 *)(param_1 + 0x1844) = 0;
  *(undefined8 *)(param_1 + 0x1900) = 0;
  *(undefined8 *)(param_1 + 0x190f) = 0;
  *(undefined4 *)(param_1 + 0x1916) = 0;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfff7ffff;
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xffdfffff;
  *(undefined4 *)(param_1 + 0x1be4) = 2;
  puVar5 = PTR_DAT_04bb4718;
  *(undefined8 *)(param_1 + 0x1820) = 0;
  if (*(long *)puVar5 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_054f0960);
      puVar9 = (uint *)&DAT_054f0958;
      if (iVar6 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar9 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar9 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar9 = (uint *)(*(long *)puVar5 + 0x204);
    if ((ulong)*pbVar1 < 8) {
      puVar9 = puVar9 + (ulong)*pbVar1 * 2;
    }
  }
  local_50 = 0;
  *puVar9 = *puVar9 | 1;
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar7 = FUN_00a77090(pbVar1);
    if ((lVar7 != 0) || (lVar7 = FUN_00a76ee4(pbVar1), lVar7 != 0)) {
      if (-1 < (int)*(uint *)PTR_DAT_04bb6260) {
        uVar10 = 0;
        piVar12 = (int *)PTR_DAT_04bb6258;
        do {
          piVar3 = piVar12;
          if (999 < uVar10) {
            piVar3 = (int *)PTR_DAT_04bb6258;
          }
          if ((*piVar3 != 0) && (*(long *)(piVar3 + 2) == *(long *)(lVar7 + 8))) {
            if ((uint)uVar10 != 0xffffffff) {
              if (999 < (uint)uVar10) {
                piVar12 = (int *)PTR_DAT_04bb6258;
              }
              local_34 = *piVar12;
              goto LAB_023b894c;
            }
            break;
          }
          uVar10 = uVar10 + 1;
          piVar12 = piVar12 + 4;
        } while ((ulong)*(uint *)PTR_DAT_04bb6260 + 1 != uVar10);
      }
    }
    local_34 = 0;
LAB_023b894c:
    local_38 = *(undefined4 *)(param_1 + 0x230);
    FUN_0071cb58(&local_50,&local_34,&local_38,0);
    plVar4 = (long *)CONCAT44(uStack_4c,local_50);
    if (plVar4 != (long *)0x0) {
      if (((*PTR_DAT_04bb32a0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb32a0), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb3298 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb32a0);
      }
      uVar10 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3298);
      if ((uVar10 & 1) == 0) {
        cStack_46 = '\0';
      }
    }
    if (((((long *)CONCAT44(uStack_4c,local_50) != (long *)0x0) && (cStack_48 != '\0')) &&
        (cStack_46 != '\0')) &&
       (uVar10 = (**(code **)(*(long *)CONCAT44(uStack_4c,local_50) + 0x140))(), (uVar10 & 1) != 0))
    {
      return;
    }
  }
  FUN_023164ec(param_1,uVar2);
  bVar8 = *pbVar1;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined2 *)(param_1 + 0x3a4) = 0x100;
  *(undefined4 *)(param_1 + 0x3a0) = 10;
  local_40 = 0x3c23d70a;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  local_50 = CONCAT31(local_50._1_3_,bVar8);
  local_3c = 1;
  local_44 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  uStack_4c = (undefined4)uVar11;
  cStack_48 = (char)((ulong)uVar11 >> 0x20);
  uStack_47 = (undefined1)((ulong)uVar11 >> 0x28);
  cStack_46 = (char)((ulong)uVar11 >> 0x30);
  uStack_45 = (undefined1)((ulong)uVar11 >> 0x38);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_50,*(undefined4 *)(param_1 + 0x230),0);
  return;
}

