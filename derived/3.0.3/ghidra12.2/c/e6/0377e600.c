
/* WARNING: Removing unreachable block (ram,0x0377e744) */

undefined8 FUN_0377e600(uint *param_1,uint *param_2,uint param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ushort *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_70;
  char *pcStack_68;
  undefined *local_60;
  undefined2 local_58;
  
  lVar10 = *(long *)PTR_DAT_04bb27f8;
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0x14) == 0)) {
    return 0;
  }
  puVar6 = *(ushort **)PTR_DAT_04bc3a48;
  if (puVar6 == (ushort *)0x0) {
    if (*(int *)(lVar10 + 0x10) != 1) {
      return 0;
    }
LAB_0377e6fc:
    local_60 = PTR_DAT_04bb7648 + 0x10;
    puVar1 = (undefined2 *)(lVar10 + 0x2c);
    if ((*(ushort *)(lVar10 + 0x28) & 0x40) != 0) {
      puVar1 = (undefined2 *)(lVar10 + 0x2a);
    }
    local_58 = *puVar1;
  }
  else {
    if ((*puVar6 & 1) != 0) {
      return 0;
    }
    if (*(int *)(lVar10 + 0x10) != 1) {
      return 0;
    }
    local_60 = PTR_DAT_04bb7648 + 0x10;
    if ((((*puVar6 & 1) == 0) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
       (lVar9 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar9 == 0)) goto LAB_0377e6fc;
    if ((*(long **)(lVar9 + 0x60) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar9 + 0x60), puVar4 == (undefined8 *)0x0)) {
      local_58 = *(undefined2 *)(*(long *)(lVar9 + 0x48) + *(long *)(lVar9 + 0x40) + 2);
    }
    else {
      uVar5 = (**(code **)*puVar4)();
      local_58 = *(undefined2 *)(*(long *)(lVar9 + 0x48) + *(long *)(lVar9 + 0x40) + 2);
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar9 + 0x60) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar9 + 0x60) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
  }
  lVar9 = *(long *)PTR_DAT_04bb46b0;
  if (lVar9 == 0) {
LAB_0377e828:
    local_70 = (undefined *)
               (CONCAT44(local_70._4_4_,(uint)*(ushort *)(lVar10 + 0xc0)) & 0xffffffff0000000f);
    if ((int)local_70 == 1) {
      local_70 = PTR_DAT_04bb2020 + 0x10;
      pcStack_68 = "SeqKabetasuEventReady";
      iVar3 = FUN_02758850(&local_70);
      if (iVar3 == 0) {
        *param_1 = 1;
        *param_2 = 1;
        return 1;
      }
      *param_1 = 2;
      *param_2 = 2;
      return 1;
    }
    lVar10 = FUN_0375f980(&local_60);
    if (lVar10 == 0) {
      return 0;
    }
    lVar8 = lVar10 + 0x1ae8 + (ulong)param_3 * 0x658;
    if (1 < param_3) {
      lVar8 = lVar10 + 0x1ae8;
    }
    if (*(long **)(lVar8 + 0x3a8) != (long *)0x0) {
      puVar4 = (undefined8 *)**(long **)(lVar8 + 0x3a8);
joined_r0x0377e8a8:
      if (puVar4 != (undefined8 *)0x0) {
        uVar2 = (**(code **)*puVar4)();
        uVar2 = uVar2 ^ 1;
        goto LAB_0377e8c4;
      }
    }
  }
  else {
    local_70 = (undefined *)CONCAT44(local_70._4_4_,1);
    if ((((*(byte *)(lVar9 + 0x50d) ^ 0xff) & 6) != 0) ||
       (lVar9 = (**(code **)(**(long **)(*(long *)(lVar9 + 0x10) + 0x188) + 0x38))(), lVar9 == 0))
    goto LAB_0377e828;
    if ((*(long **)(lVar9 + 0x36620) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar9 + 0x36620), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    uVar5 = FUN_029066e0(*(long *)(lVar9 + 0x36608) + *(long *)(lVar9 + 0x36600),&local_60);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar9 + 0x36620) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar9 + 0x36620) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
    if ((uVar5 & 1) == 0) goto LAB_0377e828;
    lVar8 = lVar9 + 0x369e8 + (ulong)param_3 * 0x658;
    if (1 < param_3) {
      lVar8 = lVar9 + 0x369e8;
    }
    if (*(long **)(lVar8 + 0x3a8) != (long *)0x0) {
      puVar4 = (undefined8 *)**(long **)(lVar8 + 0x3a8);
      goto joined_r0x0377e8a8;
    }
  }
  uVar2 = 1;
LAB_0377e8c4:
  uVar7 = (uint)*(byte *)(*(long *)(lVar8 + 0x390) + *(long *)(lVar8 + 0x388));
  if (2 < uVar7) {
    uVar7 = 3;
  }
  *param_1 = uVar7;
  uVar7 = (uint)*(byte *)(*(long *)(lVar8 + 0x390) + *(long *)(lVar8 + 0x388) + 1);
  if (2 < uVar7) {
    uVar7 = 3;
  }
  *param_2 = uVar7;
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar8 + 0x3a8) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x3a8) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return 1;
}

