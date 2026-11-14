
/* WARNING: Removing unreachable block (ram,0x0172d104) */
/* WARNING: Removing unreachable block (ram,0x0172d240) */

void FUN_0172d084(long *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 local_160;
  undefined8 uStack_158;
  long local_150;
  long *local_148;
  uint local_13c;
  undefined8 local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined1 local_124 [255];
  undefined1 local_25;
  
  if ((int)param_1[1] == 0) goto LAB_0172d1f0;
  lVar7 = *param_1;
  if (*(char *)((long)param_1 + 0x16) == '\0') {
    if (*(long *)(lVar7 + 0x1138) != 0) {
      local_138._0_4_ = *(uint *)(lVar7 + 0x1698) >> 1 & 1;
      uVar5 = FUN_03850368(*(long *)(lVar7 + 0x1138),(uint)local_138);
      goto joined_r0x0172d114;
    }
  }
  else {
    local_138._0_4_ = 6;
    if (*(long *)(lVar7 + 0x1138) != 0) {
      uVar5 = FUN_03850368(*(long *)(lVar7 + 0x1138),6);
joined_r0x0172d114:
      if ((uVar5 & 1) != 0) {
        *(undefined1 *)((long)param_1 + 0x14) = 1;
      }
    }
  }
  iVar3 = *(int *)((long)param_1 + 0xc);
  if (iVar3 != -1) {
    if (iVar3 == -2) {
      *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
      return;
    }
    iVar4 = iVar3 + -1;
    if (iVar3 < 1) {
      return;
    }
    *(int *)((long)param_1 + 0xc) = iVar4;
    *(bool *)((long)param_1 + 0x15) = iVar4 == 0;
    if (iVar4 != 0) {
      return;
    }
    if (*(char *)((long)param_1 + 0x17) == '\0') {
      return;
    }
LAB_0172d1f0:
    *(undefined1 *)((long)param_1 + 0x14) = 1;
    return;
  }
  local_150 = 0;
  local_148 = (long *)0x0;
  lVar7 = *param_1;
  local_160 = 0;
  uStack_158 = 0;
  if (*(char *)((long)param_1 + 0x16) == '\0') {
    if (*(long *)(lVar7 + 0x1138) == 0) {
      return;
    }
    local_13c = *(uint *)(lVar7 + 0x1698) >> 1 & 1;
    local_138 = (undefined *)CONCAT44(local_138._4_4_,0x10);
    uVar5 = FUN_03850a90(*(long *)(lVar7 + 0x1138),0x10,&local_160,local_13c);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  else {
    local_13c = 6;
    local_138 = (undefined *)CONCAT44(local_138._4_4_,0x10);
    if (*(long *)(lVar7 + 0x1138) == 0) {
      return;
    }
    uVar5 = FUN_03850a90(*(long *)(lVar7 + 0x1138),0x10,&local_160,6);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  if (local_148 == (long *)0x0) {
    uVar6 = 1;
    goto LAB_0172d2f4;
  }
  if (*local_148 == 0) {
    local_25 = 0;
    local_128 = 0x100;
    puStack_130 = local_124;
    local_124[0] = 0;
    local_138 = PTR_DAT_04bb21f8 + 0x10;
    lVar7 = *(long *)(local_148[2] + 8);
    FUN_038d1270(&local_138,"%s.as",lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
  }
  else {
    iVar3 = *(int *)(*local_148 + 8);
    if (0x5fffffff < iVar3) {
      uVar1 = iVar3 + 0xa0000000;
      if (*(uint *)(local_150 + 0x80) <= uVar1) {
        uVar1 = 0;
      }
      lVar7 = *(long *)(local_150 + 0x88) + (ulong)uVar1 * 0x32;
      uVar6 = *(undefined4 *)(lVar7 + (ulong)*(byte *)(lVar7 + 0x20));
      goto LAB_0172d2f4;
    }
    piVar2 = (int *)(*(long *)(local_148[2] + 8) + (long)iVar3);
    if (0 < *piVar2) {
      uVar6 = *(undefined4 *)
               (((ulong)(uint)piVar2[1] & 0xfffffff) + *(long *)(local_148[2] + 8) + 4);
      goto LAB_0172d2f4;
    }
  }
  uVar6 = 0;
LAB_0172d2f4:
  *(undefined4 *)((long)param_1 + 0xc) = uVar6;
  *(undefined4 *)(param_1 + 2) = uVar6;
  return;
}

