
/* WARNING: Removing unreachable block (ram,0x02ad3f94) */
/* WARNING: Removing unreachable block (ram,0x02ad3ef0) */
/* WARNING: Removing unreachable block (ram,0x02ad3e4c) */
/* WARNING: Removing unreachable block (ram,0x02ad3e68) */
/* WARNING: Removing unreachable block (ram,0x02ad3f0c) */
/* WARNING: Removing unreachable block (ram,0x02ad3fb0) */

void FUN_02ad3d60(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  uVar9 = 0;
  do {
    local_180 = (undefined *)CONCAT44(local_180._4_4_,uVar9);
    uVar6 = (ulong)uVar9;
    if (10 < uVar9) {
      uVar6 = 0;
    }
    lVar8 = param_1[uVar6 + 0xe];
    if (lVar8 != 0) {
      pcVar1 = (char *)((long)(param_2 + 1) + (ulong)uVar9 * 0x1c);
      if (10 < uVar9) {
        pcVar1 = (char *)(param_2 + 1);
      }
      if (*pcVar1 == '\0') {
        *(uint *)(lVar8 + 0x20) = *(uint *)(lVar8 + 0x20) | 0x60;
      }
      else {
        *(undefined1 *)(lVar8 + 0x48) = 1;
        *(uint *)(lVar8 + 0x20) = *(uint *)(lVar8 + 0x20) & 0xffffff9f;
        FUN_02ad9e20(lVar8,*param_2,*(undefined4 *)(pcVar1 + 4),*(undefined4 *)(pcVar1 + 8));
        iVar2 = *(int *)(pcVar1 + 0xc);
        iVar4 = *(int *)(pcVar1 + 0x10);
        iVar3 = *(int *)(pcVar1 + 0x14);
        iVar5 = *(int *)(pcVar1 + 0x18);
        *(int *)(lVar8 + 0x38) = iVar2;
        *(int *)(lVar8 + 0x3c) = iVar4;
        *(int *)(lVar8 + 0x40) = iVar2 + iVar3 + -1;
        *(int *)(lVar8 + 0x44) = iVar4 + iVar5 + -1;
      }
    }
    uVar10 = 0xb;
    if ((int)uVar9 < 0xb) {
      uVar10 = uVar9 + 1;
    }
    uVar9 = uVar10;
  } while (uVar10 != 0xb);
  local_180 = (undefined *)((ulong)local_180 & 0xffffffff00000000);
  lVar8 = param_1[0x19];
  if (lVar8 != 0) {
    if (*(char *)((long)param_2 + 0x13c) == '\0') {
      *(uint *)(lVar8 + 0x20) = *(uint *)(lVar8 + 0x20) | 0x60;
    }
    else {
      *(undefined1 *)(lVar8 + 0x48) = 1;
      *(uint *)(lVar8 + 0x20) = *(uint *)(lVar8 + 0x20) & 0xffffff9f;
      FUN_02ad9e20(lVar8,*param_2,*(int *)(param_2 + 0x28) << 1,*(int *)((long)param_2 + 0x144) << 1
                  );
      iVar2 = *(int *)(param_2 + 0x29);
      iVar4 = *(int *)((long)param_2 + 0x14c);
      iVar3 = *(int *)(param_2 + 0x2a);
      iVar5 = *(int *)((long)param_2 + 0x154);
      *(int *)(lVar8 + 0x38) = iVar2 << 1;
      *(int *)(lVar8 + 0x3c) = iVar4 << 1;
      *(int *)(lVar8 + 0x40) = (iVar3 + iVar2) * 2 + -1;
      *(int *)(lVar8 + 0x44) = (iVar5 + iVar4) * 2 + -1;
    }
  }
  local_180._0_4_ = 1;
  lVar8 = param_1[0x1a];
  if (lVar8 != 0) {
    if (*(char *)(param_2 + 0x2b) == '\0') {
      *(uint *)(lVar8 + 0x20) = *(uint *)(lVar8 + 0x20) | 0x60;
    }
    else {
      *(undefined1 *)(lVar8 + 0x48) = 1;
      *(uint *)(lVar8 + 0x20) = *(uint *)(lVar8 + 0x20) & 0xffffff9f;
      FUN_02ad9e20(lVar8,*param_2,*(int *)((long)param_2 + 0x15c) << 1,*(int *)(param_2 + 0x2c) << 1
                  );
      iVar2 = *(int *)((long)param_2 + 0x164);
      iVar4 = *(int *)(param_2 + 0x2d);
      iVar3 = *(int *)((long)param_2 + 0x16c);
      iVar5 = *(int *)(param_2 + 0x2e);
      *(int *)(lVar8 + 0x38) = iVar2 << 1;
      *(int *)(lVar8 + 0x3c) = iVar4 << 1;
      *(int *)(lVar8 + 0x40) = (iVar3 + iVar2) * 2 + -1;
      *(int *)(lVar8 + 0x44) = (iVar5 + iVar4) * 2 + -1;
    }
  }
  local_180 = (undefined *)CONCAT44(local_180._4_4_,2);
  lVar8 = param_1[0x1b];
  if (lVar8 != 0) {
    if (*(char *)((long)param_2 + 0x174) == '\0') {
      *(uint *)(lVar8 + 0x20) = *(uint *)(lVar8 + 0x20) | 0x60;
    }
    else {
      *(undefined1 *)(lVar8 + 0x48) = 1;
      *(uint *)(lVar8 + 0x20) = *(uint *)(lVar8 + 0x20) & 0xffffff9f;
      FUN_02ad9e20(lVar8,*param_2,*(int *)(param_2 + 0x2f) << 1,*(int *)((long)param_2 + 0x17c) << 1
                  );
      iVar2 = *(int *)(param_2 + 0x30);
      iVar4 = *(int *)((long)param_2 + 0x184);
      iVar3 = *(int *)(param_2 + 0x31);
      iVar5 = *(int *)((long)param_2 + 0x18c);
      *(int *)(lVar8 + 0x38) = iVar2 << 1;
      *(int *)(lVar8 + 0x3c) = iVar4 << 1;
      *(int *)(lVar8 + 0x40) = (iVar3 + iVar2) * 2 + -1;
      *(int *)(lVar8 + 0x44) = (iVar5 + iVar4) * 2 + -1;
    }
  }
  local_6d = 0;
  uVar7 = *param_2;
  local_170 = 0x100;
  puStack_178 = local_16c;
  local_16c[0] = 0;
  local_180 = PTR_DAT_04bb21f8 + 0x10;
  uVar6 = (**(code **)(*param_1 + 0xf0))(param_1,&local_180,1);
  if ((uVar6 & 1) != 0) {
    FUN_03c27e60(param_1,&local_180,uVar7);
  }
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}

