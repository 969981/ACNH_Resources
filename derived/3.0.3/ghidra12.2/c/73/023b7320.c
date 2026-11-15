
void FUN_023b7320(long param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  float fVar14;
  float local_84 [2];
  float local_7c;
  undefined1 local_78 [4];
  char local_74 [4];
  long *local_70;
  char local_68;
  char local_66;
  int local_5c;
  int local_58;
  float local_54;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  
  lVar8 = FUN_00a77090((byte *)(param_1 + 0x1ee8));
  if ((lVar8 != 0) && (-1 < (int)*(uint *)PTR_DAT_04bb6260)) {
    uVar9 = 0;
    piVar12 = (int *)PTR_DAT_04bb6258;
    do {
      piVar2 = piVar12;
      if (999 < uVar9) {
        piVar2 = (int *)PTR_DAT_04bb6258;
      }
      if ((*piVar2 != 0) && (*(long *)(piVar2 + 2) == *(long *)(lVar8 + 0x10))) {
        if ((uint)uVar9 != 0xffffffff) {
          if (999 < (uint)uVar9) {
            piVar12 = (int *)PTR_DAT_04bb6258;
          }
          local_5c = *piVar12;
          goto LAB_023b73cc;
        }
        break;
      }
      uVar9 = uVar9 + 1;
      piVar12 = piVar12 + 4;
    } while ((ulong)*(uint *)PTR_DAT_04bb6260 + 1 != uVar9);
  }
  local_5c = 0;
LAB_023b73cc:
  local_58 = *(int *)(param_1 + 0x230);
  FUN_0071cb58(&local_70,&local_5c,&local_58,0);
  plVar3 = local_70;
  if (local_70 != (long *)0x0) {
    if (((*PTR_DAT_04bb32a0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb32a0), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb3298 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32a0);
    }
    uVar9 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb3298);
    if ((uVar9 & 1) == 0) {
      local_66 = '\0';
    }
  }
  plVar3 = local_70;
  if (((local_70 == (long *)0x0) || (local_68 == '\0')) || (local_66 == '\0')) {
    FUN_023b77d0(param_1);
    return;
  }
  local_74[0] = '\0';
  local_78[0] = 0;
  FUN_023b7030(param_1,local_84,local_74,local_78);
  puVar6 = PTR_DAT_04bb4718;
  if (((*(byte *)((long)plVar3 + 0x286) >> 3 & 1) != 0) || (local_74[0] == '\0')) {
    FUN_023b77d0(param_1);
    goto LAB_023b768c;
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = *(float *)(*(long *)PTR_DAT_04bb4718 + 0x11c0);
  }
  if (fVar14 == 0.0) {
    fVar14 = 0.32;
  }
  iVar7 = FUN_006f0400(local_84[0] - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                       local_7c - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  if ((*(uint *)(param_1 + 0x1810) | 4) != 5) goto LAB_023b768c;
  if ((param_2 & 1) == 0) {
    local_50 = 0x41a000003f800000;
    local_48 = 0;
    local_58 = iVar7;
    local_54 = fVar14;
    FUN_023b7bb8(param_1,&local_58);
    goto LAB_023b768c;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    local_44 = 10;
    local_58 = 10;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_023b7558;
  }
  else {
LAB_023b7558:
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar8 = (**(code **)(*plVar3 + 0x148))();
    iVar11 = iVar7 - *(int *)(lVar8 + 4);
    if (iVar11 + 0x16c16c1U < 0x2d82d83) {
      *(int *)(lVar8 + 4) = iVar7;
    }
    else {
      iVar4 = 0xe38e390;
      iVar5 = -0xe38e390;
      iVar11 = (int)(fVar14 * (float)iVar11);
      if (iVar11 < 1) {
        iVar4 = -0x16c16c2;
      }
      else {
        iVar5 = 0x16c16c2;
      }
      iVar1 = iVar11;
      if (iVar4 <= iVar11) {
        iVar1 = iVar4;
      }
      if (iVar5 <= iVar11) {
        iVar5 = iVar1;
      }
      iVar5 = iVar5 + *(int *)(lVar8 + 4);
      *(int *)(lVar8 + 4) = iVar5;
      if (iVar5 != iVar7) goto LAB_023b768c;
    }
  }
  if (*(long *)puVar6 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_054f0960);
      puVar13 = (uint *)&DAT_054f0958;
      if (iVar7 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar13 = (uint *)&DAT_054f0958;
    }
  }
  else {
    uVar9 = (ulong)*(byte *)(param_1 + 0x1ee8);
    puVar13 = (uint *)(*(long *)puVar6 + 0x204);
    if (uVar9 < 8) {
      puVar13 = puVar13 + uVar9 * 2;
    }
  }
  *puVar13 = *puVar13 & 0xfffffffe;
LAB_023b768c:
  local_44 = 4;
  if ((*(byte *)(param_1 + 0x18f4) >> 4 & 1) == 0) {
    local_58 = 4;
    lVar8 = (**(code **)(*local_70 + 0x110))();
    lVar10 = *(long *)(param_1 + 0x60);
    if (lVar8 == 0) {
      if (lVar10 != 0) {
        *(undefined4 *)(lVar10 + 0x12d0) = 0;
        *(undefined1 *)(lVar10 + 0x142d) = 0;
        **(undefined1 **)(lVar10 + 0x12e0) = 0;
        *(undefined4 *)(lVar10 + 0x1330) = 0xffffffff;
        *(undefined4 *)(lVar10 + 0x1428) = 0;
        *(undefined8 *)(lVar10 + 0x1334) = 0;
        *(undefined8 *)(lVar10 + 0x133c) = 0;
        *(undefined4 *)(lVar10 + 0x1344) = 0;
      }
    }
    else if (lVar10 != 0) {
      FUN_01730cb4(lVar10 + 0x12c0,lVar8);
    }
  }
  return;
}

