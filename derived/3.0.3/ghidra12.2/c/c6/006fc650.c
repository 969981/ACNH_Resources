
void FUN_006fc650(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_90;
  char local_88;
  char local_86;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if (*(char *)(param_2 + 0x42d) != '\0') {
    uVar6 = (**(code **)(*(long *)(param_2 + 0x418) + (ulong)*(byte *)(param_2 + 0x42c) * 8))
                      (param_2 + 0x418);
    *(undefined4 *)(param_2 + 0x420) = uVar6;
    if ((*(char *)(param_2 + 0x42d) != '\0') &&
       (*(int *)(param_2 + 0x428) <= *(int *)(param_2 + 0x420))) {
      *(undefined1 *)(param_2 + 0x42d) = 0;
      *(undefined4 *)(param_2 + 0x420) = *(undefined4 *)(param_2 + 0x424);
    }
  }
  puVar1 = (undefined8 *)(param_2 + 0x3b4);
  if (*(char *)(param_2 + 0x3b0) == '\0') {
    FUN_007021a4(&local_80,param_2);
LAB_006fc768:
    *(ulong *)(param_2 + 0x3bc) = CONCAT44(uStack_74,uStack_78);
    *puVar1 = CONCAT44(uStack_7c,local_80);
    *(ulong *)(param_2 + 0x3cc) = CONCAT44(local_64,uStack_68);
    *(undefined8 *)(param_2 + 0x3c4) = uStack_70;
    uVar3 = *(undefined8 *)(param_2 + 0x3cc);
    *(ulong *)(param_2 + 0x3dc) = CONCAT44(uStack_54,uStack_58);
    *(undefined8 *)(param_2 + 0x3d4) = local_60;
    param_1[2] = *(undefined8 *)(param_2 + 0x3c4);
    param_1[3] = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x3dc);
    param_1[4] = *(undefined8 *)(param_2 + 0x3d4);
    param_1[5] = uVar3;
    goto LAB_006fc81c;
  }
  if (*(int *)(param_2 + 0x2e4) == 0) {
    *(undefined4 *)(param_2 + 0x2e4) = *(undefined4 *)(*(long *)(param_2 + 0x48) + 0x234);
  }
  local_80 = *(undefined4 *)(*(long *)(param_2 + 0x48) + 0x230);
  FUN_0071cb58(&local_90,(undefined4 *)(param_2 + 0x2e4),&local_80,0);
  if ((((local_90 == 0) || (local_88 == '\0')) || (local_86 == '\0')) ||
     ((*(long *)(local_90 + 0x60) == 0 ||
      (lVar9 = *(long *)(*(long *)(local_90 + 0x60) + 0x1150), lVar9 == 0)))) {
LAB_006fc7d8:
    FUN_007021a4(&local_80,param_2);
    *(undefined4 *)(param_2 + 0x278) = uStack_74;
    *(ulong *)(param_2 + 0x3bc) = CONCAT44(uStack_74,uStack_78);
    *puVar1 = CONCAT44(uStack_7c,local_80);
    *(ulong *)(param_2 + 0x3cc) = CONCAT44(local_64,uStack_68);
    *(undefined8 *)(param_2 + 0x3c4) = uStack_70;
    *(undefined4 *)(param_2 + 0x27c) = local_64;
    *(undefined4 *)(param_2 + 0x280) = uStack_54;
    *(ulong *)(param_2 + 0x3dc) = CONCAT44(uStack_54,uStack_58);
    *(undefined8 *)(param_2 + 0x3d4) = local_60;
  }
  else {
    if ((*(short *)(param_2 + 0x340) == -1) || (*(short *)(param_2 + 0x342) == -1)) {
      if (*(int *)(lVar9 + 0x30) != 0) {
        lVar11 = *(long *)(lVar9 + 0x38);
        lVar10 = 0;
        lVar12 = (long)*(int *)(lVar9 + 0x30) << 3;
        do {
          plVar8 = (long *)**(undefined8 **)(lVar11 + lVar10 * 8);
          iVar7 = (**(code **)(*plVar8 + 0x38))(plVar8,param_2 + 0x2e8);
          if (iVar7 != -1) {
            uVar2 = (uint)lVar10 & 0xffff | iVar7 << 0x10;
            *(uint *)(param_2 + 0x340) = uVar2;
            if ((((uint)lVar10 & 0xffff) == 0xffff) || (0xfffeffff < uVar2)) goto LAB_006fc7d8;
            FUN_006fc344(&local_80,param_2,lVar9);
            goto LAB_006fc768;
          }
          lVar10 = lVar10 + 1;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
      *(undefined4 *)(param_2 + 0x340) = 0xffffffff;
      goto LAB_006fc7d8;
    }
    FUN_006fc344(&local_80,param_2,lVar9);
    *(ulong *)(param_2 + 0x3bc) = CONCAT44(uStack_74,uStack_78);
    *puVar1 = CONCAT44(uStack_7c,local_80);
    *(ulong *)(param_2 + 0x3cc) = CONCAT44(local_64,uStack_68);
    *(undefined8 *)(param_2 + 0x3c4) = uStack_70;
    *(ulong *)(param_2 + 0x3dc) = CONCAT44(uStack_54,uStack_58);
    *(undefined8 *)(param_2 + 0x3d4) = local_60;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x3cc);
  uVar3 = *(undefined8 *)(param_2 + 0x3d4);
  uVar5 = *(undefined8 *)(param_2 + 0x3dc);
  param_1[2] = *(undefined8 *)(param_2 + 0x3c4);
  param_1[3] = uVar4;
  param_1[4] = uVar3;
  param_1[5] = uVar5;
LAB_006fc81c:
  uVar3 = *(undefined8 *)(param_2 + 0x3bc);
  *param_1 = *puVar1;
  param_1[1] = uVar3;
  return;
}

