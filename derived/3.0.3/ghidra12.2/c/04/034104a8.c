
void FUN_034104a8(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  long lVar12;
  undefined *local_168;
  undefined1 *local_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  undefined **local_50;
  undefined4 local_48;
  
  lVar12 = *(long *)(param_1 + 8);
  if (lVar12 != 0) {
    if ((param_2 == 0) || (0x10d < *(uint *)(param_1 + 0x18))) {
LAB_03410518:
      iVar5 = 3;
    }
    else {
      iVar5 = *(int *)(param_2 + (ulong)*(uint *)(param_1 + 0x18) * 0x1a8 + 0x1a8);
      if (iVar5 == 1) {
        iVar5 = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      else {
        if (iVar5 != 2) goto LAB_03410518;
        if (*(int *)(param_1 + 0x1c) == 1) {
          iVar5 = 2;
          *(undefined4 *)(param_1 + 0x1c) = 2;
        }
        else {
          if (*(int *)(param_1 + 0x1c) != 0) goto LAB_03410518;
          *(undefined4 *)(param_1 + 0x1c) = 2;
          iVar5 = 1;
        }
      }
    }
    local_168 = (undefined *)CONCAT44(local_168._4_4_,iVar5);
    if (iVar5 - 1U < 2) {
      if (*(uint *)(param_1 + 0x18) < 0x10e) {
        lVar6 = param_2 + (ulong)*(uint *)(param_1 + 0x18) * 0x1a8;
        lVar7 = param_2 + 0x1bf38;
        if (param_3 != 0) {
          lVar7 = param_3;
        }
        uVar3 = FUN_03463a4c(lVar6 + 8,lVar6 + 0x150,*(undefined8 *)(lVar12 + 0x3f0));
        local_55 = 0;
        local_158 = 0x100;
        local_160 = local_154;
        local_154[0] = 0;
        plVar11 = *(long **)(lVar12 + 0x3e0);
        local_168 = PTR_DAT_04bb21f8 + 0x10;
        local_50 = &PTR_LAB_04a3ee98;
        local_48 = 1;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_50);
        (**(code **)(plVar11[3] + 0x30))(&local_168,plVar11[1]);
        if (((uVar3 & 1) == 0) && (*(long *)(lVar7 + 8) != -1)) {
          lVar12 = *(long *)(lVar12 + 0x3f0);
          *(undefined8 *)(lVar12 + 8) = 0xffffffffffffffff;
          *(undefined8 *)(lVar12 + 8) = *(undefined8 *)(lVar7 + 8);
          *(undefined4 *)(lVar12 + 0x10) = *(undefined4 *)(lVar7 + 0x10);
          *(undefined4 *)(lVar12 + 0x18) = *(undefined4 *)(lVar7 + 0x18);
        }
        *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xfffe;
      }
    }
    else if (iVar5 == 0) {
      lVar7 = *(long *)(lVar12 + 0x3f0);
      *(undefined8 *)(lVar7 + 8) = 0xffffffffffffffff;
      lVar12 = param_2 + 0x1bf38;
      if (param_3 != 0) {
        lVar12 = param_3;
      }
      *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar12 + 8);
      *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar12 + 0x10);
      *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)(lVar12 + 0x18);
    }
  }
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 != 0) {
    uVar4 = *(uint *)(param_1 + 0x20);
    lVar7 = *(long *)(param_1 + 0x28);
    if ((uVar4 == 0xffffffff) || (*(char *)(param_1 + 0x24) != '\0')) {
LAB_0341069c:
      iVar5 = 3;
    }
    else {
      uVar1 = uVar4;
      if (*(uint *)(lVar7 + 8) <= uVar4) {
        uVar1 = 0;
      }
      if (*(int *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar1 * 0x10 + 0xc) != 3) goto LAB_0341069c;
      iVar5 = 1;
      *(undefined1 *)(param_1 + 0x24) = 1;
    }
    local_168 = (undefined *)CONCAT44(local_168._4_4_,iVar5);
    if (iVar5 == 1) {
      if (*(uint *)(lVar7 + 8) <= uVar4) {
        uVar4 = 0;
      }
      FUN_03b137d0(lVar12 + 0x310,
                   *(undefined8 *)
                    (*(long *)(lVar7 + 0x10) +
                    (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4)),0);
      *(undefined4 *)(lVar12 + 0x328) = 0;
      plVar11 = *(long **)(lVar12 + 0x290);
      local_168 = PTR_DAT_04bc0cb8 + 0x10;
      local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x1f);
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_168);
      (**(code **)(plVar11[3] + 0x208))(plVar11[1],0,0,lVar12 + 0x310);
      *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xfffd;
    }
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0x38);
  if ((uVar4 == 0xffffffff) && (*(char *)(param_1 + 0x50) != '\0')) {
    puVar10 = (undefined1 *)(param_1 + 0x51);
    *puVar10 = 1;
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined8 *)(param_1 + 0x3c) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x44) = uVar2;
    uVar4 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x38) = uVar4;
    if (uVar4 != 0xffffffff) {
      uVar8 = *(uint *)(param_1 + 0x58);
      lVar12 = *(long *)(param_1 + 0x60);
      uVar1 = uVar4;
      if (uVar8 <= uVar4) {
        uVar1 = 0;
      }
      puVar9 = *(undefined8 **)(lVar12 + (long)(int)uVar1 * 0x40);
      if (puVar9 != (undefined8 *)0x0) {
        (*(code *)*puVar9)();
        uVar4 = *(uint *)(param_1 + 0x38);
        goto LAB_034107ac;
      }
      *puVar10 = 0;
      goto LAB_034107d4;
    }
    *puVar10 = 0;
  }
  else {
LAB_034107ac:
    *(undefined1 *)(param_1 + 0x51) = 0;
    if (uVar4 != 0xffffffff) {
      uVar8 = *(uint *)(param_1 + 0x58);
      lVar12 = *(long *)(param_1 + 0x60);
LAB_034107d4:
      if (uVar8 <= uVar4) {
        uVar4 = 0;
      }
      lVar12 = *(long *)(lVar12 + (long)(int)uVar4 * 0x40);
      if ((lVar12 != 0) && ((**(code **)(lVar12 + 8))(), *(char *)(param_1 + 0x51) != '\0'))
      goto LAB_03410808;
    }
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
LAB_03410808:
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}

