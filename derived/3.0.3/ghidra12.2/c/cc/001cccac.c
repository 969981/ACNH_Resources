
void FUN_001cccac(long *param_1,long param_2,ulong *param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x23;
  undefined1 auStack_c0 [128];
  
  puVar7 = PTR_DAT_04bcbb78;
  if ((*(ushort *)(param_2 + 0x60) & 0xf) == 4) {
    if (*PTR_DAT_04bcbca8 == '\0') {
      FUN_0018cb8c(auStack_c0 + 0x98);
      *(long *)PTR_DAT_04bcbcb0 = unaff_x23;
      iVar3 = *(int *)((long)param_1 + 0x11c);
    }
    else {
      FUN_0018c9b0(auStack_c0 + 0x98,0);
      *(long *)PTR_DAT_04bcbcb0 = unaff_x23;
      iVar3 = *(int *)((long)param_1 + 0x11c);
    }
    if (iVar3 != 0) {
      FUN_001ca3a8(param_1);
      return;
    }
    lVar6 = param_1[0x28];
    uVar4 = (**(code **)(*param_1 + 0x90))(param_1);
    puVar7 = PTR_DAT_04bcbb78;
    if ((long)(uVar4 & 0xffffffff) < unaff_x23 - lVar6) {
      uVar4 = (**(code **)(*param_1 + 0x58))(param_1);
      if ((((uVar4 & 1) == 0) || (*PTR_DAT_04bcc6b0 == '\0')) ||
         (uVar4 = (**(code **)(**(long **)(param_1[1] + 0x10) + 0x20))
                            (*(long **)(param_1[1] + 0x10),param_1), (uVar4 & 1) == 0)) {
        FUN_001ca3a8(param_1,2);
        return;
      }
      return;
    }
    uVar1 = *(uint *)(param_1[1] + 8);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      if (*puVar5 != 0) {
        puVar7 = (undefined *)
                 (*(long *)(puVar7 + (ulong)uVar1 * 0x2a8 + 0x10) + (ulong)*puVar5 * 0x148);
        goto LAB_001cd004;
      }
    }
    puVar7 = puVar7 + (ulong)uVar1 * 0x2a8 + 0x18;
LAB_001cd004:
    lVar6 = param_1[0x27];
    uVar4 = (**(code **)(*param_1 + 0x88))(param_1);
    if (((long)(uVar4 & 0xffffffff) < unaff_x23 - lVar6) && (puVar7[0xf5] != '\0')) {
      lVar6 = param_1[0x1f];
      *(undefined1 *)(lVar6 + 0xcd) = 0;
      *(short *)(lVar6 + 0x70) = *(short *)(lVar6 + 0x70) + 1;
      iVar3 = (**(code **)(*param_1 + 0x88))(param_1);
      if ((iVar3 != 0) && (iVar3 = (**(code **)(*param_1 + 0x88))(param_1), iVar3 != -1)) {
        param_1[0x71] = param_1[0x71] + 1;
        *(uint *)(param_1 + 0x94) = (uint)*(ushort *)(param_1[0x1f] + 0x70);
        FUN_001c7bf0(auStack_c0 + 0x80,param_1);
      }
    }
    FUN_001c7680(param_1[1] + 0x40,param_1[0x1f]);
    return;
  }
  uVar2 = *(ushort *)(param_2 + 0x200);
  uVar1 = *(uint *)(param_1[1] + 8);
  if (*PTR_DAT_04bcb908 == '\0') {
LAB_001ccd50:
    uVar4 = *(ulong *)(puVar7 + (ulong)uVar1 * 0x2a8 + 0xc0);
  }
  else {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar5 == 0) goto LAB_001ccd50;
    uVar4 = *(ulong *)(*(long *)(puVar7 + (ulong)uVar1 * 0x2a8 + 0x10) + (ulong)*puVar5 * 0x148 +
                      0xa8);
  }
  if (uVar2 < uVar4) {
    uVar4 = *(ulong *)(*(long *)(param_2 + 0x1f0) + 0x18);
    if (((uVar4 == 0) || (*param_3 <= uVar4)) &&
       ((lVar6 = *(long *)(*(long *)(param_2 + 0x1f0) + 0x28), *(char *)(lVar6 + 0x50) == '\0' ||
        (*param_3 <= *(ulong *)(lVar6 + 0x58))))) {
      FUN_001c6660(param_1,param_2);
      return;
    }
  }
  uVar2 = *(ushort *)(param_2 + 0x60) & 0xf;
  if (uVar2 < 2) {
    iVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
    if (iVar3 != 1) goto LAB_001ccdf8;
  }
  else if ((uVar2 != 3) || (iVar3 = (**(code **)(*param_1 + 0xa8))(param_1), iVar3 != 3))
  goto LAB_001ccdf8;
  (**(code **)(*param_1 + 0xb0))(param_1,0);
LAB_001ccdf8:
  uVar4 = *(ulong *)(*(long *)(param_2 + 0x1f0) + 0x18);
  if (((uVar4 != 0) && (uVar4 < *param_3)) ||
     ((lVar6 = *(long *)(*(long *)(param_2 + 0x1f0) + 0x28), *(char *)(lVar6 + 0x50) != '\0' &&
      (*(ulong *)(lVar6 + 0x58) < *param_3)))) {
    param_1[0x72] = param_1[0x72] + 1;
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  uVar4 = (**(code **)(*param_1 + 0x50))(param_1);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x001cce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x110))(param_1,7,0);
    return;
  }
  return;
}

